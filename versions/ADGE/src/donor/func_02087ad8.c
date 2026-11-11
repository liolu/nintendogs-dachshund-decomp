/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FSi_NextCommand from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/fs/fs_next_command.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;
typedef struct OSThreadQueue {
    u16 head;
    u16 tail;
} OSThreadQueue;
typedef struct FSArchive FSArchive;
typedef struct FSFile FSFile;
typedef struct FSFileID {
    FSArchive *arc;
    u32 file_id;
} FSFileID;
typedef struct FSDirPos {
    FSArchive *arc;
    u16 ownId;
    u16 index;
    u32 pos;
} FSDirPos;
typedef struct DirListingEntry {
    union {
        FSFileID fileId;
        FSDirPos dirId;
    };
    u32 isDirectory;
    u32 nameLength;
    char name[127 + 1];
} DirListingEntry;
typedef struct FSGetPathInfo {
    u8 *buffer;
    u32 bufferSize;
    u16 totalLength;
    u16 dirId;
} FSGetPathInfo;
struct FSFile {
    FSFile *prev;
    FSFile *next;
    FSArchive *arc;
    u32 flags;
    u32 command;
    u32 error;
    OSThreadQueue queue;
    union {
        struct {
            u32 id;
            u32 top;
            u32 bottom;
            u32 pos;
        };
        struct {
            FSDirPos dirPos;
            u32 parent;
        };
    };
    union {
        struct {
            u32 top;
            u32 bottom;
            u32 id;
        } openFileDirect;
        struct {
            u32 unused;
            u32 id;
        } openFileFast;
        struct {
            void *dest;
            u32 requested;
            u32 length;
        } readFile;
        struct {
            FSDirPos pos;
        } seekDir;
        struct {
            DirListingEntry *entry;
            BOOL skipName;
        } readDir;
        struct {
            FSDirPos pos;
            const char *path;
            BOOL findDirectory;
            union {
                FSFileID *file;
                FSDirPos *dir;
            } result;
        } findPath;
        FSGetPathInfo getPath;
    } arg;
};
typedef int (*ArchiveCommandHook)(FSFile *file, u32 command);
typedef int (*ArchiveByteReader)(FSArchive *arc, void *dest, u32 src, u32 len);
typedef int (*ArchiveByteWriter)(FSArchive *arc, const void *src, u32 dest, u32 len);
struct FSArchive {
    u32 name;
    FSArchive *next;
    FSArchive *prev;
    OSThreadQueue queue;
    u32 flags;
    u32 unk_14;
    FSFile *command;
    u32 base;
    u32 fat;
    u32 fatSize;
    u32 fnt;
    u32 fntSize;
    u32 fatOriginal;
    u32 fntOriginal;
    u32 unk_38;
    ArchiveByteReader read;
    ArchiveByteWriter write;
    ArchiveByteReader readTable;
    void *tableBuffer;
    u32 tableBufferSize;
};
extern void func_0208831c(FSFile *file);
extern void func_02087274(FSFile *file, int result);
extern int func_02080c28(void);
extern void func_02080c3c(int state);
extern void func_0207f5fc(OSThreadQueue *queue);
static inline BOOL FileHandle_IsBlocking(FSFile *file) {
    return (file->flags & 0x04) ? 1 : 0;
}
static inline BOOL FileHandle_CancelAsked(FSFile *file) {
    return (file->flags & 0x02) ? 1 : 0;
}
static inline u32 Archive_ReadStateVolatile(FSArchive *arc) {
    return *(volatile u32 *) &arc->flags;
}
static inline BOOL Archive_CancelAsked(FSArchive *arc) {
    return (Archive_ReadStateVolatile(arc) & 0x20) ? 1 : 0;
}
static inline BOOL Archive_PauseAsked(FSArchive *arc) {
    return (Archive_ReadStateVolatile(arc) & 0x40) ? 1 : 0;
}
static inline BOOL Archive_IsPaused(FSArchive *arc) {
    return (Archive_ReadStateVolatile(arc) & 0x8) ? 1 : 0;
}
static inline BOOL Archive_IsBusy(FSArchive *arc) {
    return (Archive_ReadStateVolatile(arc) & 0x10) ? 1 : 0;
}
FSFile *func_02087ad8(FSArchive *arc) {
    int irqState = func_02080c28();

    if (Archive_CancelAsked(arc) != 0) {
        FSFile *file;
        FSFile *next;

        arc->flags &= ~0x20;
        for (file = arc->command; file != ((void *) 0); file = next) {
            next = file->next;
            if (FileHandle_CancelAsked(file) != 0) {
                if (arc->command == file) {
                    arc->command = next;
                }
                func_02087274(file, 3);
                if (next == ((void *) 0)) {
                    next = arc->command;
                }
            }
        }
    }

    if (Archive_PauseAsked(arc) == 0 && Archive_IsPaused(arc) == 0) {
        FSFile *file = arc->command;

        if (file != ((void *) 0)) {

            BOOL starting = (Archive_IsBusy(arc) != 0) ? 0 : 1;

            if (starting) {
                arc->flags |= 0x10;
            }
            func_02080c3c(irqState);

            if (starting && (arc->tableBufferSize & (1 << 9))) {
                ((ArchiveCommandHook) arc->tableBuffer)(file, 9);
            }
            if (FileHandle_IsBlocking(file) == 0) {
                return file;
            }
            func_0207f5fc(&file->queue);
            return ((void *) 0);
        }
    }

    if (Archive_IsBusy(arc) != 0) {
        arc->flags &= ~0x10;
        if (arc->tableBufferSize & (1 << 10)) {
            FSFile idle;

            func_0208831c(&idle);
            idle.arc = arc;
            ((ArchiveCommandHook) arc->tableBuffer)(&idle, 10);
        }
    }
    if (Archive_PauseAsked(arc) != 0) {
        arc->flags &= ~0x40;
        arc->flags |= 0x8;
        func_0207f5fc((OSThreadQueue *) &arc->queue.tail);
    }
    func_02080c3c(irqState);
    return ((void *) 0);
}

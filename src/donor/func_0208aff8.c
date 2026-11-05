/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02087880 from projets/nintendogs-dachshund/src/donor/func_02087880.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
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
extern BOOL func_0208aff8(FSFile *file, u32 command);
extern void func_0208a9ec(FSFile *file, int result);
extern void func_0208baf8(FSFile *file, FSFile *head);
extern int func_0208120c(void);
extern void func_02081220(int state);
extern void func_0207fcb8(OSThreadQueue *queue);
extern BOOL func_0208b16c(FSFile *file);
extern void func_0208b1b4(FSFile *file);
static inline BOOL FileHandle_IsBlocking(FSFile *file) {
    return (file->flags & 0x04) ? 1 : 0;
}
static inline BOOL Archive_IsPaused(FSArchive *arc) {
    return (arc->flags & 0x8) ? 1 : 0;
}
static inline BOOL Archive_IsBusy(FSArchive *arc) {
    return (*(volatile u32 *) &arc->flags & 0x10) ? 1 : 0;
}
BOOL func_0208aff8(FSFile *file, u32 command) {
    FSArchive *arc = file->arc;
    u32 bit        = 1 << command;
    int irqState;

    file->command = command;
    file->error   = 2;
    file->flags |= 0x01;

    irqState = func_0208120c();
    if (arc->flags & 0x80) {
        func_0208a9ec(file, 3);
        func_02081220(irqState);
        return 0;
    }
    if (bit & 0x1fc) {
        file->flags |= 0x04;
    }

    func_0208baf8(file, (FSFile *) &arc->unk_14);

    if (Archive_IsPaused(arc) == 0 && Archive_IsBusy(arc) == 0) {
        arc->flags |= 0x10;
        func_02081220(irqState);

        if (arc->tableBufferSize & (1 << 9)) {
            ((ArchiveCommandHook) arc->tableBuffer)(file, 9);
        }
        if (FileHandle_IsBlocking(file) == 0) {
            func_0208b1b4(file);
            return 1;
        }
    } else if (FileHandle_IsBlocking(file) == 0) {
        func_02081220(irqState);
        return 1;
    } else {
        do {
            func_0207fcb8(&file->queue);
        } while (file != arc->command);
        func_02081220(irqState);
    }
    return func_0208b16c(file);
}

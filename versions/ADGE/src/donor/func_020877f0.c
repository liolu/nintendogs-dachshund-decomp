/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Archive_OnCommandFinished from https://github.com/sturmds/advance-wars-dual-strike-decomp
 * src/sdk/fs/archive_on_command_finished.c (license: CC0-1.0), reused by tools/donor_match.py */
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
extern void func_02087274(FSFile *file, int result);
extern int func_02080c28(void);
extern void func_02080c3c(int state);
extern FSFile *func_02087ad8(FSArchive *arc);
extern void func_02087a3c(FSFile *file);
extern void func_0207f5fc(OSThreadQueue *queue);
static inline BOOL Archive_AwaitsDriver(FSArchive *arc) {
    return (arc->flags & 0x100) ? 1 : 0;
}
void func_020877f0(FSArchive *arc, int result) {

    if (Archive_AwaitsDriver(arc) != 0) {
        FSFile *running = arc->command;
        FSFile *next;

        arc->flags &= ~0x100;
        func_02087274(running, result);
        next = func_02087ad8(arc);
        if (next != ((void *) 0)) {
            func_02087a3c(next);
        }
    } else {
        FSFile *file = arc->command;
        int irqState = func_02080c28();

        file->error = result;
        arc->flags &= ~0x200;
        func_0207f5fc(&arc->queue);
        func_02080c3c(irqState);
    }
}

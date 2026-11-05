/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02054efc from projets/children-of-mana/src/auto/func_02054efc.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
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
typedef struct OverlayTableRow {
    u32 id;
    u8 *ram_address;
    u32 ram_size;
    u32 bss_size;
    void *sinit_init;
    void *sinit_init_end;
    u32 file_id;
    u32 compressed : 24;
    u32 flag : 8;
} OverlayTableRow;
typedef struct FSOverlayInfo {
    OverlayTableRow header;
    u32 target;
    u32 romTop;
    u32 romSize;
} FSOverlayInfo;
extern FSFileID func_0208c4f8(const FSOverlayInfo *info);
extern void func_0208ba94(FSFile *file);
extern BOOL func_0208c234(const FSOverlayInfo *info);
extern s32 func_0208b5e8(FSFile *file, void *dest, s32 size);
extern BOOL func_0208b6fc(FSFile *file);
extern BOOL func_0208b794(FSFile *file, FSFileID id);
extern u32 func_0208c564(const FSOverlayInfo *info);
extern void func_0208c520(const FSOverlayInfo *info);
BOOL func_0208c234(const FSOverlayInfo *info) {
    FSFileID id;
    FSFile file;
    u32 size;

    func_0208ba94(&file);
    id = func_0208c4f8(info);
    if (!func_0208b794(&file, id)) {
        return 0;
    }
    size = func_0208c564(info);
    func_0208c520(info);
    if (func_0208b5e8(&file, info->header.ram_address, size) != size) {
        func_0208b6fc(&file);
        return 0;
    }
    func_0208b6fc(&file);
    return 1;
}

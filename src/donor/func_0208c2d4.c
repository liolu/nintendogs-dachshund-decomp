/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02088b24 from projets/nintendogs-dachshund/src/donor/func_02088b24.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;
typedef struct OSThreadQueue {
    u16 head;
    u16 tail;
} OSThreadQueue;
typedef struct RomRegion {
    u32 offset;
    u32 length;
} RomRegion;
typedef struct RomHeader {
    u8 pad_00[0x20];
    u32 arm9RomOffset;
    u32 arm9EntryAddress;
    u32 arm9RamAddress;
    u32 arm9Size;
    u32 arm7RomOffset;
    u32 arm7EntryAddress;
    u32 arm7RamAddress;
    u32 arm7Size;
    RomRegion fnt;
    RomRegion fat;
    RomRegion arm9Overlays;
    RomRegion arm7Overlays;
    u32 cardControl;
    u8 pad_64[0x1c];
    u32 romSize;
    u8 pad_84[0xdc];
} RomHeader;
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
typedef enum MIProcessor {
    MI_PROCESSOR_ARM9,
    MI_PROCESSOR_ARM7
} MIProcessor;
typedef struct FSOverlayInfo {
    OverlayTableRow header;
    u32 target;
    u32 romTop;
    u32 romSize;
} FSOverlayInfo;
extern FSArchive data_021536ac;
extern FSFileID func_0208c4f8(const FSOverlayInfo *info);
extern void func_0208ba94(FSFile *file);
extern BOOL func_0208b6fc(FSFile *file);
extern RomRegion data_0215369c;
extern RomRegion data_021536a4;
extern void func_0206e1b8(const void *src, void *dst, u32 size);
extern BOOL func_0208b794(FSFile *file, FSFileID id);
extern BOOL func_0208c3e8(FSOverlayInfo *info, MIProcessor target, u32 id, FSArchive *arc, u32 arm9Offset, u32 arm9Length,
                          u32 arm7Offset, u32 arm7Length);
BOOL func_0208c2d4(FSOverlayInfo *info, MIProcessor target, u32 id) {
    RomRegion *table = target == MI_PROCESSOR_ARM9 ? &data_0215369c : &data_021536a4;

    if (table->offset != 0) {
        u32 pos = id * sizeof(OverlayTableRow);
        if (pos >= table->length) {
            return 0;
        }
        func_0206e1b8((const void *) (table->offset + pos), info, sizeof(OverlayTableRow));
        info->target = target;
        {
            FSFile file;
            func_0208ba94(&file);
            if (!func_0208b794(&file, func_0208c4f8(info))) {
                return 0;
            }
            info->romTop  = file.top;
            info->romSize = file.bottom - file.top;
            func_0208b6fc(&file);
        }
        return 1;
    }
    {
        RomRegion *arm9 = &((RomHeader *) 0x027ffe00)->arm9Overlays;
        RomRegion *arm7 = &((RomHeader *) 0x027ffe00)->arm7Overlays;
        return func_0208c3e8(info, target, id, &data_021536ac, arm9->offset, arm9->length, arm7->offset, arm7->length);
    }
}

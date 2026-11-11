/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SoundArc_GetPlayerGroupInfo from https://github.com/sturmds/advance-wars-dual-strike-decomp
 * src/game/main/sound/sound_arc_get_player_group_info.c (license: CC0-1.0), reused by tools/donor_match.py */
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
typedef struct SoundArcSeqInfoTable {
    u32 count;
    u32 offset[1];
} SoundArcSeqInfoTable;
typedef struct SoundArcInfo {
    char signature[4];
    u32 blockSize;
    u32 seqOffset;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
    u32 unk_1c;
    u32 strmPlayerOffset;
    u32 strmInfoOffset;
} SoundArcInfo;
typedef struct SoundArcRange {
    u32 unk_00;
    u32 unk_04;
} SoundArcRange;
typedef struct SoundArcFileEntry {
    u32 offset;
    u32 size;
    void *loaded;
    u32 unk_0c;
} SoundArcFileEntry;
typedef struct SoundArcFileTable {
    u32 unk_00;
    u32 unk_04;
    u32 count;
    SoundArcFileEntry entries[1];
} SoundArcFileTable;
typedef struct SoundArc {
    u8 pad_00[0x10];
    u32 symbolOffset;
    u32 symbolSize;
    u32 infoOffset;
    u32 infoSize;
    u32 fatOffset;
    u32 fatSize;
    u8 pad_28[0x30 - 0x28];
    int opened;
    FSFile file;
    SoundArcRange range;
    SoundArcFileTable *files;
    void *symbols;
    SoundArcInfo *info;
} SoundArc;
extern SoundArc *data_0215087c;
static inline const void *InfoItem(const SoundArcInfo *info, u32 offset) {
    if (offset == 0) {
        return ((void *) 0);
    }
    return (const u8 *) info + offset;
}
static inline const void *ArcInfoItem(const SoundArc *arc, u32 offset) {
    const u8 *info = (const u8 *) arc->info;

    if (offset == 0) {
        return ((void *) 0);
    }
    return info + offset;
}
const void *func_02071c1c(int index) {
    const SoundArcSeqInfoTable *table;

    table = InfoItem(data_0215087c->info, data_0215087c->info->unk_18);
    if (table == ((void *) 0)) {
        return ((void *) 0);
    }
    if (index < 0) {
        return ((void *) 0);
    }
    if (index >= table->count) {
        return ((void *) 0);
    }
    return ArcInfoItem(data_0215087c, table->offset[index]);
}

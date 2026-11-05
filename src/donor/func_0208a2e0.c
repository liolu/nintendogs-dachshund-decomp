/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020533bc from projets/children-of-mana/src/auto/func_020533bc.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef u16 OsThreadQueue;
typedef struct FsFile FsFile;
typedef struct FsArchive FsArchive;
typedef struct FsLink {
    struct FsLink *previous;
    struct FsLink *next;
} FsLink;
typedef struct FsFileId {
    FsArchive *archive;
    u32 id;
} FsFileId;
typedef struct FsDirectoryPosition {
    FsArchive *archive;
    u16 directory;
    u16 index;
    u32 position;
} FsDirectoryPosition;
typedef struct FsGetPathArgs {
    char *buffer;
    u32 capacity;
    u16 length;
    u16 directory;
} FsGetPathArgs;
typedef struct FsDirectoryEntry {
    union {
        FsDirectoryPosition directory;
        FsFileId file;
    } entry;
    int is_directory;
    u32 name_length;
    char name[128];
} FsDirectoryEntry;
typedef int (*FsArchiveIo)(FsArchive *archive, void *buffer, u32 offset, u32 size);
typedef int (*FsArchiveProc)(FsFile *file, int command);
struct FsArchive {
    u32 name;
    FsArchive *next;
    FsArchive *previous;
    OsThreadQueue sync_queue;
    OsThreadQueue suspend_queue;
    volatile u32 flags;
    FsLink commands;
    u32 base;
    u32 fat;
    u32 fat_size;
    u32 fnt;
    u32 fnt_size;
    u32 original_fat;
    u32 original_fnt;
    void *table_buffer;
    FsArchiveIo read;
    FsArchiveIo write;
    FsArchiveIo table_read;
    FsArchiveProc procedure;
    u32 procedure_mask;
};
struct FsFile {
    FsLink link;
    FsArchive *archive;
    volatile u32 flags;
    int command;
    volatile int result;
    OsThreadQueue queue;
    u16 padding1a;
    union {
        struct {
            u32 id;
            s32 top;
            s32 bottom;
            s32 position;
        } file;
        struct {
            FsDirectoryPosition position;
            u32 parent;
        } directory;
    } property;
    union {
        u32 words[6];
        FsFileId file_id;
        FsDirectoryPosition directory;
        struct {
            void *buffer;
            u32 size;
            u32 length;
        } io;
        struct {
            u32 top;
            u32 bottom;
            u32 id;
        } direct;
        struct {
            FsDirectoryEntry *entry;
            int skip_name;
        } read_directory;
        FsGetPathArgs get_path;
        struct {
            FsDirectoryPosition directory;
            const char *path;
            int find_directory;
            void *output;
        } path;
    } argument;
};
extern int func_0208a85c(FsFile *file, int command);
extern int func_0208a2e0(FsFile *file);
extern int func_0208a778(FsFile *file, u32 directory);
extern int func_0208a714(const u8 *left, const u8 *right, int length);
extern int func_0208a85c(FsFile *file, int command);
extern int func_0208a778(FsFile *file, u32 directory);
extern int func_0208a714(const u8 *left, const u8 *right, int length);
static inline int FSi_IsPathCharacter(u32 character) {
    int valid = 0;
    if (character && character != '/' && character != '\\') {
        valid = 1;
    }
    return valid;
}
int func_0208a2e0(FsFile *file) {
    FsDirectoryEntry entry;
    int find_directory = file->argument.path.find_directory;
    const u8 *path     = (const u8 *) file->argument.path.path;
    func_0208a85c(file, 2);
    while (*path) {
        int directory;
        int length;
        for (length = 0; FSi_IsPathCharacter(directory = path[length]); ++length) {
        }
        if (directory || find_directory) {
            directory = 1;
        }
        if (!length) {
            return 1;
        }
        if (*path == '.') {
            if (length == 1) {
                ++path;
                goto advance;
            }
            if ((length == 2) & (path[1] == '.')) {
                if (file->property.directory.position.directory) {
                    func_0208a778(file, file->property.directory.parent);
                }
                path += 2;
                goto advance;
            }
        }
        if (length > 127) {
            return 1;
        }
        file->argument.read_directory.entry     = &entry;
        file->argument.read_directory.skip_name = 0;
        do {
            if (func_0208a85c(file, 3)) {
                return 1;
            }
        } while (directory != entry.is_directory || length != entry.name_length ||
                 func_0208a714(path, (const u8 *) entry.name, length));
        if (directory) {
            file->argument.directory = entry.entry.directory;
            path += length;
            func_0208a85c(file, 2);
        } else {
            if (find_directory) {
                return 1;
            }
            *(FsFileId *) file->argument.path.output = entry.entry.file;
            return 0;
        }
    advance:
        path += *path != 0;
    }
    if (!find_directory) {
        return 1;
    }
    *(FsDirectoryPosition *) file->argument.path.output = file->property.directory.position;
    return 0;
}

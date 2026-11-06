/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02052ffc from projets/children-of-mana/src/auto/func_02052ffc.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
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
static inline int FSi_TestFileFlag(const FsFile *file, u32 mask) {
    if (file->flags & mask) {
        return 1;
    }
    return 0;
}
extern void func_0208ba94(FsFile *file);
extern int func_0208a85c(FsFile *file, int command);
extern int func_02089f20(FsFile *file);
extern int func_0208a778(FsFile *file, u32 directory);
extern void func_0206e1b8(const void *source, void *destination, u32 size);
extern int func_0208a85c(FsFile *file, int command);
extern int func_0208a778(FsFile *file, u32 directory);
extern const char data_0213b928[];
int func_02089f20(FsFile *file) {
    FsArchive *archive     = file->archive;
    FsGetPathArgs *request = &file->argument.get_path;
    FsDirectoryEntry entry;
    FsFile search;
    u32 directory;
    u32 file_id;
    char *buffer;
    u32 length;
    func_0208ba94(&search);
    search.archive = file->archive;
    if (FSi_TestFileFlag(file, 0x20)) {
        directory = file->property.directory.position.directory;
        file_id   = 0x10000;
    } else {
        file_id = file->property.file.id;
        if (request->length) {
            directory = request->directory;
        } else {
            u32 index = 0;
            u32 count = 0;
            directory = 0x10000;
            do {
                func_0208a778(&search, index);
                if (!index) {
                    count = search.property.directory.parent;
                }
                search.argument.read_directory.entry     = &entry;
                search.argument.read_directory.skip_name = 1;
                if (!func_0208a85c(&search, 3)) {
                    do {
                        if (!entry.is_directory && entry.entry.file.id == file_id) {
                            directory = search.property.directory.position.directory;
                            break;
                        }
                    } while (!func_0208a85c(&search, 3));
                }
                if (directory != 0x10000) {
                    break;
                }
                ++index;
            } while (index < count);
        }
    }
    if (directory == 0x10000) {
        request->length = 0;
        return 1;
    }
    if (!request->length) {
        u32 current;
        u32 count = 0;
        if (archive->name <= 0xff) {
            count += 1;
        } else if (archive->name <= 0xff00) {
            count += 2;
        } else {
            count += 3;
        }
        count += 2;
        if (file_id != 0x10000) {
            count += entry.name_length;
        }
        current = directory;
        if (directory) {
            func_0208a778(&search, directory);
            do {
                func_0208a778(&search, search.property.directory.parent);
                search.argument.read_directory.entry     = &entry;
                search.argument.read_directory.skip_name = 1;
                if (!func_0208a85c(&search, 3)) {
                    do {
                        if (entry.is_directory && entry.entry.directory.directory == current) {
                            count += entry.name_length + 1;
                            break;
                        }
                    } while (!func_0208a85c(&search, 3));
                }
                current = search.property.directory.position.directory;
            } while (current);
        }
        request->length    = count + 1;
        request->directory = directory;
    }
    buffer = request->buffer;
    if (!buffer) {
        return 0;
    }
    length = request->length;
    if (request->capacity < length) {
        return 1;
    }
    {
        u32 offset = 0;
        u32 name_length;
        if (archive->name <= 0xff) {
            name_length = 1;
        } else if (archive->name <= 0xff00) {
            name_length = 2;
        } else {
            name_length = 3;
        }
        func_0206e1b8(&archive->name, buffer, name_length);
        offset += name_length;
        func_0206e1b8(data_0213b928, buffer + offset, 2);
    }
    func_0208a778(&search, directory);
    if (file_id != 0x10000) {
        u32 name_length;
        search.argument.read_directory.entry     = &entry;
        search.argument.read_directory.skip_name = 0;
        if (!func_0208a85c(&search, 3)) {
            do {
                if (!entry.is_directory && entry.entry.file.id == file_id) {
                    break;
                }
            } while (!func_0208a85c(&search, 3));
        }
        name_length = entry.name_length + 1;
        func_0206e1b8(entry.name, buffer + length - name_length, name_length);
        length -= name_length;
    } else {
        (buffer + length)[-1] = 0;
        --length;
    }
    if (directory) {
        do {
            func_0208a778(&search, search.property.directory.parent);
            search.argument.read_directory.entry     = &entry;
            search.argument.read_directory.skip_name = 0;
            (buffer + length)[-1]                    = '/';
            --length;
            if (!func_0208a85c(&search, 3)) {
                do {
                    if (entry.is_directory && entry.entry.directory.directory == directory) {
                        u32 name_length = entry.name_length;
                        func_0206e1b8(entry.name, buffer + length - name_length, name_length);
                        length -= name_length;
                        break;
                    }
                } while (!func_0208a85c(&search, 3));
            }
            directory = search.property.directory.position.directory;
        } while (directory);
    }
    return 0;
}

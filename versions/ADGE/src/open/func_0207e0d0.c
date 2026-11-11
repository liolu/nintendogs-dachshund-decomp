#include "engine.h"
/* This module's FS_File is 4 bytes smaller than engine.h's (no response union member). */
typedef struct {
    FS_FilePosition position;
    const char *path;
    s32 isDirectory;
} FS_FileArgs_NormalizePathLegacy;

typedef struct {
    FS_LinkedFile link;
    FS_Record *record;
    u32 status;
    u32 unk_10;
    FS_CommandResult result;
    OSThreadQueue unk_18;
    u32 unk_20;
    u32 startPosition;
    u32 endPosition;
    u32 currentPosition;
    union {
        FS_FileArgs_NormalizePathLegacy normalize;
        FS_FileArgs_ProcessRead read;
        FS_FileArgs_OpenImmediate openImmediate;
        FS_FileArgs_OpenFromID openFromId;
    } methodArgs;
} FS_FileLegacy;

extern void func_0208831c(FS_FileLegacy *file);
extern s32 func_02087fcc(FS_FileLegacy *file, const char *path);
extern s32 func_02087f84(FS_FileLegacy *file);
s32 func_0207e0d0(const char *arg0) {
    FS_FileLegacy file;
    s32 result;

    result = 0;
    func_0208831c(&file);
    if (func_02087fcc(&file, arg0) != 0) {
        result = file.record->methodFlags + file.unk_20;
        func_02087f84(&file);
    }
    return result;
}

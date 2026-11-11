/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* __flush_buffer from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/msl/flush_buffer.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct FileModes {
    u32 openMode : 2;
    u32 ioMode : 3;
    u32 bufferMode : 2;
    u32 fileKind : 3;
    u32 orientation : 2;
    u32 binaryIo : 1;
} FileModes;
typedef struct FileState {
    u32 ioState : 3;
} FileState;
typedef int (*FileIoProc)(u32 handle, u8 *buffer, u32 *count, void *refCon);
typedef struct FILE {
    u32 handle;
    FileModes mode;
    FileState state;
    u8 unk_0C;
    u8 error;
    u8 unk_0E[10];
    u32 position;
    u8 *buffer;
    u32 bufferSize;
    u8 *bufferPtr;
    u32 bufferLen;
    u32 bufferAlignment;
    u32 unk_30;
    u32 bufferPos;
    void *positionProc;
    FileIoProc readProc;
    FileIoProc writeProc;
    void *closeProc;
    void *refCon;
} FILE;
extern int func_0205e884(FILE *file, u32 *bytesFlushed);
extern void func_0205e920(FILE *file);
extern void func_0205e954(u8 *buffer, u32 *length);
int func_0205e884(FILE *file, u32 *bytesFlushed) {
    u32 pending = file->bufferPtr - file->buffer;
    int error;

    if (pending != 0) {
        file->bufferLen = pending;
        if (!file->mode.binaryIo) {
            func_0205e954(file->buffer, &file->bufferLen);
        }
        error = file->writeProc(file->handle, file->buffer, &file->bufferLen, file->refCon);
        if (bytesFlushed != ((void *) 0)) {
            *bytesFlushed = file->bufferLen;
        }
        if (error != 0) {
            return error;
        }
        file->position += file->bufferLen;
    }
    func_0205e920(file);
    return 0;
}

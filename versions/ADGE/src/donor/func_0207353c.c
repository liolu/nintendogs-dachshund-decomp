/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SoundStream_Release from https://github.com/sturmds/advance-wars-dual-strike-decomp
 * src/game/main/sound/sound_stream_release.c (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef int BOOL;
typedef struct ListLink {
    void *prev;
    void *next;
} ListLink;
typedef struct LinkList {
    void *head;
    void *tail;
    u16 count;
    u16 linkOffset;
} LinkList;
extern void *func_0207d038(LinkList *list, void *object);
extern void func_0207d050(LinkList *list, void *object);
typedef struct SoundFader {
    s32 start;
    s32 target;
    s32 elapsed;
    s32 frames;
} SoundFader;
typedef struct SoundSleepHook {
    void (*callback)(void *arg);
    void *arg;
    struct SoundSleepHook *next;
} SoundSleepHook;
typedef struct SoundStrmFlags {
    s32 active : 1;
    s32 running : 1;
} SoundStrmFlags;
typedef void (*SoundStrmCallback)(int status, int channelCount, void *blocks[], u32 blockSize, int format, void *arg);
typedef struct SoundStrm {
    ListLink link;
    SoundSleepHook preSleep;
    SoundSleepHook postSleep;
    int format;
    SoundStrmFlags flags;
    u32 bufferSize;
    int blockCount;
    SoundStrmCallback callback;
    void *callbackArg;
    int blockIndex;
    int volume;
    int alarm;
    u32 channelMask;
    int channelCount;
    u8 channels[16];
} SoundStrm;
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
extern BOOL func_02087f84(FSFile *file);
typedef struct SoundStreamFlags {
    s32 fileOpen : 1;
    s32 playing : 1;
    s32 startPending : 1;
    s32 stopping : 1;
    s32 skipToPosition : 1;
    s32 dataEnded : 1;
    s32 silenceExtraChannels : 1;
} SoundStreamFlags;
typedef struct AdpcmState {
    s16 sample;
    u8 stepIndex;
    u8 pad_03;
} AdpcmState;
typedef struct SoundNextStreamParam {
    u32 slotNo;
    int strmNo;
} SoundNextStreamParam;
typedef struct SoundNextStreamInfo {
    int strmNo;
    u32 offsetMs;
} SoundNextStreamInfo;
typedef BOOL (*SoundNextStreamCallback)(int status, const SoundNextStreamParam *param, SoundNextStreamInfo *info, void *arg);
typedef struct SoundStream {
    SoundStrm strm;
    FSFile file;
    u32 fileOffset;
    u8 head[0x18];
    u8 format;
    u8 loop;
    u8 channelCount;
    u8 pad_bf;
    u16 sampleRate;
    u16 timer;
    u32 loopStart;
    u8 pad_c8[4];
    u32 dataOffset;
    u32 blockCount;
    u32 blockSize;
    u32 blockSamples;
    u32 lastBlockSize;
    u32 lastBlockSamples;
    SoundFader volumeFader;
    AdpcmState adpcm[2];
    u8 pad_fc[0x10];
    SoundStreamFlags flags;
    int unk_110;
    int unk_114;
    int pendingRequests;
    int channelLockCount;
    u8 slotChannelCount;
    u8 pad_121;
    u8 slotChannels[6];
    void *buffer;
    u32 bufferSize;
    SoundStrmCallback callback;
    void *callbackArg;
    SoundNextStreamCallback nextStreamCallback;
    void *nextStreamArg;
    int strmNo;
    u32 slotNo;
    void **handle;
    int priority;
    int volumeIndex;
    int appliedVolume;
    u32 samplePos;
} SoundStream;
typedef struct SoundStreamRequest {
    ListLink link;
    SoundStream *stream;
    int status;
    int channelCount;
    void *blocks[6];
    u32 blockSize;
} SoundStreamRequest;
extern LinkList data_021508c8;
extern int func_02080c28(void);
extern void func_02080c3c(int irqState);
extern void func_020734f4(SoundStream *stream);
extern void func_02073638(SoundStream *stream);
extern void func_020734bc(SoundStreamRequest *request);
void func_0207353c(SoundStream *stream) {
    int irqState;
    SoundStreamRequest *request;
    SoundStreamRequest *next;

    if (!stream->flags.fileOpen) {
        return;
    }
    func_020734f4(stream);
    func_02087f84(&stream->file);
    irqState = func_02080c28();
    for (request = func_0207d038(&data_021508c8, ((void *) 0)); request != ((void *) 0); request = next) {
        next = func_0207d038(&data_021508c8, request);
        if (request->stream == stream) {
            func_0207d050(&data_021508c8, request);
            func_020734bc(request);
        }
    }
    func_02080c3c(irqState);
    func_02073638(stream);
}

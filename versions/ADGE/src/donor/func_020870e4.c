/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FSi_TranslateCommand from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/fs/fs_translate_command.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed long long s64;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef int BOOL;
typedef s32 fx32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef u32 OSIrqMask;
typedef u32 OSIntrMode;
typedef struct OSLockWord {
    volatile u32 lockFlag;
    u16 ownerID;
    u16 extension;
} OSLockWord;
typedef void (*OSIrqFunction)(void);
typedef struct IrqSlotEntry {
    void (*handler)(void *);
    BOOL keepEnabled;
    void *arg;
} IrqSlotEntry;
typedef struct {
    BOOL keepEnabled;
    u8 pad_04[8];
} IrqSlotKeepAlias;
typedef struct {
    void *arg;
    u8 pad_04[8];
} IrqSlotArgAlias;
typedef struct OSThread OSThread;
typedef struct OSMutex OSMutex;
typedef struct OSThreadQueue {
    u16 head;
    u16 tail;
} OSThreadQueue;
enum {
    OS_THREAD_STATE_WAITING    = 0,
    OS_THREAD_STATE_READY      = 1,
    OS_THREAD_STATE_TERMINATED = 2
};
typedef struct OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
} OSMutexQueue;
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutex *prev;
    OSMutex *next;
};
typedef void *OSMessage;
enum {
    OS_MESSAGE_NOBLOCK = 0,
    OS_MESSAGE_BLOCK   = 1
};
typedef struct OSMessageQueue {
    u16 queueSend;
    u16 queueReceive;
    OSMessage *msgArray;
    s32 msgCount;
    s32 firstIndex;
    s32 usedCount;
} OSMessageQueue;
typedef void (*ThreadSwapHook)(OSThread *from, OSThread *to);
typedef struct OSThreadInfo {
    u16 isNeedRescheduling;
    u16 maxEntry;
    u16 inIrq;
    u16 pad_6;
    OSThread *current;
    OSThread *list;
    ThreadSwapHook switchCallback;
    OSThread *threads[16];
} OSThreadInfo;
typedef enum OSArenaId {
    OS_ARENA_MAIN         = 0,
    OS_ARENA_MAIN_SUBPRIV = 1,
    OS_ARENA_MAINEX       = 2,
    OS_ARENA_ITCM         = 3,
    OS_ARENA_DTCM         = 4,
    OS_ARENA_SHARED       = 5,
    OS_ARENA_WRAM_MAIN    = 6,
    OS_ARENA_WRAM_SUB     = 7,
    OS_ARENA_WRAM_SUBPRIV = 8
} OSArenaId;
typedef struct OSArenaInfo {
    void *lo[9];
    void *hi[9];
} OSArenaInfo;
typedef struct HeapBlockHeader HeapBlockHeader;
struct HeapBlockHeader {
    HeapBlockHeader *prev;
    HeapBlockHeader *next;
    s32 size;
};
typedef struct HeapRecord {
    s32 size;
    HeapBlockHeader *free;
    HeapBlockHeader *allocated;
} HeapRecord;
typedef struct OSHeapInfo {
    s32 currentHeap;
    s32 numHeaps;
    void *arenaStart;
    void *arenaEnd;
    HeapRecord *heapArray;
} OSHeapInfo;
typedef u64 OSTick;
typedef struct OSAlarm OSAlarm;
typedef void (*OSAlarmHandler)(void *arg);
struct OSAlarm {
    OSAlarmHandler handler;
    void *arg;
    u32 tag;
    OSTick fire;
    OSAlarm *prev;
    OSAlarm *next;
    OSTick period;
    OSTick start;
};
typedef struct AlarmList {
    OSAlarm *head;
    OSAlarm *tail;
} AlarmList;
typedef void (*OSVAlarmHandler)(void *arg);
typedef struct OSVAlarm OSVAlarm;
struct OSVAlarm {
    OSVAlarmHandler handler;
    void *arg;
    u32 tag;
    u32 frame;
    s16 fire;
    s16 delay;
    OSVAlarm *prev;
    OSVAlarm *next;
    BOOL period;
    BOOL finish;
    BOOL canceled;
};
typedef struct OSVAlarmQueue {
    OSVAlarm *head;
    OSVAlarm *tail;
} OSVAlarmQueue;
enum {
    LINE_ALARM_EARLY    = 0,
    LINE_ALARM_ON_TIME  = 1,
    LINE_ALARM_TOO_LATE = 2
};
typedef struct OSOwnerInfo {
    u8 favoriteColor;
    u8 birthMonth;
    u8 birthDay;
    u8 unk_03;
    u16 nickname[10];
    u16 nicknameLength;
    u16 comment[26];
    u16 commentLength;
} OSOwnerInfo;
typedef struct FirmwareUserSettings {
    u8 unk_00[2];
    u8 birthMonth : 4;
    u8 : 4;
    u8 birthDay;
    u8 unk_04;
    u8 pad_05;
    u16 nickname[10];
    u8 nicknameLength;
    u8 pad_1b;
    u16 comment[26];
    u8 commentLength;
    u8 pad_51[0x7];

    u16 tpRawX1;
    u16 tpRawY1;
    u8 tpDotX1;
    u8 tpDotY1;
    u16 tpRawX2;
    u16 tpRawY2;
    u8 tpDotX2;
    u8 tpDotY2;
    u16 favoriteColor : 3;
    u16 : 13;
} FirmwareUserSettings;
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
typedef int (*ArchiveCommandHook)(FSFile *file, u32 command);
static inline BOOL FS_IsBusy(const FSFile *file) {
    return ((file->flags & 0x01) ? 1 : 0) != 0;
}
static inline BOOL FileHandle_HasWaiter(const FSFile *file) {
    return ((file->flags & 0x04) ? 1 : 0) != 0;
}
typedef struct ArchiveTableCursor {
    FSArchive *arc;
    u32 pos;
} ArchiveTableCursor;
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
typedef struct OverlayHmacBytes {
    u8 bytes[20];
} OverlayHmacBytes;
extern FSArchive gRomFileArchive;
extern FSFileID FS_GetOverlayFileID(const FSOverlayInfo *info);
extern FSArchive *FS_FindArchive(const char *name, int length);
extern u32 Archive_FoldNameIntoWord(const char *name, int length);
extern void FS_Init(u32 dmaNo);
extern void FS_InitFile(FSFile *file);
extern BOOL FS_LoadOverlayImage(const FSOverlayInfo *info);
extern BOOL FS_LoadOverlay(int target, u32 overlayId);
extern BOOL FS_UnloadOverlay(int target, u32 overlayId);
extern BOOL FS_OpenFile(FSFile *file, const char *path);
extern s32 FS_ReadFile(FSFile *file, void *dest, s32 size);
extern BOOL FS_CloseFile(FSFile *file);
extern BOOL FS_ChangeDir(const char *path);
extern BOOL FS_SeekFile(FSFile *file, s32 offset, int origin);
extern void FS_CancelFile(FSFile *file);
extern BOOL FS_WaitAsync(FSFile *file);
extern BOOL FS_OpenFileDirect(FSFile *file, FSArchive *arc, u32 top, u32 bottom, u32 index);
extern BOOL FSi_SendCommand(FSFile *file, u32 command);
extern BOOL FSi_FindPath(FSFile *scratch, const char *path, FSFileID *fileId, FSDirPos *dirPos);
extern void func_02087274(FSFile *file, int result);
extern void FSi_AppendToList(FSFile *file, FSFile *head);
extern FSArchive *data_022ab828;
extern FSDirPos data_022ab82c;
extern u32 data_022ab840;
extern u32 data_022ab83c;
extern RomRegion data_022ab844;
extern RomRegion data_022ab84c;
extern IrqSlotEntry gOsIrqSlots[];
extern IrqSlotKeepAlias data_022a98c0[];
extern IrqSlotArgAlias data_022a98c4[];
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pcPlus4;
    u32 spSvc;
    u8 cpContext[0x1c];
} OSContext;
struct OSThread {
    OSContext context;
    u32 state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;
    OSMutex *mutex;
    OSMutexQueue mutexQueue;
    u32 stackTop;
    u32 stackBottom;
    u32 stackWarningOffset;
    OSThreadQueue joinQueue;
};
extern void OS_InitContext(OSContext *context, u32 pc, u32 sp);
extern void DC_FlushRange(const void *start, u32 size);
extern void DC_InvalidateRange(void *start, u32 size);
extern void DC_StoreRange(const void *start, u32 size);
extern u32 OS_GetThreadPriority(const OSThread *thread);
extern BOOL OS_SetThreadPriority(OSThread *thread, u32 priority);
extern void OS_Terminate(void);
extern OSIrqMask OS_ResetRequestIrqMask(OSIrqMask mask);
extern OSIrqMask OS_DisableIrqMask(OSIrqMask mask);
extern OSIrqMask OS_EnableIrqMask(OSIrqMask mask);
extern OSIrqMask OS_SetIrqMask(OSIrqMask mask);
extern void OS_SetIrqFunction(OSIrqMask mask, OSIrqFunction function);
extern int func_02080c28(void);
extern void func_02080c3c(int state);
extern OSIntrMode OS_DisableInterrupts_IrqAndFiq(void);
extern OSIntrMode OS_RestoreInterrupts_IrqAndFiq(OSIntrMode state);
extern u32 MI_SwapWord(u32 setData, volatile u32 *destp);
extern u32 OSi_DoTryLockByWord(u16 lockID, OSLockWord *lockp, void (*ctrl)(void), BOOL disableFiq);
extern int OSi_DoUnlockByWord(u16 lockID, OSLockWord *lockp, void (*ctrl)(void), BOOL disableFiq);
extern int OS_GetLockID(void);
extern void OS_ReleaseLockID(u16 lockID);
extern void OS_SpinWait(u32 cycles);
extern void Reset_StopAndRequestArm7(u32 parameter);
extern void OsTag_SendCommandWord(u32 command);
extern void Reset_OnOsTagMessage(u32 tag, u32 data, int err);
extern void OS_InitReset(void);
extern void OS_GetOwnerInfo(OSOwnerInfo *info);
extern u32 gOsVramLockedBanks;
extern u16 gOsVramLockIds[9];
extern void OSi_UnlockVram(u16 banks, u16 lockID);
extern void OSi_InitVramExclusive(void);
extern OSThreadInfo OSi_ThreadInfo;
extern OSThread **data_022a9924;
extern OSThread data_022a9984;
extern BOOL data_022a9b78;
extern vu64 gOsiTickCounter;
extern u32 gOsiNeedResetTimer;
extern u32 data_022a9b7c;
extern u8 data_022a9b88[0x80];
extern void func_0207f670(OSThreadQueue *queue);
extern int (*const data_02129314[])(FSFile *file);
static inline BOOL FileHandle_IsBlocking(FSFile *file) {
    return (file->flags & 0x04) ? 1 : 0;
}
static inline BOOL Archive_CallerBlocked(FSArchive *arc) {
    return (arc->flags & 0x200) ? 1 : 0;
}
int func_020870e4(FSFile *file, u32 command) {
    int result;
    FSArchive *arc = file->arc;
    u32 bit        = 1 << command;

    if (FileHandle_IsBlocking(file) != 0) {
        arc->flags |= 0x200;
    } else {
        arc->flags |= 0x100;
    }

    if (arc->tableBufferSize & bit) {
        result = ((ArchiveCommandHook) arc->tableBuffer)(file, command);
        switch (result) {
            case 0:
            case 1:
            case 4:
                file->error = result;
                break;
            case 8:
                arc->tableBufferSize &= ~bit;
                result = 7;
                break;
        }
    } else {
        result = 7;
    }
    if (result == 7) {
        result = data_02129314[command](file);
    }

    if (result == 6) {
        if (FileHandle_IsBlocking(file) != 0) {
            int irqState = func_02080c28();

            while (Archive_CallerBlocked(arc) != 0) {
                func_0207f670(&arc->queue);
            }
            result = file->error;
            func_02080c3c(irqState);
        }
    } else if (FileHandle_IsBlocking(file) != 0) {
        arc->flags &= ~0x200;
        file->error = result;
    } else {
        arc->flags &= ~0x100;
        func_02087274(file, result);
    }
    return result;
}

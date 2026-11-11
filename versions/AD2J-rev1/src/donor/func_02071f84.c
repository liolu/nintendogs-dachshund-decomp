/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02071f84 from projets/nintendogs-shiba-friends/src/donor/func_02071f84.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef int BOOL;
extern s16 func_020645a4(int playerNo, int varNo);
typedef struct {
    void *prevObject;
    void *nextObject;

} NNSFndLink;
typedef struct {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;

} NNSFndList;
typedef struct NNSSndHeap *NNSSndHeapHandle;
typedef struct NNSSndFader {
    int origin;
    int target;
    int counter;
    int frame;
} NNSSndFader;
typedef struct NNSSndHandle {
    struct NNSSndSeqPlayer *player;
} NNSSndHandle;
typedef struct NNSSndSeqPlayer {
    struct NNSSndHandle *handle;
    struct NNSSndPlayer *player;
    struct NNSSndPlayerHeap *heap;
    NNSFndLink playerLink;
    NNSFndLink prioLink;
    NNSSndFader fader;

    u8 status;
    u8 startFlag;
    u8 pauseFlag;
    u8 prepareFlag;

    u32 commandTag;

    u16 seqType;
    u16 pad2;
    u16 seqNo;
    u16 seqArcIndex;

    u8 playerNo;
    u8 prio;
    s16 volume;

    u8 initVolume;
    u8 extVolume;
    u16 pad3_;
} NNSSndSeqPlayer;
typedef struct NNSSndPlayer {
    NNSFndList playerList;
    NNSFndList heapList;
    u32 playableSeqCount;
    u32 allocChBitFlag;
    u8 volume;
    u8 pad_;
    u16 pad2_;
} NNSSndPlayer;
extern BOOL func_02071f84(NNSSndHandle *handle, int varNo, s16 *var);
typedef struct NNSSndPlayerHeap {
    NNSFndLink link;
    NNSSndHeapHandle handle;
    NNSSndSeqPlayer *player;
    int playerNo;
} NNSSndPlayerHeap;
BOOL func_02071f84(NNSSndHandle *handle, int varNo, s16 *var) {
    NNSSndSeqPlayer *seqPlayer;

    if (!((handle)->player != ((void *) 0))) {
        return 0;
    }

    seqPlayer = handle->player;

    if (!seqPlayer->startFlag) {
        *var = -1;
        return 1;
    }

    *var = func_020645a4(seqPlayer->playerNo, varNo);
    return 1;
}

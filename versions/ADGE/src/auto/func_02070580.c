/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02073a68 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_player.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef struct UnkList {
    void *head;
    void *tail;
    u16 numObjects;
    u16 offset;
} UnkList;
typedef struct UnkLink {
    void *prev;
    void *next;
} UnkLink;
extern void func_0207d050(UnkList *list, void *obj);
extern void *func_0207d038(UnkList *list, void *obj);
typedef struct UnkSndFader {
    s32 origin;
    s32 target;
    s32 counter;
    s32 frames;
} UnkSndFader;
typedef struct UnkSndSeqPlayer {
    struct UnkSndHandle *handle;
    struct UnkSndPlayer *player;
    struct UnkSndPlayerHeap *heap;
    UnkLink prioLink;
    UnkLink playerLink;
    UnkSndFader fader;
    u8 status;
    u8 unk_2d;
    u8 unk_2e;
    u8 unk_2f;
    u32 commandTag;
    u16 unk_34;
    u8 unk_36[6];
    u8 playerNo;
    u8 prio;
    u16 unk_3e;
    u8 unk_40;
    u8 unk_41;
} UnkSndSeqPlayer;
typedef struct UnkSndHandle {
    UnkSndSeqPlayer *player;
} UnkSndHandle;
typedef struct UnkSndPlayer {
    UnkList playerList;
    UnkList heapList;
    u32 playableSeqCount;
    u32 allocChBitFlag;
    u32 unk_20;
} UnkSndPlayer;
typedef struct UnkSndPlayerHeap {
    UnkLink link;
    void *heap;
    UnkSndSeqPlayer *seqPlayer;
    int playerNo;
} UnkSndPlayerHeap;
extern UnkList data_0214fe0c;
extern UnkList data_0214fe18;
extern void func_02070638(UnkSndSeqPlayer *seqPlayer);
extern void func_020705fc(UnkSndSeqPlayer *seqPlayer);
extern UnkSndSeqPlayer *func_02070580(int prio);
void func_02070638(UnkSndSeqPlayer *seqPlayer);
void func_020705fc(UnkSndSeqPlayer *seqPlayer);
UnkSndSeqPlayer *func_02070580(int prio) {
    UnkSndSeqPlayer *seqPlayer = func_0207d038(&data_0214fe0c, 0);

    if (seqPlayer == 0) {
        seqPlayer = func_0207d038(&data_0214fe18, 0);
        if (prio < seqPlayer->prio) {
            return 0;
        }
        func_020705fc(seqPlayer);
    }

    func_0207d050(&data_0214fe0c, seqPlayer);
    seqPlayer->prio = prio;
    func_02070638(seqPlayer);
    return seqPlayer;
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkSndPlayerInfo {
    u8 seqMax;
    u8 unk_01;
    u16 allocChBitFlag;
    u32 heapSize;
} UnkSndPlayerInfo;
extern void *func_02071e10(void);
extern void *func_02071c1c(int index);
extern void func_02071050(int playerNo, int seqMax);
extern void func_02071038(int playerNo, u32 allocChBitFlag);
extern BOOL func_02070f98(int playerNo, void *heap, u32 size);

/* func_02075780 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arcplayer.c (license: none),
 * reused by tools/donor_match.py */
BOOL func_02073414(void *heap) {
    int i;

    func_02071e10();

    for (i = 0; i < 32; i++) {
        UnkSndPlayerInfo *info = func_02071c1c(i);
        if (info == 0) {
            continue;
        }

        func_02071050(i, info->seqMax);
        func_02071038(i, info->allocChBitFlag);

        if (info->heapSize != 0 && heap != 0) {
            int j;
            for (j = 0; j < info->seqMax; j++) {
                if (!func_02070f98(i, heap, info->heapSize)) {
                    return 0;
                }
            }
        }
    }

    return 1;
}

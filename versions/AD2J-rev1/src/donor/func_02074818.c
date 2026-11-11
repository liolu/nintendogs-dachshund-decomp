/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020769b8 from projets/children-of-mana/src/auto/func_020769b8.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
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
extern void *func_02073194(void);
extern void *func_02072fa0(int index);
extern void func_020723dc(int playerNo, int seqMax);
extern void func_020723cc(int playerNo, u32 allocChBitFlag);
extern BOOL func_02072330(int playerNo, void *heap, u32 size);
BOOL func_02074818(void *heap) {
    int i;

    func_02073194();

    for (i = 0; i < 32; i++) {
        UnkSndPlayerInfo *info = func_02072fa0(i);
        if (info == 0) {
            continue;
        }

        func_020723dc(i, info->seqMax);
        func_020723cc(i, info->allocChBitFlag);

        if (info->heapSize != 0 && heap != 0) {
            int j;
            for (j = 0; j < info->seqMax; j++) {
                if (!func_02072330(i, heap, info->heapSize)) {
                    return 0;
                }
            }
        }
    }

    return 1;
}

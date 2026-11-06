/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ecba4 from projets/nintendogs-chihuahua-friends/src/donor/func_020ecba4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02154dd8;
extern void func_02072174(void *p, int a, int b);
typedef struct {
    s32 pad[23];
    s32 arr[16];
} Tbl;
void func_020ecba4(int param_1) {
    s32 iVar5;
    s32 *piVar1;
    s32 iVar4;
    Tbl *t;
    Tbl *t2;
    s16 i;
    s16 j;

    iVar5  = (9000 - param_1) >> 5;
    iVar4  = (param_1 + (-5000)) >> 5;
    piVar1 = (s32 *) &data_02154dd8;
    if (iVar5 > 127) {
        iVar5 = 127;
    } else if (iVar5 < 0) {
        iVar5 = 0;
    }
    if (iVar4 > 127) {
        iVar4 = 127;
    } else if (iVar4 < 0) {
        iVar4 = 0;
    }
    t = (Tbl *) &data_02154dd8;
    func_02072174(piVar1, 0x3ec, iVar5);
    i = 0;
    do {
        if (((u16) (1 << i) & 0x3ec) != 0) {
            t->arr[i] = iVar5 << 12;
        }
        i = i + 1;
    } while (i < 16);
    t2 = (Tbl *) &data_02154dd8;
    func_02072174(piVar1, 0x400, iVar4);
    j = 0;
    do {
        if (((u16) (1 << j) & 0x400) != 0) {
            t2->arr[j] = iVar4 << 12;
        }
        j = j + 1;
    } while (j < 16);
}

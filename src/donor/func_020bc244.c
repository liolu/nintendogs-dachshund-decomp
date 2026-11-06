/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02115fc8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02115fc8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02140724[];
extern u8 data_02140730[];
extern u8 *func_01ffda04(s32 a);
extern void func_020b8ab8(u32 a, u16 *b, u32 c);
void func_020bc244(u32 *param_1) {
    u32 zA;
    s32 iVar4;
    u32 zB;
    iVar4 = 0;
    zA    = (u32) iVar4;
    zB    = (u32) iVar4;
    do {
        if (func_01ffda04((s32) (s16) iVar4) != ((void *) 0)) {
            func_020b8ab8(2, (u16 *) ((u32 *) data_02140724)[iVar4], 1);
            func_020b8ab8(2, (u16 *) ((u32 *) data_02140730)[iVar4], zA);
            *((u32 *) param_1 + iVar4 + 3) = 1;
        } else {
            func_020b8ab8(2, (u16 *) ((u32 *) data_02140724)[iVar4], zA);
            func_020b8ab8(2, (u16 *) ((u32 *) data_02140730)[iVar4], 1);
            *((u32 *) param_1 + iVar4 + 3) = zB;
        }
        iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
}

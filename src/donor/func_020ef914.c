/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a0b98 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a0b98.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u16 vu16;
extern u32 data_02154cb8;
extern u32 data_02130731;
extern u32 data_02154eec;
extern u32 data_02154f24;
extern u32 func_02071fd4(u8 *p);
extern s32 func_020f03a0(u8 *a, u32 b, u32 c, u32 d);
s32 func_020ef914(u32 param_1, u32 *param_2) {
    u32 uVar5;
    u32 r;
    s32 idx;
    u8 *base;
    u16 mask;
    u32 bVar;

    uVar5 = *(u8 *) ((u8 *) &data_02130731 + *(u16 *) ((u8 *) &data_02154cb8 + 24) * 6);
    r     = func_02071fd4((u8 *) &data_02154eec);
    if (r == 4) {
        goto flag1;
    }
    if (r == 5) {
        goto flag1;
    }
    if (r != 62) {
        goto flag0;
    }
flag1:
    bVar = 1;
    goto chk;
flag0:
    bVar = 0;
chk:
    if (bVar != 0) {
        return -1;
    }
    if (uVar5 == 255) {
        goto neg;
    }
    base = (u8 *) &data_02154f24;
    idx  = 0;
    do {
        mask = (u16) (1 << idx);
        if ((*(u16 *) (base + 24) & mask) == 0) {
            *(vu16 *) (base + 24) = *(vu16 *) (base + 24) | mask;
            goto found;
        }
        idx = (s16) (idx + 1);
    } while (idx < 4);
    idx = -1;
found:
    if (idx == -1) {
        goto setneg;
    }
    switch (func_020f03a0(base + 40 + idx * 4, uVar5, param_1, (u32) param_2)) {
        case 0:
            break;
        default:
            goto ret;
    }
setneg:
    idx = -1;
ret:
    return idx;
neg:
    return -1;
}

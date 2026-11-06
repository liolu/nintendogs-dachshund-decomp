/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a1728 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a1728.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u16 vu16;
typedef struct {
    u8 pad0[0x18];
    u16 status;
    u8 pad1[0xe];
    u32 arr[4];
} Obj;
extern Obj data_02154f24;
extern s32 func_020f03a0(u32 *p, u32 a, u32 b, s32 *c);
s32 func_020f04a4(u32 param_1, u32 param_2, s32 *param_3) {
    Obj *o;
    s32 i;
    u16 bit;

    o = &data_02154f24;
    i = 0;
    do {
        bit = (u16) (1 << i);
        if ((o->status & bit) == 0) {
            *(vu16 *) &o->status = *(vu16 *) &o->status | bit;
            goto found;
        }
        i = (s16) (i + 1);
    } while (i < 4);
    i = -1;
found:
    if (i != -1) {
        if (func_020f03a0(&o->arr[i], param_1, param_2, param_3) != 0) {
            return i;
        }
    }
    return -1;
}

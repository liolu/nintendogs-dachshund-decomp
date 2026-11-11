/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020772dc from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020772dc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef volatile u32 vu32;
extern u32 data_0213b45c[];
extern u32 data_0213b450[];
extern u32 data_0213b468[];
extern void func_0206e034(u32 a, u32 *p, u32 n);
extern void func_020780cc(u32 *p);
void func_02077f38(u32 *param_1, u32 *param_2) {
    vu32 zero;
    u32 *q;
    u32 idx;

    zero = 0;
    func_0206e034(zero, param_1, 392);
    param_1[0x31] = 1;
    param_1[2]    = 1;
    if (param_2[0xc] != 0) {
        param_1[0] = param_2[0xc];
    } else {
        q          = (u32 *) param_2[1];
        param_1[0] = (u32) q + q[1];
    }
    param_1[1]    = (u32) param_2;
    param_1[0x35] = (u32) ((u32 *) param_2[1]) + 0x40;
    param_1[0x36] = (u32) ((u32 *) param_2[1]) + ((u32 *) param_2[1])[2];
    param_1[0x37] = (u32) ((u32 *) param_2[1]) + ((u32 *) param_2[1])[3];
    param_1[0x3a] = data_0213b45c[*(u8 *) ((u8 *) param_2[1] + 0x15)];
    param_1[0x3b] = data_0213b450[*(u8 *) ((u8 *) param_2[1] + 0x15)];
    param_1[0x3c] = data_0213b468[*(u8 *) ((u8 *) param_2[1] + 0x16)];
    param_1[0x38] = ((u32 *) param_2[1])[7];
    param_1[0x39] = ((u32 *) param_2[1])[8];
    if (param_2[8] != 0 && *(u8 *) ((u8 *) param_2 + 0x24) < 32) {
        *(u32 *) ((u8 *) param_1 + *(u8 *) ((u8 *) param_2 + 0x24) * 4 + 0xc) = param_2[8];
        *((u8 *) param_1 + *(u8 *) ((u8 *) param_2 + 0x24) + 0x8c)            = *((u8 *) param_2 + 0x25);
    }
    if (param_2[0] & 1) {
        param_1[2] |= 0x80;
    }
    if (param_2[0] & 2) {
        param_1[2] |= 0x100;
    }
    if (param_2[0] & 4) {
        param_1[2] |= 0x200;
    }
    if (param_2[0] & 8) {
        param_1[2] |= 0x400;
    }
    if (param_2[10] != 0) {
        ((void (*)(u32 *)) param_2[10])(param_1);
    }
    func_020780cc(param_1);
    param_2[0] &= ~1;
}

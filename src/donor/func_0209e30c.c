/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209e30c from projets/nintendogs-shiba-friends/src/donor/func_0209e30c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile s32 vs32;
extern s16 data_02129210[];
extern s16 data_0212922c[];
extern s16 data_02129238[];
extern s32 func_02080f5c(u8 *p);
void func_0209e30c(u8 *param_1, s32 param_2, s32 param_3) {
    s32 stk[16];
    s32 count;
    s16 *tab;
    s32 prev;
    s32 seed;
    s32 val;
    s16 r10;
    s16 k;
    s16 i;
    s16 j;
    s32 v;
    s16 idx;

    count = 0;
    tab   = 0;
    prev  = 0;
    seed  = func_02080f5c(param_1);
    switch (param_3) {
        case 1:
            count = 3;
            tab   = data_02129210;
            break;
        case 2:
            count = 5;
            tab   = data_0212922c;
            break;
        case 3:
        case 4:
        case 5:
            count = 7;
            tab   = data_02129238;
            break;
    }
    r10                       = 0;
    *(u16 *) (param_1 + 0x2c) = param_2;
    if (param_2 <= 0) {
        return;
    }
    do {
        k = 0;
        for (i = 0; i < 16; i++) {
            stk[i] = 4;
        }
        for (j = 0; j < count; j++) {
            v = tab[j];
            if (v == prev) {
                continue;
            }
            if (prev == 2 && v == 1) {
                continue;
            }
            stk[k] = v;
            k++;
        }
        if (k > 0) {
            seed                                      = seed * 0x10dcd + 1;
            idx                                       = (s16) (u16) (((u32) (u16) k * (u16) seed) >> 16);
            *(s32 *) (param_1 + (u32) r10 * 4 + 0x30) = stk[idx];
            prev                                      = (s16) * (vs32 *) &stk[idx];
        } else {
            *(s32 *) (param_1 + (u32) r10 * 4 + 0x30) = 4;
            prev                                      = (s16) * (s32 *) (param_1 + (u32) r10 * 4 + 0x30);
        }
        r10 = r10 + 1;
    } while (r10 < param_2);
}

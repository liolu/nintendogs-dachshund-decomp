/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209dc5c from projets/nintendogs-shiba-friends/src/donor/func_0209dc5c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
void func_0209dc5c(u8 *param_1, s32 param_2) {
    s16 i;
    s16 *slot;
    u8 *base;
    s32 t;
    s32 z4;
    s32 z12;
    s32 iv6;
    s32 q;
    s32 x;
    s32 y;

    base = param_1 + 0x42;
    t    = (s16) ((param_2 << 1) / 3);
    i    = 0;
    z4   = i;
    z12  = i;
    do {
        slot = (s16 *) (base + *(s16 *) (param_1 + 0x20) * 2);
        switch (i) {
            case 0:
                goto c0;
            case 1:
                goto c1;
            case 2:
                goto c2;
        }
        goto tail;
    c0:
        *slot = *slot - *(s16 *) (param_1 + 0x2a) * 10;
        if (*(s16 *) (param_1 + 0x22) == 0) {
            *slot = *slot - 200;
            goto tail;
        }
        *slot = *slot - (*(s16 *) (param_1 + 0x2c) - *(s16 *) (param_1 + 0x22)) * 20;
        goto tail;
    c1:
        iv6 = (s16) ((param_2 - *(s16 *) (param_1 + 2)) - t);
        if (iv6 < 0) {
            iv6 = z4;
        }
        q     = iv6 / 60;
        *slot = *slot - q * 10;
        if (*(s16 *) (param_1 + 0x22) == 0) {
            *slot = *slot - 200;
            goto tail;
        }
        *slot = *slot - (*(s16 *) (param_1 + 0x2c) - *(s16 *) (param_1 + 0x22)) * 20;
        goto tail;
    c2:
        x     = *(s16 *) (param_1 + 0x2a);
        q     = x / 2;
        *slot = *slot - q * 10;
        if (*(s16 *) (param_1 + 0x22) == 0) {
            *slot = *slot - 200;
            goto tail;
        }
        y     = *(s16 *) (param_1 + 0x2c) - *(s16 *) (param_1 + 0x22);
        q     = y / 2;
        *slot = *slot - q * 20;
    tail:
        if (*slot < 0) {
            *slot = z12;
        }
        base = base + 10;
        i    = (s16) (i + 1);
    } while (i < 3);
}

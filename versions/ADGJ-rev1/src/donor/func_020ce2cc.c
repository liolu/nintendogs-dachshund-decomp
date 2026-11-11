/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ce2cc from projets/nintendogs-chihuahua-friends/src/donor/func_020ce2cc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed int s32;
extern u8 data_0214b024[];
s32 func_020ce2cc(void) {
    s32 r = -1;
    u8 b1;
    u8 b0;
    if ((*(u16 *) (data_0214b024 + 2) & 2) == 0) {
        goto end;
    }
    b1 = data_0214b024[1];
    b0 = data_0214b024[0];
    if (b1 < 154) {
        goto end;
    }
    if (b1 > 183) {
        goto end;
    }
    if (b0 >= 32) {
        if (b0 <= 111) {
            return 0;
        }
    }
    if (b0 < 144) {
        goto end;
    }
    if (b0 <= 223) {
        r = 1;
    }
end:
    return r;
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02124f00 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02124f00.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u8 *data_02153740;
u8 *func_02104070(u32 param_1) {
    u8 *b = data_02153740 + 196;
    u8 *r = 0;
    if (param_1 != 0x00030002) {
        return r;
    }
    switch (*(s32 *) (b + 0x1c)) {
        case 0:
            r = b + 236 + (*(s32 *) (b + 0xc) << 4);
            break;
        case 1:
            r = b + 284 + (*(s32 *) (b + 0x10) << 4);
            break;
        case 2:
            if (*(s32 *) (b + 0xc) >= 0) {
                r = b + 236 + (*(s32 *) (b + 0xc) << 4);
            } else if (*(s32 *) (b + 0x10) >= 0) {
                r = b + 284 + (*(s32 *) (b + 0x10) << 4);
            }
            break;
    }
    return r;
}

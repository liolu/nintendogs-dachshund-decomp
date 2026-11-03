/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e873c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020e873c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed int s32;
typedef struct {
    s32 x, y, z;
} V3;
void func_020d6448(u8 *param_1) {
    V3 a, c, t;
    s32 b0, b1, b2;
    a.x                       = *(s32 *) (param_1 + 0xc8);
    a.y                       = *(s32 *) (param_1 + 0xcc);
    a.z                       = *(s32 *) (param_1 + 0xd0);
    b2                        = *(s32 *) (param_1 + 0xdc);
    b1                        = *(s32 *) (param_1 + 0xd8);
    b0                        = *(s32 *) (param_1 + 0xd4);
    c.x                       = *(s32 *) (param_1 + 0xe0);
    c.y                       = *(s32 *) (param_1 + 0xe4);
    c.z                       = *(s32 *) (param_1 + 0xe8);
    t                         = a;
    a                         = c;
    c.x                       = -t.x;
    c.y                       = -t.y;
    c.z                       = -t.z;
    *(s32 *) (param_1 + 0xc8) = a.x;
    *(s32 *) (param_1 + 0xcc) = a.y;
    *(s32 *) (param_1 + 0xd0) = a.z;
    *(s32 *) (param_1 + 0xd4) = b0;
    *(s32 *) (param_1 + 0xd8) = b1;
    *(s32 *) (param_1 + 0xdc) = b2;
    *(s32 *) (param_1 + 0xe0) = c.x;
    *(s32 *) (param_1 + 0xe4) = c.y;
    *(s32 *) (param_1 + 0xe8) = c.z;
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020fb96c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020fb96c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u8 data_0212ff00[];
extern u8 data_0212ff38[];
extern u8 data_0212ff0c[];
extern void func_020b8dbc(s32 a, s32 b, s32 c, s32 d);
extern void func_020b8b0c(s32 a, s32 b, s32 c);
extern void func_020e92d4(s32 *p);
void func_020e91a4(s32 *param_1) {
    s32 i;

    for (i = 0; i < 3; i++) {
        func_020b8dbc(2, data_0212ff00[i], (s32) (*(s32 *) ((u8 *) param_1 + ((u32) i << 3) + 0x10) << 4) >> 16,
                      (s32) (*(s32 *) ((u8 *) param_1 + ((u32) i << 3) + 0x14) << 4) >> 16);
    }
    for (i = 0; i < 20; i++) {
        if ((u32) (param_1[0] - 6) <= 2) {
            func_020b8b0c(2, data_0212ff38[i], 1);
        } else {
            func_020b8b0c(2, data_0212ff38[i], 0);
        }
    }
    for (i = 0; i < 4; i++) {
        if (((u32) (param_1[0] - 6) <= 2) && (*(s32 *) ((u8 *) param_1 + ((u32) i << 2) + 0x8c) != 0)) {
            func_020b8b0c(2, data_0212ff0c[i], 1);
        } else {
            func_020b8b0c(2, data_0212ff0c[i], 0);
        }
    }
    func_020e92d4(param_1);
}

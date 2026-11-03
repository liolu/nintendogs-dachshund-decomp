/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0209dd80 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209dd80.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
extern u32 data_021471a0[];
s32 func_020ecb50(s32 param_1, s32 param_2, s32 param_3) {
    s32 ret = 0;
    u8 *pb  = (u8 *) data_021471a0[param_1] + 8 + (param_2 << 3);

    if (param_3 > (s32) * (u16 *) (pb + 6)) {
        ret = *(s16 *) (pb + 2) + (param_3 >> *(s8 *) pb);
        if (ret > 127) {
            ret = 127;
        } else if (ret < 0) {
            ret = 0;
        }
    }
    return ret;
}

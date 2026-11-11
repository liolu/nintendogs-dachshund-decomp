/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020cdc04 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020cdc04.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern u8 data_02124ad8[];
void func_021170e8(s32 *param_1, s32 *param_2, s32 param_3, s32 param_4, u16 param_5) {
    s32 u3;
    s32 i4     = param_4 >> 4;
    s32 j4     = i4 * 2;
    s32 i5     = (s32) (param_5 >> 4) * 2;
    u3         = ((s32) (((s64) (param_3) * (*(s16 *) (data_02124ad8 + (j4 + 1) * 2)) + 0x800) >> 12));
    param_1[0] = param_2[0] + ((s32) (((s64) (u3) * (*(s16 *) (data_02124ad8 + i5 * 2)) + 0x800) >> 12));
    param_1[1] = param_2[1] + ((s32) (((s64) (param_3) * (*(s16 *) (data_02124ad8 + j4 * 2)) + 0x800) >> 12));
    param_1[2] = param_2[2] + ((s32) (((s64) (u3) * (*(s16 *) (data_02124ad8 + (i5 + 1) * 2)) + 0x800) >> 12));
}

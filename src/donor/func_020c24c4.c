/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0208ca50 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0208ca50.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
void func_020c24c4(u8 *param_1, s16 param_2) {
    s32 k   = (s32) param_2 * 12;
    u8 *r2  = param_1 + 192;
    u32 idx = *(u16 *) (r2 + k);
    u8 *r1  = r2 + k;
    u8 *e   = r1 + (idx << 2);
    u8 *it  = *(u8 **) (e + 4);
    if (it == ((void *) 0)) {
        return;
    }
    it                 = it + 0x5000;
    *(s16 *) (it + 70) = *(s16 *) (it + 70) - 1;
    if (*(s16 *) (it + 70) <= 0) {
        *(u16 *) (it + 68) = 0xffff;
    }
}

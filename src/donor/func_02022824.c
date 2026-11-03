/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02022820 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02022820.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153720;
extern void func_02022914(void *p, s32 *v);
void func_02022824(void *param_1) {
    s32 local[3];
    u8 *g = data_02153720;

    local[0] = (s32) (*(s16 *) (g + 0x86)) << 12;
    local[1] = (s32) (*(s16 *) (g + 0x88)) << 12;
    local[2] = -16384;
    func_02022914(param_1, local);
}

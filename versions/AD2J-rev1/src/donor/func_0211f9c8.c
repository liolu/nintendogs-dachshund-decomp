/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d64d4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d64d4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02156104;
extern u16 data_021560f4;
extern u16 data_021560f0;
extern u32 data_02156120;
extern u32 func_0208120c(void);
extern void func_02081220(u32 r);
extern s32 func_02065d78(u32 a, u32 b);
u32 func_0211f9c8(u32 param_1, s16 *param_2) {
    u32 r4;
    s32 iVar1;

    r4 = func_0208120c();
    if (data_02156104 == 1 || data_021560f4 == 1) {
        *param_2 = 0x17;
        return 0;
    }
    if (data_021560f0 == 0x8000) {
        *param_2 = 3;
        func_02081220(r4);
        return 0;
    }
    if (data_021560f0 == 0) {
        *param_2 = 0x15;
        func_02081220(r4);
        return 0;
    }
    iVar1    = func_02065d78(param_1, (u32) &data_02156120);
    *param_2 = (s16) iVar1;
    if ((u16) *param_2 == 2) {
        data_02156104 = 1;
        func_02081220(r4);
        return 1;
    }
    func_02081220(r4);
    return 0;
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d6a60 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d6a60.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern s32 data_02156104;
extern u16 data_021560f4;
extern u32 func_0208120c(void);
extern void func_02081220(u32 s);
u32 func_0211ff00(u32 param_1, void *param_2, u32 param_3, u16 *param_4) {
    u32 s;
    u16 r;

    s = func_0208120c();
    if (data_02156104 == 1 || data_021560f4 == 1) {
        *param_4 = 0x17;
        return 0;
    }
    r        = ((u16(*)(u32)) param_2)(param_3);
    *param_4 = r;
    if (*param_4 == 2) {
        data_02156104 = 1;
        func_02081220(s);
        return 1;
    }
    func_02081220(s);
    return 0;
}

/* compiler: 1.2/sp2p3  */
/* func_0203992c from projets/code-lyoko/src/auto/func_0203992c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern void *func_0207d680();
extern M2C_UNK func_0207d704();
extern M2C_UNK data_0214f370;
void func_02071a0c(void *arg0) {
    void *var_r1;

    var_r1 = func_0207d680(&data_0214f370, 0);
    if (var_r1 != ((void *) 0)) {
    loop_2:
        if ((u32) (*(u8 *) ((s8 *) (arg0) + (0x3D))) >= (u32) (*(u8 *) ((s8 *) (var_r1) + (0x3D)))) {
            var_r1 = func_0207d680(&data_0214f370);
            if (var_r1 != ((void *) 0)) {
                goto loop_2;
            }
        }
    }
    func_0207d704(&data_0214f370, var_r1, arg0);
}

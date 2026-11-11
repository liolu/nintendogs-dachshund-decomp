/* compiler: 1.2/sp2p3  */
/* func_020df6f0 from projets/nintendogs-dachshund/src/auto/func_020df6f0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02105c24(M2C_UNK);
extern void func_02105cc8(void);
extern void func_02105ce8(void);
extern void func_02105d08(M2C_UNK);
extern M2C_UNK func_0210614c(void);
void func_020acee4(s32 arg0) {
    s32 temp_r0;
    u16 temp_r0_2;
    u16 temp_r0_3;
    u16 temp_r0_4;

    temp_r0 = func_0210614c();
    switch (temp_r0) {
        case 7:
            temp_r0_2 = (*(u16 *) ((s8 *) (arg0) + (0x16)));
            switch (temp_r0_2) {
                case 0:
                    func_02105d08(0);
                    return;
                case 1:
                    func_02105d08(1);
                    return;
            }
            break;
        case 10:
            temp_r0_3 = (*(u16 *) ((s8 *) (arg0) + (0x16)));
            switch (temp_r0_3) {
                case 0:
                    func_02105ce8();
                    return;
                case 1:
                    func_02105cc8();
                    return;
            }
            break;
        case 14:
            temp_r0_4 = (*(u16 *) ((s8 *) (arg0) + (0x16)));
            switch (temp_r0_4) {
                case 0:
                    func_02105c24(1);
                    return;
                case 2:
                    func_02105c24(0);
                    return;
            }
            break;
    }
}

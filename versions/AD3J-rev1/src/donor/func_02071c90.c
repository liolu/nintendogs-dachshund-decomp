/* compiler: 1.2/sp2p3  */
/* func_02071c90 from projets/nintendogs-chihuahua-friends/src/auto/func_02071c90.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02071954(M2C_UNK);
extern void func_020719d0(M2C_UNK);
extern void func_02071a6c(M2C_UNK, M2C_UNK);
extern void func_0207227c(M2C_UNK);
extern M2C_UNK func_0207d680(M2C_UNK, M2C_UNK);
extern M2C_UNK data_0214f37c;
s32 func_02071c90(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    void *temp_r6;

    temp_r6 = (M2C_UNK *) ((s8 *) &data_0214f37c + (arg1 << 5));
    if (*(M2C_UNK *) arg0 != 0) {
        func_0207227c(arg0);
    }
    if ((u32) (*(u16 *) ((s8 *) (temp_r6) + (8))) >= (u32) (*(u32 *) ((s8 *) (temp_r6) + (0x18)))) {
        temp_r0_2 = func_0207d680((s32) temp_r6, 0);
        if (temp_r0_2 == 0) {
            return 0;
        }
        if (arg2 < (s32) (*(u8 *) ((s8 *) (temp_r0_2) + (0x3D)))) {
            return 0;
        }
        func_020719d0(temp_r0_2);
        goto block_8;
    }
block_8:
    temp_r0 = func_02071954(arg2);
    if (temp_r0 == 0) {
        return 0;
    }
    func_02071a6c((s32) temp_r6, temp_r0);
    *(M2C_UNK *) temp_r0 = arg0;
    *(M2C_UNK *) arg0    = temp_r0;
    return temp_r0;
}

/* compiler: 1.2/sp2p3  */
/* func_020dae20 from projets/nintendogs-dachshund/src/auto/func_020dae20.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02089600(s32, s32);
extern M2C_UNK func_02089b34(s32, s32, M2C_UNK, M2C_UNK, s32, s32);
extern s32 data_02154c68;
extern s32 data_02153744;
void func_020a8790(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, u16 arg4, s32 arg5) {
    u32 temp_r4;
    u32 temp_r5;

    temp_r4 = data_02154c68;
    temp_r5 = (arg1 * 0x1B8) + (data_02153744 + 4);
    func_02089600(temp_r4, 0xE011);
    func_02089b34(temp_r4, temp_r5 + 0x24, arg2, arg3, (s32) arg4, arg5);
    (*(s32 *) ((s8 *) (temp_r5) + (0x38))) = 1;
}

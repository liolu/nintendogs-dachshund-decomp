/* compiler: 1.2/sp2p3  */
/* func_02071c08 from projets/nintendogs-chihuahua-friends/src/auto/func_02071c08.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02063920(M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_02063b1c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK func_02063de0(void);
extern void func_02063e20(M2C_UNK);
extern void func_02071ac8(M2C_UNK);
void func_02071c08(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r2;
    void *temp_r4;

    temp_r4 = (*(void **) ((s8 *) (arg0) + (4)));
    if ((*(s32 *) ((s8 *) (temp_r4) + (0x1C))) != 0) {
        func_02063e20(2);
    }
    func_02063b1c((s32) (*(u8 *) ((s8 *) (arg0) + (0x3C))), arg1, arg2, arg3);
    temp_r2 = (*(s32 *) ((s8 *) (temp_r4) + (0x1C)));
    if (temp_r2 != 0) {
        func_02063920((s32) (*(u8 *) ((s8 *) (arg0) + (0x3C))), 0xFFFF, temp_r2);
    }
    func_02071ac8(arg0);
    (*(s32 *) ((s8 *) (arg0) + (0x30))) = func_02063de0();
    (*(s8 *) ((s8 *) (arg0) + (0x2C)))  = 1;
}

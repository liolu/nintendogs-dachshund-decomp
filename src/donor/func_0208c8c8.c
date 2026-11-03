/* compiler: 1.2/sp2p3  */
/* func_0210de44 from projets/nintendogs-dachshund/src/auto/func_0210de44.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020443d4(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02044670(M2C_UNK);
extern void func_0206dfd4(M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK func_020c2554(M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK func_020c88e8(M2C_UNK);
extern void *data_02153700;
void func_0208c8c8(s32 arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = (*(s32 *) ((s8 *) (data_02153700) + (0x24)));
    temp_r4 = func_02044670(0);
    func_0206dfd4(func_020c88e8(arg0), temp_r5, 0x85C);
    func_020443d4(0, temp_r5);
    if (temp_r4 == 0) {
        return;
    }
    func_020c2554(temp_r4, (s32) (*(u16 *) ((s8 *) (temp_r5) + (0))), (s32) (*(u8 *) ((s8 *) (temp_r5) + (2))));
}

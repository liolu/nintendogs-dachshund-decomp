/* compiler: 1.2/sp2p3  */
/* func_020f2694 from projets/nintendogs-dachshund/src/auto/func_020f2694.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020b5024(M2C_UNK, M2C_UNK);
extern void func_020b8b0c(s32, s32, s32);
extern void func_020b91bc(s32, s32);
extern void func_020b9218(M2C_UNK, M2C_UNK);
extern void func_020b93d4(s32, s32);
extern void func_020b9408(M2C_UNK, M2C_UNK);
extern void func_020bdd48(s32, s32, s32, s32, u16, u16, s32, s16, s16, s16, s16);
extern void func_020bf864(void);
extern M2C_UNK data_02140e44;
extern M2C_UNK data_02140e58;
extern M2C_UNK data_02140e6c;
extern M2C_UNK data_02140e80;
void func_020bf734(s32 arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r7;

    (*(s32 *) ((s8 *) (arg0) + (4)))    = 0;
    (*(s32 *) ((s8 *) (arg0) + (0)))    = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x44))) = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x48))) = 0;
    temp_r5                             = func_020b5024(9, (s32) &data_02140e44);
    temp_r7                             = func_020b5024(9, (s32) &data_02140e58);
    temp_r6                             = func_020b5024(9, (s32) &data_02140e6c);
    temp_r5_2                           = func_020b5024(9, (s32) &data_02140e80);
    func_020b93d4(0, temp_r5);
    func_020b9408(0, temp_r7);
    func_020b9218(0, temp_r6);
    func_020b91bc(0, temp_r5_2);
    func_020bdd48(arg0 + 8, 2, 0xFFFF, 0, 0U, 0U, 0, 0, 0, 0xA, 0xA);
    (*(void (**)())((s8 *) (arg0) + (0x34))) = func_020bf864;
    func_020b8b0c(0, 0, 0);
    func_020b8b0c(0, 3, 0);
    func_020b8b0c(0, 1, 0);
    func_020b8b0c(0, 2, 0);
}

/* compiler: 1.2/sp2p3  */
/* func_020fde44 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020fde44.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02003be4(M2C_UNK);
extern M2C_UNK func_020a3aec(s32, M2C_UNK *, M2C_UNK);
extern M2C_UNK func_020cd3a4();
extern M2C_UNK data_02147fcc;
extern void *data_02153740;
void func_020fde3c(void *arg0) {
    s32 temp_r0;

    func_020a3aec((*(s32 *) ((s8 *) (arg0) + (0x754))), &data_02147fcc, 2);
    func_020cd3a4();
    temp_r0 = (*(s32 *) ((s8 *) (data_02153740) + (0xB4)));
    if ((temp_r0 != 0x19) && (temp_r0 != 0x1B)) {
        return;
    }
    func_02003be4(0xA);
}

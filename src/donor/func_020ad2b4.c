/* compiler: 1.2/sp2p3  */
/* func_020ad2b4 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020ad2b4.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020c76d4(void *);
extern void *data_02153740;
extern M2C_UNK func_020ad310;
extern M2C_UNK func_020adc58;
void func_020ad2b4(void) {
    func_020c76d4(data_02153740 + 0x3938);
    (*(M2C_UNK **) ((s8 *) (data_02153740) + (0x395C))) = &func_020adc58;
    (*(M2C_UNK **) ((s8 *) (data_02153740) + (0x3960))) = &func_020ad310;
}

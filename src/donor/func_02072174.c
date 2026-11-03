/* compiler: 1.2/sp2p3  */
/* func_02039f5c from projets/code-lyoko/src/auto/func_02039f5c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020639f4(u8, M2C_UNK, s16);
extern M2C_UNK data_02124704;
void func_02072174(void **arg0, M2C_UNK arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == ((void *) 0)) {
        return;
    }
    func_020639f4((*(u8 *) ((s8 *) (temp_r0) + (0x3C))), arg1, *((u16 *) ((s8 *) &data_02124704 + (arg2 * 2))));
}

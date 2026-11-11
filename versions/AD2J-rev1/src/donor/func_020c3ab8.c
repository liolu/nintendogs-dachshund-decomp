/* compiler: 1.2/sp2p3  */
/* func_020c90bc from projets/nintendogs-dachshund/src/auto/func_020c90bc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern s32 func_02003844(M2C_UNK, M2C_UNK);
extern s32 func_020c4934(M2C_UNK);
extern M2C_UNK func_020c506c(s32, s32);
extern M2C_UNK func_020c5098(s32, s32);
extern M2C_UNK func_020c50c4(s32, s32);
extern M2C_UNK func_020c50f0();
s32 func_020c3ab8(M2C_UNK arg0, void *arg1) {
    s32 temp_r4;
    u32 var_r7;

    temp_r4 = func_02003844(arg0, 0x48);
    func_020c50f0();
    func_020c50c4(temp_r4, (*(s32(**)(M2C_UNK))((s8 *) (arg1) + (4)))(arg0));
    for (var_r7 = 0; var_r7 < (u32) (*(u16 *) ((s8 *) (arg1) + (0))); var_r7 += 1) {
        func_020c5098(temp_r4, (*(s32(**)(M2C_UNK, u32))((s8 *) (arg1) + (8)))(arg0, var_r7));
    }
    func_020c506c(temp_r4, func_020c4934(arg0));
    return temp_r4;
}

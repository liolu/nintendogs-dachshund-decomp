/* compiler: 1.2/sp2p3  */
/* func_0211ef3c from projets/nintendogs-miniature-dachshund-friends/src/auto/func_0211ef3c.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern s32 func_020037ec(M2C_UNK, s32, M2C_UNK);
extern void *func_02003844(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02120178();
extern void *data_021560e8;
void func_0211ef34(M2C_UNK arg0, void *arg1) {
    s32 temp_r0_2;
    s32 var_ip;
    u32 temp_r0_3;
    u32 var_r4;
    void *temp_r0;

    temp_r0                                      = func_02003844(arg0, 0x7C);
    data_021560e8                                = temp_r0;
    (*(s32 *) ((s8 *) (temp_r0) + (0x28)))       = 0;
    (*(void **) ((s8 *) (data_021560e8) + (0)))  = arg1;
    (*(s32 *) ((s8 *) (data_021560e8) + (0x3C))) = 0;
    (*(s32 *) ((s8 *) (data_021560e8) + (0x14))) = 0;
    (*(s32 *) ((s8 *) (data_021560e8) + (0x18))) = 0;
    (*(s32 *) ((s8 *) (data_021560e8) + (0x1C))) = 0;
    (*(s32 *) ((s8 *) (data_021560e8) + (0x20))) = 0;
    (*(s32 *) ((s8 *) (data_021560e8) + (0x24))) = 0;
    var_ip                                       = ((*(u16 *) ((s8 *) (arg1) + (0x34))) + 0x23) & ~0x1F;
    temp_r0_2                                    = ((*(u16 *) ((s8 *) (arg1) + (0x36))) + 0x21) & ~0x1F;
    if (var_ip <= temp_r0_2) {
        var_ip = temp_r0_2;
    }
    (*(s32 *) ((s8 *) (data_021560e8) + (4))) = var_ip;
    (*(s32 *) ((s8 *) (data_021560e8) + (8))) = func_020037ec(arg0, (*(s32 *) ((s8 *) (data_021560e8) + (4))), 0x20);
    var_r4    = (((((*(u16 *) ((s8 *) (arg1) + (0x36))) + 0xE) * (*(u16 *) ((s8 *) (arg1) + (0x10)))) + 0x29) & ~0x1F) * 2;
    temp_r0_3 = (((*(u16 *) ((s8 *) (arg1) + (0x34))) + 0x55) & ~0x1F) * 2;
    if (var_r4 <= temp_r0_3) {
        var_r4 = temp_r0_3;
    }
    (*(u32 *) ((s8 *) (data_021560e8) + (0xC))) = var_r4;
    (*(s32 *) ((s8 *) (data_021560e8) + (0x10))) =
        func_020037ec(arg0, (s32) (*(u32 *) ((s8 *) (data_021560e8) + (0xC))), 0x20);
    (*(s16 *) ((s8 *) (data_021560e8) + (0x44))) = 0;
    (*(s32 *) ((s8 *) (data_021560e8) + (0x48))) = 0;
    (*(s16 *) ((s8 *) (data_021560e8) + (0x38))) = 0;
    func_02120178();
}

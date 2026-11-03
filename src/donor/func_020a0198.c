/* compiler: 1.2/sp2p3  */
/* func_02121984 from projets/nintendogs-dachshund/src/auto/func_02121984.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020ee7dc(M2C_UNK);
extern void func_020f07b4(M2C_UNK);
extern void func_020aebb4(void);
extern M2C_UNK func_02095524(M2C_UNK);
extern void func_02095590(s32, s32);
extern s32 func_02095610(s32);
extern void func_0209565c(M2C_UNK, M2C_UNK);
extern void func_02095784(M2C_UNK);
extern u16 data_0214affc;
extern void *data_02153740;
extern void *data_02153720;
void func_020a0198(s32 arg0) {
    s16 temp_r0;
    s16 temp_r2;
    s16 temp_r2_2;
    s32 var_r1;
    s32 var_r2;

    temp_r2 = (*(s16 *) ((s8 *) (arg0) + (0x2E)));
    var_r1  = 0;
    switch (temp_r2) {
        case 0:
            func_02095610(arg0);
            (*(s16 *) ((s8 *) (arg0) + (0x30))) = 0;
            return;
        case 1:
            temp_r2_2 = (*(s16 *) ((s8 *) (arg0) + (0x30)));
            if ((s32) temp_r2_2 < 0xBB8) {
                (*(s16 *) ((s8 *) (arg0) + (0x30))) = (s16) (temp_r2_2 + 1);
            }
            temp_r0 = (*(s16 *) ((s8 *) (arg0) + (0x30)));
            if ((s32) temp_r0 >= 0x78) {
                if ((*(u16 *) ((s8 *) (data_02153720) + (0x84))) & 2) {
                    var_r1 = 1;
                } else if ((u16) (data_0214affc & 0xC0B) != 0) {
                    var_r1 = 1;
                }
            }
            if ((s32) temp_r0 >= 0xBB8) {
                var_r1 = 1;
            }
            if (var_r1 == 0) {
                return;
            }
            func_0209565c(arg0, 2);
            func_02095590(arg0, 0);
            (*(s16 *) ((s8 *) (arg0) + (0x30))) = 0;
            func_020ee7dc(0x78);
            func_020f07b4(0x40);
            func_020aebb4();
            return;
        case 4:
            if (func_02095524(arg0) == 0) {
                return;
            }
            var_r2 = 0;
            if ((*(s32 *) ((s8 *) (data_02153740) + (0xB8))) == 3) {
                var_r2 = (*(s32 *) ((s8 *) (data_02153740) + (0x3C4)));
            }
            if (var_r2 == 0) {
                return;
            }
            func_02095784(arg0);
            return;
    }
}

/* compiler: 1.2/sp2p3  */
/* func_02124c44 from projets/nintendogs-dachshund/src/auto/func_02124c44.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0200399c(void);
extern u16 data_0214affc;
extern M2C_UNK data_0214b024;
void func_020a3454(s32 arg0) {
    s32 var_r0;
    u16 temp_r0;

    temp_r0 = (*(u16 *) ((s8 *) (arg0) + (4)));
    switch (temp_r0) {
        case 0x0:
            if (func_0200399c() == 0) {
                return;
            }
            (*(u16 *) ((s8 *) (arg0) + (4)))    = 0x1200U;
            (*(s16 *) ((s8 *) (arg0) + (6)))    = 0;
            (*(s16 *) ((s8 *) (arg0) + (0x1C))) = 0;
            return;
        case 0x1200:
            var_r0                              = 0;
            (*(s16 *) ((s8 *) (arg0) + (0x1C))) = (s16) ((*(s16 *) ((s8 *) (arg0) + (0x1C))) + 1);
            if ((*(u16 *) ((s8 *) (&data_0214b024) + (2))) & 2) {
                var_r0 = 1;
            } else if ((u16) (data_0214affc & 0xC03) != 0) {
                var_r0 = 1;
            } else if ((s32) (*(s16 *) ((s8 *) (arg0) + (0x1C))) >= 0x2A30) {
                var_r0 = 1;
            }
            if (var_r0 != 0) {
                (*(u16 *) ((s8 *) (arg0) + (4)))   = 1U;
                (*(s32 *) ((s8 *) (arg0) + (0xC))) = 1;
            }
            return;
    }
}

/* compiler: 1.2/sp2p3  */
/* func_02037fdc from projets/nintendogs-chihuahua-friends/src/auto/func_02037fdc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_021388f0;
extern void *data_02153704;
s32 func_02037fdc(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s8 temp_r0;
    s8 temp_r1;

    temp_r1 = (*(s8 *) ((s8 *) (arg0) + (0xA4)));
    switch (temp_r1) {
        case 4:
        case 5:
            return 1;
        case 1:
            if (*((M2C_UNK *) ((s8 *) &data_021388f0 + ((*(u16 *) ((s8 *) (data_02153704) + (6))) * 4))) == 0) {
                var_r0 = 2;
            } else {
                var_r0 = 3;
            }
            return var_r0;
        default:
            temp_r0 = (*(s8 *) ((s8 *) (arg0) + (0xA6)));
            switch (temp_r0) {
                default:

                case 0:
                case 1:
                case 2:
                case 5:
                case 6:
                    if (*((M2C_UNK *) ((s8 *) &data_021388f0 + ((*(u16 *) ((s8 *) (data_02153704) + (6))) * 4))) == 0) {
                        var_r0_2 = 2;
                    } else {
                        var_r0_2 = 3;
                    }
                    return var_r0_2;
                case 3:
                    return 2;
                case 4:
                case 7:
                case 8:
                    return 1;
            }
            break;
    }
}

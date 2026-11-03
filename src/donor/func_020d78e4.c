/* compiler: 1.2/sp2p3  */
/* func_020fb8dc from projets/nintendogs-dachshund/src/auto/func_020fb8dc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
extern void *data_0214b150;
s32 func_020d78e4(s32 arg0) {
    s32 var_r0;
    u32 temp_r1;
    u32 temp_r2;

    temp_r2 = (*(u32 *) ((s8 *) (data_0214b150) + (0x2C)));
    temp_r1 = (*(u32 *) ((s8 *) (data_0214b150) + (0x30)));
    switch (arg0) {
        case 0:
            if (temp_r2 < 6U) {
                return 3;
            }
            if (temp_r2 < 7U) {
                return 0;
            }
            if (temp_r2 < 0x12U) {
                return 1;
            }
            if (temp_r2 < 0x13U) {
                var_r0 = 2;
            } else {
                var_r0 = 3;
            }
            return var_r0;
        case 1:
            if (temp_r2 < 6U) {
                return 3;
            }
            if ((temp_r2 < 7U) && (temp_r1 < 0x1EU)) {
                return 3;
            }
            if (temp_r2 < 0x12U) {
                return 1;
            }
            if ((temp_r2 < 0x13U) && (temp_r1 < 0x1EU)) {
                return 1;
            }
            return 3;
        case 2:
            return 1;
        default:
            return 1;
    }
}

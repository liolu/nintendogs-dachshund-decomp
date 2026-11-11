/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_01ffda04(s16);                         /* extern */
void *func_02028144();                              /* extern */
M2C_UNK func_020c6530(s32, s32, M2C_UNK);           /* extern */
extern void *data_02154c3c;
extern s16 *data_02153700;
extern void *data_02153708;

void func_020ad7bc(s32 arg0) {
    s16 temp_r1;
    s16 var_r4;
    s32 var_r1;
    void *temp_r0;

    var_r4 = 1;
    if (arg0 == 0) {
        var_r4 = *data_02153700;
    } else if (arg0 == 1) {
        func_01ffda04(M2C_FIELD(data_02153708, s16 *, 0xE));
        temp_r0 = func_02028144();
        temp_r1 = M2C_FIELD(data_02153708, s16 *, 6);
        switch (temp_r1) {                          /* switch 1; irregular */
            case 2:                                     /* switch 1 */
                var_r4 = M2C_FIELD(temp_r0, s16 *, 0x6C);
                break;
            case 0:                                     /* switch 1 */
                var_r4 = M2C_FIELD(temp_r0, s16 *, 0x68);
                break;
            case 1:                                     /* switch 1 */
                var_r4 = M2C_FIELD(temp_r0, s16 *, 0x6A);
                break;
        }
    }
    var_r1 = 0;
    switch (var_r4) {                               /* switch 2 */
        default:                                        /* switch 2 */
            break;
        case 1:                                         /* switch 2 */
            var_r1 = 0x57B;
            break;
        case 2:                                         /* switch 2 */
            var_r1 = 0x57C;
            break;
        case 3:                                         /* switch 2 */
            var_r1 = 0x57D;
            break;
        case 4:                                         /* switch 2 */
            var_r1 = 0x57E;
            break;
        case 5:                                         /* switch 2 */
            var_r1 = 0x57F;
            break;
    }
    func_020c6530(M2C_FIELD(data_02154c3c, s32 *, 4), var_r1, 0);
}

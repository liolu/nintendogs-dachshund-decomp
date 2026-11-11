/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02105c1c(M2C_UNK);
void func_02105cc0(void);
void func_02105ce0(void);
void func_02105d00(M2C_UNK);
M2C_UNK func_02106144(void);

void func_020acee4(s32 arg0) {
    s32 temp_r0;
    u16 temp_r0_2;
    u16 temp_r0_3;
    u16 temp_r0_4;

    temp_r0 = func_02106144();
    switch (temp_r0) {                              /* switch 1; irregular */
        case 7:                                         /* switch 1 */
            temp_r0_2 = M2C_FIELD(arg0, u16 *, 0x16);
            switch (temp_r0_2) {                        /* switch 2; irregular */
                case 0:                                     /* switch 2 */
                    func_02105d00(0);
                    return;
                case 1:                                     /* switch 2 */
                    func_02105d00(1);
                    return;
            }
            break;
        case 10:                                        /* switch 1 */
            temp_r0_3 = M2C_FIELD(arg0, u16 *, 0x16);
            switch (temp_r0_3) {                        /* switch 3; irregular */
                case 0:                                     /* switch 3 */
                    func_02105ce0();
                    return;
                case 1:                                     /* switch 3 */
                    func_02105cc0();
                    return;
            }
            break;
        case 14:                                        /* switch 1 */
            temp_r0_4 = M2C_FIELD(arg0, u16 *, 0x16);
            switch (temp_r0_4) {                        /* switch 4; irregular */
                case 0:                                     /* switch 4 */
                    func_02105c1c(1);
                    return;
                case 2:                                     /* switch 4 */
                    func_02105c1c(0);
                    return;
            }
            break;
    }
}

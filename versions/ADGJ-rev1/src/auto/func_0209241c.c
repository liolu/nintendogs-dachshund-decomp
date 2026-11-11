/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02004274(s32);                         /* extern */
extern s32 *data_02153714;

void func_0209241c(void) {
    func_02004274(*data_02153714);
    *(u16 *) 0x04000060 = (*(u16 *) 0x04000060 & 0xFFFFCFFD) | 2;
}

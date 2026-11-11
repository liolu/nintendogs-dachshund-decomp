/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02071078(s32);
void func_02070abc(void);
void func_ov027_0215938c(void);
extern void *data_ov027_02159b34;

void func_ov027_0215890c(void) {
    func_02071078(0xFFFF);
    func_02070abc();
    *(s32 *) ((u8 *) data_ov027_02159b34 + 0)     = 0;
    *(s32 *) ((u8 *) data_ov027_02159b34 + 0x108) = 0;
    *(s32 *) ((u8 *) data_ov027_02159b34 + 0x10C) = 0;
    func_ov027_0215938c();
}

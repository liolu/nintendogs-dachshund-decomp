/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0206f6c4(void);
void func_ov028_0215b6b4(void *);
void func_ov028_0215b6c8(void *);
void func_ov028_0215b964(void);
extern void *data_ov028_0215bfb4;
extern u8 func_ov028_0215a8f8;
extern u8 func_ov028_0215ab24;

void func_ov028_0215add8(void) {
    func_0206f6c4();
    *(s32 *) ((u8 *) data_ov028_0215bfb4 + 0x108) = 0;
    *(s32 *) ((u8 *) data_ov028_0215bfb4 + 0x10C) = 0;
    func_ov028_0215b6b4(&func_ov028_0215a8f8);
    func_ov028_0215b6c8(&func_ov028_0215ab24);
    func_ov028_0215b964();
}

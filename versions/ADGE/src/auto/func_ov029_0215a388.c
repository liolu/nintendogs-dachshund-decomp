/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_ov029_0215a540;
void *func_020038a8(void *, s32);
s32 func_02006cb4(void *, s32);
void func_020c77e0(void *, s32);
void func_020cbea0(void *, s32);
void func_020d6354(s32);
void func_020d636c(s32);
s32 func_020d7b2c(s32, void *);

void func_ov029_0215a388(void *arg0, s32 arg1) {
    void *r4;

    func_020cbea0(arg0, 4);
    func_020cbea0(arg0, 5);
    func_020cbea0(arg0, 6);
    func_020c77e0(arg0, arg1);
    r4                          = func_020038a8(arg0, 0x20);
    *(s32 *) ((u8 *) r4 + 0x0)  = 0;
    *(s32 *) ((u8 *) r4 + 0x4)  = 0;
    *(s32 *) ((u8 *) r4 + 0x8)  = 0;
    *(s32 *) ((u8 *) r4 + 0xC)  = 0;
    *(s32 *) ((u8 *) r4 + 0x10) = 0;
    *(s32 *) ((u8 *) r4 + 0x14) = func_020d7b2c(5, arg0);
    *(s32 *) ((u8 *) r4 + 0x18) = func_02006cb4(arg0, 0x80);
    *(s32 *) ((u8 *) r4 + 0x1C) = func_02006cb4(arg0, 0x80);
    func_020d636c(*(s32 *) ((u8 *) r4 + 0x18));
    func_020d6354(*(s32 *) ((u8 *) r4 + 0x1C));
    data_ov029_0215a540 = r4;
}

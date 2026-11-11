#include "m2c.h"
extern void func_02081ce0(s32 arg0);
extern void func_02081da4(s32 arg0);
void func_02081c64(s32 arg0) {
    struct UnkFlags {
        u32 unk0 : 21;
        u32 bit21 : 1;
        u32 bit22 : 1;
        u32 unk24 : 9;
    };
    struct UnkFlags *obj;

    obj = (struct UnkFlags *) *(u32 **) (*(u32 **) ((u8 *) *(u32 **) (arg0 + 0x34) + 0x18));
    if (obj->bit21) {
        func_02081ce0(arg0);
        if (!obj->bit22) {
            func_02081da4(arg0);
        }
    } else {
        if (!obj->bit22) {
            func_02081da4(arg0);
        }
        func_02081ce0(arg0);
    }
}

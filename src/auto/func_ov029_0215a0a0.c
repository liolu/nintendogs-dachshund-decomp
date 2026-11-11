/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov029_0215a2c4(void);
void func_02003de8(s32);
void func_0200412c(void);
u16 func_02003a00(void);
void func_02003fa4(s32);
void func_0206bb1c(s32, s32, s32);
void func_0206bab4(s32, s32, s32);
void func_0206cbf8(s32, s32, s32);
void func_0207cb18(void);
void func_02003eec(void);
void func_02003cf0(s32);
void func_02003aa0(s32, s32);
void func_020075a4(void);
void func_020d6578(void);
void func_020c92d8(void);
void func_020c7740(void);
void func_020cbd60(void);
void func_02004270(void);
void func_02006894(void);
void func_020d6a50(void);
void func_020d6688(void);
void func_020d65a0(void);
extern u16 data_0214d5fc;
extern u8 *data_ov029_0215a540;
extern void func_ov029_0215a248(void);
extern void func_ov029_0215a1e4(void);

s32 func_ov029_0215a0a0(void) {
    volatile s32 sp0;
    volatile s32 sp4;
    s32 var_r6;
    u8 *r1;
    s32 c0;
    u16 var_r0;

    var_r6 = 1;
    func_ov029_0215a2c4();
    func_02003de8(0x1e);
    c0 = 0xc0;
    do {
        func_0200412c();
        r1                = *(u8 **) (data_ov029_0215a540 + 0x18);
        *(u16 *) (r1 + 2) = 0;
        sp0               = c0;
        func_0206cbf8(sp0, *(s32 *) (r1 + 4), (*(u16 *) r1) * 8);
        r1                = *(u8 **) (data_ov029_0215a540 + 0x1c);
        *(u16 *) (r1 + 2) = 0;
        sp4               = c0;
        func_0206cbf8(sp4, *(s32 *) (r1 + 4), (*(u16 *) r1) * 8);
        func_020d6a50();
        var_r0 = func_02003a00();
        if (var_r0 != 0) {
            var_r0 = (u16) (data_0214d5fc & 8);
            if (var_r0 != 0) {
                var_r6 = 0;
            }
        }
        func_02003fa4(var_r0);
        r1 = *(u8 **) (data_ov029_0215a540 + 0x18);
        func_0206bb1c(*(s32 *) (r1 + 4), 0, (*(u16 *) r1) * 8);
        r1 = *(u8 **) (data_ov029_0215a540 + 0x1c);
        func_0206bab4(*(s32 *) (r1 + 4), 0, (*(u16 *) r1) * 8);
        func_020d6688();
        func_0207cb18();
        func_020d65a0();
        func_02003eec();
    } while (var_r6 != 0);
    func_02003cf0(0x3c);
    func_02003aa0((s32) func_ov029_0215a248, (s32) func_ov029_0215a1e4);
    func_020075a4();
    func_020d6578();
    func_020c92d8();
    func_020c7740();
    func_020cbd60();
    func_02004270();
    func_02006894();
    data_ov029_0215a540 = NULL;
    return 0;
}

/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov000_0215a328(void *);
void func_02003de8(s16);
void func_0200412c(void);
s32 func_02103aec(void);
void func_021038e4(void);
void func_020ca618(s32);
void func_02003fa4(void);
void func_0206bb1c(s32, s32, s32);
void func_0206bab4(s32, s32, s32);
void func_0207cb18(void);
void func_02003eec(void);
void func_02003c90(s16);
void func_02003aa0(u32, u32);
void func_02103a20(void);
void func_020075a4(void);
void func_020c92d8(void);
void func_02004270(void);
void func_02006894(void);
void func_020c7740(void);
void func_020cbd60(void);
void func_020d08ac(void);
void func_020e2810(void);
void func_020d6578(void);
void func_020d6a50(void);
void func_020d6688(void);
void func_020d65a0(void);
void func_0206cbf8(s32, s32, s32);
void func_ov000_0215a29c(void);
void func_ov000_0215a220(void);
extern u8 *data_ov000_0215a624;
extern u32 data_ov000_0215a620;
extern u8 *data_02159e70;
extern u8 data_0214d758[];

s32 func_ov000_0215a0a0(void *arg0) {
    s32 again;
    s32 zero;
    s32 cnt;
    u8 *s;
    u8 *q;
    void (*fp)(void *);
    volatile s32 c1;
    volatile s32 c2;

    again = 1;
    func_ov000_0215a328(arg0);
    func_02003de8(0x1E);
    zero = 0;
    cnt  = 0xC0;
    do {
        func_0200412c();
        if (func_02103aec() != 0) {
            func_021038e4();
        }
        s                = data_ov000_0215a624;
        q                = *(u8 **) s;
        *(u16 *) (q + 2) = zero;
        c1               = cnt;
        func_0206cbf8(c1, *(s32 *) (q + 4), *(u16 *) q << 3);
        s                = data_ov000_0215a624;
        q                = *(u8 **) (s + 4);
        *(u16 *) (q + 2) = zero;
        c2               = cnt;
        func_0206cbf8(c2, *(s32 *) (q + 4), *(u16 *) q << 3);
        func_020d6a50();
        func_020ca618(data_ov000_0215a620);
        if (*(s32 *) (data_02159e70 + 0x1000 + 0xD9C) != 0) {
            again = 0;
        }
        func_02003fa4();
        s = data_ov000_0215a624;
        q = *(u8 **) s;
        func_0206bb1c(*(s32 *) (q + 4), zero, *(u16 *) q << 3);
        s = data_ov000_0215a624;
        q = *(u8 **) (s + 4);
        func_0206bab4(*(s32 *) (q + 4), zero, *(u16 *) q << 3);
        func_020d6688();
        fp = *(void (**)(void *))(data_0214d758 + 0x14);
        if (fp != NULL) {
            fp(data_0214d758);
        }
        func_0207cb18();
        func_020d65a0();
        func_02003eec();
    } while (again != 0);
    func_02003c90(0x1E);
    func_02003aa0((u32) func_ov000_0215a29c, (u32) func_ov000_0215a220);
    func_02103a20();
    func_020075a4();
    func_020c92d8();
    func_02004270();
    func_02006894();
    func_020c7740();
    func_020cbd60();
    func_020d08ac();
    func_020e2810();
    func_020d6578();
    {
        u32 *zp = &data_ov000_0215a620;
        *zp     = 0;
    }
    return 0;
}

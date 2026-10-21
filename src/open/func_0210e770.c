#include "m2c.h"
extern void *data_0215a044;
extern void *data_02159e70;
extern u8 data_02150e58[];
extern u8 data_02150e60[];
extern void *data_0215a058;
extern u8 data_0214d5fc[];
void func_0211bd4c(void);
void func_0206cbf8(u32, void *, u32);
void func_020d6a50(void);
void func_0211af10(void);
s32 func_02106f0c(void);
void func_ov004_0215b964(void);
void func_ov004_0215ad34(void);
s32 func_02106ef0(void);
void func_02105cd8(void);
void func_02042324(void);
void func_020a644c(void);
void func_020fe340(void);
void func_ov006_021627e4(void);
void func_020ca618(s32);
s32 func_020ca604(s32);
void func_020fad44(void);
void func_0206a4e4(s32);
void func_0206ab00(void *, void *, void *, s32, void *);
void func_020fad08(void *);
void func_02113ac4(void);
void func_02089240(void);
void func_0210e770(void) {
    u8 *p;
    u8 *h;
    u8 *obj;
    u8 mtx[0x30];
    volatile s32 fill1;
    volatile s32 fill2;

    func_0211bd4c();
    h = M2C_FIELD(data_0215a044, u8 **, 4);
    (*(void (**)(void *)) (h + 0x10))(h);

    p = M2C_FIELD(data_0215a044, u8 **, 0xC);
    M2C_FIELD(p, u16 *, 2) = 0;
    fill1 = 0xC0;
    func_0206cbf8(fill1, M2C_FIELD(p, void **, 4), M2C_FIELD(p, u16 *, 0) << 3);

    p = M2C_FIELD(data_0215a044, u8 **, 0x10);
    M2C_FIELD(p, u16 *, 2) = 0;
    fill2 = 0xC0;
    func_0206cbf8(fill2, M2C_FIELD(p, void **, 4), M2C_FIELD(p, u16 *, 0) << 3);

    if (data_02159e70 != NULL) {
        func_020d6a50();
    }
    func_0211af10();
    if (func_02106f0c() != 0) {
        func_ov004_0215b964();
        func_ov004_0215ad34();
    }
    if (func_02106ef0() != 0) {
        func_02105cd8();
    }
    func_02042324();
    func_020a644c();
    func_020fe340();

    if (M2C_FIELD(data_0215a044, s32 *, 0x14) != 0) {
        func_ov006_021627e4();
    }
    func_020ca618(M2C_FIELD(data_0215a044, s32 *, 8));
    obj = (u8 *) func_020ca604(M2C_FIELD(data_0215a044, s32 *, 8));
    func_020fad44();

    if ((M2C_FIELD(data_02150e58, u32 *, 0xFC) & 1) == 0) {
        *(s32 *) 0x4000440 = 0;
        func_0206a4e4((s32) data_02150e60);
    }

    func_0206ab00(obj + 0x30, obj + 0x54, obj + 0x3C, 1, mtx);
    func_020fad08(mtx);

    if (M2C_FIELD(data_0215a058, u16 *, 4) & 1) {
        func_02113ac4();
    }

    if ((u16) (M2C_FIELD(data_0214d5fc, u16 *, 0) & 4) == 0) {
        return;
    }
    func_02089240();
}

#include "m2c.h"
s32 func_0207832c(s32);
s32 func_020742dc(s32);
s32 func_020742d0(s32);
s32 func_020741d4(s32);
void func_020742bc(s32, s32, s32);
void func_020741cc(s32, s32);
void func_020741e0(s32, s32);
void func_02074160(s32, s32);
s32 func_0207836c(s32);
void func_02073dc4(s32, s32);
extern s32 (*data_0213cd70)(s32, s32, s32);
extern s32 (*data_0213cd78)(s32, s32, s32);
extern void (*data_0213cd74)(s32);
extern void (*data_0213cd7c)(s32);
s32 func_02077ac8(u8 *arg0) {
    s32 tex;
    s32 a;
    s32 b;
    s32 c;
    s32 ok1;
    s32 ok2;
    s32 ok3;
    s32 mdlSet;

    switch (M2C_FIELD(arg0, u32 *, 0)) {
    case 0x30444D42:
    case 0x30585442:
        ok1 = 1;
        ok2 = 1;
        ok3 = 1;
        tex = func_0207832c((s32) arg0);
        if (tex != 0) {
            a = func_020742dc(tex);
            b = func_020742d0(tex);
            c = func_020741d4(tex);
            if (a != 0) {
                a = data_0213cd70(a, 0, 0);
                if (a == 0) {
                    ok1 = 0;
                }
            } else {
                a = 0;
            }
            if (b != 0) {
                b = data_0213cd70(b, 1, 0);
                if (b == 0) {
                    ok2 = 0;
                }
            } else {
                b = 0;
            }
            if (c != 0) {
                c = data_0213cd78(c, M2C_FIELD(tex, u16 *, 0x20) & 0x8000, 0);
                if (c == 0) {
                    ok3 = 0;
                }
            } else {
                c = 0;
            }
            if (!ok1 || !ok2 || !ok3) {
                data_0213cd7c(c);
                data_0213cd74(b);
                data_0213cd74(a);
                return 0;
            }
            func_020742bc(tex, a, b);
            func_020741cc(tex, c);
            func_020741e0(tex, 1);
            func_02074160(tex, 1);
        }
        if (M2C_FIELD(arg0, u32 *, 0) == 0x30444D42) {
            mdlSet = func_0207836c((s32) arg0);
            if (tex != 0) {
                func_02073dc4(mdlSet, tex);
            }
        }
        return 1;
    case 0x30415642:
    case 0x30414D42:
    case 0x30414342:
    case 0x30415442:
    case 0x30505442:
        return 1;
    default:
        return 0;
    }
}

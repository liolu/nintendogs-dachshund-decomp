#include "m2c.h"
extern u32 data_0215422c[];
extern u8 data_02129418[];
extern u16 data_02154300[];
s32 func_02088ecc(void);
void func_02089248(void);
s32 func_0207306c(s32 arg0, s32 arg1);
s32 func_020722d0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_02088f64(void);
void func_02097cac(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void func_02098bac(s32 arg0, s32 arg1, s32 arg2);
void func_02090454(s32 arg0, s32 arg1, s32 arg2);
void func_020907d0(s32 arg0, s32 arg1);
void func_0209114c(void);
s32 func_01ffdb08(s32 arg0);
s32 func_02035250(void);
s32 func_02027050(s32 arg0);
void func_02091e84(s32 arg0);
void func_0208aa98(s32 arg0) {
    s16 var_r7;
    u8 var_r6;
    s32 var_a;
    s16 var_r5c;
    s32 var_r4b;

    var_a = data_0215422c[1];
    if (arg0 == 4) {
        if (func_02088ecc() == 0) {
            if (data_0215422c[0xC] == 0) {
                arg0 = 5;
            }
        }
    }
    var_r6 = data_02129418[arg0];
    data_02154300[1] = arg0;
    func_02089248();
    func_0207306c(var_r6, var_a);
    if (var_r6 == 0x65) {
        func_02097cac(func_020722d0(data_0215422c[1], 0x13950, 0, 0, 0), func_02088f64(), 0x4E, 0, 0xD, 1);
        func_02098bac(func_02088f64(), 0x4E, 1);
    }
    var_r7 = 0;
    var_r5c = 0;
    var_r6 = 1;
    do {
        func_02090454(var_r7 + 0x1F, var_r6, var_r5c);
        var_r7++;
    } while (var_r7 < 6);
    func_020907d0(arg0 + 0x1F, 1);
    func_0209114c();
    var_r5c = 0;
    do {
        var_r4b = func_01ffdb08(var_r5c);
        if (var_r4b != 0) {
            if (func_02035250() == 0) {
                if (func_02027050(var_r4b) == 0) {
                    func_02091e84(var_r4b);
                }
            }
        }
        var_r5c++;
    } while (var_r5c < 3);
}

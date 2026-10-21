#include "m2c.h"

extern u8 data_0214cd5c;
extern M2C_UNK data_0214cd74;
extern char data_02134f20[12];
extern char BuildInfo[];
void func_0200313c(void);
void func_02005928(void);
void func_02003110(void);
void func_020063bc(void);
s32 func_0208050c(s32);
s32 func_02080520(s32);
s32 func_02003960(s32, s32);
s32 func_0207d6f4(s32, s32, s32);
M2C_UNK func_02002fc0(M2C_UNK *, M2C_UNK);

void func_0200303c(void) {
    s32 d;

    func_0200313c();
    func_02005928();
    M2C_FIELD(&data_0214cd5c, u8 **, 0xC) = (u8 *) (BuildInfo - 0xb00);
    M2C_FIELD(&data_0214cd5c, s32 *, 0x10) = func_0208050c(0);
    func_02003110();
    d = func_0208050c(0);
    d = func_02080520(0) - d;
    M2C_FIELD(&data_0214cd5c, s32 *, 0x14) = func_02003960(func_0208050c(0), d);
    d = func_0208050c(4);
    d = func_02080520(4) - d;
    if (d == 0) {
        M2C_FIELD(&data_0214cd5c, s32 *, 0x34) = 0;
    } else {
        M2C_FIELD(&data_0214cd5c, s32 *, 0x34) = func_0207d6f4(func_0208050c(4), d, 1);
    }
    func_02002fc0(&data_0214cd74, 0);
    M2C_FIELD(&data_0214cd5c, char **, 0x18) = data_02134f20;
    func_020063bc();
}

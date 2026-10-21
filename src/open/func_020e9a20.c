#include "m2c.h"
extern u8 *data_02159e70;
void func_020ea1b4();
void func_020ea040();
void func_020e8544();
s32 func_0209a094();
void func_020eb9fc();
s32 func_020ec050();
void func_020ec028();
void func_020e9a20(s32 arg0, s32 arg1) {
    s32 cnt;
    s32 color;
    s32 flag;
    u8 *r8;
    u8 *r7;
    s32 i;
    u8 buf[0x20];

    r7 = (u8 *) (data_02159e70 + 0xC4);
    cnt = 0;
    func_020ea1b4(buf, arg0);
    if (arg1 < 0 || arg1 >= 0x46) {
        arg1 = 0;
    }
    r8 = r7 + 0x94 + arg1 * 0x20;
    func_020ea040(r7, buf, r8);
    func_020e8544(5, 2, M2C_FIELD(buf, u16 *, 0), M2C_FIELD(r8, s32 *, 8), arg0);
    i = 0;
    for (; i < 3; i++) {
        cnt += (*(s16 *) (r8 + 2) == ((s16 *) r7)[0x4AA + i]);
        cnt += (*(s16 *) (r8 + 2) == ((s16 *) r7)[0x4AD + i]);
    }
    for (i = 0; i < M2C_FIELD(r7, s32 *, 0); i++) {
        flag = (*(s16 *) (r8 + 2) == ((s16 *) r7)[0x4AA + func_0209a094(i)]) ? 1 : 0;
        if (flag != 0) {
            color = 0x29;
        } else if (cnt >= M2C_FIELD(r8, u16 *, 0xC)) {
            color = 0x2A;
        } else {
            color = 0x28;
        }
        func_020eb9fc(2, M2C_FIELD(buf, u16 *, (i + 7) * 2), flag);
        func_020ec028(2, M2C_FIELD(buf, u16 *, (i + 4) * 2), func_020ec050(2, color));
    }
}

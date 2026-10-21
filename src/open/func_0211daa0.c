#include "m2c.h"
extern void *data_0215a078;
extern M2C_UNK func_0210e4f0;
M2C_UNK func_02002e50();
M2C_UNK func_02002e48();
M2C_UNK func_020038a8();
M2C_UNK func_02111d6c();
M2C_UNK func_020f3cd0();
M2C_UNK func_02111dd0();
M2C_UNK func_021112d8();
M2C_UNK func_02002fc0();
M2C_UNK func_02002e60();
M2C_UNK func_02111740();
M2C_UNK func_02111960();
M2C_UNK func_02111220();
M2C_UNK func_020d2b28();
M2C_UNK func_02111d58();
s32 func_0211daa0(s32 arg0) {
    s32 ret;
    s32 again;
    s32 h;
    s32 *obj;
    s16 v;
    u32 msg;
    u8 buf[0x20];

    ret = 0;
    v = M2C_FIELD(arg0, s16 *, 6);
    again = 1;
    h = func_02002e48(func_02002e50());
    obj = (s32 *) func_020038a8((s32 *) h, 0x2324);
    M2C_FIELD(obj, u16 *, 0) = 1;
    M2C_FIELD(obj, u16 *, 2) = v;
    M2C_FIELD(obj, u16 *, 4) = 0;
    data_0215a078 = obj;
    func_02111d6c(h);
    func_020f3cd0();
    do {
        func_02111dd0();
        func_021112d8(M2C_FIELD(arg0, s16 *, 6));
        func_02002fc0(buf, &func_0210e4f0);
        msg = func_02002e60(buf, 0);
        M2C_FIELD(data_0215a078, u16 *, 0) = 0;
        M2C_FIELD(data_0215a078, u16 *, 4) = 0;
        switch (msg) {
        case 1:
            again = 0;
            break;
        case 6:
            func_02111740(0, M2C_FIELD(arg0, s16 *, 6), M2C_FIELD(arg0, s16 *, 8));
            func_02002fc0(buf, &func_0210e4f0);
            func_02002e60(buf, 0);
            break;
        case 9:
            again = 0;
            ret = 1;
            break;
        case 0xE:
            func_02111960(M2C_FIELD(arg0, s16 *, 6));
            func_02002fc0(buf, &func_0210e4f0);
            func_02002e60(buf, 0);
            break;
        case 0x15:
            func_02111220(M2C_FIELD(arg0, s16 *, 6));
            func_02002fc0(buf, &func_0210e4f0);
            func_02002e60(buf, 0);
            M2C_FIELD(data_0215a078, u16 *, 4) = 1;
            break;
        case 0x12:
            func_020d2b28(0x15, 1);
            break;
        }
    } while (again != 0);
    func_02111d58();
    data_0215a078 = 0;
    return ret;
}

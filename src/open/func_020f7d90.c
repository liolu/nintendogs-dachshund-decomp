#include "m2c.h"
s32 func_020a6d60(M2C_UNK);
void func_020f7c5c(M2C_UNK, M2C_UNK);
void func_020ca7a0(M2C_UNK, M2C_UNK);
void func_020a78ac(M2C_UNK, M2C_UNK);
void func_020780c4(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020ca7ac(M2C_UNK, M2C_UNK);
void func_020a67c0(M2C_UNK);
void func_020f7d90(s32 arg0) {
    s32 i;
    s32 count;
    s32 end;
    s32 v9c;
    s32 vca;
    s32 v18c;
    s32 vmat;
    s32 obj;
    s32 sub;
    s32 p;

    count = func_020a6d60(0x45);
    i = 0;
    if (count > 0) {
        end = arg0 + count * 0xc;
        p = arg0;
        vmat = 0;
        v18c = 0;
        v9c = 0;
        vca = 0xa;
        do {
            obj = M2C_FIELD(p, s32 *, 0x1b0);
            M2C_FIELD(obj, s16 *, 0x9c) = (s16) v9c;
            func_020f7c5c(obj, M2C_FIELD(arg0, s32 *, 0x28));
            if (i == 0) {
                func_020ca7a0(obj, vca);
                M2C_FIELD(obj, s32 *, 0x18c) = v18c;
                M2C_FIELD(obj, s16 *, 0xa6) = (s16) v18c;
            } else {
                sub = M2C_FIELD(end + i * 0xc, s32 *, 0x1a4);
                func_020a78ac(obj, sub);
                func_020780c4(M2C_FIELD(M2C_FIELD(sub, s32 *, 0x1c), s32 *, 8), vmat, 8);
                func_020ca7ac(sub, 8);
            }
            func_020a67c0(obj);
            i = (s16) (i + 1);
            p += 0xc;
        } while (i < count);
    }
}

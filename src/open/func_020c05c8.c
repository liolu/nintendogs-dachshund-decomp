#include "m2c.h"
#include "engine.h"
s32 func_02080c28();                                /* extern */
M2C_UNK func_02080c3c(s32);                         /* extern */
extern u16 data_0215566c;
extern s32 data_0215567c;
s32 func_02080c28();
M2C_UNK func_02080c3c(s32);
extern s32 data_02155678;
extern u16 data_02155668;
extern u16 data_02155664;
extern M2C_UNK data_02155680;
extern s32 data_02156eac;
extern s32 data_02156eb8;
extern s32 data_02156ebc;
extern s32 data_02156eb4;
extern s32 data_02156eb0;
extern s16 data_02156ea8;
extern u16 data_02156ea0;
extern u16 data_02156ea4;
extern void *data_02156ec0;
s32 func_020648b8(M2C_UNK, void *);
s32 func_020643e8(void);
s32 func_020c0720(s32, s32);
s32 func_020c05a4(s32, s32);
s32 func_020c0548(s32, s32);
s32 func_020c04f0(s32, s32);
s32 func_020c0678(s32);
s32 func_020c0ddc(void);
s32 func_020c0db0(void);
s32 func_020c0d08(void);
s32 func_020c046c(void);
void func_020bf9a8(u16 arg0);
u16 func_020bfba4(u16 arg0);
s32 func_020c0828(void);
u16 func_020bfafc(void);
s32 func_020c0088(s32 arg0, s32 arg1);
s32 func_020c0448(s32 arg0, s32 arg1);
void func_020c0ba4(s32 arg0);
void func_020c0cdc(void);
s32 func_0206ffd0(s32);
s32 func_0206ff0c(s32, s32, s32, s32);
s32 func_020c05c8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, u16 *arg3) {
    s32 temp_r4;

    temp_r4 = func_02080c28(arg0);
    if ((data_0215567c == 1) || (data_0215566c == 1)) {
        *arg3 = 0x17;
        return 0;
    }
    *arg3 = ((u16 (*)(M2C_UNK)) arg1)(arg2);
    if (*arg3 == 2) {
        data_0215567c = 1;
        func_02080c3c(temp_r4);
        return 1;
    }
    func_02080c3c(temp_r4);
    return 0;
}

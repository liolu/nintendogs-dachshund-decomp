#include "m2c.h"
#include "engine.h"
extern void *data_02156ec0;
s32 func_0206ffd0(s32);
s32 func_0206ff0c(s32, s32, s32, s32);
extern s32 data_02155678;
extern s32 data_0215567c;
extern u16 data_0215566c;
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
s32 func_020648b8(M2C_UNK, void *);
s32 func_02080c28();
M2C_UNK func_02080c3c(s32);
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
u8 func_020c0ec0(u8 arg0) {
    s32 i;
    u8 count;
    s32 j;
    s32 out[2];

    count = arg0;
    if (func_0206ff0c(0x438, func_0206ffd0(M2C_FIELD(data_02156ec0, u16 *, 0x10A)), (s32) &out[0], (s32) &out[1]) != 0) {
        count++;
    }
    count += 2;
    for (i = 0; i < 0x10; i++) {
        if (((s32 *) data_02156ec0)[i + 0x10] != 0) {
            for (j = 0; j < 0xA; j++) {
                func_0206ffd0(M2C_FIELD(data_02156ec0, u16 *, 0x10A));
            }
            count++;
        }
    }
    return count;
}

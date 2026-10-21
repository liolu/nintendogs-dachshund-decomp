#include "m2c.h"

typedef struct {
    s32 x, y, z;
} UnkVec32;

M2C_UNK func_02006a20(void *, void *);              /* extern */
void func_0206810c(void *, void *, void *);         /* extern */
void func_020a7460(void *);                         /* extern */
void func_020a7470(void *);                         /* extern */
void func_02029008();                               /* extern */
unsigned char *func_01ffdb08(int);                  /* extern */
void func_020faa40(void *arg0) {
    UnkVec32 vec_a;
    UnkVec32 vec_b;
    UnkVec32 vec_c;
    s32 a0, a1, a2;
    s16 i;
    unsigned char *ent;

    switch (M2C_FIELD(arg0, s16 *, 0x90)) {
    case 0:
        func_020a7460(arg0);
        break;
    case 1:
        a2 = M2C_FIELD(arg0, s32 *, 0xD0);
        a1 = M2C_FIELD(arg0, s32 *, 0xCC);
        a0 = M2C_FIELD(arg0, s32 *, 0xC8);
        vec_a.x = a0;
        vec_a.y = a1;
        vec_a.z = a2;
        a2 = M2C_FIELD(arg0, s32 *, 0xDC);
        a1 = M2C_FIELD(arg0, s32 *, 0xD8);
        a0 = M2C_FIELD(arg0, s32 *, 0xD4);
        vec_b.x = a0;
        vec_b.y = a1;
        vec_b.z = a2;
        func_0206810c(&vec_a, &vec_b, &vec_c);
        func_02006a20(&vec_a, &vec_a);
        func_02006a20(&vec_c, &vec_c);
        func_0206810c(&vec_c, &vec_a, &vec_b);
        M2C_FIELD(arg0, s32 *, 0xC8) = vec_a.x;
        M2C_FIELD(arg0, s32 *, 0xCC) = vec_a.y;
        M2C_FIELD(arg0, s32 *, 0xD0) = vec_a.z;
        M2C_FIELD(arg0, s32 *, 0xD4) = vec_b.x;
        M2C_FIELD(arg0, s32 *, 0xD8) = vec_b.y;
        M2C_FIELD(arg0, s32 *, 0xDC) = vec_b.z;
        M2C_FIELD(arg0, s32 *, 0xE0) = vec_c.x;
        M2C_FIELD(arg0, s32 *, 0xE4) = vec_c.y;
        M2C_FIELD(arg0, s32 *, 0xE8) = vec_c.z;
        break;
    case 2:
        func_020a7470(arg0);
        break;
    case 3:
        M2C_FIELD(arg0, s32 *, 0xA8) = 0;
        for (i = 0; i < 3; i++) {
            ent = func_01ffdb08(i);
            if (ent != 0) {
                func_02029008(ent, 0x4B, 1);
            }
        }
        break;
    }
}

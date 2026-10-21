#include "m2c.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0xE];
    s16 unk_12[3];
    u8 pad_18[0x1E];
    u16 unk_36;
} Unk_0208e664;

extern Unk_0208e664 data_02154350;

s32 func_02070bec(void **, s32, s16 *);
s32 func_01ffdb08(s16);
void func_0209150c(M2C_UNK, s32);

void func_0208e664(void) {
    Unk_0208e664 *p = &data_02154350;
    s16 i;

    if (p->unk_36 != 0) {
        return;
    }
    if (p->unk_00 == NULL) {
        return;
    }
    for (i = 0; i < 3; i++) {
        s16 v = p->unk_12[i];

        func_02070bec((void **) p, i, &p->unk_12[i]);
        if (v != p->unk_12[i] && p->unk_12[i] > 0) {
            s32 x = func_01ffdb08(i);

            if (x != 0) {
                func_0209150c(x, p->unk_12[i] + 0x3D);
            }
        }
    }
}

#include "m2c.h"

s32 func_02028120(s32 arg0);
s32 func_0203535c(void *arg0);
s32 func_0203e5ac(void *arg0, s32 arg1, s32 arg2);
void *func_020350fc(void *arg0);
s32 func_ov003_02196338(void *arg0);
s32 func_02028714(void *arg0, s32 arg1, s32 arg2);
s32 func_0202c9f0(void *arg0, s32 arg1);
s32 func_0203e5e8(void *arg0, s32 arg1);
extern char data_0214da84[];

typedef struct {
    u8 pad0[0x8B];
    s8 unk8B;
    u8 pad1[0x70];
    u16 unkFC;
    u8 pad2[0x54];
    s16 unk152;
    u8 pad3[0x260];
    s32 unk3B4;
    s32 unk3B8;
    s32 unk3BC;
    u8 pad4[0x588];
    s32 unk948;
} Unk_02011218;

void func_02011218(void *arg0) {
    Unk_02011218 *p;
    s16 temp_r0_2;
    s32 var_r0;
    s32 var_r0_2;
    s8 temp_r0_3;
    s8 temp_r0_4;
    void *temp_r0;
    u32 *temp_r3;
    u32 temp_r2;
    u16 temp_r0_5;
    s32 offset;

    p = (Unk_02011218 *) arg0;
    if (p->unk152 == 0x15C) {
        if (func_0203535c(arg0) != 0) {
            func_0203e5ac(arg0, 0, 0x15D);
        }
    } else {
        offset = func_02028120((s32) arg0) >> 5;

        temp_r3 = *(u32 **) data_0214da84;
        temp_r2 = *temp_r3 * 0x10DCD + 1;
        temp_r0_5 = (u16) ((u16) temp_r2 * 10u >> 16);
        *temp_r3 = temp_r2;
        p->unk3B4 = p->unk3B4 + offset * (temp_r0_5 - 5);

        temp_r3 = *(u32 **) data_0214da84;
        temp_r2 = *temp_r3 * 0x10DCD + 1;
        temp_r0_5 = (u16) ((u16) temp_r2 * 10u >> 16);
        *temp_r3 = temp_r2;
        p->unk3B8 = p->unk3B8 + offset * (temp_r0_5 - 5);

        temp_r3 = *(u32 **) data_0214da84;
        temp_r2 = *temp_r3 * 0x10DCD + 1;
        temp_r0_5 = (u16) ((u16) temp_r2 * 10u >> 16);
        *temp_r3 = temp_r2;
        p->unk3BC = p->unk3BC + offset * (temp_r0_5 - 5);
    }
    temp_r0 = func_020350fc(arg0);
    if (temp_r0 != NULL) {
        func_0203e5ac(arg0, 2, 1);
        temp_r0_2 = M2C_FIELD(temp_r0, s16 *, 0x90);
        switch (temp_r0_2) {
            case 4:
                temp_r0_3 = p->unk8B;
                if (temp_r0_3 != 5) {
                    if (temp_r0_3 != 4) {
                        p->unk948 = 1;
                    }
                }
                break;
            case 7:
                temp_r0_4 = p->unk8B;
                if ((temp_r0_4 != 5) && (temp_r0_4 != 4)) {
                    p->unk948 = 8;
                }
                break;
        }
        var_r0 = func_ov003_02196338(arg0);
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        var_r0_2 = 1;
    } else if (func_02028714(arg0, 0, 0) != 0) {
        var_r0_2 = 1;
    } else if (func_0202c9f0(arg0, 0) != 0) {
        var_r0_2 = 1;
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 != 0) {
        return;
    }
    if (p->unkFC > 0x28) {
        temp_r3 = *(u32 **) data_0214da84;
        temp_r2 = *temp_r3 * 0x10DCD + 1;
        temp_r0_5 = (u16) ((u16) temp_r2 * 40u >> 16);
        *temp_r3 = temp_r2;
        if (temp_r0_5 != 0) {
            return;
        }
        func_0203e5e8(arg0, 0);
    }
}

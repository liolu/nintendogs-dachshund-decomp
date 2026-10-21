#include "m2c.h"
extern void *data_021555f8;
extern void *data_0215a064;
extern M2C_UNK data_0213ef18;
extern s32 func_020b28d8(void);
extern s32 func_02044980(M2C_UNK);
extern void func_020b95d0(s32, s32, s32, s32);
typedef struct {
    u8 pad0[0x90];
    s16 f90;
    s16 f92;
    s16 pad94[2];
    s16 f98;
} W;
#pragma opt_if_convert off
void func_020bbd7c(s32 arg0, s32 arg1, s32 arg2) {
    s16 sw;
    s32 idx;
    W *obj;
    s32 ret;
    s32 id;
    s32 st;
    s32 flag;

    idx = *(s16 *) ((u8 *) data_0215a064 + 0x7A);
    if (idx >= 0) {
        if (*(s16 *) ((u8 *) data_021555f8 + 0x20) > idx) {
            goto load;
        }
    }
    obj = (W *) 0;
    goto join;
load:
    obj = (W *) *(volatile u32 *) ((u8 *) data_021555f8 + idx * 4 + 4);
join:
    ret = func_020b28d8();
    sw = *(volatile s16 *) ((u8 *) obj + 0x90);
    if ((u16) ((s16) (sw - 2)) <= 1) {
        M2C_FIELD(&data_0213ef18, s32 *, 4) = 0;
        func_020b95d0(arg0, 0x10, -1, 0);
        return;
    }
    if (sw == 6) {
        id = obj->f98;
        if (M2C_FIELD(&data_0213ef18, s32 *, 4) != 0) {
            func_020b95d0(arg0, 0x1A, id, 0);
            return;
        }
        func_02044980(0);
        if (id != -1) {
            func_020b95d0(arg0, 0x19, id, 0);
        }
        if (*(s32 *) ((u8 *) data_0215a064 + 0x98) > 8 && *(s16 *) ((u8 *) data_0215a064 + 0x88) > 0x50) {
            M2C_FIELD(&data_0213ef18, s32 *, 4) = 1;
        }
        return;
    }
    if (ret != -1) {
        id = obj->f98;
        if (ret != id) {
            return;
        }
        func_020b95d0(arg0, 0x12, id, 0);
        return;
    }
    st = obj->f92;
    if (st == 3) {
        if (*(volatile s16 *) ((u8 *) obj + 0x90) == 1) {
            flag = 1;
            goto test;
        }
    }
    flag = 0;
test:
    if (flag != 0) {
        goto notify;
    }
    if (st == 3 || st == 6 || st == 8) {
        if (*(volatile s16 *) ((u8 *) obj + 0x90) == 4) {
            flag = 1;
            goto test2;
        }
    }
    if (st == 5) {
        if (*(volatile s16 *) ((u8 *) obj + 0x90) == 7) {
            flag = 1;
            goto test2;
        }
    }
    if (st == 5) {
        if (*(volatile s16 *) ((u8 *) obj + 0x90) == 1) {
            flag = 1;
            goto test2;
        }
    }
    flag = 0;
test2:
    if (flag == 0) {
        goto countdown;
    }
notify:
    func_020b95d0(arg0, 0x15, -1, arg2);
    data_0213ef18 = (s16) arg1;
    return;
countdown:
    if (--data_0213ef18 > 0) {
        return;
    }
    func_020b95d0(arg0, 2, -1, 0);
    data_0213ef18 = -1;
}

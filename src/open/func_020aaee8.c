#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

typedef struct {
    s32 _00, _01, _02;
    s32 _10, _11, _12;
    s32 _20, _21, _22;
    s32 _30, _31, _32;
} Mtx43;

typedef struct {
    u8 unk_0x0[0x1C];
    s32 unk_0x1C;
    u8 unk_0x20[0x60];
    Mtx43 unk_0x80;
} UnkSub;

typedef struct {
    u8 unk_0x0[0x90];
    s16 unk_0x90;
    u8 unk_0x92[6];
    s16 unk_0x98;
    s16 unk_0x9A;
    u8 unk_0x9C[0x178];
    UnkSub *unk_0x214;
} UnkMain;

s32 func_01ffdb08(s16);
s32 func_02067ca0(s32, s32);
void func_02027168(s32, void *, s32);
void func_020a8ac8(void *, s32, void *);
void func_01ff832c(s32, Vec *, Vec *, Vec *);
void func_020bd064(UnkSub *, s32, void *);
void func_0206ccdc(Mtx43 *, Mtx43 *);
void func_02067010(Mtx43 *, s32, s32, s32);
void func_01ff810c(Mtx43 *, Mtx43 *, Mtx43 *);

extern void *data_027c0b64; /* main singleton */

void func_020aaee8(s32 arg0, Mtx43 *arg1) {
    UnkMain *main;
    UnkSub *sub;
    Vec vec;
    Vec axis;
    Vec up;
    Vec v24;
    Vec v30;
    Mtx43 mat;
    Vec v6c;
    Mtx43 mat2;
    Mtx43 src;
    s32 t;
    s32 v;
    s32 w;
    s32 r10;
    s32 r11;
    s32 r12;
    s32 x;
    s32 y;
    s32 z;

    main = (UnkMain *) data_027c0b64;
    sub = main->unk_0x214;
    t = func_01ffdb08(main->unk_0x98);
    v = 0;
    if (sub->unk_0x1C == 0 && t != 0) {
        v = t;
    } else if (sub->unk_0x1C == 1 && main->unk_0x90 == 7 && t != 0) {
        v = func_01ffdb08(main->unk_0x9A);
    }
    if (v != 0) {
        w = func_02067ca0(0xB33, 0x1000);
        func_02027168(v, &src, 0xC);
        axis.x = src._00;
        axis.y = src._01;
        axis.z = src._02;
        up.x = src._20;
        up.y = src._21;
        up.z = src._22;
        up.x = -up.x;
        up.y = -up.y;
        up.z = -up.z;
        r12 = src._12;
        r11 = src._11;
        r10 = src._10;
        func_020a8ac8(main, v, &vec);
        func_01ff832c(-0x99A, &axis, &vec, &vec);
        v24 = axis;
        v24.x = -v24.x;
        v24.y = -v24.y;
        v24.z = -v24.z;
        v30 = up;
        v30.x = -v30.x;
        v30.y = -v30.y;
        v30.z = -v30.z;
        arg1->_00 = v30.x;
        arg1->_01 = v30.y;
        arg1->_02 = v30.z;
        arg1->_10 = r10;
        arg1->_11 = r11;
        arg1->_12 = r12;
        arg1->_20 = v24.x;
        arg1->_21 = v24.y;
        arg1->_22 = v24.z;
        func_02067010(&mat, w, w, w);
        func_01ff810c(&mat, arg1, arg1);
        z = vec.z;
        y = vec.y;
        x = vec.x;
        arg1->_30 = x;
        arg1->_31 = y;
        arg1->_32 = z;
        return;
    }
    w = func_02067ca0(0xB33, 0x1000);
    func_020bd064(sub, 3, &v6c);
    func_0206ccdc(&sub->unk_0x80, arg1);
    func_02067010(&mat2, w, w, w);
    func_01ff810c(&mat2, arg1, arg1);
    z = v6c.z;
    y = v6c.y;
    x = v6c.x;
    arg1->_30 = x;
    arg1->_31 = y;
    arg1->_32 = z;
}

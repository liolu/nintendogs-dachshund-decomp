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
    u8 unk_0x0[0x4];
    Vec *unk_0x4;
    u8 unk_0x8[0x18];
    struct {
        u8 unk_0x0[0x60];
        Mtx43 unk_0x60;
    } unk_0x20;
} UnkSub;

typedef struct {
    u8 unk_0x0[0x214];
    UnkSub *unk_0x214;
} UnkMain;

typedef struct {
    u8 unk_0x0[0x24];
    Vec unk_0x24;
} UnkArg1;

extern void *data_027c0b64;

void func_020bd064(const UnkSub *arg0, s32 arg1, void *arg2);
s32 func_02067ca0(s32 num, s32 den);
s32 func_02067cbc(const Vec *a, const Vec *b);
void func_02067010(Mtx43 *m, s32 x, s32 y, s32 z);
void func_0206ccdc(const Mtx43 *src, Mtx43 *dest);
void func_01ff810c(const Mtx43 *a, const Mtx43 *b, Mtx43 *ab);

void func_020aad04(s32 arg0, UnkArg1 *arg1) {
    s32 buf[12];
    Vec v0;
    Vec v1;
    UnkMain *main = (UnkMain *) data_027c0b64;
    UnkSub *sub = main->unk_0x214;
    s32 m;
    s32 w;
    s32 v;
    s32 x;
    s32 y;
    s32 z;

    func_020bd064(sub, 1, &v0);
    func_020bd064(sub, 2, &v1);
    m = func_02067ca0(0x1000, 0x1000);
    w = (s32) (((s64) 0xb33 * m + 0x800) >> 12);
    v = func_02067cbc(&v1, &v0);
    func_02067010((Mtx43 *) buf, w, w, (s32) (((s64) v * m + 0x800) >> 12));
    func_0206ccdc((const Mtx43 *) ((u8 *) sub + 0x20) + 1, (Mtx43 *) arg1);
    func_01ff810c((const Mtx43 *) buf, (const Mtx43 *) arg1, (Mtx43 *) arg1);
    x = v0.x;
    z = v0.z;
    y = v0.y;
    arg1->unk_0x24.x = x;
    arg1->unk_0x24.y = y;
    arg1->unk_0x24.z = z;
}

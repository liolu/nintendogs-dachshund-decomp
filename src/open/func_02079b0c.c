#include "m2c.h"
extern void *data_021510bc;
extern const u8 data_0212924c[][4];
extern const u8 data_0212924d[][4];
extern const u8 data_0212924e[][4];
extern const u8 data_0212924f[][4];
void func_0206cef0(void *arg0);
typedef struct {
    u32 unk00;
    u8 unk04[0x24];
    s32 unk28[9];
} UnkAnmObj;
void func_02079b0c(UnkAnmObj *arg0) {
    u8 *rs;
    u8 *info;
    u8 *c;
    u16 *entry;
    u8 *node;
    u32 off;
    u8 *p;
    u16 w;
    s16 *half;
    s32 A;
    s32 B;
    s32 idx;

    rs = data_021510bc;
    info = *(u8 **)(rs + 0xD4);
    c = *(u8 **)(rs + 0);
    entry = (u16 *)(info + *(u16 *)(info + 6));
    node = (u8 *)entry + *entry * c[1];
    off = *(u32 *)(node + 4);
    w = *(u16 *)(info + off);
    p = info + off;
    half = (s16 *)(p + 4);
    if (!(w & 1)) {
        half += 6;
    }
    if (!(w & 2)) {
        if (w & 8) {
            A = half[0];
            B = half[1];
            idx = (w & 0xF0) >> 4;
            func_0206cef0(arg0->unk28);
            arg0->unk28[idx] = (*(u16 *)p & 0x100) ? -0x1000 : 0x1000;
            arg0->unk28[data_0212924c[idx][0]] = A;
            arg0->unk28[data_0212924d[idx][0]] = B;
            if (*(u16 *)p & 0x200) {
                B = -B;
            }
            arg0->unk28[data_0212924e[idx][0]] = B;
            if (*(u16 *)p & 0x400) {
                A = -A;
            }
            arg0->unk28[data_0212924f[idx][0]] = A;
        } else {
            arg0->unk28[0] = *(s16 *)(p + 2);
            arg0->unk28[1] = half[0];
            arg0->unk28[2] = half[1];
            arg0->unk28[3] = half[2];
            arg0->unk28[4] = half[3];
            arg0->unk28[5] = half[4];
            arg0->unk28[6] = half[5];
            arg0->unk28[7] = half[6];
            arg0->unk28[8] = half[7];
        }
        return;
    }
    arg0->unk00 |= 2;
}

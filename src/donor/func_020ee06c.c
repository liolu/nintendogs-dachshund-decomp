/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209f2d4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209f2d4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef struct {
    u8 pad0[0x18];
    u16 f18;
    u8 pad1[2];
    u32 f1c;
    u8 pad2[0x1e];
    s16 f3e;
} GA;
typedef struct {
    u32 f00;
    u8 pad0[8];
    s16 f0c;
    u16 f0e;
    u16 f10;
    u8 pad1[6];
    u16 f18;
    u16 f1a;
    u32 f1c;
    u8 pad2[2];
    s16 f22;
    u16 f24;
    u8 pad3[0xe6];
    u32 f10c;
} GB;
typedef struct {
    u32 f00;
} GC;
extern GA data_02154cb8;
extern GB data_02154dd8;
extern s16 data_02154d88;
extern GC data_02154ddc;
extern void func_020f07bc(int a);
extern void func_02072214(void *p, int a, int b);
void func_020ee06c(void) {
    GB *pB;
    GB *pg;
    u16 r5;
    s32 iVar6;
    s32 iVar7;

    pB = &data_02154dd8;
    r5 = data_02154cb8.f18;
    if (data_02154cb8.f1c == 0) {
        func_020f07bc(8);
    }
    if (data_02154cb8.f3e == 3) {
        return;
    }
    if (data_02154cb8.f1c != 0) {
        return;
    }
    if (r5 == 29) {
        return;
    }
    if (r5 == 30) {
        return;
    }
    if (data_02154d88 == 100) {
        return;
    }
    pg      = &data_02154dd8;
    pg->f0e = 100;
    iVar7   = 60;
    if (pg->f00 != 0) {
        if (pg->f1c != 0) {
            iVar7              = pg->f1a - pg->f18;
            *(vu16 *) &pg->f18 = 0;
            *(vu32 *) &pg->f1c = 0;
        }
        iVar6 = pg->f0c * 100;
        func_02072214(pg, iVar6 / 100, iVar7);
    }
    {
        GB *pb             = &data_02154dd8;
        *(vu16 *) &pb->f24 = 100;
        if (*(vu32 *) &data_02154ddc.f00 != 0) {
            iVar6 = pb->f22 * 100;
            func_02072214(&data_02154ddc, iVar6 / 100, 60);
        }
    }
    data_02154dd8.f10 = 100;
    pB->f10c          = 0;
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02006994 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02006994.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef struct {
    void *p;
    u16 a;
    u16 b;
} A8;
typedef struct {
    void *p;
    u32 x4;
    u32 x8;
    u32 xc;
    u16 h10;
    u16 pad12;
    u32 x14;
    u16 h18;
    u16 pad1a;
    u32 x1c;
} B32;
extern u32 data_0214b02c;
extern A8 data_0214b030[8];
extern B32 data_0214b070[7];
extern u8 data_021338ec[];
extern u8 data_021338f8[];
void func_02006920(u32 param_1) {
    s32 i;

    data_0214b02c = param_1;
    for (i = 0; i < 8; i++) {
        data_0214b030[i].p = data_021338ec;
        data_0214b030[i].a = 255;
        data_0214b030[i].b = 0;
    }
    for (i = 0; i < 7; i++) {
        data_0214b070[i].p   = data_021338f8;
        data_0214b070[i].x4  = 0;
        data_0214b070[i].x8  = 0;
        data_0214b070[i].xc  = 0;
        data_0214b070[i].h10 = 0;
        data_0214b070[i].x14 = 0;
        data_0214b070[i].h18 = 0;
        data_0214b070[i].x1c = 0;
    }
}

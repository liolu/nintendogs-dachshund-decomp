/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020954d8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020954d8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_02154c48;
void func_020cab58(s16 param_1) {
    u8 *p;
    u8 *q;
    p                  = *(u8 **) &data_02154c48;
    p                  = p + (s32) param_1 * 24;
    p                  = p + 0x1000;
    q                  = *(u8 **) (p + 0x44c);
    *(s16 *) (q + 10)  = -1;
    q                  = q + 0x800;
    *(u16 *) (q + 254) = *(u16 *) (q + 254) | 1;
}

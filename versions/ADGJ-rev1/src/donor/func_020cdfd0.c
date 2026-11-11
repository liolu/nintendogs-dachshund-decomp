/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020cdfd0 from projets/nintendogs-chihuahua-friends/src/donor/func_020cdfd0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02154c70[];
extern s32 _s32_div_f(s32 a, s32 b);
extern void func_0207d0e0(s32 a, s32 b, u8 *c, s32 d);
void func_020cdfd0(s32 param_1, s32 param_2) {
    s32 i = 0;
    u8 *local;
    u8 *base;
    u8 *q;
    s32 c0;
    s32 c1;
    s32 c2;
    s32 off;
    u16 uVar1;
    u16 uVar2;
    s32 r;
    s32 m0;
    s32 m1;
    s32 m2;

    off = 0;
    do {
        if (param_1 == 0) {
            local = *(u8 **) data_02154c70;
            base  = *(u8 **) (*(u8 **) (local + 0x18) + 0xc);
            uVar1 = *(u16 *) (base + off + 0x1d2);
            c0    = (s16) (uVar1 & 0x1f);
            c1    = (s16) ((uVar1 & 0x3e0) >> 5);
            c2    = (s16) ((uVar1 & 0x7c00) >> 10);
        } else if (param_1 == param_2) {
            local = *(u8 **) data_02154c70;
            base  = *(u8 **) (*(u8 **) (local + 0x18) + 0xc);
            uVar1 = *(u16 *) (base + 0x1de);
            c0    = (s16) (uVar1 & 0x1f);
            c1    = (s16) ((uVar1 & 0x3e0) >> 5);
            c2    = (s16) ((uVar1 & 0x7c00) >> 10);
        } else {
            local = *(u8 **) data_02154c70;
            base  = *(u8 **) (*(u8 **) (local + 0x18) + 0xc);
            q     = base + 0x1c0;
            uVar1 = *(u16 *) (q + 0x1e);
            uVar2 = *(u16 *) (q + off + 0x12);
            r     = _s32_div_f(param_1 *
                                   (((s32) ((u32) ((uVar1) & 0x1f) << 16) >> 16) - ((s32) ((u32) ((uVar2) & 0x1f) << 16) >> 16)),
                               param_2);
            c0    = (s32) (s16) (r + ((s32) ((u32) ((uVar2) & 0x1f) << 16) >> 16));
            r     = _s32_div_f(param_1 *
                                   (((s32) ((u32) ((uVar1) & 0x3e0) << 11) >> 16) - ((s32) ((u32) ((uVar2) & 0x3e0) << 11) >> 16)),
                               param_2);
            c1    = (s32) (s16) (r + ((s32) ((u32) ((uVar2) & 0x3e0) << 11) >> 16));
            r     = _s32_div_f(param_1 *
                                   (((s32) ((u32) ((uVar1) & 0x7c00) << 6) >> 16) - ((s32) ((u32) ((uVar2) & 0x7c00) << 6) >> 16)),
                               param_2);
            c2    = (s32) (s16) (r + ((s32) ((u32) ((uVar2) & 0x7c00) << 6) >> 16));
        }
        *(u16 *) (local + 0x1c + (i + 9) * 2) = (u16) (c0 | (c1 << 5) | (c2 << 10));
        i                                     = (s16) (i + 1);
        off += 2;
    } while (i < 4);

    {
        u8 *gp  = *(u8 **) data_02154c70;
        u8 *pal = gp + 0x1c;
        if (*(s16 *) (gp + 0x74) != 0) {
            func_0207d0e0(15, 448, pal, 64);
            return;
        }
        func_0207d0e0(31, 448, pal, 64);
    }
}

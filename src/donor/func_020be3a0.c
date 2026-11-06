/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020be3a0 from projets/nintendogs-chihuahua-friends/src/donor/func_020be3a0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153700;
extern void func_020a35a4(u8 *a, u32 b);
extern void func_020bddb8(u8 *a, u32 b);
extern s32 func_020b0e0c(void);
extern void func_020be07c(u8 *a);
extern s32 func_020b9168(s32 a);
extern void func_020a8db4(u32 a, u32 b);
extern void func_020a82fc(u32 a, s32 b, u32 c, u32 d, u32 e);
extern void func_020be13c(u8 *a);
extern void func_020be6e4(u32 a, u8 *b);
extern void func_020a3a70(u32 a, u32 b, u32 c);
void func_020be3a0(u8 *p) {
    s32 iVar1;
    s32 r6;
    u8 *r4;
    s32 t;

    r4                  = p + 336;
    t                   = *(s16 *) (*(u8 **) (data_02153700 + 4) + 2);
    *(u32 *) (p + 0x30) = (u32) (u16) ((t + 59) / 60);
    func_020a35a4(p + 8, *(u32 *) (p + 0x30));
    func_020bddb8(p + 64, 1);
    func_020bddb8(p + 96, 1);
    iVar1 = func_020b0e0c();
    if (iVar1 == 4) {
        func_020be07c(p + 64);
        func_020be07c(p + 96);
    } else if (*(u32 *) (r4 + 0x20) != 0) {
        r6 = func_020b9168(0);
        func_020a8db4(*(u32 *) (p + 0x34), 0);
        func_020a82fc(1, r6, 4, 0, *(u32 *) (r4 + 0x1c));
        *(u32 *) (r4 + 0x20) = 0;
        func_020be13c(p + 64);
        func_020be13c(p + 96);
    }
    func_020be6e4(0, p);
    if (*(s32 *) (p + 0x3c) <= 0) {
        return;
    }
    *(s32 *) (p + 0x3c) = *(s32 *) (p + 0x3c) - 1;
    if (*(s32 *) (p + 0x3c) == 117) {
        func_020a3a70(0, 4, 1);
        return;
    }
    if (*(s32 *) (p + 0x3c) == 0) {
        func_020a3a70(0, 4, 0);
        return;
    }
}

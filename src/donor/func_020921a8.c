/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020921a8 from projets/nintendogs-shiba-friends/src/donor/func_020921a8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
extern s32 func_0210634c(void);
extern void func_0206a5b4(u32 a);
extern void func_0206a3cc(void);
extern void func_0206a6dc(u32 a);
extern void func_02069b84(u32 a, u32 b, u32 c);
extern void func_02069b68(u32 a);
extern void func_0206a630(u32 a);
extern void func_0206a3b8(void);
void func_020921a8(u8 *param_1) {
    u16 uVar1;

    uVar1                             = *(u16 *) (param_1 + 6);
    *(u16 *) (func_0210634c() + 0x26) = uVar1;
    *(u16 *) (param_1 + 6)            = *(u16 *) (param_1 + 6) ^ 1;
    if (*(u16 *) (param_1 + 6) == 0) {
        *(vu16 *) 0x04000304 = *(vu16 *) 0x04000304 | 0x8000;
        func_0206a5b4(8);
        func_0206a3cc();
        func_0206a6dc(4);
        *(vu32 *) 0x04000064 = 0x80360010;
        func_02069b84(1, 0, 1);
        *(vu32 *) 0x04000000 = (*(vu32 *) 0x04000000 & ~0x1f00u) | (*(u32 *) (param_1 + 0x10) << 8);
        *(vu16 *) 0x04000008 = (*(vu16 *) 0x04000008 & ~3u) | 3;
        func_02069b68(3);
        *(vu32 *) 0x04001000 = (*(vu32 *) 0x04001000 & ~0x1f00u) | 0x1000;
        return;
    }
    *(vu16 *) 0x04000304 = *(vu16 *) 0x04000304 & ~0x8000u;
    func_0206a630(4);
    func_0206a3b8();
    func_0206a6dc(8);
    *(vu32 *) 0x04000064 = 0x80370010;
    func_02069b84(1, 0, 1);
    *(vu32 *) 0x04000000 = (*(vu32 *) 0x04000000 & ~0x1f00u) | (*(u32 *) (param_1 + 0x10) << 8);
    *(vu16 *) 0x04000008 = (*(vu16 *) 0x04000008 & ~3u) | 3;
    func_02069b68(3);
    *(vu32 *) 0x04001000 = (*(vu32 *) 0x04001000 & ~0x1f00u) | 0x800;
    *(vu16 *) 0x0400100e = (*(vu16 *) 0x0400100e & 0x43) | 0x4284;
    *(vu16 *) 0x0400100e = (*(vu16 *) 0x0400100e & ~3u) | 3;
    *(vu16 *) 0x0400100e = *(vu16 *) 0x0400100e & ~0x40u;
}

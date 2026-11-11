/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d821c from projets/nintendogs-chihuahua-friends/src/donor/func_020d821c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern void func_02069668(u8 *, u8 *, u8 *);
extern void func_02108220(u8 *, s32);
extern void func_02069504(u32 *, u32 *, u32 *);
extern void func_020069bc(u32 *, u32 *);
extern s32 func_02111cbc(u32, s32);
extern void func_0210fe58(u8 *, s32, u8 *, u8 *, s32, void *, void *, u8 *, void *, void *);
extern void func_020d8418(void);
extern void func_020d83b0(void);
extern void func_020d836c(void);
extern void func_020d8368(void);
void func_020d821c(u8 *p) {
    u32 L[9];
    s32 iVar1;

    *(s32 *) (p + 0xb4) = *(s32 *) (p + 0xb4) - 0x52;
    func_02069668(p + 0xbc, p + 0xb0, p + 0xbc);
    func_02108220(p, 0x11c2);
    {
        u32 t0;
        u32 t1;
        u32 t2;
        u32 t3;
        u32 t4;
        u32 t5;

        t2   = *(u32 *) (p + 0xd0);
        t1   = *(u32 *) (p + 0xcc);
        t0   = *(u32 *) (p + 0xc8);
        L[0] = t0;
        L[1] = t1;
        L[2] = t2;
        t5   = *(u32 *) (p + 0xdc);
        t4   = *(u32 *) (p + 0xd8);
        t3   = *(u32 *) (p + 0xd4);
        L[3] = t3;
        L[4] = t4;
        L[5] = t5;
    }
    func_02069504(&L[0], &L[3], &L[6]);
    func_020069bc(&L[0], &L[0]);
    func_020069bc(&L[6], &L[6]);
    func_02069504(&L[6], &L[0], &L[3]);
    *(u32 *) (p + 0xc8) = L[0];
    *(u32 *) (p + 0xcc) = L[1];
    *(u32 *) (p + 0xd0) = L[2];
    *(u32 *) (p + 0xd4) = L[3];
    *(u32 *) (p + 0xd8) = L[4];
    *(u32 *) (p + 0xdc) = L[5];
    *(u32 *) (p + 0xe0) = L[6];
    *(u32 *) (p + 0xe4) = L[7];
    *(u32 *) (p + 0xe8) = L[8];
    iVar1               = func_02111cbc(*(u16 *) (p + 0xa0), *(s32 *) (p + 0xf8));
    func_0210fe58(p, *(s32 *) (p + 0xf8), 0, 0, iVar1, func_020d8418, func_020d83b0, 0, func_020d836c, func_020d8368);
}

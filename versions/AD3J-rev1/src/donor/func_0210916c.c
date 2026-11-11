/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020bf1ec from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020bf1ec.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    s32 x;
    s32 y;
    s32 z;
} VecFx32;
typedef struct {
    s32 w[3];
} T3;
typedef struct {
    s32 w[12];
} T12;
extern s32 func_01ffda04(s32 a);
extern void func_02027140(s32 a, VecFx32 *b, s32 c);
extern s32 func_020695f0(VecFx32 *a, VecFx32 *b);
extern void func_02069504(VecFx32 *a, VecFx32 *b, VecFx32 *c);
extern void func_020692f0(VecFx32 *a, VecFx32 *b);
extern void func_01ff810c(s32 *a, s32 *b, s32 *c);
extern void func_020ec298(s32 *a, s32 b);
void func_0210916c(u8 *param_1) {
    VecFx32 m[4];
    VecFx32 c4, c5, c6;
    VecFx32 a7, b8, d9;
    u8 *pp;
    s32 iVar1;
    s32 uVar2;
    s32 uVar3;
    s32 uVar5;
    s32 uVar6;
    s32 uVar7;

    pp    = param_1;
    iVar1 = func_01ffda04(*(s16 *) (pp + 0x98));
    func_02027140(iVar1, m, 12);
    c4.x = m[0].x;
    c4.y = m[0].y;
    c4.z = m[0].z;
    c5.x = m[1].x;
    c5.y = m[1].y;
    c5.z = m[1].z;
    c6.x = m[2].x;
    c6.y = m[2].y;
    c6.z = m[2].z;
    {
        s32 a2 = (*(s32 *) ((u8 *) (pp) + (0xd0)));
        s32 a1 = (*(s32 *) ((u8 *) (pp) + (0xcc)));
        s32 a0 = (*(s32 *) ((u8 *) (pp) + (0xc8)));
        a7.x   = a0;
        a7.y   = a1;
        a7.z   = a2;
    }
    {
        s32 a2 = (*(s32 *) ((u8 *) (pp) + (0xdc)));
        s32 a1 = (*(s32 *) ((u8 *) (pp) + (0xd8)));
        s32 a0 = (*(s32 *) ((u8 *) (pp) + (0xd4)));
        b8.x   = a0;
        b8.y   = a1;
        b8.z   = a2;
    }
    {
        s32 a2 = (*(s32 *) ((u8 *) (pp) + (0xe8)));
        s32 a1 = (*(s32 *) ((u8 *) (pp) + (0xe4)));
        s32 a0 = (*(s32 *) ((u8 *) (pp) + (0xe0)));
        d9.x   = a0;
        d9.y   = a1;
        d9.z   = a2;
    }
    switch (pp[0x160]) {
        case 0:
            break;
        case 1:
            uVar2 = func_020695f0(&a7, &c6);
            if ((s32) uVar2 > 0) {
                a7 = c6;
            } else {
                a7.x = -c6.x;
                a7.y = -c6.y;
                a7.z = -c6.z;
            }
            func_02069504(&a7, &b8, &d9);
            if (d9.x == 0 && d9.y == 0 && d9.z == 0) {
                if ((s32) uVar2 > 0) {
                    b8 = c4;
                    d9 = c5;
                } else {
                    b8.x = -c4.x;
                    b8.y = -c4.y;
                    b8.z = -c4.z;
                    d9.x = -c5.x;
                    d9.y = -c5.y;
                    d9.z = -c5.z;
                }
            } else {
                func_020692f0(&d9, &d9);
                if (d9.x == 0 && d9.y == 0 && d9.z == 0) {
                    if ((s32) uVar2 > 0) {
                        b8 = c4;
                        d9 = c5;
                    } else {
                        b8.x = -c4.x;
                        b8.y = -c4.y;
                        b8.z = -c4.z;
                        d9.x = -c5.x;
                        d9.y = -c5.y;
                        d9.z = -c5.z;
                    }
                } else {
                    func_02069504(&d9, &a7, &b8);
                }
            }
            break;
        case 2:
            uVar2 = func_020695f0(&b8, &c6);
            if ((s32) uVar2 > 0) {
                b8 = c6;
            } else {
                b8.x = -c6.x;
                b8.y = -c6.y;
                b8.z = -c6.z;
            }
            func_02069504(&b8, &d9, &a7);
            if (a7.x == 0 && a7.y == 0 && a7.z == 0) {
                if ((s32) uVar2 > 0) {
                    a7 = c5;
                    d9 = c4;
                } else {
                    a7.x = -c5.x;
                    a7.y = -c5.y;
                    a7.z = -c5.z;
                    d9.x = -c4.x;
                    d9.y = -c4.y;
                    d9.z = -c4.z;
                }
            } else {
                func_020692f0(&a7, &a7);
                if (a7.x == 0 && a7.y == 0 && a7.z == 0) {
                    if ((s32) uVar2 > 0) {
                        a7 = c5;
                        d9 = c4;
                    } else {
                        a7.x = -c5.x;
                        a7.y = -c5.y;
                        a7.z = -c5.z;
                        d9.x = -c4.x;
                        d9.y = -c4.y;
                        d9.z = -c4.z;
                    }
                } else {
                    func_02069504(&a7, &b8, &d9);
                }
            }
            break;
        case 3:
            uVar2 = func_020695f0(&d9, &c6);
            if ((s32) uVar2 > 0) {
                d9 = c6;
            } else {
                d9.x = -c6.x;
                d9.y = -c6.y;
                d9.z = -c6.z;
            }
            func_02069504(&d9, &a7, &b8);
            if (b8.x == 0 && b8.y == 0 && b8.z == 0) {
                if ((s32) uVar2 > 0) {
                    a7 = c4;
                    b8 = c5;
                } else {
                    a7.x = -c4.x;
                    a7.y = -c4.y;
                    a7.z = -c4.z;
                    b8.x = -c5.x;
                    b8.y = -c5.y;
                    b8.z = -c5.z;
                }
            } else {
                func_020692f0(&b8, &b8);
                if (b8.x == 0 && b8.y == 0 && b8.z == 0) {
                    if ((s32) uVar2 > 0) {
                        a7 = c4;
                        b8 = c5;
                    } else {
                        a7.x = -c4.x;
                        a7.y = -c4.y;
                        a7.z = -c4.z;
                        b8.x = -c5.x;
                        b8.y = -c5.y;
                        b8.z = -c5.z;
                    }
                } else {
                    func_02069504(&b8, &d9, &a7);
                }
            }
            break;
        case 4:
            uVar2 = func_020695f0(&a7, &c6);
            uVar3 = func_020695f0(&d9, &c5);
            if ((s32) uVar2 > 0) {
                a7 = c6;
            } else {
                a7.x = -c6.x;
                a7.y = -c6.y;
                a7.z = -c6.z;
            }
            if ((s32) uVar3 > 0) {
                d9 = c5;
            } else {
                d9.x = -c5.x;
                d9.y = -c5.y;
                d9.z = -c5.z;
            }
            func_02069504(&d9, &a7, &b8);
            break;
        case 5:
            uVar2 = func_020695f0(&b8, &c6);
            uVar3 = func_020695f0(&d9, &c5);
            if ((s32) uVar2 > 0) {
                b8 = c6;
            } else {
                b8.x = -c6.x;
                b8.y = -c6.y;
                b8.z = -c6.z;
            }
            if ((s32) uVar3 > 0) {
                d9 = c5;
            } else {
                d9.x = -c5.x;
                d9.y = -c5.y;
                d9.z = -c5.z;
            }
            func_02069504(&b8, &d9, &a7);
            break;
    }
    (*(s32 *) ((u8 *) (pp) + (0xc8)))  = a7.x;
    (*(s32 *) ((u8 *) (pp) + (0xcc)))  = a7.y;
    (*(s32 *) ((u8 *) (pp) + (0xd0)))  = a7.z;
    (*(s32 *) ((u8 *) (pp) + (0xd4)))  = b8.x;
    (*(s32 *) ((u8 *) (pp) + (0xd8)))  = b8.y;
    (*(s32 *) ((u8 *) (pp) + (0xdc)))  = b8.z;
    (*(s32 *) ((u8 *) (pp) + (0xe0)))  = d9.x;
    (*(s32 *) ((u8 *) (pp) + (0xe4)))  = d9.y;
    (*(s32 *) ((u8 *) (pp) + (0xe8)))  = d9.z;
    *(T12 *) (pp + 0x130)              = *(T12 *) m;
    uVar7                              = (*(s32 *) ((u8 *) (pp) + (0x134)));
    uVar6                              = (*(s32 *) ((u8 *) (pp) + (0x138)));
    uVar5                              = (*(s32 *) ((u8 *) (pp) + (0x144)));
    (*(s32 *) ((u8 *) (pp) + (0x134))) = (*(s32 *) ((u8 *) (pp) + (0x13c)));
    (*(s32 *) ((u8 *) (pp) + (0x138))) = (*(s32 *) ((u8 *) (pp) + (0x148)));
    (*(s32 *) ((u8 *) (pp) + (0x144))) = (*(s32 *) ((u8 *) (pp) + (0x14c)));
    (*(s32 *) ((u8 *) (pp) + (0x13c))) = uVar7;
    (*(s32 *) ((u8 *) (pp) + (0x148))) = uVar6;
    (*(s32 *) ((u8 *) (pp) + (0x14c))) = uVar5;
    {
        s32 *puVar4b = (s32 *) (pp + 0x130);
        func_01ff810c((s32 *) (pp + 200), puVar4b, puVar4b);
    }
    *(u16 *) (pp + 0x162)              = 6;
    (*(s32 *) ((u8 *) (pp) + (0x164))) = 1;
    *(T3 *) (pp + 0x17c)               = *(T3 *) (pp + 0xbc);
    func_020ec298((s32 *) (pp + 400), 3);
}

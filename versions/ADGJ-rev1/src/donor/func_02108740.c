/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02108740 from projets/nintendogs-chihuahua-friends/src/donor/func_02108740.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_01ffda04(s32);
extern void func_02027140(s32, s32 *, s32);
extern s32 func_02034ae8(s32);
extern void func_0210893c(u8 *);
extern void func_02108bbc(u8 *, s32 *);
extern s32 func_02033dc8(s32);
extern void func_02108e48(u8 *, s32, s32 *);
extern void func_01ff810c(void *, s32 *, u32 *);
extern void func_02028160(s32);
typedef struct {
    s32 v[3];
} T3;
void func_02108740(u8 *p) {
    s32 st[3];
    u32 a[12];
    s32 iVar1, iVar3;
    u32 uVar2, uVar4;
    s32 b;

    iVar1 = func_01ffda04(*(s16 *) (p + 0x98));
    if (iVar1 == 0) {
        return;
    }
    func_02027140(iVar1, (s32 *) a, 12);
    uVar2 = func_02034ae8(iVar1);
    switch (uVar2) {
        case 0:
            break;
        case 1:
            break;
        case 3:
            func_0210893c(p);
            return;
        case 2:
            func_02108bbc(p, st);
            if (*(s32 *) (p + 0x164) != 0 && (uVar4 = func_02033dc8(iVar1)) != 0) {
                *(u16 *) (p + 0x162) = 6;
            }
            *(s32 *) (p + 0x164) = 0;
            goto LAB_020be8b0;
    }
    iVar3 = func_01ffda04(*(s16 *) (p + 0x98));
    func_02108e48(p, iVar3, st);
    func_01ff810c(p + 0x130, (s32 *) a, (u32 *) (p + 200));
    if (*(s32 *) (p + 0x164) == 0 && (uVar4 = func_02033dc8(iVar1)) != 0) {
        *(u16 *) (p + 0x162) = 6;
    }
    *(s32 *) (p + 0x164) = 1;
LAB_020be8b0:
    if (0 < *(s16 *) (p + 0x162)) {
        *(s16 *) (p + 0x162) = *(s16 *) (p + 0x162) - 1;
        b                    = *(s32 *) (p + 0x170);
        *(s32 *) (p + 0xbc)  = b + (s32) ((((s64) (st[0] - b) * 1024) + 0x800) >> 12);
        b                    = *(s32 *) (p + 0x174);
        *(s32 *) (p + 0xc0)  = b + (s32) ((((s64) (st[1] - b) * 1024) + 0x800) >> 12);
        b                    = *(s32 *) (p + 0x178);
        *(s32 *) (p + 0xc4)  = b + (s32) ((((s64) (st[2] - b) * 1024) + 0x800) >> 12);
        return;
    }
    *(T3 *) (p + 0xbc) = *(T3 *) st;
    if (*(s32 *) (p + 0x188) != 0) {
        return;
    }
    func_02028160(iVar1);
    *(s32 *) (p + 0x188) = 1;
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f24dc from projets/nintendogs-shiba-friends/src/donor/func_020f24dc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02154cb8[];
extern u8 data_02154d88[];
extern s32 func_020f7178(void);
extern u8 *func_01ffda04(s32 i);
extern u8 *func_02027508(u8 *p);
extern void func_02028fc4(u8 *p, s16 a, u32 b);
extern void func_02028e80(u8 *p, s16 a, u32 b);
void func_020f24e4(s16 param_1, u8 param_2, s32 param_3) {
    s32 bVar1;
    s32 iVar2;
    u8 *uVar3;
    u8 *iVar4;
    s32 base;
    u8 pc2;
    s32 pc3;
    s16 pc1;

    pc1   = param_1;
    pc2   = param_2;
    pc3   = param_3;
    iVar2 = func_020f7178();
    if (iVar2 == -11) {
        goto zero;
    }
    if (*(s32 *) (data_02154cb8 + 0x40) != 0) {
        goto zero;
    }
    if (*(s16 *) (data_02154cb8 + 0x3e) == 1) {
        goto zero;
    }
    if (*(s16 *) (data_02154cb8 + 0x3e) == 2) {
        goto zero;
    }
    if (*(s16 *) (data_02154d88 + 6) == 0x3e) {
        goto zero;
    }
    if (*(s16 *) (data_02154d88 + 6) == 0x3f) {
        goto zero;
    }
    bVar1 = 1;
    goto join;
zero:
    bVar1 = 0;
join:
    if (bVar1 != 0) {
        base = pc1 + 12;
        pc1  = 0;
        do {
            uVar3 = func_01ffda04(pc1);
            if (uVar3 != ((void *) 0)) {
                iVar4 = func_02027508(uVar3);
                if (*(u16 *) (iVar4 + 0x26) < 5) {
                    if (pc3 != 0) {
                        func_02028e80(uVar3, base, pc2);
                    } else {
                        func_02028fc4(uVar3, base, pc2);
                    }
                }
            }
            pc1 = (s16) (pc1 + 1);
        } while (pc1 < 3);
    }
}

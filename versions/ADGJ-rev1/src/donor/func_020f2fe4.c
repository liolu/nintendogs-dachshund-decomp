/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f2fe4 from projets/nintendogs-chihuahua-friends/src/donor/func_020f2fe4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern u8 data_02154dd8[];
extern u32 func_01ffda04(int a);
extern int func_02027508(u32 a);
extern void func_02028fc4(u32 a, int b, u8 c);
void func_020f2fe4(void) {
    s16 sVar1;
    u32 uVar2;
    int iVar3;
    int lvl;
    int iVar5;

    sVar1 = *(s16 *) (data_02154dd8 + 0x32);
    lvl   = 4;
    if (sVar1 < -0x28) {
        lvl = 1;
    } else if (sVar1 < 0x28) {
        lvl = 2;
    } else if (sVar1 < 0x55) {
        lvl = 3;
    }
    iVar5 = 0;
    do {
        uVar2 = func_01ffda04(iVar5);
        if ((uVar2 != 0) && (iVar3 = func_02027508(uVar2), *(u16 *) (iVar3 + 0x26) < 5)) {
            func_02028fc4(uVar2, 0x5a, (u8) lvl);
        }
        iVar5 = (s16) (iVar5 + 1);
    } while (iVar5 < 3);
}

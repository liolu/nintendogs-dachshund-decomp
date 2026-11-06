/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02105868 from projets/nintendogs-chihuahua-friends/src/donor/func_02105868.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
extern u8 *data_0215607c;
extern u32 func_021182bc(u8 *p, int n);
extern u32 func_02117ccc(u8 *p, int n);
extern u32 func_0211918c(u8 *p, int n);
extern u32 func_02117fec(u8 *p, int n);
extern u32 func_0211bbac(u8 *p, int n);
extern u32 func_0211bccc(u8 *p, int n);
extern u32 func_0211ca5c(u8 *p, int n);
extern u32 func_02122650(u8 *p, int n);
extern u32 func_0212162c(u8 *p, int n);
extern u32 func_0212260c(u8 *p, int n);
extern u32 func_02121764(u8 *p, int n);
u32 func_02105868(void) {
    u8 *iVar4;
    u32 uVar3;

    iVar4 = data_0215607c;
    uVar3 = (u32) * (s16 *) (iVar4 + 0x84);
    switch (uVar3) {
        case 0:
            break;
        case 1:
            return func_021182bc(iVar4 + 136, 4);
        case 2:
            return func_02117ccc(iVar4 + 256, 4);
        case 3:
            return func_0211918c(iVar4 + 264, 4);
        case 4:
            return func_02117fec(iVar4 + 324, 4);
        case 5:
            return func_0211bbac(iVar4 + 436, 4);
        case 6:
            return func_0211bccc(iVar4 + 496, 4);
        case 7:
            return func_0211ca5c(iVar4 + 540, 4);
        case 8:
            return func_02122650(iVar4 + 636, 4);
        case 9:
            return func_0212162c(iVar4 + 708, 4);
        case 10:
            return func_0212260c(iVar4 + 752, 4);
        case 11:
            return func_02121764(iVar4 + 792, 4);
    }
    return uVar3;
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d708c from projets/nintendogs-chihuahua-friends/src/donor/func_020d708c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153704;
extern u8 data_027c0458;
extern u8 data_0212db08[];
extern u8 data_0212db0a[];
extern u8 data_0212db0c[];
extern u32 func_020d73c8(s32, s32);
extern void func_020d7768(void);
extern void func_020d7180(void);
extern void func_020c4960(u8 *);
void func_020d708c(u8 *p) {
    s32 iVar6;
    s32 iVar4;
    u32 uVar5;

    iVar6 = 0;
    if (data_02153704 != ((void *) 0) && *(u16 *) (data_02153704 + 6) == 0x18) {
        iVar6 = 1;
    }
    if (data_027c0458 == 0 && *(s32 *) (p + 0x24) == 0) {
        func_020d7768();
    }
    iVar4 = *(s32 *) (p + 0x24);
    if (iVar4 == 0) {
        iVar4 = 0;
    } else if (iVar4 == 1) {
        iVar4 = 1;
    } else if (iVar4 == 2) {
        iVar4 = 2;
    } else {
        iVar4 = 0;
    }
    uVar5               = func_020d73c8(iVar6, iVar4);
    iVar6               = iVar6 * 0x12;
    iVar4               = iVar4 * 6;
    *(s16 *) (p + 0x28) = (s16) uVar5;
    *(s16 *) (p + 0x2a) = *(s16 *) (data_0212db08 + iVar6 + iVar4);
    *(s16 *) (p + 0x2c) = *(s16 *) (data_0212db0a + iVar6 + iVar4);
    *(s16 *) (p + 0x2e) = *(s16 *) (data_0212db0c + iVar6 + iVar4);
    if (*(s32 *) (p + 0x24) == 0) {
        func_020d7180();
    }
    func_020c4960(p);
}

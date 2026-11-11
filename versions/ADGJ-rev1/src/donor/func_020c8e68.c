/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c8e68 from projets/nintendogs-chihuahua-friends/src/donor/func_020c8e68.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_02154c48;
extern void func_02007128(u32 *a, s32 *b);
extern s32 func_020c78dc(u32 *a, u32 *b, s32 *c);
s32 func_020c8e68(void) {
    u32 auStack_28[4];
    s32 aiStack_18[4];
    u32 iVar1;
    u32 *p;

    iVar1 = *(u32 *) ((u8 *) data_02154c48 + 0x141c);
    p     = (u32 *) (iVar1 + 0x60);
    func_02007128(auStack_28, aiStack_18);
    return func_020c78dc(p, auStack_28, aiStack_18);
}

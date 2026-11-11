/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a8488 from projets/nintendogs-chihuahua-friends/src/donor/func_020a8488.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u8 *data_02153744;
extern void func_020b9550(u32 a, u32 b, u32 c, u32 d);
void func_020a8488(void) {
    s32 iVar2;
    u8 *p;
    u8 *q;

    iVar2 = 0;
    p     = data_02153744 + 4;
    do {
        if (*(u32 *) (p + 4) != 0 && *(u32 *) (p + 8) == 0) {
            q = p + 24;
            if (*(u32 *) (q + 0x20) != 0) {
                *(u32 *) (q + 0x20) = 0;
                func_020b9550(*(u32 *) (q + 0), *(u32 *) (p + 0x10), (u32) * (u16 *) (q + 28) << 5, *(u32 *) (p + 0x14));
            }
        }
        iVar2 = iVar2 + 1;
        p     = p + 440;
    } while (iVar2 < 24);
}

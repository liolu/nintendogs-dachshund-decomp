/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020c543c from projets/nintendogs-chihuahua-friends/src/donor/func_020c543c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_01ffefe4(void);
extern void func_020c4ab0(u32 *p, u32 x);
void func_020c543c(u8 *p, u32 x) {
    u32 *q;
    *(u16 *) (p + 32) = *(u16 *) (p + 32) | 2;
    q                 = *(u32 **) (p + 0x1c);
    q[6]              = (u32) func_01ffefe4;
    func_020c4ab0(*(u32 **) (p + 0x1c), x);
}

/* compiler: 1.2/sp2p3  */
/* func_020648c4 from projets/children-of-mana/src/auto/func_020648c4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void *func_0207d680(void *, void *);
void *func_0207d984(void *arg0, u32 arg1) {
    u8 *p;
    u8 *r;

    p = (u8 *) func_0207d680(arg0, ((void *) 0));
    while (p != ((void *) 0)) {
        if (*(u32 *) (p + 0x18) <= arg1 && arg1 < *(u32 *) (p + 0x1c)) {
            r = (u8 *) func_0207d984(p + 0xc, arg1);
            if (r == ((void *) 0)) {
                r = p;
            }
            return r;
        }
        p = (u8 *) func_0207d680(arg0, p);
    }
    return ((void *) 0);
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02051eb0 from projets/children-of-mana/src/auto/func_02051eb0.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long long u64;
struct ARMMathState {
    u64 div_numer;
    u64 div_denom;
    u64 sqrt;
    u16 div_mode;
    u16 sqrt_mode;
};
void func_02067a24(const struct ARMMathState *s) {
    *(volatile u64 *) 0x4000290 = s->div_numer;
    *(volatile u64 *) 0x4000298 = s->div_denom;
    *(volatile u16 *) 0x4000280 = s->div_mode;
    *(volatile u64 *) 0x40002b8 = s->sqrt;
    *(volatile u16 *) 0x40002b0 = s->sqrt_mode;
}

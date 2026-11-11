/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020040c8 from projets/nintendogs-chihuahua-friends/src/donor/func_020040c8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long long u64;
extern u8 *data_0214a798;
extern void (*data_021338dc)(void);
extern u64 func_02080f5c(void);
extern void func_0206bd14(void);
void func_020040c8(void) {
    u8 *p               = data_0214a798;
    *(u64 *) (p + 0xc4) = func_02080f5c();
    if (*(u16 *) (p + 10) == 1) {
        func_0206bd14();
    }
    data_021338dc();
}

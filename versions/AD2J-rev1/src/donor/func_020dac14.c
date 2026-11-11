/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020dac0c from projets/nintendogs-shiba-friends/src/donor/func_020dac0c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
extern void func_020db99c(u8 *p);
extern void func_020dac5c(u8 *p);
void func_020dac14(u8 *param_1) {
    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            break;
        case 1:
            break;
        case 2:
            func_020db99c(param_1);
            return;
        case 3:
            func_020dac5c(param_1);
            break;
    }
}

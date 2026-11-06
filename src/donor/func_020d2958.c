/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d2958 from projets/nintendogs-chihuahua-friends/src/donor/func_020d2958.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef signed short s16;
extern void func_021077e0(int p);
extern void func_020d29c0(int p);
void func_020d2958(int param_1) {
    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            func_021077e0(param_1);
            return;
        case 2:
            func_020d29c0(param_1);
            return;
        case 1:
            *(u16 *) (*(int *) (param_1 + 0x214) + 0x10) = 0;
            *(u16 *) (param_1 + 0xa6)                    = 2;
            break;
        case 3:
            break;
    }
}

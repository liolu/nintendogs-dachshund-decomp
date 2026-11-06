/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d2c18 from projets/nintendogs-chihuahua-friends/src/donor/func_020d2c18.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed short s16;
extern void func_020d2c70(int a);
extern void func_020d36e8(int a);
extern void func_020d32b8(int a);
void func_020d2c18(int param_1) {
    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            break;
        case 2:
            func_020d36e8(param_1);
            return;
        case 3:
            func_020d32b8(param_1);
            return;
        case 1:
            func_020d2c70(param_1);
            break;
    }
}

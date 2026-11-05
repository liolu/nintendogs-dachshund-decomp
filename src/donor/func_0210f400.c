/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210f3f8 from projets/nintendogs-shiba-friends/src/donor/func_0210f3f8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed short s16;
extern void func_021077e0(int p);
extern void func_0210f468(int p);
extern int func_01ffda04(int a);
void func_0210f400(int param_1) {
    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            func_021077e0(param_1);
            return;
        case 1:
            break;
        case 2:
            func_0210f468(param_1);
            return;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            func_01ffda04((int) *(s16 *) (param_1 + 0x98));
    }
}

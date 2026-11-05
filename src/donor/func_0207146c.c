/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206078c from projets/children-of-mana/src/auto/func_0206078c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
extern int func_0208120c(void);
extern void func_02081220(unsigned int);
extern int *func_02071504(void);
extern void func_0206e004(int *dst, int *src, int len);
extern int data_0214ead4;
extern int data_0214eb84;
int func_0207146c(int *thiz) {
    int saved = func_0208120c();
    int *r;
    if (data_0214ead4 != 1) {
        func_02081220(saved);
        return 0;
    }
    r = func_02071504();
    if (r == 0 || *r != 0) {
        func_02081220(saved);
        return 0;
    }
    func_0206e004(thiz, &data_0214eb84, 0x9c);
    func_02081220(saved);
    return 1;
}

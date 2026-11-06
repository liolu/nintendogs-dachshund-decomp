/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* PM_Initialize from https://github.com/RonyxDumb/mkds src/arm9/021500a0_PM_Initialize.c (license: none), reused by
 * tools/donor_match.py */
extern unsigned short data_0214a6fc;
extern int data_0214a714[2];
extern short data_0214a738;
extern char data_0214a724;
extern int data_0214a70c;
extern void func_02002b68(void);
extern void func_0206e488(void);
extern int func_0206e66c(int bit, int word);
extern void func_0206e694(int a, void *b);
extern void func_020807b4(char *p);
#pragma opt_strength_reduction off
void func_02002c54(void) {
    int i;
    if (data_0214a6fc != 0) {
        return;
    }
    data_0214a6fc    = 1;
    data_0214a714[0] = 0;
    data_0214a714[1] = 0;
    func_0206e488();
    while (func_0206e66c(8, 1) == 0)
        ;
    func_0206e694(8, (void *) func_02002b68);
    for (i = 0; i < 4; i++) {
        *(short *) ((char *) &data_0214a738 + (i << 3)) = 0;
    }
    func_020807b4(&data_0214a724);
    data_0214a70c = *(int *) 0x27ffc3c;
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* PM_Initialize from https://github.com/RonyxDumb/mkds src/arm9/021500a0_PM_Initialize.c (license: none), reused by
 * tools/donor_match.py */
extern unsigned short data_0214ccfc;
extern int data_0214cd14[2];
extern short data_0214cd38;
extern char data_0214cd24;
extern int data_0214cd0c;
extern void func_02002bcc(void);
extern void func_0206d090(void);
extern int func_0206d274(int bit, int word);
extern void func_0206d29c(int a, void *b);
extern void func_0208016c(char *p);
#pragma opt_strength_reduction off
void func_02002cb8(void) {
    int i;
    if (data_0214ccfc != 0) {
        return;
    }
    data_0214ccfc    = 1;
    data_0214cd14[0] = 0;
    data_0214cd14[1] = 0;
    func_0206d090();
    while (func_0206d274(8, 1) == 0)
        ;
    func_0206d29c(8, (void *) func_02002bcc);
    for (i = 0; i < 4; i++) {
        *(short *) ((char *) &data_0214cd38 + (i << 3)) = 0;
    }
    func_0208016c(&data_0214cd24);
    data_0214cd0c = *(int *) 0x27ffc3c;
}

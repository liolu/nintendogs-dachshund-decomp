void func_02091170(void) {
    extern unsigned char data_021544dc[];
    extern unsigned char data_021544e0[];
    unsigned char *q = data_021544dc;
    unsigned char *p = data_021544e0;
    short i;

    *(int *) (q + 0x84) = 0;
    *(short *) (q + 0x88) = 0;
    *(short *) (q + 0x8A) = 0;
#pragma opt_strength_reduction off
    for (i = 0; i < 0x10; i++) {
        *(unsigned short *) (p + (unsigned)i * 4) = 0xFFFF;
        *(short *) (p + i * 4 + 2) = -1;
    }
    *(int *) (q + 0x8C) = 0;
    *(int *) (q + 0x90) = 0;
    *(int *) (q + 0x94) = 0;
    *(int *) (q + 0x98) = 0;
}

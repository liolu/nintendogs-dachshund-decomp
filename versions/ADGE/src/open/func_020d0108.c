void func_020d0108(char *arg0, unsigned short *arg1) {
    short i;
    unsigned short v;

    for (i = 0; i < 0xB; i = (short) (i + 1)) {
        *(short *) (arg0 + (i * 2) + 0x12) = 0;
    }
    for (i = 0; i < 0xA; i = (short) (i + 1)) {
        v = *arg1;
        if (v == 0) {
            return;
        }
        *(short *) (arg0 + (i * 2) + 0x12) = v;
        arg1++;
    }
}

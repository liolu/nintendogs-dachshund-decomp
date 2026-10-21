void func_02090fbc(int arg0, int arg1) {
    extern unsigned char data_021544dc[];
    extern unsigned char data_021544e0[];
    int func_020969e4(void);
    void func_02091170(void);
    unsigned char *g = data_021544dc;
    unsigned char *table = data_021544e0;
    short old;

    old = *(short *) (g + 2);
    *(short *) (g + 0) = arg1;
    if (arg1 != old) {
        if (*(int *) (g + 0x8C) != 0) {
            *(int *) (g + 0x8C) = 0;
            *(short *) (g + 2) = -1;
        }
    }
    if (*(int *) (g + 0x8C) == 0) {
        if (func_020969e4() != -0xB) {
            func_02091170();
            *(int *) (data_021544dc + 0x8C) = 1;
            *(int *) (data_021544dc + 0x98) = 0;
        }
    }
    if (*(int *) (g + 0x8C) != 0) {
        if (*(int *) (g + 0x84) == 0xFFFF) {
            func_02091170();
        } else if (*(short *) (g + 0x88) < 0x10) {
            if (*(short *) (g + 0x88) == 0) {
                *(short *) (table + *(short *) (g + 0x88) * 4) = 0x1E;
                *(short *) (table + *(short *) (g + 0x88) * 4 + 2) = arg0;
                *(int *) (g + 0x84) = 0;
                (*(short *) (g + 0x88))++;
                *(int *) (g + 0x94) = 1;
            } else if (*(int *) (g + 0x84) < 0xF) {
                *(short *) (table + (*(short *) (g + 0x88) - 1) * 4) = *(int *) (g + 0x84);
                *(short *) (table + *(short *) (g + 0x88) * 4 + 2) = arg0;
                *(int *) (g + 0x84) = 0;
                (*(short *) (g + 0x8A))++;
                if (*(short *) (g + 0x8A) > 1) {
                    *(int *) (g + 0x94) = 0;
                }
            } else {
                *(short *) (table + *(short *) (g + 0x88) * 4) = *(int *) (g + 0x84);
                *(short *) (table + *(short *) (g + 0x88) * 4 + 2) = arg0;
                *(int *) (g + 0x84) = 0;
                (*(short *) (g + 0x88))++;
            }
        } else if (*(short *) (g + 0x88) >= 0x10) {
            *(int *) (g + 0x84) = 0;
        }
    }
    *(short *) (g + 2) = arg1;
}

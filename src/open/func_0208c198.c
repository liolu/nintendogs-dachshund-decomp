extern int func_0208b5c4(int, int);
extern int data_02154300[];
void func_0208c198(unsigned char *arg0) {
    unsigned int *p = (unsigned int *) data_02154300;
    int idx;
    int v;

    if (p[9] == 0) {
        return;
    }
    idx = func_0208b5c4((int) arg0, 6);
    v = 0;
    if (idx != -1) {
        v = p[10];
        if (v < 0) {
            v = -v;
        }
        *(int *) (arg0 + 0x28 + idx * 4) = v;
        *(unsigned short *) (arg0 + 0x26) |= 1 << idx;
    }
    if (v > 0x1E) {
        p[11]++;
        if (p[11] > 5) {
            p[9] = 0;
            p[10] = 0;
            p[11] = 0;
        }
        return;
    }
    p[9] = 0;
    p[10] = 0;
    p[11] = 0;
}

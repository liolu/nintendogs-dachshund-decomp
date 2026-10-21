typedef signed short s16;
typedef unsigned char u8;
s16 func_0211edd0(u8 *arg0) {
    s16 i;
    s16 sum1;
    s16 sum2;
    s16 k;
    u8 *p;

    sum2 = 0;
    k = 0;
    p = arg0;
    for (; k < 3; k++) {
        sum1 = 0;
        for (i = 0; i < 5; i++) {
            sum1 += ((s16 *) (p + 0x42))[i];
        }
        sum1 += ((s16 *) (arg0 + 0x60))[k];
        if (sum1 < 0) {
            sum1 = 0;
        }
        sum2 += sum1;
        p += 0xa;
    }
    return (s16) (sum2 / 3);
}

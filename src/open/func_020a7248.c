int func_020a7248(int arg0, unsigned char *arg1) {
    int v = arg1[0x160];
    int x;

    if (v == 0) {
        goto zero;
    }
    switch (v) {
        case 1:
        case 4:
            x = *(int *) (arg1 + 0xCC);
            break;
        case 2:
        case 5:
            x = *(int *) (arg1 + 0xD8);
            break;
        case 3:
            x = *(int *) (arg1 + 0xE4);
            break;
    }
    if (x > 0xCCD) {
        goto one;
    }
    if (x >= -0xCCD) {
        goto zero;
    }
 one:
    return 1;
 zero:
    return 0;
}

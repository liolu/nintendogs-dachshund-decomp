/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02106088 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02106088.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
void func_020acfd8(u32 *param_1) {
    u32 i;
    u32 *q;
    param_1[0]              = 0;
    param_1[1]              = 0;
    param_1[2]              = 0;
    param_1[3]              = 0;
    param_1[4]              = 0;
    param_1[5]              = 0;
    param_1[6]              = 0;
    param_1[7]              = 0;
    param_1[8]              = 0;
    param_1[9]              = 0;
    param_1[13]             = 0;
    *(s16 *) (param_1 + 14) = -1;
    i                       = 0;
    do {
        q     = param_1 + i;
        q[10] = 0xffffffff;
        i     = i + 1;
    } while (i < 3);
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c9534 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c9534.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
extern u32 data_02148e88;
extern u32 data_02149008;
extern u32 data_02148e54;
extern u32 data_021560b0;
extern u32 data_02148e80;
extern u32 data_02148e84;
extern u32 data_02148e7c;
void func_02113084(u32 *param_1) {
    u32 a = data_02148e88;
    u32 b = data_02149008;
    u32 c = data_02148e54;
    u32 d;
    u32 e;
    u32 f;
    param_1[0] = c;
    param_1[1] = b;
    param_1[2] = a;
    d          = data_021560b0;
    e          = data_02148e80;
    f          = data_02148e84;
    param_1[3] = f;
    param_1[4] = e;
    param_1[5] = d;
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    param_1[9] = data_02148e7c;
}

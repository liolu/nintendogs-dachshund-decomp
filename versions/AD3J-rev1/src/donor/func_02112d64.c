/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c9214 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c9214.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u8 *data_02153704;
extern u32 data_02148e50;
extern void func_021170e8(u32 *a, u32 *b, u32 c, u32 d, u32 e);
void func_02112d64(u32 *param_1, u16 param_2) {
    u32 local[3];
    u32 a;
    u32 c;
    local[0] = 0;
    local[1] = 0;
    local[2] = 0;
    func_021170e8(param_1, local, *(u32 *) (data_02153704 + 0xc), 0, param_2);
    param_1[1] = 0x14000;
    a          = param_1[0];
    c          = param_1[2];
    param_1[3] = -a;
    param_1[4] = 0;
    param_1[5] = -c;
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    param_1[9] = data_02148e50;
}

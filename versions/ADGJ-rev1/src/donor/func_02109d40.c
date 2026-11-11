/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02109d40 from projets/nintendogs-chihuahua-friends/src/donor/func_02109d40.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern u32 data_02153720;
extern u32 data_02150330;
typedef struct {
    u32 w[3];
} T3;
extern void func_02069634(u8 *a, void *b, u32 *c);
extern void func_020069bc(u32 *a, u32 *b);
void func_02109d40(u32 param_1, u8 *param_2, u32 *param_3, u32 *param_4, u32 *param_5) {
    T3 local;
    u8 *iVar1;
    u32 v0;
    u32 v1;
    u32 v2;

    iVar1 = *(u8 **) (*(u8 **) &data_02153720 + 0x1c);
    local = *(T3 *) (iVar1 + 0x30);
    func_02069634(param_2, &local, param_5);
    param_5[1] = 0;
    func_020069bc(param_5, param_5);
    param_4[0] = 0;
    param_4[1] = 0x1000;
    param_4[2] = 0;
    v2         = *(u32 *) ((u8 *) &data_02150330 + 0x64);
    v1         = *(u32 *) ((u8 *) &data_02150330 + 0x58);
    v0         = *(u32 *) ((u8 *) &data_02150330 + 0x4c);
    param_3[0] = v0;
    param_3[1] = v1;
    param_3[2] = v2;
    param_3[0] = -param_3[0];
    param_3[1] = -param_3[1];
    param_3[2] = -param_3[2];
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c99ac from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c99ac.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct Tri {
    u32 a;
    u32 b;
    u32 c;
} Tri;
typedef struct {
    Tri t;
    s32 arr[4];
    s32 gap[2];
    s32 rest[4];
} Frm;
extern s32 data_02148ed8;
extern s32 data_02148ed4;
extern s32 data_02148ed0;
extern s32 data_02148ecc;
extern s32 func_020d3e98(u8 *p);
extern void func_02069634(s32 *a, s32 *b, s32 *c);
extern void func_02069668(s32 *a, s32 *b, s32 *c);
extern void func_01ff832c(s32 v, s32 *a, s32 *b, s32 *c);
void func_021134fc(s32 *param_1, u8 *param_2) {
    s16 sVar1;
    Frm F;
    s32 bVar3;
    u32 e8;
    u32 e4;
    u32 e0;

    if (param_2 == ((void *) 0)) {
        return;
    }
    sVar1 = *(s16 *) (param_2 + 0x94);
    if (sVar1 != 0x40 && sVar1 != 0x41 && sVar1 != 0x42) {
        return;
    }
    bVar3 = func_020d3e98(param_2);
    if (bVar3 != 0) {
        *(Tri *) &F.arr[3] = *(Tri *) (param_2 + 0xbc);
        func_02069634(&F.arr[3], param_1 + 3, F.rest);
        func_02069668(param_1, F.rest, param_1);
        *(Tri *) (param_1 + 3) = *(Tri *) &F.arr[3];
    } else {
        *(Tri *) &F.arr[3] = *(Tri *) (param_2 + 0xbc);
        e8                 = *(u32 *) (param_2 + 0xe8);
        e4                 = *(u32 *) (param_2 + 0xe4);
        e0                 = *(u32 *) (param_2 + 0xe0);
        F.t.a              = e0;
        F.t.b              = e4;
        F.t.c              = e8;
        F.arr[0]           = 0;
        F.arr[1]           = 0x1000;
        F.arr[2]           = 0;
        func_01ff832c(data_02148ed8, (s32 *) &F.t, &F.arr[3], param_1);
        func_01ff832c(data_02148ed4, F.arr, param_1, param_1);
        func_01ff832c(data_02148ed0, (s32 *) &F.t, &F.arr[3], param_1 + 3);
    }
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    param_1[9] = data_02148ecc;
}

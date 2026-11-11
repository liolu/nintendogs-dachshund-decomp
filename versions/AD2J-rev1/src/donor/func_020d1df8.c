/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d1df0 from projets/nintendogs-shiba-friends/src/donor/func_020d1df0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern u32 data_02153720;
extern u32 data_02156080;
typedef struct {
    u32 w[3];
} T12;
extern s32 func_02044644(s32 a);
extern void func_021084a8(u8 *p, u8 *q);
extern void func_02069634(u8 *p, u32 *q, u32 *r);
extern void func_020069bc(u32 *p, u32 *q);
extern void func_02069504(u32 *p, u32 *q, u32 *r);
extern u32 func_0210fd98(u8 *p);
extern s32 func_02092d80(s32 a, u8 *b, u32 c);
extern void func_0210fdc8(u8 *p);
extern void func_020ec2a0(u8 *p, u32 a);
extern u32 func_020d1f84(u8 *p);
u32 func_020d1df8(u8 *param_1) {
    u32 L[13];
    s32 iVar4;
    s32 iVar5;
    u32 uVar6;

    iVar4 = func_02044644(*(s16 *) (param_1 + 156));
    func_021084a8(param_1, param_1 + 188);
    func_02044644(*(s16 *) (param_1 + 156));
    iVar5          = *(s32 *) (*(u8 **) &data_02153720 + 0x1c);
    *(T12 *) &L[9] = *(T12 *) (iVar5 + 48);
    func_02069634(param_1 + 188, &L[9], &L[3]);
    L[4] = 0;
    func_020069bc(&L[3], &L[3]);
    L[0] = 0;
    L[2] = 0;
    L[1] = 0xfffff000;
    func_02069504(&L[3], &L[0], &L[6]);
    *(u32 *) (param_1 + 200)  = L[6];
    *(u32 *) (param_1 + 0xcc) = L[7];
    *(u32 *) (param_1 + 0xd0) = L[8];
    *(u32 *) (param_1 + 0xd4) = L[3];
    *(u32 *) (param_1 + 0xd8) = L[4];
    *(u32 *) (param_1 + 0xdc) = L[5];
    *(u32 *) (param_1 + 0xe0) = L[0];
    *(u32 *) (param_1 + 0xe4) = L[1];
    *(u32 *) (param_1 + 0xe8) = L[2];
    uVar6                     = *(u32 *) (*(u8 **) &data_02156080 + 0x24);
    if (uVar6 != 0) {
        return func_0210fd98(param_1);
    }
    if (iVar4 != 0) {
        uVar6 = (u32) (((s64) * (s32 *) (param_1 + 0x24) * 0x166c + 0x800) >> 12);
        iVar4 = func_02092d80(iVar4, param_1 + 188, uVar6);
        if (iVar4 != 0) {
            func_0210fdc8(param_1);
            func_020ec2a0(param_1 + 400, 5);
        }
        return func_020d1f84(param_1);
    }
    return uVar6;
}

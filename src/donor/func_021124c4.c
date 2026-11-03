/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c8974 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c8974.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed int s32;
typedef signed long long s64;
extern int *data_02153720;
extern int *data_02156080;
extern s32 func_02044644(int a);
extern void func_02108434(int a, s32 *b, int c);
extern void func_02092ee8(int a, int b, s32 *c);
extern void func_02108354(int a, int b);
extern void func_02109aac(int a, int b, int c, int d, int e, int f);
extern void func_0210fd90(int a);
extern s32 func_02069430(int a);
extern void func_020ec218(int a, int b, int c);
extern void func_020444fc(void);
typedef struct {
    s32 w[3];
} T3;
void func_021124c4(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8) {
    s32 L[6];
    int iVar2;

    iVar2 = func_02044644(0);
    func_02108434(param_1, &L[3], param_8);
    func_02092ee8(iVar2, param_1 + 188, &L[3]);
    func_02108354(param_1, param_1 + 200);
    if ((*(u16 *) ((u8 *) data_02153720 + 0x84) & 1) != 0 && *(s32 *) ((u8 *) data_02156080 + 0x24) == 0) {
        return;
    }
    func_02109aac(iVar2, param_1 + 188, param_2, param_3, param_4, param_1 + 176);
    *(T3 *) &L[0]             = *(T3 *) (*(u8 **) ((u8 *) data_02153720 + 0x1c) + 0x48);
    *(s32 *) (param_1 + 0xb0) = *(s32 *) (param_1 + 0xb0) + ((s32) ((((s64) (s32) (L[0])) * (s32) (param_5) + 0x800) >> 12));
    *(s32 *) (param_1 + 0xb8) = *(s32 *) (param_1 + 0xb8) + ((s32) ((((s64) (s32) (L[2])) * (s32) (param_5) + 0x800) >> 12));
    if (*(s32 *) ((u8 *) param_1 + 0xb4) > param_6) {
        *(s32 *) ((u8 *) param_1 + 0xb4) = param_6;
    }
    if (*(s32 *) ((u8 *) param_1 + 0xb4) < -param_6) {
        *(s32 *) ((u8 *) param_1 + 0xb4) = -param_6;
    }
    func_0210fd90(param_1);
    if (param_7 >= 0) {
        iVar2 = func_02069430(param_1 + 176);
        func_020ec218(param_1 + 400, param_7, iVar2);
    }
    func_020444fc();
}

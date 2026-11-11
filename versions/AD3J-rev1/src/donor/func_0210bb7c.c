/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c1bfc from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c1bfc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02153720[];
extern u8 data_027c0460[];
extern void func_02044644(s32 a);
extern void func_021077e8(u8 *p);
extern void func_02108354(u8 *p, u32 *q);
extern void func_020c5148(u8 *p, s32 a);
extern void func_020c5184(u8 *p, s32 a);
extern void func_020c5134(u8 *p, s32 a);
extern u32 func_01ffda04(s32 a);
extern void func_02028fc4(u32 a, s32 b, s32 c);
typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Tri;
void func_0210bb7c(u8 *param_1) {
    u8 *A;
    u8 *B;
    Tri t;
    u32 *piVar5;
    u8 *q;
    u8 *q2;
    s32 *w;
    s32 v;
    s32 i;
    u32 uVar2;

    func_02044644((s16) * (s16 *) (param_1 + 0x9c));
    piVar5                    = *(u32 **) (param_1 + 0x214);
    A                         = *(u8 **) data_02153720;
    B                         = *(u8 **) (A + 0x1c);
    t                         = *(Tri *) (B + 0x30);
    *(s32 *) (param_1 + 0xbc) = t.a / 2;
    *(s32 *) (param_1 + 0xc0) = -410;
    *(s32 *) (param_1 + 0xc4) = t.c / 2;
    func_021077e8(param_1);
    func_02108354(param_1, (u32 *) (param_1 + 200));
    q2                   = *(u8 **) piVar5;
    *(u16 *) (q2 + 0x20) = *(u16 *) (q2 + 0x20) & ~1;
    q                    = *(u8 **) piVar5;
    v                    = (s32) piVar5[3];
    w                    = (s32 *) (q + 0x24);
    w[0]                 = v;
    w[1]                 = v;
    w[2]                 = v;
    q                    = *(u8 **) piVar5;
    *(u32 *) (q + 0x28)  = 0;
    if (*(u8 **) piVar5 != ((void *) 0)) {
        func_020c5148(*(u8 **) piVar5, (u16) (data_027c0460[0] | (data_027c0460[1] << 5) | (data_027c0460[2] << 10)));
    }
    func_020c5184(*(u8 **) piVar5, 0x7fff);
    func_020c5134(*(u8 **) piVar5, 3);
    i = 0;
    do {
        uVar2 = func_01ffda04(i);
        if (uVar2 != 0) {
            func_02028fc4(uVar2, 75, 1);
        }
        i = (s16) (i + 1);
    } while (i < 3);
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208cc2c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0208cc2c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u32 vu32;
extern u32 func_020c5468(int a, int b, int c);
extern void func_020c4ef0(int a, int b);
extern void func_020c4eb4(int a, int b);
extern void func_020c2870(u8 *p);
extern void func_0208b6fc(u8 *q, u32 f);
extern void func_0207e3b0(int a, int b);
extern void func_0207e40c(int a, int b);
void func_020c26a0(u8 *param_1) {
    s32 iVar6;
    u8 *e;
    u8 *q;
    u32 fA;
    u32 fB;

    e     = param_1 + 0xc0;
    iVar6 = 0;
    do {
        if (*(s16 *) (e + 2) == 1) {
            q  = (u8 *) (*(s32 *) (e + ((*(u16 *) e ^ 1) * 4) + 4) + 0x5000);
            fA = (*(vu32 *) (q + 0xc) & 1) != 0;
            if (fA == 0) {
                fB = (*(vu32 *) (q + 0xc) & 0x10) != 0;
                if (fB != 0) {
                    func_0208b6fc(q, fB);
                }
                *(s16 *) (e + 2) = 2;
            }
        }
        iVar6 = (s16) (iVar6 + 1);
        e     = e + 12;
    } while (iVar6 < 6);
    switch (*(s16 *) param_1) {
        case 0:
            break;
        case 1:
            func_020c2870(param_1);
            return;
        case 2:
            if (*(s16 *) (param_1 + 194) == 2) {
                *(s16 *) param_1 = 3;
            }
            return;
        case 3:
            *(s16 *) param_1 = 4;
            *(u32 *) (param_1 + 0x94) =
                func_020c5468(*(s32 *) (param_1 + 0x70), *(s32 *) (param_1 + 0x80), (int) (param_1 + 0x98));
            func_020c4ef0((int) (param_1 + 0x48), *(s32 *) (param_1 + 0x94));
            if (*(s32 *) (param_1 + 0x74) == 0) {
                return;
            }
            ((void (*)(int, int)) * (s32 *) (param_1 + 0x74))((int) param_1, 0);
            return;
        case 4:
            break;
        case 5:
            *(s16 *) param_1 = 0;
            if (*(s32 *) (param_1 + 0x74) != 0) {
                ((void (*)(int, int)) * (s32 *) (param_1 + 0x74))((int) param_1, 1);
            }
            func_020c4eb4((int) (param_1 + 0x48), *(s32 *) (param_1 + 0x94));
            *(s32 *) (param_1 + 0x94) = 0;
            *(s32 *) (param_1 + 0x88) = 0;
            *(s32 *) (param_1 + 0x8c) = 0;
            *(s32 *) (param_1 + 0x90) = 0;
            *(u16 *) (param_1 + 122)  = 0xffff;
            if (*(s32 *) (param_1 + 0x6c) != *(s32 *) (param_1 + 0x70)) {
                func_0207e3b0(*(s32 *) (param_1 + 0x70), 0x44464357);
            }
            func_0207e3b0(*(s32 *) (param_1 + 0x6c), 0x4446434d);
            if (*(s32 *) (param_1 + 0x6c) != *(s32 *) (param_1 + 0x70)) {
                func_0207e40c(*(s32 *) (param_1 + 0x70), 0x44464357);
            }
            func_0207e40c(*(s32 *) (param_1 + 0x6c), 0x4446434d);
            break;
    }
}

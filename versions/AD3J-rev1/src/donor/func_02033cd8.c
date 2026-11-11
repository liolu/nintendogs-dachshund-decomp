/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020340f4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020340f4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed char s8;
typedef signed int s32;
typedef volatile u32 vu32;
extern u8 *data_0214b480;
extern void func_02092bfc(u8 *a, s32 b);
extern s32 func_021060b0(void);
extern s32 func_02092d74(u8 *a, s32 b);
extern void func_02105dbc(s32 a, s32 b);
extern u8 *func_02106344(void);
void func_02033cd8(u8 *param_1) {
    s32 iVar3;
    s32 bVar1;
    s32 iVar4;
    u8 *q;

    func_02092bfc(data_0214b480, (s32) * (s8 *) (param_1 + 0x88));
    if (func_021060b0() == 0) {
        return;
    }
    bVar1 = 1;
    iVar3 = 0;
    do {
        iVar4 = func_02092d74(data_0214b480, iVar3);
        if (iVar4 != -1) {
            bVar1 = 0;
            break;
        }
        iVar3 = (s8) (iVar3 + 1);
    } while (iVar3 < 3);
    if (bVar1 != 0) {
        func_02105dbc(1, -1);
        q                    = (u8 *) ((u32) func_02106344() + 136);
        *(vu32 *) (q + 0x6c) = 0;
    }
}

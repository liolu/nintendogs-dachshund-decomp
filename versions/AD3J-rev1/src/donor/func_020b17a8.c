/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210aef4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0210aef4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153700;
extern u8 *data_02153720;
extern s32 func_020932a0(void);
extern void func_020b1a78(u32 a, u8 *p);
extern void func_020b1834(u8 *p);
void func_020b17a8(u8 *param_1) {
    s32 iVar3;

    *(u32 *) param_1         = 0;
    iVar3                    = func_020932a0();
    *(s16 *) (param_1 + 164) = (s16) (iVar3 >> 12);
    iVar3                    = *(s16 *) (*(u8 **) (data_02153700 + 4) + 2) + 59;
    *(s16 *) (param_1 + 166) = (s16) (iVar3 / 60);
    *(s16 *) (param_1 + 168) = *(s16 *) (data_02153720 + 86);
    func_020b1a78(0, param_1);
    func_020b1834(param_1);
}

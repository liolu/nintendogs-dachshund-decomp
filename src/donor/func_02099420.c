/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02099420 from projets/nintendogs-chihuahua-friends/src/donor/func_02099420.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
extern u8 *data_02153720;
extern u32 func_02095610(u8 *p);
extern u32 func_020ae8b8(void);
extern u32 func_020ae83c(void);
extern void func_0209565c(u8 *p, int a);
extern void func_02095590(u8 *p, int a);
extern void func_020ae87c(void);
extern u32 func_020ee774(u32 a);
extern u32 func_020ae85c(void);
extern u32 func_02095784(u8 *p);
u32 func_02099420(u8 *param_1) {
    s16 sVar1;
    u32 iVar3;
    u32 uVar4;
    u32 t;

    sVar1 = *(s16 *) (param_1 + 0x2e);
    switch (sVar1) {
        case 0:
            return func_02095610(param_1);
        case 1:
            iVar3 = func_020ae8b8();
            if (iVar3 == 0) {
                return iVar3;
            }
            uVar4 = func_020ae83c();
            switch (uVar4) {
                case 1:
                    *(u32 *) (data_02153720 + 0x20) = *(u32 *) (data_02153720 + 0x20) | 2;
                    func_0209565c(param_1, 4);
                    func_02095590(param_1, 0);
                    func_020ae87c();
                    return func_020ee774(0x4c);
                case 2:
                    return uVar4;
                case 3:
                    return uVar4;
            }
            return uVar4;
        case 4:
            t = func_020ae85c();
            if (t == 0) {
                return t;
            }
            return func_02095784(param_1);
    }
    return (u32) param_1;
}

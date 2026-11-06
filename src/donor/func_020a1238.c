/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a1238 from projets/nintendogs-chihuahua-friends/src/donor/func_020a1238.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef int BOOL;
extern BOOL func_02095610(u32 p);
extern void func_0209565c(u32 p, s32 v);
extern void func_02095590(u32 p, s32 v);
extern u32 func_020b4940(void);
extern BOOL func_02095524(u32 p);
extern u32 func_02095784(u32 p);
extern s32 data_02154c70;
u32 func_020a1238(u32 param_1) {
    BOOL bVar1;

    switch (*(s16 *) (param_1 + 0x2e)) {
        case 0:
            return func_02095610(param_1);
        case 1:
            if (*(s32 *) ((u8 *) data_02154c70 + 0xa4) == 0) {
                return param_1;
            }
            func_0209565c(param_1, 0x16);
            func_02095590(param_1, 0);
            return func_020b4940();
        case 2:
            break;
        case 3:
            break;
        case 4:
            bVar1 = func_02095524(param_1);
            if (!bVar1) {
                return bVar1;
            }
            return func_02095784(param_1);
    }
}

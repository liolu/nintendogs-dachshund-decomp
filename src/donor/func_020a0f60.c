/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a0f60 from projets/nintendogs-shiba-friends/src/donor/func_020a0f60.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern void func_020a1534(void);
extern s32 func_02095610(u8 *p);
extern void func_020cd3d8(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_020a100c(u8 *p);
extern s32 func_02095524(u8 *p);
extern void func_02095784(u8 *p);
void func_020a0f60(u8 *param_1) {
    switch (*(s16 *) (param_1 + 46)) {
        case 0:
            if (func_02095610(param_1) == 0) {
                return;
            }
            *(u16 *) (param_1 + 42) = 0;
            func_020cd3d8(2, 0xc1f, 0, (u32) func_020a1534, 0);
            return;
        case 1:
            func_020a100c(param_1);
            return;
        case 4:
            if (func_02095524(param_1) == 0) {
                return;
            }
            func_02095784(param_1);
            break;
        case 2:
        case 3:
            break;
    }
}

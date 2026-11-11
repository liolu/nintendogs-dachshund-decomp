/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209c774 from projets/nintendogs-chihuahua-friends/src/donor/func_0209c774.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02154c70;
extern u32 func_02095610(u8 *p);
extern void func_0209565c(u8 *p, s32 v);
extern u32 func_02095590(u8 *p, s32 v);
extern u32 func_02095524(u8 *p);
extern u32 func_02095784(u8 *p);
u32 func_0209c774(u8 *param_1) {
    s32 sVar1;
    u32 r;

    switch (*(s16 *) (param_1 + 0x2e)) {
        case 0:
            return func_02095610(param_1);
        case 1:
            if (*(u32 *) (data_02154c70 + 0xa4) == 0) {
                goto done;
            }
            sVar1 = *(s16 *) (data_02154c70 + 0x9a);
            if (sVar1 == 0) {
                goto c0;
            }
            if (sVar1 != 1) {
                goto done;
            }
            goto c1;
        c0:
            func_0209565c(param_1, 42);
            return func_02095590(param_1, 0);
        c1:
            func_0209565c(param_1, 40);
            return func_02095590(param_1, 1);
        case 2:
            break;
        case 3:
            break;
        case 4:
            r = func_02095524(param_1);
            if (r == 0) {
                return r;
            }
            return func_02095784(param_1);
    }
done:;
}

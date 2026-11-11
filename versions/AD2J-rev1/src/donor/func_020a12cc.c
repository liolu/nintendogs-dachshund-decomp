/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a12cc from projets/nintendogs-shiba-friends/src/donor/func_020a12cc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 func_02095610(u8 *p);
extern u32 func_020b4920(void);
extern u16 *func_020b261c(void);
extern u32 func_020c557c(u16 *p);
extern void func_0209565c(u8 *p, u32 a);
extern s32 func_02095590(u8 *p, u32 a);
extern u32 func_020cd3d8(u32 a, u32 b, u32 c, u32 d, u32 e);
extern s32 func_02095524(u8 *p);
extern s32 func_02095784(u8 *p);
u32 func_020a12cc(u8 *param_1) {
    u32 r;
    u16 *psVar2;
    s32 r4;
    s32 t;

    switch (*(s16 *) (param_1 + 46)) {
        case 0:
            return func_02095610(param_1);
        case 1:
            r = func_020b4920();
            if (r != 3) {
                return r;
            }
            psVar2 = func_020b261c();
            r4     = 0;
            if (*psVar2 == 0) {
                r4 = 1;
            } else if (func_020c557c(psVar2) != 0) {
                r4 = 2;
            }
            switch (r4) {
                case 0:
                    func_0209565c(param_1, 24);
                    return func_02095590(param_1, 0);
                case 1:
                case 2:
                    func_0209565c(param_1, 23);
                    func_02095590(param_1, 0);
                    return func_020cd3d8(2, 0x0c1e, 0, 0, 0);
            }
            break;
        case 2:
        case 3:
            break;
        case 4:
            t = func_02095524(param_1);
            if (t == 0) {
                return t;
            }
            return func_02095784(param_1);
    }
}

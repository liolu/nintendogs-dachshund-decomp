/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a18a0 from projets/nintendogs-chihuahua-friends/src/donor/func_020a18a0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 func_020a2f40;
extern s32 func_02095610(int p);
extern void func_020934cc(int p);
extern void func_020cd3d8(int a, u32 b, int c, u32 d, int e);
extern void func_020a1a08(int p);
extern s32 func_02095524(int p);
extern void func_02095784(int p);
void func_020a18a0(s16 *param_1) {
    s32 bVar1;

    switch (param_1[0x17]) {
        case 0:
            bVar1 = func_02095610((int) param_1);
            if (bVar1 == 0) {
                return;
            }
            func_020934cc((int) param_1);
            switch (param_1[0x8c]) {
                case 0x13:
                    func_020cd3d8(2, 0xc4f, 0, (u32) &func_020a2f40, 0);
                    return;
                case 0x14:
                    break;
                case 0x15:
                    break;
                case 0x16:
                    break;
                case 0x17:
                    break;
                case 0x18:
                    break;
                case 0x19:
                    func_020cd3d8(2, 0xc55, 0, (u32) &func_020a2f40, 0);
                    return;
                case 0x1a:
                    break;
                case 0x1b:
                    func_020cd3d8(2, 0xc56, 0, (u32) &func_020a2f40, 0);
                    return;
                case 0x1c:
                    func_020cd3d8(2, 0xc59, 0, (u32) &func_020a2f40, 0);
                    return;
            }
            break;
        case 1:
            func_020a1a08((int) param_1);
            return;
        case 2:
            break;
        case 3:
            break;
        case 4:
            bVar1 = func_02095524((int) param_1);
            if (bVar1 == 0) {
                return;
            }
            func_02095784((int) param_1);
    }
}

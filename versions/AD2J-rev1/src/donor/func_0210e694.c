/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210e68c from projets/nintendogs-shiba-friends/src/donor/func_0210e68c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 func_0210e788(u8 *p);
extern s32 func_01ffda04(s32 a);
extern s32 func_020343a4(s32 a);
extern s32 func_02111d2c(s32 a, void *b, u32 c, s32 *d);
extern s32 func_021077ac(u8 *p, s32 a, s32 b, s32 c);
u32 func_0210e694(u8 *param_1) {
    s32 local_28[3];
    s32 iVar4;
    s32 iVar5;
    u32 uVar2;
    s32 iVar3;

    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
        case 1:
            break;
        case 2:
            return func_0210e788(param_1);
        case 3:
            func_0210e788(param_1);
            iVar3       = *(s32 *) (param_1 + 0x214);
            iVar5       = 0;
            local_28[0] = 0;
            local_28[1] = 0;
            local_28[2] = 0;
            do {
                iVar4 = func_01ffda04(iVar5);
                if (iVar4 != 0) {
                    if (func_020343a4(iVar4) != 0) {
                        if (func_02111d2c(iVar4, (u8 *) iVar3 + 0x78, 0x4000, local_28) != 0) {
                            return (u32) func_021077ac(param_1, 6, iVar5, -1);
                        }
                    }
                }
                uVar2 = (u32) (iVar5 + 1) << 16;
                iVar5 = (s32) uVar2 >> 16;
            } while (iVar5 < 3);
            return uVar2;
        case 4:
        case 5:
            break;
        case 6:
            func_0210e788(param_1);
            break;
        default:
            break;
    }
    return;
}

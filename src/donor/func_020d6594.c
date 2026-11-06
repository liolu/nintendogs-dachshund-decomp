/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d6594 from projets/nintendogs-chihuahua-friends/src/donor/func_020d6594.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 func_021077e0(u8 *p);
extern u32 func_021077f0(u8 *p);
extern u32 func_02109174(u8 *p);
u32 func_020d6594(u8 *param_1) {
    u32 *iVar5;
    s32 iVar4;
    u32 *q;

    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            return func_021077e0(param_1);
        case 1:
            break;
        case 2:
            iVar5 = *(u32 **) (param_1 + 0x214);
            iVar4 = 0;
            do {
                q     = iVar5 + iVar4;
                q[8]  = 0;
                iVar4 = iVar4 + 1;
            } while (iVar4 < 7);
            return func_021077f0(param_1);
        case 3:
            *(u32 *) (param_1 + 0xa8) = 0;
            return (u32) param_1;
        case 4:
            return func_02109174(param_1);
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
    }
    return (u32) param_1;
}

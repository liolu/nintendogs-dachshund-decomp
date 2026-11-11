/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020fc310 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020fc310.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
s32 func_020a3928(u32 param_1, u8 *param_2) {
    s32 k;
    u32 uVar5;
    s32 iVar4;
    s32 iVar6;

    iVar6 = 1;
    iVar4 = 0;
    uVar5 = param_1;
    do {
        uVar5 = uVar5 / 10;
        if (uVar5 == 0) {
            break;
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 1;
    } while (iVar4 < 10);
    k = 0;
    if (iVar6 > 0) {
        s32 off;
        off = k;
        do {
            *(s16 *) (param_2 + iVar6 * 2 - off - 2) = (s16) ((u16) (param_1 % 10) + 0x30);
            k                                        = k + 1;
            param_1                                  = param_1 / 10;
            off                                      = off + 2;
        } while (k < iVar6);
    }
    *(u16 *) (param_2 + iVar6 * 2) = 0;
    return iVar6;
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c51ec from projets/nintendogs-chihuahua-friends/src/donor/func_020c51ec.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern void func_020c5260(u8 *p, u32 a, u32 *b);
void func_020c51ec(u8 *param_1, s16 param_2, s16 param_3) {
    s32 iVar2;
    s32 iVar1;

    iVar2                                                                 = 0;
    *(s32 *) (*(u8 **) (*(u8 **) (param_1 + 0x1c) + 0x5c) + param_3 * 12) = param_2 * 36 + *(s32 *) (param_1 + 0x74);
    if (*(s16 *) (param_1 + 0x6c) > 0) {
        iVar1 = 0;
        do {
            *(u32 *) (*(u8 **) (param_1 + 0x74) + iVar1) = 0;
            iVar2                                        = (s16) (iVar2 + 1);
            iVar1                                        = iVar1 + 36;
        } while (iVar2 < *(s16 *) (param_1 + 0x6c));
    }
    func_020c5260(param_1, 0, *(u32 **) (param_1 + 0x74));
}

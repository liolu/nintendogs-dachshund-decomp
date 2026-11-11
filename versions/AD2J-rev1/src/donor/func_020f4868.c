/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f4860 from projets/nintendogs-shiba-friends/src/donor/func_020f4860.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 func_020f45c8(u8 *p, u32 a, u32 b, u32 c);
extern void func_020f46d8(u8 *p, u32 a, u32 *b, u32 *c);
u32 func_020f4868(u8 *param_1, u32 *param_2, u32 param_3, u32 param_4) {
    u32 uVar2;
    u32 uVar5;
    u32 uStack_18;
    u32 auStack_14[2];
    if (*param_2 < 1000) {
        return 0xfffffffe;
    }
    if (param_4 != 0x7fff) {
        uVar2 = func_020f45c8(param_1, *param_2, 0, param_4);
        if ((s32) uVar2 >= 0x6000) {
            return 0xfffffffd;
        }
        if ((s32) uVar2 < 0x1000) {
            return 0xfffffffc;
        }
    }
    func_020f46d8(param_1, *param_2, &uStack_18, auStack_14);
    if (auStack_14[0] <= 1000) {
        return 0xfffffffe;
    }
    uVar5 = 0;
    while (uVar5 < auStack_14[0]) {
        ((s16 *) param_1)[uVar5] = ((s16 *) param_1)[uStack_18 + uVar5];
        uVar5                    = uVar5 + 1;
    }
    *param_2 = auStack_14[0];
    return 0;
}

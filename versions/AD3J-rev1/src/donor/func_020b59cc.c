/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b59cc from projets/nintendogs-chihuahua-friends/src/donor/func_020b59cc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_02153740;
extern void func_020a3a70(u32, u32, u32);
void func_020b59cc(u8 *param_1) {
    s32 iVar2 = 0;
    s32 iVar1;
    if (*(s32 *) (*(u8 **) &data_02153740 + 0xac) == 2) {
        iVar1 = *(s32 *) (param_1 + 0x28);
        if (iVar1 == 4) {
            goto setv;
        }
        if (iVar1 == 5) {
            goto setv;
        }
        if (iVar1 != 6) {
            goto call;
        }
    setv:
        iVar2 = 1;
    call:
        func_020a3a70(2, 8, iVar2);
        return;
    }
}

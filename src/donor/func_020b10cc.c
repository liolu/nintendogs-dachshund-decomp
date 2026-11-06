/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b10cc from projets/nintendogs-chihuahua-friends/src/donor/func_020b10cc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed int s32;
extern u8 *data_02153894;
void func_020b10cc(void) {
    s32 *piVar2 = (s32 *) data_02153894;
    s32 iVar1;
    if (piVar2[0] == 0) {
        return;
    }
    iVar1 = piVar2[2];
    if (iVar1 != 0) {
        if (iVar1 != 5) {
            if (iVar1 != 6) {
                piVar2[2] = 5;
            }
            return;
        }
        return;
    }
}

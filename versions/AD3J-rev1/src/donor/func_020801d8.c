/* compiler: 1.2/sp2p3  */
/* func_0205b544 from projets/children-of-mana/src/auto/func_0205b544.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
s32 func_020801d8(void) {
    u16 *var_r0;

    if (*(u16 *) 0x027FFC10 == 0) {
        var_r0 = (u16 *) 0x027FF814;
    } else {
        var_r0 = (u16 *) 0x027FFC14;
    }
    if (*var_r0 == 1) {
        return 1;
    }
    return 0;
}

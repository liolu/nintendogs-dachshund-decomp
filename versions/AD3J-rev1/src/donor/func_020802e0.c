/* compiler: 1.2/sp2p3  */
/* func_0205b64c from projets/children-of-mana/src/auto/func_0205b64c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
extern s32 func_020801d8();
extern s32 func_0208020c();
extern s32 func_02080358();
extern s32 data_0213b67c;
s32 func_020802e0(void) {
    s32 temp_r4;
    s32 var_r2;

    if (data_0213b67c == -1) {
        temp_r4 = func_0208020c();
        if (func_02080358() != 0) {
            var_r2 = temp_r4 | 0x10000000;
        } else if (func_020801d8() != 0) {
            var_r2 = temp_r4 | 0x40000000;
        } else if (temp_r4 & 0x01000000) {
            var_r2 = temp_r4 | 0x20000000;
        } else {
            var_r2 = temp_r4 | 0x80000000;
        }
        data_0213b67c = var_r2 | *(u16 *) 0x027FFFFA;
    }
    return data_0213b67c;
}

/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02092d38 from projets/nintendogs-chihuahua-friends/src/donor/func_02092d38.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    u32 w[3];
} T12;
void func_02092d38(u8 *param_1, T12 *param_2, s32 param_3) {
    s16 sVar1 = *(s16 *) (param_1 + param_3 * 2 + 0xc6);
    if (sVar1 != -1) {
        *param_2 = *(T12 *) (param_1 + sVar1 * 12 + 0xd0);
        return;
    }
    *param_2 = *(T12 *) (param_1 + 0xe8);
}

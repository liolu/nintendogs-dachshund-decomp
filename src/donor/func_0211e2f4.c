/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211e2ec from projets/nintendogs-shiba-friends/src/donor/func_0211e2ec.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_021560e8;
extern s32 func_0211fd50(u32 p);
void func_0211e2f4(u32 param_1) {
    if (func_0211fd50(param_1) != 0) {
        *(u32 *) (*(u8 **) &data_021560e8 + 0x28) = 1;
    }
}

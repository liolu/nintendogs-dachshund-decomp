/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d7eac from projets/nintendogs-chihuahua-friends/src/donor/func_020d7eac.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern void func_021077d8(s32 a);
extern void func_021077e8(s32 a);
extern void func_0210916c(s32 a);
void func_020d7ea4(s32 param_1) {
    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            func_021077d8(param_1);
            return;
        case 1:
            func_021077e8(param_1);
            *(u32 *) (param_1 + 0xc0) = 0x1806;
            *(s16 *) (param_1 + 0xa6) = 1;
            return;
        case 2:
            break;
        case 3:
            break;
        case 4:
            func_0210916c(param_1);
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
    }
    return;
}

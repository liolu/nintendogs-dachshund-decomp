/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ca568 from projets/nintendogs-chihuahua-friends/src/donor/func_020ca568.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
typedef int BOOL;
extern s32 func_020c7f78(u8 *p);
extern s64 func_020c78d8(u8 *p, u32 *a, s32 *b);
BOOL func_020ca564(u8 *param_1, u32 *param_2, s32 *param_3) {
    BOOL bVar2;
    s64 v;

    bVar2 = 0;
    if (func_020c7f78(param_1 + 0x834) == 0) {
        goto eq;
    }
    v = func_020c78d8(param_1 + 0x834, param_2, param_3);
    if (v >= 0x708) {
        bVar2 = 1;
    }
    goto end;
eq:
    bVar2 = 1;
end:
    return bVar2;
}

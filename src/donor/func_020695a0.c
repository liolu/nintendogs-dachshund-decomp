/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020681a8 from projets/nintendogs-dachshund/src/donor/func_020681a8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed short int s16;
typedef signed long s32;
typedef signed long long int s64;
typedef s16 fx16;
typedef s32 fx32;
typedef s64 fx64;
typedef struct Vecx16 {
    fx16 x;
    fx16 y;
    fx16 z;
} VecFx16;
extern fx32 func_020695a0(struct Vecx16 *a, struct Vecx16 *b);
#pragma thumb off
#pragma thumb off
fx32 func_020695a0(struct Vecx16 *a, struct Vecx16 *b) {
    fx32 temp1, temp2;
    temp1 = (a->x * b->x) + (a->y * b->y);
    temp2 = (a->z * b->z) + (1 << (0xC - 1));
    return (fx32) (((fx64) temp1 + temp2) >> 0xC);
}

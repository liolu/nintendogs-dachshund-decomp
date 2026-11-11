/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* VecFx16_CrossProduct from https://github.com/RonyxDumb/mkds src/arm9/02148334_VecFx16_CrossProduct.c (license: none), reused
 * by tools/donor_match.py */
typedef signed short int s16;
typedef signed long s32;
typedef s16 fx16;
typedef s32 fx32;
typedef struct Vecx16 {
    fx16 x;
    fx16 y;
    fx16 z;
} VecFx16;
extern void func_020680a0(struct Vecx16 *a, struct Vecx16 *b, struct Vecx16 *dst);
#pragma thumb off
#pragma thumb off
void func_020680a0(struct Vecx16 *a, struct Vecx16 *b, struct Vecx16 *dst) {
    fx32 x, y, z;
    x      = ((a->y * b->z - a->z * b->y + (1 << (0xC - 1))) >> 0xC);
    y      = ((a->z * b->x - a->x * b->z + (1 << (0xC - 1))) >> 0xC);
    z      = ((a->x * b->y - a->y * b->x + (1 << (0xC - 1))) >> 0xC);
    dst->x = (fx16) x;
    dst->y = (fx16) y;
    dst->z = (fx16) z;
}

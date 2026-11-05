/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c76d0 from projets/nintendogs-shiba-friends/src/donor/func_020c76d0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 func_02080f5c(void);
typedef struct {
    u8 pad[0x38];
    u32 arr[2];
} T1;
typedef struct {
    u8 pad[0x4c];
    u32 arr[3];
} T2;
void func_020c76d4(s16 *p) {
    s32 i;
    u32 j;
    s32 k;
    u32 *pu;
    s16 *q;
    T1 *t1;
    T2 *t2;

    p[0]                = 0;
    p[1]                = 0;
    p[2]                = 5;
    p[3]                = p[2];
    p[4]                = 0;
    p[5]                = 0;
    p[6]                = 30;
    p[7]                = 0;
    p[8]                = 0;
    p[9]                = 0;
    p[10]               = 1;
    p[11]               = 0;
    p[12]               = 0;
    p[13]               = 1;
    p[14]               = 100;
    *(s32 *) (p + 0x10) = -1;
    *(s32 *) (p + 0x12) = 0;
    *(s32 *) (p + 0x14) = 0;
    *(s32 *) (p + 0x16) = 0;
    *(s32 *) (p + 0x18) = 0;
    p[0x1a]             = 0;
    t1                  = (T1 *) p;
    j                   = 0;
    do {
        t1->arr[j] = 0;
        j          = j + 1;
    } while (j < 2);
    *(s32 *) (p + 0x20) = func_02080f5c();
    p[0x22]             = 0;
    p[0x23]             = 0;
    p[0x24]             = -1;
    t2                  = (T2 *) p;
    i                   = 0;
    do {
        t2->arr[i] = -1;
        i          = i + 1;
    } while (i < 3);
    p[0x2c] = 0;
    for (i = 0; i < 256; i++) {
        q       = p + i;
        q[0x2d] = 0;
    }
    pu = (u32 *) (p + 0x12e);
    k  = 0;
    do {
        *pu                      = 0;
        *(u16 *) (pu + 1)        = 0;
        k                        = k + 1;
        *(u16 *) ((u8 *) pu + 6) = 0;
        pu                       = pu + 2;
    } while (k < 32);
    *(s32 *) (p + 0x1ae) = 0;
}

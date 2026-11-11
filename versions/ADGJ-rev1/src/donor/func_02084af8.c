/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02084af8 from projets/nintendogs-chihuahua-friends/src/donor/func_02084af8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct {
    u32 b0 : 1;
    u32 b1 : 1;
    u32 b2 : 1;
    u32 b3 : 1;
    u32 b4 : 1;
    u32 rest : 27;
} Fl;
typedef struct {
    u32 pad : 14;
    u32 b14 : 1;
    u32 rest : 17;
} Fq;
extern void func_020855e4(u8 *p, u32 *n);
extern u32 *func_02089210(u8 *p, u32 *n);
extern void func_020892c0(u8 *p, u32 *n);
void func_02084af8(u8 *param_1) {
    u32 *n;
    u32 *nx;
    u32 *q;
    u32 *res;

    n = *(u32 **) (param_1 + 4);
    if (n == 0) {
        return;
    }
    do {
        q  = *(u32 **) (*(u32 *) ((u8 *) n + 0x18));
        nx = (u32 *) n[0];
        if (((Fl *) &n[7])->b4 == 0 && *(u16 *) ((u8 *) n + 0x38) >= *(u16 *) ((u8 *) q + 0x32)) {
            n[7]                       = n[7] | 0x10;
            *(u16 *) ((u8 *) n + 0x38) = 0;
        }
        if (((Fl *) &n[7])->b2 == 0) {
            func_020855e4(param_1, n);
        }
        if ((((((Fq *) &q[0])->b14 && *(u16 *) ((u8 *) q + 0x38) != 0) && ((Fl *) &n[7])->b4 &&
              *(u16 *) ((u8 *) n + 0x38) > *(u16 *) ((u8 *) q + 0x38)) ||
             ((Fl *) &n[7])->b0) &&
            n[3] == 0 && n[5] == 0) {
            res = func_02089210(param_1 + 4, n);
            func_020892c0(param_1 + 12, res);
        }
        n = nx;
    } while (nx != 0);
}

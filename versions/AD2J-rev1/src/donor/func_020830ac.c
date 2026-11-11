/* compiler: 1.2/sp2p3 -O4,s -lang c99 -inline on,noauto */
/* func_020830ac from projets/nintendogs-shiba-friends/src/donor/func_020830ac.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long long u64;
extern int func_02083444(u64 d);
inline char *pad(char *a, int b) {
    return a + b;
}
inline u64 shr_n(u64 x, int n, int *pj) {
    int lim;
    int k;
    lim = n;
    for (k = 0; k < lim; k++) {
        x >>= 1;
    }
    *pj = k;
    return x;
}
u64 func_020830ac(u64 a, u64 b) {
    int tmp;
    int expb;
    int i;
    int j;
    u64 manta;
    u64 mantb;
    u64 out;
    u64 t;
    char *q;
    int bb;
    char *p;
    int exp;

    {
        tmp   = func_02083444(a);
        manta = 0;
        exp   = tmp;
    }
    expb  = func_02083444(b);
    mantb = 0;
    q     = (char *) (&a);
    q     = pad(q, 6);
    manta |= 0x10;
    manta |= ((((int) (q)) & 1) ? (((*(u16 *) ((q) -1)) & 0xff00) >> 8) : ((*(u16 *) (q)) & 0xff)) & ((i = 5), 0xf);
    do {
        p = pad((char *) (&a), i);
        manta <<= 8;
        manta |= ((((int) (p)) & 1) ? (((*(u16 *) ((p) -1)) & 0xff00) >> 8) : ((*(u16 *) (p)) & 0xff));
    } while (--i >= 0);
    q = (char *) (&b);
    q = pad(q, 6);
    mantb |= 0x10;
    mantb |= ((((int) (q)) & 1) ? (((*(u16 *) ((q) -1)) & 0xff00) >> 8) : ((*(u16 *) (q)) & 0xff)) & ((i = 5), 0xf);
    do {
        p = pad((char *) (&b), i);
        mantb <<= 8;
        mantb |= ((((int) (p)) & 1) ? (((*(u16 *) ((p) -1)) & 0xff00) >> 8) : ((*(u16 *) (p)) & 0xff));
    } while (--i >= 0);
    if (exp == 0 && manta == 0) {
        return b;
    }
    if (expb == 0 && mantb == 0) {
        return a;
    }
    manta |= 0x0010000000000000ULL;
    mantb |= 0x0010000000000000ULL;
    i = 0;
    if (exp >= expb) {
        for (; i < exp - expb; i++) {
            mantb >>= 1;
        }
        {
            volatile u64 *pb = &mantb;
            mantb            = manta + *pb;
        }
    } else {
        exp = expb - exp;
        for (; i < exp; i++) {
            manta >>= 1;
        }
        exp = expb;
        {
            volatile u64 *pb = &mantb;
            mantb            = manta + *pb;
        }
    }
    while (((mantb >> 53) & 1) != 0) {
        mantb >>= 1;
        exp++;
    }
    out = 0;
    q   = pad((char *) &out, 7);
    t   = ((((int) (q)) & 1) ? (((*(u16 *) ((q) -1)) & 0xff00) >> 8) : ((*(u16 *) (q)) & 0xff)) | (exp >> 4);
    q   = pad((char *) &out, 7);
    if (((int) (q)) & 1) {
        *(u16 *) ((q) -1) = (*(u16 *) ((q) -1) & 0xff) | (((t) & 0xff) << 8);
    } else {
        *(u16 *) (q) = (*(u16 *) (q) & 0xff00) | ((t) & 0xff);
    }
    q  = pad((char *) &out, 6);
    bb = ((((int) (q)) & 1) ? (((*(u16 *) ((q) -1)) & 0xff00) >> 8) : ((*(u16 *) (q)) & 0xff));
    bb |= (exp & 0xf) << 4;
    q = pad((char *) &out, 6);
    if (((int) (q)) & 1) {
        *(u16 *) ((q) -1) = (*(u16 *) ((q) -1) & 0xff) | (((bb) & 0xff) << 8);
    } else {
        *(u16 *) (q) = (*(u16 *) (q) & 0xff00) | ((bb) & 0xff);
    }
    mantb &= 0x000fffffffffffffULL;
    for (i = 6; i >= 0; i--) {
        t  = shr_n(mantb, i << 3, &j);
        q  = pad((char *) &out, i);
        bb = ((((int) (q)) & ((unsigned int) 1)) ? (((*(u16 *) ((q) -1)) & 0xff00) >> 8) : ((*(u16 *) (q)) & 0xff)) |
             ((int) t & 0xff);
        if (((int) (q)) & 1) {
            *(u16 *) ((q) -1) = (*(u16 *) ((q) -1) & 0xff) | (((bb) & 0xff) << 8);
        } else {
            *(u16 *) (q) = (*(u16 *) (q) & 0xff00) | ((bb) & 0xff);
        }
    }
    return out;
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02101894 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02101894.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef struct {
    s32 w[10];
    s32 rest[100];
} Ent;
typedef struct {
    s32 hdr;
    Ent ent[24];
} Tbl;
extern u8 data_02153744[];
extern void func_020a8b5c(u8 *e, u32 a, u32 b, u32 c, u32 d, u32 f);
s32 func_020a8a64(s32 param_1, s32 param_2, s32 param_3, s32 param_4, s32 param_5) {
    Ent *e;
    Ent *e2;
    s32 j;
    Tbl *base;
    Ent *b4;
    s32 idx;
    s32 k;
    s32 sum;
    s32 i2;

    idx  = -1;
    base = *(Tbl **) data_02153744;
    j    = 0;
    b4   = base->ent;
    e    = b4;
    do {
        if (e->w[0] == param_1 && e->w[2] != 0 && e->w[6] == param_4) {
            idx = j;
            break;
        }
        j = j + 1;
        e = e + 1;
    } while (j < 24);
    if (idx < 0) {
        e2  = base->ent;
        idx = -1;
        i2  = 0;
        do {
            if (e2->w[1] == 0) {
                idx = i2;
                break;
            }
            i2 = i2 + 1;
            e2 = e2 + 1;
        } while (i2 < 24);
        func_020a8b5c((u8 *) (b4 + idx), param_2, param_3, param_4, param_1, param_5);
        sum = 0;
        k   = 0;
        e   = (*(Tbl **) data_02153744)->ent;
        do {
            if (e->w[1] != 0) {
                if (e->w[2] != 0) {
                    sum += *(volatile s32 *) (e->w + 9);
                }
            }
            k = k + 1;
            e = e + 1;
        } while (k < 24);
        param_5 = sum;
    }
    return idx;
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ddfa8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020ddfa8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef struct {
    u32 w[4];
} Entry;
typedef struct {
    Entry entries[8];
    s32 count;
    u32 f84;
} Info;
typedef struct Obj {
    u32 f0;
    u32 f4;
    Info info;
} Obj;
extern Obj *volatile data_021550ec[];
extern u32 data_02155060;
extern Info *func_020f5058(u32 a, Obj *b);
static inline Info *GetInfo(Obj *volatile *pp) {
    if (pp == ((void *) 0)) {
        return ((void *) 0);
    }
    return func_020f5058(data_02155060, *pp);
}
s32 func_020f605c(Info *dst, u32 mask, u32 val) {
    s32 i   = 0;
    s32 max = 0;
    while (mask != 0) {
        dst->f84 = 0;
        if (mask & 1) {
            Info *p;
            s32 j;
            data_021550ec[i]->f4 = val;
            p                    = GetInfo(&data_021550ec[i]);
            dst->count           = p->count;
            dst->f84             = p->f84;
            for (j = 0; j < p->count; j++) {
                dst->entries[j] = p->entries[j];
            }
            if (max < p->count) {
                max = p->count;
            }
        }
        dst++;
        i++;
        mask >>= 1;
    }
    return -(max == 0);
}

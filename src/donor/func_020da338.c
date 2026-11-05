/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020da330 from projets/nintendogs-shiba-friends/src/donor/func_020da330.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
extern u32 data_02154ca4;
extern void func_020d9738(void);
extern int func_01ffda04(int a);
extern void func_020da8e8(u32 a);
extern void func_020d9494(int a);
typedef struct {
    s16 st[4];
    u32 p[3];
} Blk;
void func_020da338(void) {
    s16 i;
    s16 sv;
    u32 v;

    func_020d9738();
    i = 0;
    do {
        if (func_01ffda04(i) == 0) {
            v = (*(Blk **) &data_02154ca4)->p[i];
            if (v != 0) {
                func_020da8e8(v);
                (*(Blk **) &data_02154ca4)->p[i] = 0;
            }
        }
        if ((*(Blk **) &data_02154ca4)->p[i] == 0) {
            sv = (*(Blk **) &data_02154ca4)->st[i];
            if (sv != 0 && sv == 2) {
                (*(Blk **) &data_02154ca4)->st[i] = 0;
                v                                 = (*(Blk **) &data_02154ca4)->p[i];
                if (v != 0) {
                    func_020da8e8(v);
                    (*(Blk **) &data_02154ca4)->p[i] = 0;
                }
                func_020d9494(i);
            }
        }
        i = i + 1;
    } while (i < 3);
}

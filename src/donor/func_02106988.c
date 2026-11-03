/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020bca08 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020bca08.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef int BOOL;
typedef struct Obj {
    u32 pad0;
    u32 arr[7];
    s16 n20;
    u8 pad1[6];
    void *p28;
    s16 s2c;
} Obj;
extern Obj *data_02156080;
extern void func_02107668(u32 v);
extern void func_02035e9c(void);
extern BOOL func_020c2dd4(void *p);
void func_02106988(void) {
    s16 i = 0;
    u32 v;
    BOOL b;
    do {
        if (i < 0 || data_02156080->n20 <= i) {
            v = 0;
        } else {
            v = data_02156080->arr[i];
        }
        if (v != 0) {
            func_02107668(v);
        }
        i = i + 1;
    } while (i < 7);
    func_02035e9c();
    b = func_020c2dd4(data_02156080->p28);
    if (b) {
        data_02156080->s2c = 3;
    } else {
        data_02156080->s2c = 0;
    }
    i = 0;
    do {
        data_02156080->arr[i] = 0;
        i                     = i + 1;
    } while (i < 7);
    data_02156080->n20 = 0;
}

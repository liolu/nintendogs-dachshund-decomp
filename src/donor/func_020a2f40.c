/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020bb2d0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020bb2d0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
extern u8 data_0213bd5c[];
extern u8 *data_02153720;
extern int func_020c90bc(void);
extern int func_020b261c(u32 p1);
extern int func_01ffda04(int a);
extern int func_02028144(int a);
extern u8 func_020280c8(int a);
extern int func_020c55c8(u32 a, u32 b);
int func_020a2f40(u32 p1, u32 p2) {
    int r;
    int t;

    r = (int) data_0213bd5c;
    if (p1 > 0x30005) {
        goto big;
    }
    if (p1 < 0x30000) {
        goto done;
    }
    if (p1 == 0x30000) {
        goto c0;
    }
    if (p1 == 0x30002) {
        goto c2;
    }
    if (p1 != 0x30005) {
        goto done;
    }
    goto c5;
    goto done;
big:
    if (p1 != 0x3000d) {
        goto done;
    }
    goto c13;
    goto done;
c0:
    r = func_020c90bc();
    goto done;
c2:
    if (p2 == 0) {
        goto c2z;
    }
    r = func_020b261c(p1);
    goto done;
c2z:
    t = func_01ffda04(*(s16 *) (data_02153720 + 0x11c));
    r = func_02028144(t);
    r = r + 120;
    goto done;
c13:
    t = func_01ffda04(*(s16 *) (data_02153720 + 0x11c));
    r = func_02028144(t);
    r = *(s16 *) (data_02153720 + 0x11e) * 60 + (r + 0x90);
    r = r + 0x12;
    goto done;
c5:
    t = func_01ffda04(*(s16 *) (data_02153720 + 0x11c));
    if (t != 0) {
        r = func_020c55c8(func_020280c8(t), p2);
    }
done:
    return r;
}

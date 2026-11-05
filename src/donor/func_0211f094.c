/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d5abc from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d5abc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern s32 data_02156100;
extern u16 data_021560f4;
extern s32 data_02156104;
extern void func_0211f1f0(void);
extern void func_0211f258(void);
extern void func_0211f224(void);
extern s32 func_020654b8(s32 a, u32 b, s32 c, u32 d);
extern s32 func_02066154(u32 a, u32 b, s32 c, u32 d);
extern s32 func_0206601c(u32 a, u32 b, s32 c, u32 d);
extern s32 func_02066064(u32 a, u32 b, s32 c, u32 d);
u32 func_0211f094(u32 p0, u32 p1, u32 p2, u32 p4) {
    u32 st;
    s32 r;

    st = data_02156100;
    if (st != 0) {
        data_021560f4 = 1;
        p1            = 1;
    }
    if (data_02156104 == 1) {
        return 0;
    }
    switch (st) {
        case 0:
            return 1;
        case 1:
            r = func_020654b8(data_02156104, p1, st, p4);
            if (r != 0) {
                goto ret0;
            }
            data_021560f4 = 0;
            data_02156104 = 0;
            data_02156100 = 0;
            return 1;
        case 2:
            r = func_02066154((u32) func_0211f1f0, p1, st, p4);
            if (2 != r) {
                goto ret0;
            }
            data_02156104 = 1;
            return 1;
        case 3:
            r = func_0206601c((u32) func_0211f258, p1, st, p4);
            if (r != 2) {
                goto ret0;
            }
            data_02156104 = 1;
            return 1;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
            r = func_02066064((u32) func_0211f224, p1, st, p4);
            if (2 == r) {
                data_02156104 = 1;
                return 1;
            }
            goto ret0;
        default:
            goto ret0;
    }
ret0:
    return 0;
}

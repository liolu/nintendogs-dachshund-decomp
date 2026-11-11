/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02122524 from projets/nintendogs-chihuahua-friends/src/donor/func_02122524.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s16 data_02124ae0[];
extern void func_02068a88(u32 *buf, u32 *a, s32 b, s32 c);
extern void func_01ff810c(u32 *buf, u32 *x, u32 *y);
void func_02122524(u32 *p1, u32 *p2, s32 p3) {
    u32 buf[12];
    s32 idx = p3 >> 4;
    func_02068a88(buf, p2, data_02124ae0[idx * 2], data_02124ae0[idx * 2 + 1]);
    func_01ff810c(buf, p1, p1);
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ecf3c from projets/nintendogs-chihuahua-friends/src/donor/func_020ecf3c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u8 data_02154dd8;
extern void func_020720b4(u8 *p, u32 a, s32 b);
extern void func_020720e4(u8 *p, u32 a, s32 b);
void func_020ecf3c(s32 param_1) {
    u8 *r5;
    s32 iVar2;
    s32 r4;

    r5 = &data_02154dd8;
    if (*(u32 *) (r5 + 0x40) == 0) {
        return;
    }
    if (param_1 >= 0) {
        r4 = param_1 * 7;
    } else {
        param_1 = -param_1;
        r4      = param_1 * 7;
    }
    iVar2 = r4;
    if (param_1 > 30) {
        param_1 = 255;
    }
    if (iVar2 > 255) {
        iVar2 = 255;
    }
    func_020720b4(r5, 0xffff, param_1);
    func_020720e4(r5, 0xffff, iVar2);
}

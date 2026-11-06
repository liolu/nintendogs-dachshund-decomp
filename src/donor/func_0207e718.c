/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207e718 from projets/nintendogs-chihuahua-friends/src/donor/func_0207e718.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern void func_0208ba94(u32 *p);
extern s32 func_0208b744(u32 *p, u8 *q);
extern void func_0208b6fc(u32 *p, u32 a, u32 b);
s32 func_0207e718(u8 *param_1) {
    u32 frame[17];
    s32 iVar1;
    s32 iVar2;
    u32 fld;
    iVar2 = 0;
    func_0208ba94(frame);
    iVar1 = func_0208b744(frame, param_1);
    if (iVar1 != 0) {
        fld   = *(u32 *) (frame[2] + 0x58);
        iVar2 = fld + frame[8];
        func_0208b6fc(frame, frame[8], fld);
    }
    return iVar2;
}

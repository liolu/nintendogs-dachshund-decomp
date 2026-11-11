/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02006fdc from projets/nintendogs-shiba-friends/src/donor/func_02006fdc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_0214b150;
extern void func_02001648(void);
extern s32 func_020015c8(u16 *p);
extern void func_0200717c(void);
extern void func_0206ee8c(u32 a, u32 b, u32 c, u32 d);
typedef struct {
    u16 a;
    u16 b;
    u16 c;
    u16 d;
} Four16;
void func_02006fdc(void) {
    s32 iVar1;
    Four16 local_10;
    func_02001648();
    iVar1 = func_020015c8((u16 *) &local_10);
    if (iVar1 == 0) {
        Four16 *dst = (Four16 *) (data_0214b150 + 0x3c);
        *dst        = local_10;
    }
    iVar1 = data_0214b150;
    func_0206ee8c(iVar1, iVar1 + 0x10, (u32) func_0200717c, iVar1);
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206010c from projets/children-of-mana/src/auto/func_0206010c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 data_0214ead4;
extern u32 func_0208120c(void);
extern void func_02081220(u32 s);
extern void func_02071400(s32 a);
extern void func_0207144c(s32 a);
extern u8 *func_02071510(void);
extern void func_0207146c(u32 *a);
extern void func_0207155c(void);
extern void func_0207151c(s32 a);
extern void func_0207152c(s32 a);
void func_02070c48(s16 param_1, s16 param_2, u32 param_3) {
    u32 local_b0[39];
    u8 *puVar1;
    s32 iVar2;
    u32 s;

    s = func_0208120c();
    if (data_0214ead4 == 1) {
        func_02081220(s);
        return;
    }
    data_0214ead4 = 1;
    func_02071400(0);
    func_0207144c(0);
    puVar1                       = func_02071510();
    iVar2                        = 0;
    *(u32 *) puVar1              = 0;
    *(u16 *) (puVar1 + 8)        = 0;
    *(u16 *) (puVar1 + 10)       = 0;
    *(u32 *) (puVar1 + 0x10)     = 0;
    *(u32 *) (puVar1 + 0x138)    = 0;
    *(u16 *) (puVar1 + 256 + 64) = 0;
    *(u16 *) (puVar1 + 256 + 66) = 0;
    *(u32 *) (puVar1 + 0x148)    = param_3;
    do {
        iVar2                    = iVar2 + 1;
        *(u8 *) (puVar1 + 0x1d7) = 0;
        puVar1                   = puVar1 + 104;
    } while (iVar2 < 16);
    local_b0[0] = 0;
    func_0207146c(local_b0);
    func_0207155c();
    func_0207151c(param_1 - 14);
    func_0207152c(param_2 - 14);
    func_02081220(s);
}

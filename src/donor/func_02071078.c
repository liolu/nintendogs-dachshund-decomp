/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02071078 from projets/nintendogs-chihuahua-friends/src/donor/func_02071078.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_0214ead4;
extern u32 func_0208120c(void);
extern void func_02081220(u32 irq);
extern s32 *func_02071510(void);
u32 func_02071078(u32 param_1) {
    u32 i;
    u32 uVar4 = 0;
    u32 irq;
    s32 *piVar3;
    u32 uVar1;
    u16 uVar2;
    void (*cb)(s32 *);

    irq = func_0208120c();
    if (data_0214ead4 == 1) {
        piVar3 = func_02071510();
        if (*piVar3 != 0) {
            i = 0;
            do {
                uVar1 = 1 << i;
                uVar2 = (u16) uVar1;
                if ((param_1 & (*(u16 *) (piVar3 + 2) & uVar2)) != 0) {
                    u16 *hp                       = (u16 *) (piVar3 + 2);
                    uVar4                         = 1;
                    *hp                           = *hp & ~uVar2;
                    piVar3[1]                     = 0x10;
                    *(u16 *) ((u8 *) piVar3 + 10) = uVar2;
                    cb                            = (void (*)(s32 *)) piVar3[4];
                    if (cb != 0) {
                        cb(piVar3);
                    }
                }
                i = i + 1;
            } while ((s32) i < 0x10);
            *piVar3 = 0;
        }
    }
    func_02081220(irq);
    return uVar4;
}

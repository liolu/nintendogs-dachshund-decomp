/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b8610 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b8610.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02154c70;
extern s32 func_02095610(u8 *p);
extern void func_0209565c(u8 *p, s32 a);
extern void func_02095590(u8 *p, u32 a);
extern u32 func_020afbbc(void);
extern s32 func_02095524(u8 *p);
extern u8 *func_02095784(u8 *p);
u8 *func_020a02dc(u8 *param_1) {
    u8 *pc;
    u8 *puVar2;
    u8 *rv;
    s32 st;
    s32 rr;

    pc = param_1;
    switch (*(s16 *) (pc + 46)) {
        case 0:
            return (u8 *) func_02095610(pc);
        case 1:
            st = *(s32 *) (data_02154c70 + 0xa4);
            if (st == 0) {
                return (u8 *) st;
            }
            if (*(s16 *) (data_02154c70 + 148) == 3) {
                goto have;
            }
            if (*(s16 *) (data_02154c70 + 148) != 4) {
                goto none;
            }
        have:
            puVar2 = (u8 *) (s32) * (s16 *) (data_02154c70 + 154);
            goto check;
        none:
            puVar2 = ((void *) 0);
        check:
            if (puVar2 == ((void *) 0)) {
                goto setst;
            }
            if (puVar2 == (u8 *) 1) {
                goto callc;
            }
            return puVar2;
        setst:
            *(u16 *) (pc + 46)  = 2;
            *(u16 *) (pc + 48)  = 0;
            *(u16 *) (pc + 256) = 2;
            return pc + 256;
        callc:
            func_0209565c(pc, *(s16 *) (pc + 128));
            func_02095590(pc, 0);
            return (u8 *) func_020afbbc();
        case 4:
            rr = func_02095524(pc);
            if (rr == 0) {
                return (u8 *) rr;
            }
            rv = func_02095784(pc);
            goto fin;
        default:
        case 2:
        case 3:
            goto fin;
    }
fin:
    return rv;
}

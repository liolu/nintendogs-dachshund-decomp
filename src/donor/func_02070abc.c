/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206f2bc from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0206f2bc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_0214ead4;
extern u32 func_0208120c(void);
extern void func_02081220(u32 v);
extern void func_02071400(u32 v);
extern void func_0207144c(u32 v);
extern u8 *func_02071510(void);
extern void func_0207146c(u32 *p);
extern void func_0207155c(void);
extern void func_0207151c(u32 v);
extern void func_0207152c(u32 v);
void func_02070abc(void) {
    u32 r4v;
    u8 *p;
    s32 i;
    s32 t;
    u32 local[40];

    r4v = func_0208120c();
    if (data_0214ead4 == 0) {
        func_02081220(r4v);
        return;
    }
    data_0214ead4 = 0;
    func_02071400(0xffffffff);
    func_0207144c(0);
    p                    = func_02071510();
    *(u32 *) p           = 0;
    *(u16 *) (p + 8)     = 0;
    *(u16 *) (p + 10)    = 0;
    *(u32 *) (p + 0x10)  = 0;
    *(u32 *) (p + 0x138) = 0;
    *(u16 *) (p + 320)   = 0;
    *(u16 *) (p + 322)   = 0;
    *(u32 *) (p + 0x148) = 0;
    i                    = 0;
    t                    = i;
    do {
        i                   = i + 1;
        *(u8 *) (p + 0x1d7) = t;
        p                   = p + 104;
    } while (i < 16);
    local[0] = t;
    func_0207146c(local);
    func_0207155c();
    func_0207151c(0xffffffff);
    func_0207152c(0xffffffff);
    func_02081220(r4v);
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206f380 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0206f380.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_0214ead4;
extern u32 func_0208120c(void);
extern void func_02081220(u32 a);
extern void func_02071400(s32 a);
extern void func_0207144c(s32 a);
extern u32 *func_02071510(void);
extern void func_0207146c(u32 *a);
extern void func_0207155c(void);
extern void func_0207151c(s32 a);
extern void func_0207152c(s32 a);
void func_02070b80(u32 param_1) {
    u32 r4;
    u32 *q;
    s32 i;
    s32 v;
    u32 local[39];

    r4 = func_0208120c();
    if (*(u32 *) &data_0214ead4 == 1) {
        func_02081220(r4);
        return;
    }
    *(u32 *) &data_0214ead4 = 1;
    func_02071400(-1);
    func_0207144c(0);
    q                           = func_02071510();
    i                           = 0;
    *q                          = i;
    *(u16 *) ((u8 *) q + 8)     = 0;
    *(u16 *) ((u8 *) q + 10)    = 0;
    q[4]                        = 0;
    q[0x4e]                     = 0;
    *(u16 *) ((u8 *) q + 0x140) = 0;
    *(u16 *) ((u8 *) q + 0x142) = 0;
    q[0x52]                     = param_1;
    v                           = i;
    do {
        i                          = i + 1;
        *(u8 *) ((u8 *) q + 0x1d7) = v;
        q                          = q + 0x1a;
    } while (i < 16);
    local[0] = v;
    func_0207146c(local);
    func_0207155c();
    func_0207151c(0);
    func_0207152c(0);
    func_02081220(r4);
}

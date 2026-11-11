/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a707c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a707c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u8 *data_02153704;
extern s32 func_02106344(void);
extern void func_020c45e8(s32 a, s32 *b, u32 *c);
extern void func_020f049c(s32 a, s32 b, u32 *c);
void func_0208f130(void) {
    s32 local_20[3];
    u32 auStack_14[3];
    s32 iVar1;
    s32 v;

    *(u32 *) (*(u8 **) (*(u8 **) data_02153704 + 0x74) + 0x1c) = 0x1000;
    iVar1                                                      = func_02106344();
    v                                                          = *(s32 *) (data_02153704 + 0x10);
    local_20[0]                                                = 0x5000;
    local_20[1]                                                = 0x9000;
    local_20[2]                                                = v;
    func_020c45e8(iVar1, local_20, auStack_14);
    func_020f049c(0x31, 2, auStack_14);
    v           = *(s32 *) (data_02153704 + 0x10);
    local_20[0] = -0x6000;
    local_20[1] = 0;
    local_20[2] = v;
    func_020c45e8(iVar1, local_20, auStack_14);
    func_020f049c(0x31, 3, auStack_14);
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020bcc4c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020bcc4c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02156080;
extern s32 func_02003844(s32 *p, s32 a);
extern u32 func_02080f5c(void);
extern void *func_020c356c(s32 *p);
extern void func_020c34b4(u32 a);
extern void func_02106c98(void);
extern void func_02106354(void);
extern void func_0200668c(s32 a, u32 b);
s32 func_02106bcc(s32 *param_1) {
    s32 iVar1;
    s32 iVar4;
    u32 uVar6;
    void *puVar5;

    iVar4                              = func_02003844(param_1, 0x38);
    *(s32 *) &data_02156080            = iVar4;
    uVar6                              = func_02080f5c();
    iVar4                              = 0;
    *(s32 *) (*(u8 **) &data_02156080) = (s32) uVar6;
    do {
        *(s32 *) ((*(u8 **) &data_02156080) + iVar4 * 4 + 4) = 0;
        iVar4                                                = (s16) (iVar4 + 1);
    } while (iVar4 < 7);
    *(u16 *) ((*(u8 **) &data_02156080) + 0x20)                   = 0;
    *(s16 *) ((*(u8 **) &data_02156080) + 0x22)                   = -1;
    *(u16 *) ((*(u8 **) &data_02156080) + 0x2c)                   = 0;
    *(u32 *) ((*(u8 **) &data_02156080) + 0x24)                   = 0;
    puVar5                                                        = func_020c356c(param_1);
    *(void **) ((*(u8 **) &data_02156080) + 0x28)                 = puVar5;
    *(u32 *) (*(u8 **) ((*(u8 **) &data_02156080) + 0x28) + 0x2c) = (u32) func_02106c98;
    func_020c34b4(*(u32 *) ((*(u8 **) &data_02156080) + 0x28));
    func_0200668c(8, (u32) func_02106354);
    return *(s32 *) &data_02156080;
}

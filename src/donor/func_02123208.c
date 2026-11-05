/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02123200 from projets/nintendogs-shiba-friends/src/donor/func_02123200.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02153720;
extern void func_0212331c(int p);
extern void func_0211272c(int p);
extern void func_02112640(int p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern u32 func_02111cbc(u32 a, u32 b);
extern void func_0210fe58(int p, u32 a, void *b, void *c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i);
extern void func_020ec0b8(void *p, s32 a, s32 b);
extern u32 func_02123828(void);
extern u32 func_021234a0(void);
extern u32 func_02123484(void);
extern u32 func_02123478(void);
void func_02123208(int param_1) {
    s32 *piVar2;
    s32 iVar1;
    s32 iVar3;

    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            break;
        case 1:
            func_0212331c(param_1);
            return;
        case 2:
            func_0211272c(param_1);
            return;
        case 3:
            piVar2 = *(s32 **) (param_1 + 0x214);
            iVar1  = *piVar2;
            func_02112640(param_1, *(u32 *) (iVar1 + 0x48), *(u32 *) (iVar1 + 0x4c), *(u32 *) (iVar1 + 0x50),
                          *(u32 *) (iVar1 + 0x54), *(u32 *) (iVar1 + 0x58), 4);
            iVar1 = func_02111cbc(*(u16 *) (param_1 + 0xa0), *(u32 *) (param_1 + 0xf8));
            func_0210fe58(param_1, *(u32 *) (param_1 + 0xf8), (void *) (param_1 + 0xfc), (void *) (param_1 + 0x108), iVar1,
                          (u32) func_02123828, 0, (u32) func_021234a0, (u32) func_02123484, (u32) func_02123478);
            iVar1 = *(s32 *) (*(u32 *) &data_02153720 + 0x98);
            iVar3 = *(s32 *) (*(u32 *) &data_02153720 + 0x94);
            func_020ec0b8((void *) (param_1 + 400), (s16) piVar2[2], iVar3 * iVar3 + iVar1 * iVar1);
            break;
    }
}

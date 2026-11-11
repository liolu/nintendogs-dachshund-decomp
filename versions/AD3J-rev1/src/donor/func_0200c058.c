/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200c104 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0200c104.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern void func_02069668(u8 *a, u8 *b, u8 *c);
extern s32 *func_02043e04(void);
void func_0200c058(u8 *param_1) {
    s32 *piVar3;
    s32 iVar5;
    s32 uVar1;

    if (*(s16 *) (param_1 + 0x1c) != 1) {
        return;
    }
    func_02069668(param_1 + 0x20, param_1 + 0x2c, param_1 + 0x20);
    if (*(s32 *) (param_1 + 0x24) > 0x6000) {
        *(s32 *) (param_1 + 0x24) = 0x6000;
    }
    if (*(s32 *) (param_1 + 0x24) < 0) {
        *(s32 *) (param_1 + 0x24) = 0;
    }
    piVar3                    = func_02043e04();
    iVar5                     = *piVar3 * 0x10dcd + 1;
    *piVar3                   = iVar5;
    *(s32 *) (param_1 + 0x2c) = ((s32) ((((s64) (*(s32 *) (param_1 + 0x20))) * ((s64) (-4)) + 0x800) >> 12)) +
                                ((((s32) ((((s64) (*(s32 *) (param_1 + 0x2c))) * ((s64) (0xe6a)) + 0x800) >> 12)) - 0x80) +
                                 ((s32) ((((s64) ((s16) (u16) (iVar5 & 0xfff))) * ((s64) (256)) + 0x800) >> 12)));
    piVar3                    = func_02043e04();
    iVar5                     = *piVar3 * 0x10dcd + 1;
    *piVar3                   = iVar5;
    *(s32 *) (param_1 + 0x30) = (((s32) ((((s64) (*(s32 *) (param_1 + 0x30))) * ((s64) (0xe6a)) + 0x800) >> 12)) - 0x80) +
                                ((s32) ((((s64) ((s16) (u16) (iVar5 & 0xfff))) * ((s64) (256)) + 0x800) >> 12));
    piVar3                    = func_02043e04();
    iVar5                     = *piVar3 * 0x10dcd + 1;
    *piVar3                   = iVar5;
    *(s32 *) (param_1 + 0x34) = ((s32) ((((s64) (*(s32 *) (param_1 + 0x28))) * ((s64) (-4)) + 0x800) >> 12)) +
                                ((((s32) ((((s64) (*(s32 *) (param_1 + 0x34))) * ((s64) (0xe6a)) + 0x800) >> 12)) - 0x80) +
                                 ((s32) ((((s64) ((s16) (u16) (iVar5 & 0xfff))) * ((s64) (256)) + 0x800) >> 12)));
}

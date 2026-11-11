/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b5c14 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b5c14.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
void func_0209d8e8(u8 *param_1) {
    s32 iVar3;
    s32 acc = 0;
    s32 i   = 0;
    s32 iVar5;
    s16 *psVar2;
    s16 *pe;
    s32 iVar6;

    psVar2 = (s16 *) (param_1 + 0x66);
    do {
        if (*(u16 *) psVar2 != 0) {
            acc = (s16) (acc + *(u8 *) ((u8 *) psVar2 + 3));
        }
        psVar2 = psVar2 + 2;
        i      = (s16) (i + 1);
    } while (i < 3);

    iVar6 = (s32) (param_1 + 0x42);
    iVar3 = 0;
    do {
        pe = (s16 *) (iVar6 + *(s16 *) (param_1 + 0x20) * 2);
        if (iVar3 == 0) {
            goto arm01;
        }
        if (iVar3 == 1) {
            goto arm01;
        }
        if (iVar3 != 2) {
            goto tail;
        }
        goto arm2;
    arm01:
        if (acc <= 0) {
            goto neg01;
        }
        iVar5 = (s16) (*(s16 *) (param_1 + 0x40) - acc);
        if (iVar5 < 0) {
            iVar5 = 0;
        }
        *pe = (s16) (*pe - (s16) iVar5 * 20);
        goto tail;
    neg01:
        *pe = (s16) (*pe - 200);
        goto tail;
    arm2:
        if (acc <= 0) {
            goto neg2;
        }
        {
            s32 t = *(s16 *) (param_1 + 0x40) * 120;
            iVar5 = (s16) (t / 100 - acc);
            if (iVar5 < 0) {
                iVar5 = 0;
            }
            *pe = (s16) (*pe - (s16) iVar5 * 20);
        }
        goto tail;
    neg2:
        *pe = (s16) (*pe - 200);
    tail:
        iVar3 = (s16) (iVar3 + 1);
        if (*pe < 0) {
            *pe = 0;
        }
        iVar6 = iVar6 + 10;
    } while (iVar3 < 3);
}

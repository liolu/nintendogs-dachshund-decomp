/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020cfea4 from projets/nintendogs-chihuahua-friends/src/donor/func_020cfea4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed short s16;
extern int data_02154c78;
extern void func_020cff60(int a);
extern int func_021211d0(void);
extern void func_0211eb20(void);
extern int func_0211e858(void);
extern void func_02121328(void);
extern int func_021203f0(void);
extern void func_021212e0(void);
void func_020cfe9c(void) {
    s16 *psVar4;
    s16 sVar2;
    int iVar3;
    int bVar1;

    psVar4 = (s16 *) data_02154c78;
    sVar2  = *psVar4;
    if (sVar2 != 0) {
        switch (sVar2) {
            case 1:
                func_020cff60((int) psVar4);
                break;
            case 2:
                iVar3 = func_021211d0();
                if (iVar3 == 1) {
                    func_0211eb20();
                    *psVar4 = 3;
                } else {
                    iVar3 = func_021211d0();
                    if (iVar3 != 5) {
                        goto nz;
                    }
                    switch (func_0211e858()) {
                        case 0x14:
                            bVar1 = 1;
                            goto jn;
                        default:
                            break;
                    }
                nz:
                    bVar1 = 0;
                jn:
                    if (bVar1) {
                        func_02121328();
                    }
                }
                break;
        }
    }
    iVar3 = func_021203f0();
    if (iVar3 != 0) {
        func_021212e0();
    }
}

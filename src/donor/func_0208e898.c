/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208e898 from projets/nintendogs-shiba-friends/src/donor/func_0208e898.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern u8 data_0212d58c[];
extern u8 data_02153708[];
extern u8 data_021536fc[];
extern u8 data_0213ba24[];
extern u8 data_0213ba40[];
extern u8 data_0213ba54[];
extern u8 data_0213ba74[];
extern u8 data_0213ba88[];
extern s64 func_02080f5c(void);
extern u32 func_0208ea64(s32 a);
extern void func_0205e950();
extern u8 *func_020c23f8(u8 *p, u8 *q);
extern void func_0200c438(s32 a);
void func_0208e898(u8 *param_1, s32 param_2, s32 param_3) {
    u8 acStack_54[64];
    s32 uVar4;
    s32 uVar2;
    s32 iVar5;
    s16 r4;
    u16 c;
    u32 k3;
    s64 t;

    iVar5 = param_2 * 28 + (s32) data_0212d58c;
    uVar4 = *(u16 *) (*(u8 **) data_02153708);
    uVar2 = *(s32 *) (iVar5 + 0xc);
    if (uVar4 > 0x10) {
        goto L48;
    }
    if (uVar4 >= 0x10) {
        goto L148;
    }
    if (uVar4 != 3) {
        goto other;
    }
    goto case3;
L48:
    if (uVar4 > 0x8003) {
        goto L60;
    }
    if (uVar4 != 0x8003) {
        goto other;
    }
    goto L15c;
L60:
    if (uVar4 != 0xc002) {
        goto other;
    }
case3:
    if (uVar2 != 0) {
        goto L134;
    }
    r4 = 0;
    if (*(s16 *) data_021536fc != 0) {
        r4 = *(s16 *) data_021536fc;
    }
    if (r4 == 0) {
        if (param_3 != 0) {
            t  = func_02080f5c();
            k3 = 3;
            c  = (u16) ((u32) t * 0x10dcd + 1);
            r4 = (s16) ((u16) (((u32) c * k3) >> 16) + 1);
        } else {
            switch (*(s16 *) (*(u8 **) data_02153708 + 10)) {
                case 0:
                case 1:
                    r4 = 1;
                    break;
                case 2:
                    r4 = 2;
                    break;
                case 3:
                case 4:
                case 5:
                    r4 = 3;
                    break;
                default:
                    break;
            }
        }
    }
    uVar2 = func_0208ea64(param_3);
    func_0205e950(acStack_54, 64, data_0213ba24, uVar2, r4);
    goto done;
L134:
    func_0205e950(acStack_54, 64, data_0213ba40, uVar2);
    goto done;
L148:
    func_0205e950(acStack_54, 64, data_0213ba54, uVar2);
    goto done;
L15c:
    uVar2 = *(s32 *) (iVar5 + 0x10);
    func_0205e950(acStack_54, 64, data_0213ba74, uVar2);
    goto done;
other:
    func_0205e950(acStack_54, 64, data_0213ba88, uVar2);
done:
    iVar5 = (s32) func_020c23f8(param_1, acStack_54);
    func_0200c438(iVar5);
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c6b44 from projets/nintendogs-shiba-friends/src/donor/func_020c6b44.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_0212d2dc;
extern u32 func_020c6cc4(u8 *p, u32 idx);
extern u32 func_020c6344(u32 base, u32 v);
void func_020c6b48(u8 *param_1) {
    u32 uVar2;
    u8 *obj;
    u8 *tb;
    u32 uVar4;
    s32 iVar3;
    u32 iVar5;
    u16 kind;
    s32 jj;
    s32 cnt;
    u8 *q;

    uVar2 = 0xffff;
    obj   = *(u8 **) (param_1 + 0x30);
    kind  = *(u16 *) (obj + 4);
    cnt   = obj[1];
    if (kind == 1) {
        goto caseA;
    }
    if (kind == 2) {
        goto caseB;
    }
    if (kind != 3) {
        goto dflt;
    }
caseB:
    uVar2 = *(u16 *) (param_1 + 0x48);
    goto after;
caseA:
    uVar4 = 0;
    q     = *(u8 **) (param_1 + 0x2c);
    jj    = uVar4;
    if (cnt > 0) {
        do {
            tb = *(u8 **) (q + 0x1c);
            if (*(u16 *) (tb + (*(u16 *) (obj + 6) + jj) * 2) == 0xffff) {
                break;
            }
            uVar4 = (u16) (uVar4 + 1);
            jj    = (u16) (jj + 1);
        } while (jj < cnt);
    }
    uVar2 = func_020c6cc4(param_1, uVar4);
    goto after;
dflt:
    if (*(u32 *) (param_1 + 0x24) != 0) {
        uVar2 = ((u32(*)(u8 *, u16, s32))(*(u32 *) (param_1 + 0x24)))(param_1, kind, cnt);
    }
after:
    if (uVar2 == 0xffff) {
        return;
    }
    tb    = *(u8 **) (*(u8 **) (param_1 + 0x2c) + 0x1c);
    uVar2 = *(u16 *) (tb + (*(u16 *) (obj + 6) + uVar2) * 2);
    if (uVar2 != 0xffff) {
        iVar5                     = func_020c6344(*(u32 *) (param_1 + 0x2c), uVar2);
        *(u32 *) (param_1 + 0x30) = iVar5;
        iVar3                     = 0;
        *(u16 *) (param_1 + 8)    = 0;
        *(u16 *) (param_1 + 26)   = 1;
        *(u16 *) (param_1 + 12)   = 30;
        *(u16 *) (param_1 + 16)   = 0;
        *(u16 *) (param_1 + 20)   = 1;
        *(u16 *) (param_1 + 4)    = *(s16 *) ((u8 *) &data_0212d2dc + 10);
        if (0 < *(s16 *) (param_1 + 88)) {
            do {
                ((u16 *) (param_1 + 90))[iVar3] = 0;
                iVar3                           = iVar3 + 1;
            } while (iVar3 < *(s16 *) (param_1 + 88));
        }
        *(u16 *) (param_1 + 88) = 0;
        *(u16 *) (param_1 + 52) = 0;
        for (uVar2 = 0; uVar2 < 2; uVar2++) {
            ((u32 *) (param_1 + 0x38))[uVar2] = 0;
        }
        return;
    }
    *(u16 *) param_1 = 2;
}

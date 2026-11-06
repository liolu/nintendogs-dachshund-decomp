/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020eb12c from projets/nintendogs-chihuahua-friends/src/donor/func_020eb12c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u8 data_02154cb8[];
extern u8 data_02129280[];
typedef struct {
    u8 pad0[0x26];
    u16 f26;
    u8 pad1[0x50 - 0x28];
    s32 a[3];
    s32 b[3];
    s32 c[3];
    s32 d[3];
} OB;
typedef struct {
    s32 n;
    struct {
        s32 v;
        s32 key;
    } e[1];
} LS;
extern void func_020eae6c(OB *p, s32 v);
extern void func_020f19a8(OB *p);
extern void func_020ea728(OB *p, s32 *q);
void func_020eb124(OB *param_1, s32 *param_2, s32 *param_3, u16 param_4) {
    LS *piVar5;
    s32 iVar4;
    u32 uVar3;
    s32 iVar2;

    uVar3        = *(u16 *) (data_02154cb8 + 0x1a);
    param_1->f26 = param_4;
    piVar5       = *(LS **) ((u16) param_1->a[uVar3] * 0x18 + data_02129280 + uVar3 * 4 + 0xc);
    if (piVar5 != 0) {
        iVar2 = param_1->c[uVar3];
        if (iVar2 == 0x7fffffff) {
            if (param_1->d[uVar3] == 0) {
                iVar4 = 0;
                if (param_3[uVar3] > piVar5->e[0].key) {
                    do {
                        iVar4 = iVar4 + 1;
                        if (piVar5->n - 1 < iVar4) {
                            break;
                        }
                    } while (param_3[uVar3] > piVar5->e[iVar4].key);
                }
            } else {
                iVar4 = piVar5->n - 1;
                if (param_3[uVar3] < piVar5->e[iVar4].key) {
                    do {
                        iVar4 = iVar4 - 1;
                        if (iVar4 < 0) {
                            break;
                        }
                    } while (param_3[uVar3] < piVar5->e[iVar4].key);
                }
            }
        } else {
            iVar4 = param_1->b[uVar3];
            if (param_1->d[uVar3] == 0) {
                if ((param_3[uVar3] < iVar2) && (iVar4 != 0)) {
                    if (iVar4 < piVar5->n) {
                        do {
                            func_020eae6c(param_1, piVar5->e[iVar4].v);
                            iVar4 = iVar4 + 1;
                        } while (iVar4 < piVar5->n);
                    }
                    iVar4 = 0;
                }
                if ((iVar4 < piVar5->n) && (param_3[uVar3] > piVar5->e[iVar4].key)) {
                    do {
                        func_020eae6c(param_1, piVar5->e[iVar4].v);
                        iVar4 = iVar4 + 1;
                        if (piVar5->n - 1 < iVar4) {
                            break;
                        }
                    } while (param_3[uVar3] > piVar5->e[iVar4].key);
                }
            } else {
                if ((param_3[uVar3] > iVar2) && (iVar4 != piVar5->n - 1)) {
                    for (; iVar4 >= 0; iVar4 = iVar4 - 1) {
                        func_020eae6c(param_1, piVar5->e[iVar4].v);
                    }
                    iVar4 = piVar5->n - 1;
                }
                if ((iVar4 >= 0) && (param_3[uVar3] < piVar5->e[iVar4].key)) {
                    do {
                        func_020eae6c(param_1, piVar5->e[iVar4].v);
                        iVar4 = iVar4 - 1;
                        if (iVar4 < 0) {
                            break;
                        }
                    } while (param_3[uVar3] < piVar5->e[iVar4].key);
                }
            }
        }
        param_1->b[uVar3] = iVar4;
        param_1->c[uVar3] = param_3[uVar3];
    }
    func_020f19a8(param_1);
    func_020ea728(param_1, param_2);
}

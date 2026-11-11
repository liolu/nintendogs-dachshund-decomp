/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ebecc from projets/nintendogs-chihuahua-friends/src/donor/func_020ebecc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    s32 count;
    u16 used;
    u16 flags6;
    u16 flags8;
    u16 pad0a;
    s16 kind[3];
    s16 key[3];
    s32 slot[3];
    u16 index;
    u16 flags26;
    s32 arr28[3];
} Obj;
extern void *data_021471a0[];
extern s16 data_02154d88[];
extern s32 data_02154dd8[];
extern s32 func_020f0644(void *e);
extern s32 func_020ea660(Obj *p);
extern s32 func_021060cc(void);
extern s32 func_01ffda04(s32 i);
extern s32 func_02027028(s32 v);
extern void func_020f1ccc(s32 v, s32 k);
extern void func_020f177c(s32 k, s32 i);
extern void func_020edb54(s32 v);
s32 func_020ebec4(Obj *param_1, s32 param_2) {
    Obj *p = param_1;
    s16 *e;
    s16 uVar8;
    s32 uVar5;
    s32 i;
    u32 n;
    u16 bit;
    s32 iVar4;
    s32 iVar6;
    s32 iVar7;

    e     = data_021471a0[p->index];
    uVar8 = e[1];
    if (func_020f0644(e) != 0) {
        return -1;
    }
    n = p->count;
    i = 0;
    if ((s32) n > 0) {
        do {
            bit = (u16) (1 << i);
            if ((*(u16 *) ((u8 *) p + 4) & bit) != 0 && param_2 == p->key[i] && p->slot[i] != 0) {
                *(u16 *) ((u8 *) p + 6) |= bit;
                return i;
            }
            i = (s16) (i + 1);
        } while (i < (s32) n);
    }
    uVar5 = func_020ea660(p);
    if (uVar5 != -1) {
        p->key[uVar5] = (s16) param_2;
        bit           = (u16) (1 << uVar5);
        *(u16 *) ((u8 *) p + 4) |= bit;
        *(u16 *) ((u8 *) p + 6) |= bit;
        *(u16 *) ((u8 *) p + 8) |= bit;
        p->arr28[uVar5] = 0;
        *(u16 *) ((u8 *) p + 0x26) &= ~bit;
        if (p->kind[uVar5] == 0x1f && data_02154d88[1] != 4 && data_02154d88[1] != 5) {
            iVar6 = func_021060cc();
            iVar4 = 0;
            do {
                iVar7 = func_01ffda04(iVar4);
                if (iVar7 != 0) {
                    if (iVar6 == -1) {
                        func_020f1ccc(iVar7, param_2);
                    } else {
                        if (func_02027028(iVar7) != 0 && iVar6 == iVar4) {
                            func_020f1ccc(iVar7, param_2);
                            func_020f177c(param_2, iVar4);
                        }
                    }
                }
                iVar4 = (s16) (iVar4 + 1);
            } while (iVar4 < 3);
        }
    }
    if (data_02154dd8[1] == 0) {
        if (uVar8 == 8 || uVar8 == 26 || uVar8 == 32) {
            func_020edb54(uVar8);
        }
    }
    return uVar5;
}

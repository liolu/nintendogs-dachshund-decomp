/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210f13c from projets/nintendogs-chihuahua-friends/src/donor/func_0210f13c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 data_02148dbc;
extern s32 data_02148dc0;
extern s32 func_01ffda04(s32 i);
extern s32 func_02069430(u8 *p);
extern void func_02027044(s32 v, u32 w);
typedef struct {
    s32 x0;
    s32 x4;
} A;
typedef struct {
    u8 pad[0x18];
    s32 f18;
} B;
typedef struct {
    u8 p0[0x18];
    A a;
    u8 p1[0x84 - 0x20];
    B b;
    u8 p2[0x108 - 0x84 - 0x1c];
    s32 f108;
    s32 arr[3];
    s32 arr2[3];
} Q;
#pragma opt_propagation off
#pragma opt_common_subs off
void func_0210f13c(u8 *param_1) {
    Q *iVar4;
    u8 *pa;
    B *pb;
    s32 iVar1;
    s32 iVar2;
    s32 i;
    s32 iVar3;
    s32 *pl;
    u8 *pf;

    iVar4 = *(Q **) (param_1 + 0x214);
    pa    = (u8 *) &iVar4->a;
    pl    = &data_02148dbc;
    pb    = &iVar4->b;
    pf    = (u8 *) &pb->f18;
    iVar3 = 0;
    if (*(s32 *) (pa + 4) <= *pl) {
        iVar1 = func_02069430(pf);
        if (iVar1 > data_02148dc0) {
            iVar3 = 1;
        }
    }
    if (iVar4->f108 == 0 && iVar3 != 0) {
        i = 0;
        do {
            iVar2 = func_01ffda04(i);
            if (i != *(s16 *) (param_1 + 0x98) && iVar2 != 0) {
                func_02027044(iVar2, 0x20);
                iVar4->arr[i]  = 0;
                iVar4->arr2[i] = 0;
            }
            i = (s16) (i + 1);
        } while (i < 3);
    }
    iVar4->f108 = iVar3;
}

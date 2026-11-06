/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b3598 from projets/nintendogs-chihuahua-friends/src/donor/func_020b3598.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    s16 val;
    s16 flag;
} Ent;
typedef struct {
    u8 pad0[0x8];
    u32 f08;
    u16 f0c;
    u8 pad2[0x30 - 0x0e];
    u16 f30;
    u8 pad3[0x38 - 0x32];
    Ent ent[10];
    u8 pad4[0x874 - 0x60];
    s32 f874;
} Obj;
extern u16 data_0213c928[];
extern void func_020ab43c(void);
extern void func_020b3688(Obj *, u32, s32);
extern void func_020b3794(Obj *);
void func_020b3598(Obj *p) {
    u32 v;
    Ent *e;
    s32 i;
    u32 uVar3;
    u32 uVar1;

    func_020ab43c();
    func_020b3688(p, p->f08, 1);
    v = p->f08;
    e = p->ent;
    i = 0;
    do {
        if (e->flag == 0) {
            e->val  = (s16) v;
            e->flag = 5;
            break;
        }
        i++;
        e++;
    } while (i < 10);
    uVar3 = p->f874 - 1;
    uVar1 = p->f30;
    if ((s32) uVar1 < (s32) uVar3) {
        if (p->f0c != 0) {
            data_0213c928[uVar1]      = p->f0c;
            data_0213c928[p->f30 + 1] = 0;
            p->f30                    = p->f30 + 1;
            func_020b3794(p);
            return;
        }
        return;
    }
    if (uVar1 == uVar3) {
        if (p->f0c != 0) {
            data_0213c928[uVar1 - 1] = p->f0c;
            func_020b3794(p);
        }
    }
}

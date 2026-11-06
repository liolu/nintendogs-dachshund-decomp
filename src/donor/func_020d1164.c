/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d116c from projets/nintendogs-chihuahua-friends/src/donor/func_020d116c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02153720[];
extern void func_02044644(s32 a);
extern s32 func_02069430(u8 *p);
extern void func_01ff832c(s32 a, u32 *b, u32 *c, u32 *d);
extern void func_020692f0(u32 *a, u32 *b);
extern void func_02069504(u32 *a, u32 *b, u32 *c);
void func_020d1164(u8 *param_1) {
    u32 a[10];
    u8 *iVar2;
    s32 iVar2b;
    s16 sVar1;

    iVar2 = *(u8 **) (param_1 + 0x214);
    func_02044644((s16) * (s16 *) (param_1 + 0x9c));
    if ((*(u16 *) (*(u8 **) data_02153720 + 0x84) & 1) == 0) {
        return;
    }
    if (*(s32 *) (iVar2 + 4) <= 0) {
        return;
    }
    if (*(s32 *) (iVar2 + 0x10) == 0) {
        return;
    }
    if (*(s32 *) (iVar2 + 0x14) != 0) {
        sVar1  = *(s16 *) (*(u8 **) data_02153720 + 0x86);
        iVar2b = func_02069430(iVar2 + 0x1c);
        iVar2b = iVar2b;
        {
            u32 t8 = *(u32 *) (param_1 + 0xd0);
            u32 t7 = *(u32 *) (param_1 + 0xcc);
            u32 t6 = *(u32 *) (param_1 + 0xc8);
            a[6]   = t6;
            a[7]   = t7;
            a[8]   = t8;
        }
        {
            u32 t5 = *(u32 *) (param_1 + 0xdc);
            u32 t4 = *(u32 *) (param_1 + 0xd8);
            u32 t3 = *(u32 *) (param_1 + 0xd4);
            a[3]   = t3;
            a[4]   = t4;
            a[5]   = t5;
        }
        {
            u32 t2 = *(u32 *) (param_1 + 0xe8);
            u32 t1 = *(u32 *) (param_1 + 0xe4);
            u32 t0 = *(u32 *) (param_1 + 0xe0);
            a[0]   = t0;
            a[1]   = t1;
            a[2]   = t2;
        }
        func_01ff832c(((-(s32) sVar1) * iVar2b) >> 8, &a[6], &a[0], &a[0]);
        func_020692f0(&a[0], &a[0]);
        func_02069504(&a[3], &a[0], &a[6]);
        *(u32 *) (param_1 + 0xc8) = a[6];
        *(u32 *) (param_1 + 0xcc) = a[7];
        *(u32 *) (param_1 + 0xd0) = a[8];
        *(u32 *) (param_1 + 0xd4) = a[3];
        *(u32 *) (param_1 + 0xd8) = a[4];
        *(u32 *) (param_1 + 0xdc) = a[5];
        *(u32 *) (param_1 + 0xe0) = a[0];
        *(u32 *) (param_1 + 0xe4) = a[1];
        *(u32 *) (param_1 + 0xe8) = a[2];
        return;
    }
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_021121c4 from projets/nintendogs-chihuahua-friends/src/donor/func_021121c4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    s32 w[3];
} T3;
extern u8 *data_02153720;
extern s32 func_01ffda04(s32);
extern void func_02044644(u32);
extern void func_02108740(u8 *);
extern u32 func_02033d98(s32);
extern void func_0210fdc8(u8 *);
extern void func_020ec2a0(u8 *, s32);
extern void func_0210fcd4(u8 *);
void func_021121c4(u8 *p) {
    s32 iVar1;
    u32 uVar2;
    u8 *iVar3;
    T3 tmp;

    iVar1 = func_01ffda04(*(s16 *) (p + 0x98));
    func_02044644(0);
    func_02108740(p);
    iVar3 = data_02153720;
    if ((*(u16 *) (iVar3 + 0x84) & 1) != 0) {
        tmp                 = *(T3 *) (iVar3 + 0x9c);
        *(s32 *) (p + 0xbc) = (*(s32 *) (p + 0xbc) >> 1) + (tmp.w[0] >> 1);
        *(s32 *) (p + 0xc0) = (*(s32 *) (p + 0xc0) >> 1) + (tmp.w[1] >> 1);
        *(s32 *) (p + 0xc4) = (*(s32 *) (p + 0xc4) >> 1) + (tmp.w[2] >> 1);
    }
    if ((*(u16 *) (data_02153720 + 0x84) & 1) != 0) {
        goto body;
    }
    func_0210fcd4(p);
    return;
body:
    uVar2 = func_02033d98(iVar1);
    if (uVar2 == 0) {
        func_0210fdc8(p);
        func_020ec2a0(p + 400, 6);
    }
}

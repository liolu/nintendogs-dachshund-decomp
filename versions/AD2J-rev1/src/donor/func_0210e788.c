/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210e780 from projets/nintendogs-shiba-friends/src/donor/func_0210e780.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    s32 w[3];
} T3;
extern u8 *data_02153720;
extern u8 data_02150330[];
extern s32 func_02044644(s32 v);
extern s32 func_01ffda04(s32 v);
extern void func_0210843c(u8 *p, void *q, int v);
extern s32 func_02092d80(s32 a, void *b, int c);
extern void func_0210fdc8(u8 *p);
extern void func_020ec2a0(void *p, int v);
extern void func_02092ee8(s32 a, void *b, void *c);
extern void func_02027608(s32 a, void *b);
extern void func_01ff832c(int a, void *b, void *c, void *d);
extern void func_0210e98c(u8 *p);
extern void func_0210f200(u8 *p);
extern void func_0210f13c(u8 *p);
extern void func_0210efd0(u8 *p);
extern s32 func_02069430(void *p);
extern void func_020ec220(void *p, int v, s32 w);
void func_0210e788(u8 *param_1) {
    s32 *piVar4;
    s32 iVar3;
    s32 iVar2;
    s32 blk[9];

    piVar4 = *(s32 **) (param_1 + 0x214);
    iVar2  = func_02044644(*(s16 *) (param_1 + 0x9c));
    iVar3  = func_01ffda04(*(s16 *) (param_1 + 0x98));
    if (iVar2 != 0) {
        func_0210843c(param_1, blk, 0xb000);
        if (*(s16 *) (param_1 + 0x90) == 2) {
            *(T3 *) piVar4 = *(T3 *) blk;
            iVar2          = func_02092d80(iVar2, piVar4, 0x4000);
            if (iVar2 != 0) {
                func_0210fdc8(param_1);
                func_020ec2a0(param_1 + 400, 5);
            }
        } else {
            func_02092ee8(iVar2, piVar4, blk);
            if (piVar4[1] < 0) {
                piVar4[1] = 0;
            }
            piVar4[0x21] = 0;
            piVar4[0x22] = 0;
            piVar4[0x23] = 0;
            if ((*(u16 *) ((u8 *) data_02153720 + 0x84) & 2) != 0) {
                func_020ec2a0(param_1 + 400, 5);
            }
        }
    }
    if (iVar3 != 0) {
        func_02027608(iVar3, piVar4 + 0x1e);
        piVar4[0x3f] = 0;
        piVar4[0x40] = 0;
        piVar4[0x41] = 0;
    } else {
        func_0210843c(param_1, blk + 3, 0x1a000);
        blk[6] = *(s32 *) (data_02150330 + 0x4c);
        blk[7] = *(s32 *) (data_02150330 + 0x58);
        blk[8] = *(s32 *) (data_02150330 + 0x64);
        func_01ff832c(0x3000, blk + 6, blk + 3, piVar4 + 0x1e);
        piVar4[0x1f] = 0;
        piVar4[0x3f] = 0;
        piVar4[0x40] = 0;
        piVar4[0x41] = 0;
    }
    func_0210e98c(param_1);
    if (*(s16 *) (param_1 + 0x90) == 6) {
        func_0210f200(param_1);
        func_0210f13c(param_1);
        func_0210efd0(param_1);
    }
    iVar2 = *(s32 *) (param_1 + 0x214);
    if (*(s32 *) (iVar2 + 0x40) < 0x1000 && *(s32 *) (iVar2 + 0xc4) < 0) {
        iVar3 = func_02069430((s32 *) (iVar2 + 0xc0));
        func_020ec220(param_1 + 400, 0, iVar3);
    }
    if (*(s32 *) (iVar2 + 0x40) > 0x5000) {
        iVar2 = func_02069430((s32 *) (iVar2 + 0xc0));
        if (iVar2 > 0x1000) {
            func_020ec220(param_1 + 400, 6, iVar2);
        }
    }
    *(T3 *) (param_1 + 0xbc) = *(T3 *) (piVar4 + 0x1e);
}

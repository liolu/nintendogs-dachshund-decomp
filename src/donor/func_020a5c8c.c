/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a5c8c from projets/nintendogs-shiba-friends/src/donor/func_020a5c8c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef struct {
    u32 a;
    u32 b;
    u16 c;
    u16 pad;
} Ent;
extern u8 data_0213becc[];
extern u8 data_0213bedc[];
extern u8 data_0213beec[];
extern u8 data_0213befc[];
extern u8 data_0213bf14[];
extern Ent data_0213be50[];
extern u8 data_0213be10[];
extern void func_020b50fc(u32 a, u32 b, u32 c, u32 d);
extern u32 func_020b5024(u32 a, void *b);
extern void func_020b93d4(u32 a, u32 b);
extern void func_020b9408(u32 a, u32 b);
extern void func_020b93a0(u32 a, u32 b);
extern void func_020b9218(u32 a, u32 b);
extern void func_020b91bc(u32 a, u32 b);
extern void func_020a3d7c(u32 a, u32 b, u32 c);
extern void func_020a8ec4(void);
extern u32 func_020a8a64(u32 a, u32 b, u32 c, u32 d, u32 e);
extern u32 func_020a3dfc(u32 a, u32 b, u32 c, u32 d);
extern void func_020a8db4(u32 a, u32 b);
extern void func_020a89a4(u32 a, u32 b, u32 c);
extern void func_020a82fc(u32 a, u32 b, u32 c, u32 d, void *e);
extern void func_020b8510(u32 a, u32 b);
extern void func_020ae778(void);
extern void func_020b8ab8(u32 a, void *b, u32 c);
extern void func_020bdd48(void *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
void func_020a5c8c(u32 *param_1, u32 param_2, u32 param_3, u32 param_4) {
    s32 iVar1;
    u32 iVar2;
    u32 iVar3;
    u32 iVar4;
    u32 iVar5;
    u16 *puVar6;
    Ent *piVar7;

    func_020b50fc(0x2b, param_2, param_3, param_4);
    iVar1 = func_020b5024(0x2b, data_0213becc);
    iVar2 = func_020b5024(0x2b, data_0213bedc);
    iVar3 = func_020b5024(0x2b, data_0213beec);
    iVar4 = func_020b5024(0x2b, data_0213befc);
    iVar5 = func_020b5024(0x2b, data_0213bf14);
    func_020b93d4(2, iVar1);
    func_020b9408(2, iVar2);
    func_020b93a0(2, iVar3);
    func_020b9218(2, iVar4);
    func_020b91bc(2, iVar5);
    func_020a3d7c(2, 0, 0);
    func_020a8ec4();
    {
        s32 cnt = 0;
        Ent *pt = data_0213be50;
        do {
            iVar5  = func_020a8a64(0, iVar4, iVar2, pt->a, 0);
            puVar6 = (u16 *) func_020a3dfc(2, 0, pt->c, 0);
            func_020a8db4(iVar5, 0);
            func_020a89a4(0, iVar5, 0xe);
            if (puVar6 != (u16 *) 0) {
                func_020a82fc(0, iVar3, pt->a, pt->b, puVar6);
            }
            cnt = cnt + 1;
            pt  = pt + 1;
        } while (cnt < 5);
    }
    func_020b8510(2, 2);
    func_020ae778();
    func_020b8ab8(2, data_0213be10, 0);
    func_020bdd48(param_1 + 1, 2, 1, 0, 0, 0, 0, 0, 0, 10, 10);
    func_020bdd48(param_1 + 0x10, 2, 3, 0, 0, 0, 0, 0, 0, 10, 10);
    func_020bdd48(param_1 + 0x1f, 2, 2, 0, 0, 0, 0, 0, 0, 10, 10);
    func_020bdd48(param_1 + 0x2e, 2, 0, 0, 0, 0, 0, 0, 0, 10, 10);
    func_020bdd48(param_1 + 0x3d, 2, 4, 0, 0, 0, 0, 0, 0, 10, 10);
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_021213a4 from projets/nintendogs-shiba-friends/src/donor/func_021213a4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_02157b6c[];
extern u8 *data_02157b60;
extern void func_02070abc(void);
extern void func_02120cc4(void);
extern void func_02120fec(void);
extern void func_02120ca8(void);
extern void func_0211e6e4(u32 a);
extern void func_0211e6f8(u32 a);
extern void func_0211e6d0(u32 a);
extern void func_0211ea64(void);
void func_021213ac(void) {
    s32 iVar4;

    func_02070abc();
    iVar4 = 0;
    do {
        data_02157b6c[iVar4] = 0;
        iVar4                = iVar4 + 1;
    } while (iVar4 < 16);
    *(u32 *) (data_02157b60 + 0x10c) = 0;
    *(u32 *) (data_02157b60 + 0x110) = 0;
    *(u32 *) (data_02157b60 + 0x124) = 0;
    *(u32 *) (data_02157b60 + 0x128) = 0;
    func_0211e6e4((u32) func_02120cc4);
    func_0211e6f8((u32) func_02120fec);
    func_0211e6d0((u32) func_02120ca8);
    *(u16 *) (data_02157b60 + 300) = 0;
    func_0211ea64();
}

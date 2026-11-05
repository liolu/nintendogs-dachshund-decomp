/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208fa20 from projets/nintendogs-shiba-friends/src/donor/func_0208fa20.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u8 data_02153708[];
extern void func_02090508(u16 *p, u32 n);
void func_0208fa20(void) {
    u16 *puVar3;
    u8 *iVar2;
    u8 *sub;
    puVar3 = *(u16 **) data_02153708;
    func_02090508(puVar3, 0xd);
    puVar3[2]               = 8;
    iVar2                   = *(u8 **) data_02153708;
    *(u16 *) (iVar2 + 0x20) = *(u16 *) (iVar2 + 0x20) | 1;
    *(u16 *) (iVar2 + 0x20) = *(u16 *) (iVar2 + 0x20) | 2;
    iVar2                   = *(u8 **) data_02153708;
    sub                     = iVar2 + 0x20;
    *(u16 *) (sub + 0x14)   = *(u16 *) (sub + 0x14) | 1;
    *(u16 *) (sub + 0x14)   = *(u16 *) (sub + 0x14) | 2;
    iVar2                   = *(u8 **) data_02153708;
    sub                     = iVar2 + 0x20;
    *(u16 *) (sub + 0x28)   = *(u16 *) (sub + 0x28) | 1;
    *(u16 *) (sub + 0x28)   = *(u16 *) (sub + 0x28) | 2;
    puVar3[0xe]             = 0;
}

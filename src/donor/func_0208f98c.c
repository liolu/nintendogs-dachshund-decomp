/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208f98c from projets/nintendogs-chihuahua-friends/src/donor/func_0208f98c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed int s32;
extern u16 *data_02153708;
extern void func_02090508(u16 *p, s32 v);
void func_0208f98c(void) {
    u16 *puVar3;
    u8 *iVar2;
    u8 *q;

    puVar3 = data_02153708;
    func_02090508(puVar3, 0x12);
    puVar3[2]               = 8;
    iVar2                   = *(u8 **) &data_02153708;
    *(u16 *) (iVar2 + 0x20) = *(u16 *) (iVar2 + 0x20) | 1;
    *(u16 *) (iVar2 + 0x20) = *(u16 *) (iVar2 + 0x20) | 2;
    iVar2                   = *(u8 **) &data_02153708;
    q                       = iVar2 + 0x20;
    *(u16 *) (q + 20)       = *(u16 *) (q + 20) | 1;
    *(u16 *) (q + 20)       = *(u16 *) (q + 20) | 2;
    iVar2                   = *(u8 **) &data_02153708;
    q                       = iVar2 + 0x20;
    *(u16 *) (q + 40)       = *(u16 *) (q + 40) | 1;
    *(u16 *) (q + 40)       = *(u16 *) (q + 40) | 2;
    puVar3[0xe]             = 0;
}

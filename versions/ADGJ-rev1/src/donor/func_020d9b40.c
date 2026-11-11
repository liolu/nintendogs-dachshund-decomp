/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d9b40 from projets/nintendogs-chihuahua-friends/src/donor/func_020d9b40.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern u32 (*data_0213b5b8)(u32, u32, u32);
extern u32 (*data_0213b5c0)(u32, u32, u32);
extern u32 *data_02154ca0;
void func_020d9b40(void) {
    int iVar6;
    u32 uVar5;
    u32 *pa;
    u32 *pb;

    iVar6 = 0;
    do {
        uVar5                        = data_0213b5b8(0x800, 0, 0);
        pa                           = data_02154ca0 + iVar6;
        pa[0x67]                     = uVar5;
        uVar5                        = data_0213b5c0(0x400, 0, 0);
        pb                           = (u32 *) ((u32) data_02154ca0 + (u32) iVar6 * 4);
        iVar6                        = iVar6 + 1;
        *(u32 *) ((u8 *) pb + 0x1a8) = uVar5;
    } while (iVar6 < 3);
    data_02154ca0[0x6d] = 1;
}

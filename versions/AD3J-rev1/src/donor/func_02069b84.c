/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02004f9c from projets/code-lyoko/src/auto/func_02004f9c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
extern u16 data_0213b3c0;
extern u16 data_0214e9ac;
extern u16 data_0213b3c0;
extern u16 data_0214e9ac;
void func_02069b84(u32 dispMode, u32 bgMode, u32 bg0_2d3d) {
    u32 cnt = (*(u32 *) ((0x04000000) | 0x0));

    data_0214e9ac = dispMode;
    if (!data_0213b3c0) {
        dispMode = 0;
    }
    (*(u32 *) ((0x04000000) | 0x0)) = (cnt & ~0xf000f) | (dispMode << 16) | bgMode | (bg0_2d3d << 3);
    if (data_0214e9ac == 0) {
        data_0213b3c0 = 0;
    }
}

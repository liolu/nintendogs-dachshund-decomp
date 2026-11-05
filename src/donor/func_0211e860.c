/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_ov007_0215da20 from https://github.com/chasmlol/nintendogs-decomp src/overlays/ov007/func_ov007_0215da20.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 data_021560e8;
u16 func_0211e860(void) {
    return *(u16 *) (*(u8 **) &data_021560e8 + 0x30);
}

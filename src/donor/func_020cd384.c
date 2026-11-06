/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020cd384 from projets/nintendogs-chihuahua-friends/src/donor/func_020cd384.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 data_02154c70;
void func_020cd384(void) {
    *(u16 *) (*(u32 *) &data_02154c70 + 0x6c) = 0;
    *(u16 *) (*(u32 *) &data_02154c70 + 0x7a) = 0xffff;
}

/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200eb58 from projets/rayman-rr/src/donor/func_0200eb58.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern void func_02081484(void);
extern u32 data_0215365c;
extern u16 data_02153660[9];
#pragma thumb off
void func_02081484(void) {
    s32 i;

    data_0215365c = 0x0000;

    for (i = 0; i < 9; i++) {
        data_02153660[i] = 0;
    }
}

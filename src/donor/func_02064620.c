/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200cfd0 from projets/code-lyoko/src/auto/func_0200cfd0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
extern const u8 data_02124804[724];
extern const u8 data_02124804[724];
u16 func_02064620(s32 decibel) {
    u8 volume;
    s32 shift;

    if (decibel < -723) {
        decibel = -723;
    } else if (decibel > 0) {
        decibel = 0;
    }
    volume = data_02124804[decibel + 723];

    if (decibel < -240) {
        shift = 3;
    } else if (decibel < -120) {
        shift = 2;
    } else if (decibel < -60) {
        shift = 1;
    } else {
        shift = 0;
    }
    return (u16) (volume | (shift << 8));
}

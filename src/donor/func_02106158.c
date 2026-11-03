/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020bc1d8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020bc1d8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 data_0215607c;
void func_02106158(u32 param_1) {
    u8 *g               = *(u8 **) &data_0215607c;
    *(u32 *) (g + 0x7c) = param_1;
    g                   = *(u8 **) &data_0215607c;
    switch (*(u32 *) (g + 0x7c)) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            *(u16 *) (g + 130) = 1;
            return;
        case 5:
            *(u16 *) (g + 130) = 4;
            return;
        case 6:
        case 9:
        case 12:
        case 13:
            *(u16 *) (g + 130) = 5;
            return;
        case 7:
            *(u16 *) (g + 130) = 1;
            return;
        case 8:
            *(u16 *) (g + 130) = 6;
            return;
        case 10:
        case 11:
            *(u16 *) (g + 130) = 7;
            return;
        case 14:
            *(u16 *) (g + 130) = 8;
            return;
        case 15:
            *(u16 *) (g + 130) = 9;
            return;
        case 16:
            *(u16 *) (g + 130) = 10;
            return;
        case 17:
        case 18:
            *(u16 *) (g + 130) = 11;
            return;
    }
}

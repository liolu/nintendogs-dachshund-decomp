/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208651c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0208651c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
void func_02089cc0(u8 *param_1, u8 *param_2) {
    s32 i;
    u8 *p;
    s32 step;
    s32 cnt;
    u32 tag;
    s32 x;
    u32 a;
    u32 b;

    cnt  = *(u16 *) (param_2 + 8);
    p    = param_2;
    step = 12;
    i    = 0;
    if (cnt <= 0) {
        return;
    }
    do {
        p    = p + step;
        tag  = *(u32 *) p;
        step = *(s32 *) (p + 4);
        switch (tag) {
            case 0x31474d49:
                a                        = *(u8 *) (p + 12);
                b                        = *(u8 *) (p + 13);
                *(u8 *) (param_1 + 0x16) = a;
                *(u8 *) (param_1 + 0x17) = b;
                *(u16 *) (param_1 + 18)  = *(u16 *) (p + 18);
                *(u8 *) (param_1 + 0x1f) = *(u8 *) (p + 14);
                *(u8 *) (param_1 + 0x1d) = *(u8 *) (p + 16);
                *(u8 *) (param_1 + 0x1e) = *(u8 *) (p + 17);
                *(u8 *) (param_1 + 0x1c) = *(u8 *) (p + 15);
                x                        = (a * b + 15) & ~15;
                *(u16 *) (param_1 + 20)  = x / 16;
                *(u32 *) param_1         = (u32) p + *(u32 *) (p + 8);
                break;
            case 0x31444957:
                *(u32 *) (param_1 + 12) = (u32) p + *(u32 *) (p + 8);
                *(u16 *) (param_1 + 16) = *(u16 *) (p + 12);
                break;
            case 0x31504d43:
                *(u32 *) (param_1 + 4)  = (u32) p + *(u32 *) (p + 12);
                *(u32 *) (param_1 + 8)  = (u32) p + *(u32 *) (p + 8);
                *(u16 *) (param_1 + 24) = *(u16 *) (p + 18);
                *(u16 *) (param_1 + 26) = *(u16 *) (p + 16);
                break;
        }
        i++;
    } while (i < *(u16 *) (param_2 + 8));
}

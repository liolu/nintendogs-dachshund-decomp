/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f4e98 from projets/nintendogs-chihuahua-friends/src/donor/func_020f4e98.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
u32 func_020f4e98(u32 *param_1, u32 param_2) {
    u32 *puVar2;
    s32 i;
    u8 *p;
    u32 z;
    if (param_1 == 0) {
        goto zero;
    }
    puVar2 = (u32 *) param_1[0];
    if (puVar2 != 0) {
        goto body;
    }
zero:
    return 0;
body:
    if (param_2 >= puVar2[0]) {
        return 0;
    }
    p = (u8 *) puVar2 + 148 + param_2 * 24;
    i = 0;
    z = i;
    do {
        *(u16 *) (*(u8 **) (p + 0x14) + (u32) i * 2 + 4)   = z;
        *(u16 *) (*(u8 **) (p + 0x14) + (u32) i * 2 + 100) = z;
        i                                                  = i + 1;
    } while (i < 48);
    *(u32 *) (p + 0x4) = 0;
    return 1;
}

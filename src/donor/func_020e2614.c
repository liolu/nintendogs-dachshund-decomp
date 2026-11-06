/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e2614 from projets/nintendogs-chihuahua-friends/src/donor/func_020e2614.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed char s8;
typedef volatile unsigned char vu8;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_0212fd50;
extern u32 data_02154cac;
extern u32 data_0212fd08;
void func_020e2614(s32 param_1, s32 param_2, s32 *param_3, u32 *param_4) {
    s32 i;
    s32 count;
    u8 *p;
    s32 iVar6;
    u32 uVar7;
    u8 *g;
    u16 c16;
    u16 idx;
    s32 k;
    u32 off;
    vu8 *pb;
    count = 0;
    i     = 0;
    p     = (u8 *) &data_0212fd50 + param_1 * 24 + (param_2 << 3);
    do {
        if (*(s8 *) p >= 0) {
            count = count + 1;
        }
        i = i + 1;
        p = p + 1;
    } while (i < 8);
    if (count == 0) {
        iVar6 = -1;
    } else {
        g                    = *(u8 **) &data_02154cac;
        c16                  = count;
        uVar7                = *(u32 *) (g + 0x254) * 0x10dcd + 1;
        *(u32 *) (g + 0x254) = uVar7;
        idx                  = (u16) (((u32) c16 * (u16) uVar7) >> 16);
        iVar6                = *(s8 *) ((u8 *) &data_0212fd50 + param_1 * 24 + (u32) param_2 * 8 + idx);
    }
    *param_3 = iVar6;
    if (*param_3 != -1) {
        *param_4 = 0xffffffff;
        k        = 0;
        if (k < *((vu8 *) &data_0212fd08 + param_2)) {
            pb  = (vu8 *) &data_0212fd08 + (u32) param_2;
            off = param_2 * 160;
            do {
                g     = *(u8 **) &data_02154cac;
                iVar6 = *(s32 *) (off + (u32) g + *param_3 * 20 + (k << 2) + 0x50);
                if (iVar6 != 0 && (*(u8 *) (iVar6 + 1) & 1) != 0) {
                    *param_4 = k;
                    k        = *pb;
                }
                k = k + 1;
            } while (k < *pb);
        }
    }
}

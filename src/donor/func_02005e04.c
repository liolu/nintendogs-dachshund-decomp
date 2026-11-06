/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02005e78 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02005e78.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_0214a954;
extern u8 data_0214a960;
extern u16 data_0214a9e0[][1024];
extern void func_0205e980(u32 a, u32 b, u32 *c, u32 *d);
void func_02005e04(u32 param_1, u32 param_2, u32 *param_3, u32 param_4, ...) {
    u8 uVar6;
    u32 uVar2;
    u32 p1c;
    u32 p2c;
    u8 *pbVar5;
    u32 uVar4;
    s32 iVar3;
    p1c = param_1;
    p2c = param_2;
    if (data_0214a954 == 0) {
        return;
    }
    func_0205e980((u32) &data_0214a960, 0x80, param_3, (u32 *) ((((u32) &param_3) & ~3u) + 4));
    uVar4  = p1c;
    iVar3  = data_0214a954;
    pbVar5 = &data_0214a960;
    if (iVar3 == 0) {
        return;
    }
    uVar6 = *pbVar5;
    if (uVar6 == 0) {
        return;
    }
    uVar2 = 0x3fff;
    do {
        if (uVar6 == 10) {
            p2c   = (p2c + 1) & 0xff;
            uVar4 = p1c;
        } else {
            if (iVar3 != 0 && uVar4 < 0x20 && p2c < 0x18) {
                u32 t8;
                s32 hi;
                u32 lo;
                t8                    = (uVar6 - 0x20) & uVar2;
                hi                    = ((s32) uVar4 >> 5) + ((s32) p2c >> 5) * 2;
                lo                    = ((p2c & 0x1f) << 5) + (uVar4 & 0x1f);
                t8                    = t8 | 0xf000;
                data_0214a9e0[hi][lo] = (u16) t8;
            }
            uVar4 = (uVar4 + 1) & 0xff;
        }
        pbVar5 = pbVar5 + 1;
        uVar6  = *pbVar5;
    } while (uVar6 != 0);
}

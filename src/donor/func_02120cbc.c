/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d7820 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d7820.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u8 *data_02157b60;
extern u8 data_0214a4f4[];
extern s32 func_0211e8ec(void);
extern void func_02070c48(u32 a, u32 b, void *c);
extern void func_0207120c(void *a, u32 b, void *c, s32 d, s32 e, s32 f);
extern s32 func_02070a84(void *a, u32 b);
extern void func_0211e7a4(u32 a, u32 b);
extern void func_02070b80(void *a);
extern u16 func_0211e8e0(void);
extern void func_02071400(u32 a);
extern void func_02071078(u32 a);
extern void func_02070abc(void);
extern u32 func_020709ec(void *a, u32 b);
extern void func_0211e704(u32 a, u32 b);
extern void func_02120960(void);
void func_02120cbc(u16 *param_1) {
    s32 iVar6;
    s32 sVar5;
    u16 uVar5;
    u32 uVar7;
    s32 i;
    u32 z;

    iVar6 = func_0211e8ec();
    uVar5 = *param_1;
    sVar5 = uVar5;
    if (sVar5 > 1) {
        goto LAB_sw;
    }
    if (sVar5 == 1) {
        goto LAB_1d4;
    }
    return;
LAB_sw:
    switch (sVar5) {
        case 8:
            if (iVar6 != 2) {
                return;
            }
            func_02070c48(0x200, 0x200, func_02120960);
            *(u16 *) (data_02157b60 + 0x10a) = 2;
            i                                = 0;
            *(u32 *) (data_02157b60 + 0x10c) = i;
            *(u32 *) (data_02157b60 + 0x110) = i;
            z                                = i;
            do {
                ((u32 *) (data_02157b60 + 0x40))[i] = z;
                i                                   = i + 1;
            } while (i < 16);
            *(u32 *) (data_02157b60 + 0x44) = *(u32 *) (data_02157b60 + 0x120);
            func_0207120c(data_02157b60 + 8, 0x438, data_0214a4f4, *(s32 *) (data_02157b60 + 0x118),
                          *(s32 *) (data_02157b60 + 0x11c), 0);
            if (*(u16 *) (param_1 + 4) != 7) {
                return;
            }
            uVar5 = (u16) func_02070a84(*(void **) (data_02157b60 + 0x3c), 0x200);
            func_0211e7a4(*(u32 *) (data_02157b60 + 0x3c), (u32) uVar5);
            return;
        case 9:
        case 10:
        case 11:
            goto LAB_end;
        case 12:
            func_02070b80(func_02120960);
            *(u16 *) (data_02157b60 + 0x10a) = 1;
            i                                = 0;
            *(u32 *) (data_02157b60 + 0x10c) = i;
            *(u32 *) (data_02157b60 + 0x110) = i;
            z                                = i;
            do {
                ((u32 *) (data_02157b60 + 0x40))[i] = z;
                i                                   = i + 1;
            } while (i < 16);
            *(u32 *) (data_02157b60 + 0x40) = *(u32 *) (data_02157b60 + 0x120);
            func_0207120c(data_02157b60 + 8, 0x438, data_0214a4f4, *(s32 *) (data_02157b60 + 0x118),
                          *(s32 *) (data_02157b60 + 0x11c), 0);
            uVar5 = func_0211e8e0();
            func_02071400((u32) uVar5);
            return;
        case 14:
            goto LAB_a10;
        case 15:
            goto LAB_f;
        default:
            goto LAB_end;
    }
LAB_1d4:
    func_02071078(0xffff);
    func_02070abc();
    *(u32 *) (data_02157b60 + 4) = 0;
LAB_a10:
    if (*(u16 *) (param_1 + 2) != 10) {
        return;
    }
    if (iVar6 == 2) {
        uVar5 = (u16) func_02070a84(*(void **) (data_02157b60 + 0x3c), 0x200);
        func_0211e7a4(*(u32 *) (data_02157b60 + 0x3c), (u32) uVar5);
        return;
    }
    if (iVar6 != 3) {
        return;
    }
    uVar7 = (u16) func_020709ec(*(void **) (data_02157b60 + 0x3c), 0x200);
    func_0211e704(*(u32 *) (data_02157b60 + 0x3c), uVar7);
    return;
LAB_f:
    if (iVar6 == 2) {
        uVar5 = (u16) func_02070a84(*(void **) (data_02157b60 + 0x3c), 0x200);
        func_0211e7a4(*(u32 *) (data_02157b60 + 0x3c), (u32) uVar5);
        return;
    }
    if (iVar6 != 3) {
        return;
    }
    uVar7 = (u16) func_020709ec(*(void **) (data_02157b60 + 0x3c), 0x200);
    func_0211e704(*(u32 *) (data_02157b60 + 0x3c), uVar7);
LAB_end:
    return;
}

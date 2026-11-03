/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b8e1c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b8e1c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_0213bd4c;
extern u8 *data_02153720;
extern u8 *data_02154c3c;
extern u8 data_0212d584;
extern s32 *func_020c9848(u8 *p);
extern s32 *func_020c5630(u32 a);
extern s32 *func_020c6530(u32 a, u32 b, u32 c);
s32 *func_020a0ad0(u32 param_1) {
    s32 *piVar1;
    s32 *piVar2;

    piVar2 = (s32 *) &data_0213bd4c;
    switch (param_1) {
        case 0x30000:
            piVar1 = func_020c9848(*(u8 **) (data_02153720 + 0x140));
            if (piVar1 != ((void *) 0)) {
                piVar2 = piVar1 + 3;
            }
            break;
        case 0x30003:
            piVar2 = func_020c5630(*(u16 *) (*(u8 **) (data_02153720 + 0x13c) + 2));
            break;
        case 0x30006:
            piVar2 = func_020c6530(*(u32 *) (data_02154c3c + 4),
                                   *(u32 *) (&data_0212d584 + *(u16 *) (*(u8 **) (data_02153720 + 0x13c) + 2) * 28), 0);
            break;
    }
    return piVar2;
}

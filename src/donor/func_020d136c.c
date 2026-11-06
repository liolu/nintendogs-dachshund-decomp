/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d1374 from projets/nintendogs-chihuahua-friends/src/donor/func_020d1374.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
extern void func_021077d8(u8 *p);
extern void func_021077e8(u8 *p);
extern void func_020d1424(u8 *p);
extern void func_020d1500(u8 *p);
extern void func_0210916c(u8 *p);
void func_020d136c(u8 *param_1) {
    u8 *iVar1;

    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            func_021077d8(param_1);
            return;
        case 2:
            iVar1                                    = *(u8 **) (param_1 + 0x214);
            *(u32 *) (*(u8 **) (iVar1 + 0xa4) + 0xc) = 0;
            *(u32 *) (*(u8 **) (iVar1 + 0xa4) + 8)   = 0;
            *(u32 *) (*(u8 **) (iVar1 + 0xa0) + 0xc) = 0;
            *(u32 *) (*(u8 **) (iVar1 + 0xa0) + 8)   = 0;
            func_021077e8(param_1);
            *(u32 *) (iVar1 + 0x34) = 0;
            return;
        case 3:
            func_020d1500(param_1);
            return;
        case 1:
            func_020d1424(param_1);
            return;
        case 4:
            func_0210916c(param_1);
            return;
        case 8:
            *(u32 *) (*(u8 **) (param_1 + 0x214) + 0x34) = 1;
            return;
    }
}

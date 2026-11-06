/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020fdea0 from projets/nintendogs-chihuahua-friends/src/donor/func_020fdea0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153740;
extern u8 *data_02154c70;
extern s32 func_020b7efc(void);
extern void func_020a43f8(void);
extern void func_020b7ee0(void);
extern u8 func_02003980(void);
void func_020fdea0(void) {
    u8 bVar1;
    s32 iVar2;

    switch (*(s32 *) (*(u8 **) &data_02153740 + 0xbc)) {
        case 0x18:
            iVar2 = func_020b7efc();
            if (iVar2 == 0) {
                return;
            }
            func_020a43f8();
            func_020b7ee0();
            return;
        case 0x1a:
            iVar2 = func_020b7efc();
            if (iVar2 == 0) {
                return;
            }
            bVar1 = 1;
            if (*(s16 *) (*(u8 **) &data_02154c70 + 0x6c) != 1 && *(s16 *) (*(u8 **) &data_02154c70 + 0x6c) != 8) {
                bVar1 = 0;
            }
            if (bVar1) {
                return;
            }
            func_020a43f8();
            func_020b7ee0();
            return;
        case 0x19:
        case 0x1b:
            break;
        default:
            goto LAB_def;
    }
    iVar2 = func_020b7efc();
    if (iVar2 == 0) {
        return;
    }
    bVar1 = func_02003980();
    if (bVar1 == 0) {
        return;
    }
    func_020a43f8();
    func_020b7ee0();
    return;
LAB_def:
    func_020a43f8();
    func_020b7ee0();
}

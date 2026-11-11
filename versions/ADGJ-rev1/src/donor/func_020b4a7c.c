/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b4a7c from projets/nintendogs-chihuahua-friends/src/donor/func_020b4a7c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed int s32;
extern u8 *data_02153740;
extern void func_020a43f8(void);
extern s32 func_020b7efc(void);
extern void func_020b7ee0(void);
void func_020b4a7c(s32 *param_1) {
    s32 iVar1;

    *param_1 = *param_1 + 1;
    if (*param_1 <= 0x14) {
        return;
    }
    switch (*(s32 *) (data_02153740 + 0xbc)) {
        case 0:
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            goto LAB_43c;
        case 4:
            goto LAB_43c;
        case 5:
            break;
        case 6:
            break;
        case 7:
            goto LAB_44c;
        case 8:
            break;
        case 9:
            break;
        case 10:
            goto LAB_43c;
        case 11:
            break;
        case 13:
            break;
        case 14:
        LAB_43c:
            func_020a43f8();
            return;
        case 12:
        LAB_44c:
            iVar1 = func_020b7efc();
            if (iVar1 == 0) {
                return;
            }
            func_020a43f8();
            func_020b7ee0();
            break;
    }
}

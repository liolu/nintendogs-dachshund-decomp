/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209e030 from projets/nintendogs-chihuahua-friends/src/donor/func_0209e030.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02129248[];
extern u32 data_02153700;
extern void func_0209e30c(int p, int a, int b);
extern void func_020af014(void *a, int b);
extern void func_0209e1dc(int p, int a, int b);
extern void func_020aef40(int a, int b);
extern void func_020aee7c(void);
extern void func_020ae8d8(int a);
void func_0209e030(int param_1) {
    s32 iVar1;
    s16 *tab;

    tab                       = (s16 *) data_02129248;
    *(s16 *) (param_1 + 2)    = *(s16 *) ((u8 *) tab + *(s16 *) (param_1 + 0x20) * 6 + 4);
    *(s16 *) (param_1 + 0x22) = 0;
    *(s16 *) (param_1 + 0x24) = 0;
    *(s16 *) (param_1 + 0x26) = 0;
    *(s16 *) (param_1 + 0x28) = 0;
    *(s16 *) (param_1 + 0x2a) = 0;
    switch (*(s16 *) (param_1 + 0x20)) {
        case 0:
            func_0209e30c(param_1, 2, *(s16 *) data_02153700);
            func_020af014((void *) (param_1 + 0x30), *(s16 *) (param_1 + 0x2c));
            break;
        case 1:
            func_0209e1dc(param_1, 0, *(s16 *) data_02153700);
            iVar1 = *(s16 *) (param_1 + 0x3c);
            func_020aef40(*(s16 *) (param_1 + 0x3e), (s16) (iVar1 / 60));
            break;
        case 2:
            func_0209e30c(param_1, 3, *(s16 *) data_02153700);
            func_020af014((void *) (param_1 + 0x30), *(s16 *) (param_1 + 0x2c));
            break;
        case 3:
            func_0209e1dc(param_1, 1, *(s16 *) data_02153700);
            iVar1 = *(s16 *) (param_1 + 0x3c);
            func_020aef40(*(s16 *) (param_1 + 0x3e), (s16) (iVar1 / 60));
            break;
        case 4:
            switch (*(s16 *) data_02153700) {
                case 0:
                    break;
                case 1:
                    *(s16 *) (param_1 + 0x40) = 3;
                    break;
                case 2:
                    *(s16 *) (param_1 + 0x40) = 6;
                    break;
                case 3:
                    *(s16 *) (param_1 + 0x40) = 9;
                    break;
                case 4:
                    *(s16 *) (param_1 + 0x40) = 11;
                    break;
                case 5:
                    *(s16 *) (param_1 + 0x40) = 13;
                    break;
            }
            func_020aee7c();
            break;
    }
    func_020ae8d8(20);
}

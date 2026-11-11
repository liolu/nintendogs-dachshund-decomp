/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c42e8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c42e8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed int s32;
extern s32 data_02148c34;
extern s32 data_02148c0c;
extern s32 data_02148c28;
extern s32 data_02148c2c;
extern s32 data_02148c18;
extern s32 data_02148c14;
extern s32 data_02148c30;
extern s32 data_02148c10;
extern s32 data_02148cb0;
extern s32 data_02148c24;
extern s32 data_02148c1c;
extern s32 data_02148c78;
void func_0210e0f8(u8 *param_1, u8 *param_2, u8 *param_3, s32 param_4) {
    s32 a   = *(s32 *) (param_2 + 8);
    u8 *iv3 = *(u8 **) (param_1 + 0x214);
    s32 r;
    s32 t;
    if (a <= 0) {
        a = -a;
    }
    if (param_4 <= 0) {
        param_4 = -param_4;
    }
    if (a < data_02148c34) {
        r = 0;
    } else if (param_4 > data_02148c0c) {
        r = 12;
    } else {
        t = *(s32 *) (param_3 + 4);
        if (t < data_02148c28) {
            r = 11;
        } else if (t < data_02148c2c) {
            if (a < data_02148c18) {
                r = 10;
            } else if (a < data_02148c14) {
                r = 9;
            } else {
                r = 8;
            }
        } else if (t < data_02148c30) {
            if (a < data_02148c10) {
                r = 7;
            } else if (a < data_02148cb0) {
                r = 6;
            } else if (t > data_02148c24) {
                r = 4;
            } else {
                r = 5;
            }
        } else if (a < data_02148c1c) {
            r = 1;
        } else if (a < data_02148c78) {
            r = 2;
        } else {
            r = 3;
        }
    }
    switch (r) {
        case 0:
            *(s32 *) (iv3 + 0x10) = 0;
            return;
        case 1:
            *(s32 *) (iv3 + 0x10) = 3;
            return;
        case 2:
            *(s32 *) (iv3 + 0x10) = 5;
            return;
        case 3:
            *(s32 *) (iv3 + 0x10) = 6;
            return;
        case 4:
            *(s32 *) (iv3 + 0x10) = 5;
            return;
        case 5:
            *(s32 *) (iv3 + 0x10) = 7;
            return;
        case 6:
            *(s32 *) (iv3 + 0x10) = 4;
            return;
        case 7:
            *(s32 *) (iv3 + 0x10) = 2;
            return;
        case 8:
            *(s32 *) (iv3 + 0x10) = 8;
            return;
        case 9:
            *(s32 *) (iv3 + 0x10) = 9;
            return;
        case 10:
            *(s32 *) (iv3 + 0x10) = 2;
            return;
        case 11:
            *(s32 *) (iv3 + 0x10) = 1;
            return;
        case 12:
            *(s32 *) (iv3 + 0x10) = 2;
            return;
        default:
            return;
    }
}

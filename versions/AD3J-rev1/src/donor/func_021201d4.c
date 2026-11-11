/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d6d34 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d6d34.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 data_02157b4c;
extern s32 data_02157b58;
extern s32 data_02157b5c;
extern s16 data_02157b48;
extern s32 data_02157b54;
extern u16 data_02157b40;
extern s32 data_02157b50;
extern void func_02120714(void);
extern void func_021206e8(void);
extern void func_02120640(void);
extern s32 func_02120058(u32 a, u8 *b);
extern void func_0211fedc(u32 a, u8 *b);
extern void func_0211fe80(u32 a, u8 *b);
extern s32 func_0211fe28(u32 a, u8 *b);
extern void func_0211ffb0(u8 *b);
void func_021201d4(void) {
    u8 buf[12];
    s32 ret;

    switch (data_02157b4c) {
        case 0:
            if (data_02157b58 == 0) {
                if (data_02157b5c == 1) {
                    if (data_02157b58 == 0) {
                        ret = func_02120058(2, buf + 2);
                        if (ret != 0) {
                            func_0211fedc((u32) func_02120714, buf + 2);
                        }
                    }
                    data_02157b4c = 1;
                }
            }
            break;
        case 1:
            if (data_02157b58 == 1) {
                if (data_02157b5c == 0) {
                    if (data_02157b58 == 1) {
                        func_0211fe80((u32) func_021206e8, buf + 4);
                    }
                    data_02157b4c = 0;
                } else {
                    data_02157b48 = data_02157b48 - 1;
                    if ((s16) data_02157b48 <= 0) {
                        data_02157b48 = 60;
                        if (data_02157b58 == 1) {
                            data_02157b54 = 0;
                            ret           = func_0211fe28((u32) func_02120640, buf + 6);
                            if (ret != 0) {
                                data_02157b58 = 2;
                            }
                        }
                        data_02157b4c = 2;
                    }
                }
            }
            break;
        case 2:
            if (data_02157b58 == 2) {
                if (data_02157b5c == 0) {
                    data_02157b54 = 1;
                    data_02157b4c = 1;
                } else {
                    data_02157b48 = data_02157b48 - 1;
                    if ((s16) data_02157b48 <= 0 || data_02157b40 != 0) {
                        data_02157b48 = 600;
                        data_02157b54 = 1;
                        data_02157b4c = 1;
                    }
                }
            }
            break;
    }
    if (data_02157b50 == 1) {
        func_0211ffb0(buf);
        data_02157b50 = 0;
        data_02157b58 = 0;
    }
    if (data_02157b40 != 0) {
        data_02157b40 = data_02157b40 - 1;
    }
}

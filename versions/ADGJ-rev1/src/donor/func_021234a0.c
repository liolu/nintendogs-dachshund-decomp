/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_021234a0 from projets/nintendogs-chihuahua-friends/src/donor/func_021234a0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    s32 w[3];
} T3;
extern s32 data_02157c1c;
extern s32 *data_02154c9c;
extern void func_02092ba0(s32 a);
extern void func_02084a14(s32 a, s32 b, s32 *c);
extern s32 func_0210634c(void);
extern void func_020c45ec(s32 a, u8 *b, s32 *c);
extern void func_020ec184(u8 *p, s32 a, s32 b, s32 *c);
extern void func_020ec124(u8 *p, s32 a, s32 *b);
extern void func_020c96fc(s32 a);
extern void func_0210fe28(u8 *p);
extern void func_0211109c(u8 *p, s32 *a, s32 *b, s32 c, s32 d, s32 e);
void func_021234a0(u8 *param_1, s32 *param_2, s32 *param_3) {
    s32 *piVar4;
    s32 *r5;
    T3 ls;
    s32 buf2[3];

    piVar4 = *(s32 **) (param_1 + 0x214);
    if (*(s32 *) (param_1 + 0xb4) < data_02157c1c) {
        ls      = *(T3 *) (param_1 + 0xbc);
        ls.w[1] = 0;
        func_02092ba0(*(s16 *) (param_1 + 0x94));
        switch (*(s16 *) (param_1 + 0x94)) {
            case 29:
                func_02084a14((data_02154c9c ? *data_02154c9c : 0), 0x51, ls.w);
                func_02084a14((data_02154c9c ? *data_02154c9c : 0), 0x50, ls.w);
                break;
            case 30:
                func_02084a14((data_02154c9c ? *data_02154c9c : 0), 0x48, ls.w);
                func_02084a14((data_02154c9c ? *data_02154c9c : 0), 0x52, ls.w);
                break;
            case 31:
                func_02084a14((data_02154c9c ? *data_02154c9c : 0), 0x53, ls.w);
                func_02084a14((data_02154c9c ? *data_02154c9c : 0), 0x54, ls.w);
                break;
            case 32:
                func_02084a14((data_02154c9c ? *data_02154c9c : 0), 0x55, ls.w);
                func_02084a14((data_02154c9c ? *data_02154c9c : 0), 0x56, ls.w);
                break;
        }
        switch (piVar4[2]) {
            case 0:
                func_02084a14((data_02154c9c ? *data_02154c9c : 0), 0x79, ls.w);
                break;
            case 1:
                func_02084a14((data_02154c9c ? *data_02154c9c : 0), 0x60, ls.w);
                break;
            case 2:
                func_02084a14((data_02154c9c ? *data_02154c9c : 0), 0x5f, ls.w);
                func_02084a14((data_02154c9c ? *data_02154c9c : 0), 0x5e, ls.w);
                break;
            case 3:
                func_02084a14((data_02154c9c ? *data_02154c9c : 0), 0x5d, ls.w);
                break;
            case 4:
                func_02084a14((data_02154c9c ? *data_02154c9c : 0), 0x5c, ls.w);
                func_02084a14((data_02154c9c ? *data_02154c9c : 0), 0x5a, ls.w);
                break;
            case 5:
                func_02084a14((data_02154c9c ? *data_02154c9c : 0), 0x5b, ls.w);
                func_02084a14((data_02154c9c ? *data_02154c9c : 0), 0x59, ls.w);
                break;
            case 6:
                func_02084a14((data_02154c9c ? *data_02154c9c : 0), 0x58, ls.w);
                break;
        }
        func_020c45ec(func_0210634c(), param_1 + 0xbc, buf2);
        {
            s32 a = *(s32 *) (param_1 + 0xb4);
            if (a <= 0) {
                a = -a;
            }
            func_020ec184(param_1 + 400, 6, a, buf2);
        }
        func_020ec124(param_1 + 400, (s16) piVar4[2], buf2);
        func_020c96fc(piVar4[1]);
        func_0210fe28(param_1);
    } else {
        r5 = (s32 *) *piVar4;
        func_0211109c(param_1, param_2, param_3, r5[1], r5[4], 0);
    }
}

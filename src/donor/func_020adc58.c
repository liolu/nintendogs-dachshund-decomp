/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020adc58 from projets/nintendogs-chihuahua-friends/src/donor/func_020adc58.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153700;
extern u8 *data_02153708;
extern u8 *data_02153720;
extern u8 *data_02156080;
extern u8 *data_02153894;
extern s32 func_020ae0d8(void);
extern s32 func_01ffda04(s32 a);
extern s32 func_02028144(s32 a);
extern s32 func_02027c20(s32 a);
extern s32 func_020af480(void);
extern s32 func_020aeda8(void);
extern s32 func_020932a0(void);
extern s32 func_0210e43c(s32 a);
u32 func_020adc58(u32 param_1, s32 param_2) {
    u32 uVar7;
    s32 iVar5;
    s32 iVar6;
    s32 sel;
    s32 idx;
    u32 v;
    s16 sv;
    s16 sw;
    u32 A, B, C;
    u8 *pb;
    u32 *q4;

    uVar7 = 0xffff;
    switch (param_2) {
        case 4:
            uVar7 = func_020ae0d8();
            break;
        case 0x13f2:
            uVar7 = (u16) (*(s16 *) (*(s32 *) (data_02153700 + 0x34) + 4) - 1);
            break;
        case 0x13f3:
            if (*(s16 *) (*(s32 *) (data_02153700 + 0x34) + 6) != 0) {
                uVar7 = 0;
            } else {
                uVar7 = 1;
            }
            break;
        case 7:
            iVar5 = func_01ffda04(*(s16 *) (data_02153708 + 14));
            iVar5 = func_02028144(iVar5);
            iVar6 = 0;
            sel   = *(s16 *) (data_02153708 + 6);
            if (sel == 0) {
                goto s0;
            }
            if (sel == 1) {
                goto s1;
            }
            if (sel == 2) {
                iVar6 = iVar5 + 2016;
            }
            goto sj;
        s0:
            iVar6 = iVar5 + 2000;
            goto sj;
        s1:
            iVar6 = iVar5 + 0x7d8;
        sj:
            if (*(s16 *) (iVar6 + 4) > 1) {
                uVar7 = 0;
            } else {
                uVar7 = 1;
            }
            break;
        case 2000:
            iVar5 = func_01ffda04(*(s16 *) (data_02153708 + 14));
            if (iVar5 == 0) {
                break;
            }
            v = func_02027c20(iVar5);
            if (v <= 60) {
                uVar7 = 2;
            } else if (v <= 120) {
                uVar7 = 1;
            } else {
                uVar7 = 0;
            }
            break;
        case 0x13f0:
            if (func_020af480() != 0) {
                uVar7 = 0;
            } else {
                uVar7 = 1;
            }
            break;
        case 0x13ed:
            idx = *(s16 *) (data_02153720 + 0x7a);
            if (idx < 0) {
                goto zi;
            }
            if (*(s16 *) (data_02156080 + 0x20) > idx) {
                goto oki;
            }
        zi:
            iVar5 = 0;
            goto calli;
        oki:
            iVar5 = *(s32 *) (data_02156080 + idx * 4 + 4);
        calli:
            uVar7 = (u16) func_0210e43c(iVar5);
            break;
        case 0x13ee:
            switch (*(s16 *) (data_02153720 + 0x58)) {
                case 2:
                    uVar7 = 0;
                    break;
                case 1:
                    uVar7 = 1;
                    break;
                case -1:
                    uVar7 = 2;
                    break;
                case 0:
                    uVar7 = 3;
                    break;
            }
            break;
        case 0x13f4:
            v = (u16) (func_020932a0() >> 12);
            if (v == 0) {
                uVar7 = 0;
            } else if (v < 10) {
                uVar7 = 1;
            } else if (v < 70) {
                uVar7 = 2;
            } else {
                uVar7 = 3;
            }
            break;
        case 0x13ef:
            iVar5 = *(s16 *) (*(s32 *) (data_02153700 + 4) + 2) + 59;
            v     = (u16) (iVar5 / 60);
            if (v == 0) {
                uVar7 = 0;
            } else if (v <= 10) {
                uVar7 = 1;
            } else if (v <= 20) {
                uVar7 = 2;
            } else if (v <= 30) {
                uVar7 = 3;
            } else {
                uVar7 = 4;
            }
            break;
        case 0x13f1:
            sv = *(s16 *) (data_02153720 + 0x5c);
            if (sv == 0) {
                sw = *(s16 *) (data_02153720 + 0x58);
                if (sw == -1) {
                    goto one13f1;
                }
                if (sw != 0) {
                    goto zero13f1;
                }
            one13f1:
                uVar7 = 1;
                break;
            zero13f1:
                uVar7 = 0;
            } else if (sv <= 6) {
                uVar7 = 2;
            } else {
                uVar7 = 3;
            }
            break;
        case 5:
            switch (*(s16 *) data_02153700) {
                case 1:
                    uVar7 = 0;
                    break;
                case 2:
                    uVar7 = 1;
                    break;
                case 3:
                    uVar7 = 2;
                    break;
                case 4:
                    uVar7 = 3;
                    break;
                case 5:
                    uVar7 = 4;
                    break;
            }
            break;
        case 6:
            if (*(s16 *) (data_02153708 + 6) == 1) {
                uVar7 = 0;
            } else {
                uVar7 = 1;
            }
            break;
        case 0x1770:
            iVar5 = *(s32 *) (data_02153700 + 4);
            uVar7 = (u16) ((*(s16 *) iVar5 == 6) ? *(s16 *) (iVar5 + 32) : 0);
            break;
        case 0x1771:
            uVar7 = func_020aeda8();
            break;
        case 0x1772:
            pb = data_02153894;
            q4 = (u32 *) (pb + 388);
            A  = *(u32 *) (pb + 0x184);
            B  = q4[1];
            C  = q4[2];
            if (A > B) {
                if (A > C) {
                    uVar7 = 0;
                    break;
                }
            }
            if (B > C) {
                uVar7 = 1;
            } else {
                uVar7 = 2;
            }
            break;
    }
    return uVar7;
}

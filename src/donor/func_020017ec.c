/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a24d4 from projets/pokemon-dash/src/donor/func_020a24d4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef int BOOL;
typedef struct FirmwareUserSettings {
    u8 unk_00[2];
    u8 birthMonth : 4;
    u8 : 4;
    u8 birthDay;
    u8 unk_04;
    u8 pad_05;
    u16 nickname[10];
    u8 nicknameLength;
    u8 pad_1b;
    u16 comment[26];
    u8 commentLength;
    u8 pad_51[0x7];

    u16 tpRawX1;
    u16 tpRawY1;
    u8 tpDotX1;
    u8 tpDotY1;
    u16 tpRawX2;
    u16 tpRawY2;
    u8 tpDotX2;
    u8 tpDotY2;
    u16 favoriteColor : 3;
    u16 : 13;
} FirmwareUserSettings;
typedef struct TPCalibrateParam {
    s16 x0;
    s16 y0;
    s16 xDotSize;
    s16 yDotSize;
} TPCalibrateParam;
extern BOOL func_020017ec(TPCalibrateParam *calibrate);
extern u32 func_0200129c(TPCalibrateParam *calibrate, u16 rawX1, u16 rawY1, u16 dx1, u16 dy1, u16 rawX2, u16 rawY2, u16 dx2,
                         u16 dy2);
BOOL func_020017ec(TPCalibrateParam *calibrate) {

    u8 dy2;
    u16 rawX2;
    u16 rawY2;
    u8 dy1;
    u16 rawY1;
    u8 dx1;
    u16 rawX1;
    FirmwareUserSettings *info;
    u8 dx2;

    info  = ((FirmwareUserSettings *) 0x027ffc80);
    rawX1 = info->tpRawX1;
    rawY1 = info->tpRawY1;
    dx1   = info->tpDotX1;
    dy1   = info->tpDotY1;
    rawX2 = info->tpRawX2;
    rawY2 = info->tpRawY2;
    dx2   = info->tpDotX2;
    dy2   = info->tpDotY2;

    if (rawX1 == 0 && rawX2 == 0 && rawY1 == 0 && rawY2 == 0) {
        return 0;
    }
    return func_0200129c(calibrate, rawX1, rawY1, dx1, dy1, rawX2, rawY2, dx2, dy2) == 0;
}

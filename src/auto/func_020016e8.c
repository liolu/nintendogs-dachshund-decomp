/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a23d0 from projets/pokemon-dash/src/donor/func_020a23d0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed short s16;
typedef signed int s32;
typedef struct TPData {
    u16 x;
    u16 y;
    u16 touch;
    u16 validity;
} TPData;
typedef struct TPCalibrateParam {
    s16 x0;
    s16 y0;
    s16 xDotSize;
    s16 yDotSize;
} TPCalibrateParam;
typedef struct TPiCalibrateParam {
    s32 x0;
    s32 xDotSize;
    s32 xDotSizeInv;
    s32 y0;
    s32 yDotSize;
    s32 yDotSizeInv;
} TPiCalibrateParam;
typedef void (*TPRecvCallback)(u32 command, u8 result, u16 index);
typedef struct TPiWork {
    TPRecvCallback callback;
    TPData buf;
    volatile u16 index;
    u16 frequency;
    TPData *samplingBufs;
    u16 bufSize;
    u16 pad_16;
    TPiCalibrateParam calibrate;
    u16 calibrate_flg;
    volatile u16 state;
    volatile u16 err_flg;
    volatile u16 command_flg;
} TPiWork;
extern TPiWork data_0214a6a4;
extern void func_020016e8(const TPCalibrateParam *param);
static inline void CP_SetDiv32_32(u32 numer, u32 denom) {
    (*(volatile u16 *) 0x04000280) = 0;
    (*(volatile s32 *) 0x04000290) = numer;
    (*(volatile u64 *) 0x04000298) = denom;
}
static inline void CP_WaitDiv(void) {
    while ((*(volatile u16 *) 0x04000280) & 0x8000) {
    }
}
static inline s32 CP_GetDivResult32(void) {
    return (*(volatile s32 *) 0x040002a0);
}
extern int func_0208120c(void);
extern void func_02081220(int state);
void func_020016e8(const TPCalibrateParam *param) {
    int enabled;

    if (param == ((void *) 0)) {
        data_0214a6a4.calibrate_flg = 0;
        return;
    }

    enabled = func_0208120c();

    CP_SetDiv32_32(1 << 28, param->xDotSize);
    data_0214a6a4.calibrate.x0       = param->x0;
    data_0214a6a4.calibrate.xDotSize = param->xDotSize;
    CP_WaitDiv();
    data_0214a6a4.calibrate.xDotSizeInv = CP_GetDivResult32();

    CP_SetDiv32_32(1 << 28, param->yDotSize);
    data_0214a6a4.calibrate.y0       = param->y0;
    data_0214a6a4.calibrate.yDotSize = param->yDotSize;
    CP_WaitDiv();
    data_0214a6a4.calibrate.yDotSizeInv = CP_GetDivResult32();

    func_02081220(enabled);
    data_0214a6a4.calibrate_flg = 1;
}

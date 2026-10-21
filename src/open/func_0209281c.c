typedef unsigned char u8;
typedef unsigned short u16;
typedef signed int s32;
typedef signed short s16;
extern u8 data_02154350[];
s32 func_01ffdb08(s16);
void *func_02027530(void *);
void func_02029008(void *, s32, u8);
#pragma optimize_for_size on
void func_0209281c(void) {
    s16 v;
    s32 sel; /* selector */
    void *obj;
    s16 i;
    s32 tmp;

    tmp = 0;
    v = *(s16 *) (data_02154350 + 0x32);
    sel = 4;
    if (v < -0x28) {
        sel = 1;
    } else if (v < 0x28) {
        sel = 2;
    } else if (v < 0x55) {
        sel = 3;
    }
    i = 0;
    do {
        obj = (void *) func_01ffdb08(i);
        if (obj != 0 && *(u16 *) ((u8 *) func_02027530(obj) + 0x26) < 5) {
            func_02029008(obj, 0x5A, (u8) sel);
        }
        i++;
    } while (i < 3);
}

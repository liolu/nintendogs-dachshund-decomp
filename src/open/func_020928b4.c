typedef unsigned char u8;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed short s16;
extern void *data_0214d750;
s32 func_01ffdb08(s16);
void *func_02027530(void *);
void func_02028ec4(void *, s32, u8);
#pragma optimize_for_size on
void func_020928b4(void) {
    s32 flag;
    s16 i;
    void *a;
    u32 seed;
    u8 *temp;

    flag = 1;
    i = 0;
    temp = (u8 *) data_0214d750 + 0x2C;
    seed = *(u32 *) ((u8 *) data_0214d750 + 0x2C) + *(u32 *) (temp + 4) + *(u32 *) (temp + 8);
    for (; i < 3; i++) {
        a = (void *) func_01ffdb08(i);
        if (a != 0) {
            if (*(u16 *) ((u8 *) func_02027530(a) + 0x26) < 5) {
                seed = seed * 0x10DCD + 1;
                if ((u16) ((seed << 16) >> 31) != 0) {
                    flag = 2;
                }
                func_02028ec4(a, 0x31, (u8) flag);
            }
        }
    }
}

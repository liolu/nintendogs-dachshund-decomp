/* compiler: 1.2/sp2p3  */
/* func_0211be1c from projets/nintendogs-dachshund/src/auto/func_0211be1c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02069098(s32, M2C_UNK);
extern u16 data_0213bd14;
extern u16 data_0213bd18;
extern u16 data_0213bd1c;
extern u16 data_0213bd20;
extern u16 data_0213bd24;
extern u16 data_0213bd28;
extern u16 data_0213bd2c;
extern u16 data_0213bd30;
extern u16 data_0213bd34;
extern u16 data_0213bd38;
extern u16 data_0213bd3c;
extern u16 data_0213bd40;
extern s32 data_02153730;
void func_0209a68c(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    (*(s32 *) ((s8 *) (arg0) + (0))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0))) + data_02153730);
    temp_r0                          = (*(s32 *) ((s8 *) (arg0) + (0)));
    if (temp_r0 >= 0x18000) {
        (*(s32 *) ((s8 *) (arg0) + (0))) = (s32) (temp_r0 - 0x18000);
    }
    temp_r0_2 = (*(s32 *) ((s8 *) (arg0) + (0)));
    if (temp_r0_2 < 0x5000) {
        (*(s16 *) ((s8 *) (arg0) + (4)))    = (s16) (data_0213bd2c | (data_0213bd28 << 5) | (data_0213bd1c << 0xA));
        (*(s16 *) ((s8 *) (arg0) + (6)))    = (s16) (data_0213bd2c | (data_0213bd28 << 5) | (data_0213bd1c << 0xA));
        (*(s32 *) ((s8 *) (arg0) + (8)))    = 0;
        (*(s16 *) ((s8 *) (arg0) + (0x10))) = 3;
        return;
    }
    if (temp_r0_2 < 0x5800) {
        (*(s16 *) ((s8 *) (arg0) + (4)))    = (s16) (data_0213bd2c | (data_0213bd28 << 5) | (data_0213bd1c << 0xA));
        (*(s16 *) ((s8 *) (arg0) + (6)))    = (s16) (data_0213bd40 | (data_0213bd3c << 5) | (data_0213bd38 << 0xA));
        (*(s32 *) ((s8 *) (arg0) + (8)))    = func_02069098(temp_r0_2 - 0x5000, 0x800);
        (*(s16 *) ((s8 *) (arg0) + (0x10))) = 0;
        return;
    }
    if (temp_r0_2 < 0x6800) {
        (*(s16 *) ((s8 *) (arg0) + (4)))    = (s16) (data_0213bd40 | (data_0213bd3c << 5) | (data_0213bd38 << 0xA));
        (*(s16 *) ((s8 *) (arg0) + (6)))    = (s16) (data_0213bd40 | (data_0213bd3c << 5) | (data_0213bd38 << 0xA));
        (*(s32 *) ((s8 *) (arg0) + (8)))    = 0;
        (*(s16 *) ((s8 *) (arg0) + (0x10))) = 0;
        return;
    }
    if (temp_r0_2 < 0x7000) {
        (*(s16 *) ((s8 *) (arg0) + (4)))    = (s16) (data_0213bd40 | (data_0213bd3c << 5) | (data_0213bd38 << 0xA));
        (*(s16 *) ((s8 *) (arg0) + (6)))    = (s16) (data_0213bd34 | (data_0213bd30 << 5) | (data_0213bd14 << 0xA));
        (*(s32 *) ((s8 *) (arg0) + (8)))    = func_02069098(temp_r0_2 - 0x6800, 0x800);
        (*(s16 *) ((s8 *) (arg0) + (0x10))) = 0;
        return;
    }
    if (temp_r0_2 < 0x11000) {
        (*(s16 *) ((s8 *) (arg0) + (4)))    = (s16) (data_0213bd34 | (data_0213bd30 << 5) | (data_0213bd14 << 0xA));
        (*(s16 *) ((s8 *) (arg0) + (6)))    = (s16) (data_0213bd34 | (data_0213bd30 << 5) | (data_0213bd14 << 0xA));
        (*(s32 *) ((s8 *) (arg0) + (8)))    = 0;
        (*(s16 *) ((s8 *) (arg0) + (0x10))) = 1;
        return;
    }
    if (temp_r0_2 < 0x11800) {
        (*(s16 *) ((s8 *) (arg0) + (4)))    = (s16) (data_0213bd34 | (data_0213bd30 << 5) | (data_0213bd14 << 0xA));
        (*(s16 *) ((s8 *) (arg0) + (6)))    = (s16) (data_0213bd18 | (data_0213bd24 << 5) | (data_0213bd20 << 0xA));
        (*(s32 *) ((s8 *) (arg0) + (8)))    = func_02069098(temp_r0_2 - 0x11000, 0x800);
        (*(s16 *) ((s8 *) (arg0) + (0x10))) = 1;
        return;
    }
    if (temp_r0_2 < 0x12800) {
        (*(s16 *) ((s8 *) (arg0) + (4)))    = (s16) (data_0213bd18 | (data_0213bd24 << 5) | (data_0213bd20 << 0xA));
        (*(s16 *) ((s8 *) (arg0) + (6)))    = (s16) (data_0213bd18 | (data_0213bd24 << 5) | (data_0213bd20 << 0xA));
        (*(s32 *) ((s8 *) (arg0) + (8)))    = 0;
        (*(s16 *) ((s8 *) (arg0) + (0x10))) = 2;
        return;
    }
    if (temp_r0_2 < 0x13000) {
        (*(s16 *) ((s8 *) (arg0) + (4)))    = (s16) (data_0213bd18 | (data_0213bd24 << 5) | (data_0213bd20 << 0xA));
        (*(s16 *) ((s8 *) (arg0) + (6)))    = (s16) (data_0213bd2c | (data_0213bd28 << 5) | (data_0213bd1c << 0xA));
        (*(s32 *) ((s8 *) (arg0) + (8)))    = func_02069098(temp_r0_2 - 0x12800, 0x800);
        (*(s16 *) ((s8 *) (arg0) + (0x10))) = 2;
        return;
    }
    (*(s16 *) ((s8 *) (arg0) + (4)))    = (s16) (data_0213bd2c | (data_0213bd28 << 5) | (data_0213bd1c << 0xA));
    (*(s16 *) ((s8 *) (arg0) + (6)))    = (s16) (data_0213bd2c | (data_0213bd28 << 5) | (data_0213bd1c << 0xA));
    (*(s32 *) ((s8 *) (arg0) + (8)))    = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x10))) = 3;
}

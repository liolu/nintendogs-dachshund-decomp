/* compiler: 1.2/sp2p3  */
/* func_02089114 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_02089114.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
extern u32 data_0215367c;
void func_02089114(void *arg0, void *arg1, void *arg2) {
    s16 temp_lr;
    s16 temp_lr_2;
    s16 temp_r2;
    u32 temp_ip;
    u32 temp_ip_2;
    u32 temp_r0;

    if (((s32) (*(u16 *) ((s8 *) (arg1) + (0x2E))) % (s32) (*(u16 *) ((s8 *) (arg0) + (6)))) != 0) {
        return;
    }
    temp_ip       = (data_0215367c * 0x5EEDF715) + 0x1B0CB173;
    data_0215367c = temp_ip;
    temp_lr       = (*(s16 *) ((s8 *) (arg0) + (0)));
    (*(s32 *) ((s8 *) (arg2) + (0))) =
        (s32) ((*(s32 *) ((s8 *) (arg2) + (0))) + ((s32) ((temp_lr * (temp_ip >> 0x17)) - (temp_lr << 8)) >> 8));
    temp_ip_2     = (data_0215367c * 0x5EEDF715) + 0x1B0CB173;
    data_0215367c = temp_ip_2;
    temp_lr_2     = (*(s16 *) ((s8 *) (arg0) + (2)));
    (*(s32 *) ((s8 *) (arg2) + (4))) =
        (s32) ((*(s32 *) ((s8 *) (arg2) + (4))) + ((s32) ((temp_lr_2 * (temp_ip_2 >> 0x17)) - (temp_lr_2 << 8)) >> 8));
    temp_r0       = (data_0215367c * 0x5EEDF715) + 0x1B0CB173;
    data_0215367c = temp_r0;
    temp_r2       = (*(s16 *) ((s8 *) (arg0) + (4)));
    (*(s32 *) ((s8 *) (arg2) + (8))) =
        (s32) ((*(s32 *) ((s8 *) (arg2) + (8))) + ((s32) ((temp_r2 * (temp_r0 >> 0x17)) - (temp_r2 << 8)) >> 8));
}

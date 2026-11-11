/* compiler: 1.2/sp2p3  */
/* func_020ceef8 from projets/nintendogs-dachshund/src/auto/func_020ceef8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
extern void *data_02154c48;
void func_020c9748(s32 arg0) {
    void *temp_r2;
    void *temp_r3;

    temp_r3 = (*(void **) ((s8 *) (data_02154c48) + (0x141C)));
    temp_r2 = temp_r3 + 0x60;
    if ((*(s32 *) ((s8 *) (temp_r2) + (0x18))) == arg0) {
        return;
    }
    (*(s32 *) ((s8 *) (temp_r2) + (0x18))) = arg0;
    if ((s32) (*(s32 *) ((s8 *) (temp_r2) + (0x18))) > 0x05F5E0FF) {
        (*(s32 *) ((s8 *) (temp_r2) + (0x18))) = 0x05F5E0FF;
    }
    (*(u16 *) ((s8 *) (temp_r3) + (0x6AE))) = (u16) ((*(u16 *) ((s8 *) (temp_r3) + (0x6AE))) | 1);
}

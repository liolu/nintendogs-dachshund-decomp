/* compiler: 1.2/sp2p3  */
/* func_020235c0 from projets/nintendogs-chihuahua-friends/src/auto/func_020235c0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02023640();
extern u16 *data_02153708;
void func_020235c0(void *arg0, s32 arg1, s32 arg2) {
    if (*data_02153708 != 0x11) {
        return;
    }
    if ((*(u8 *) ((s8 *) ((*(void **) ((s8 *) (arg0) + (0x9E4)))) + (0x72))) != 2) {
        return;
    }
    func_02023640(arg0, arg1, arg2);
}

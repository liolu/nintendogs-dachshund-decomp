/* compiler: 1.2/sp2p3  */
/* func_02035e20 from projets/nintendogs-chihuahua-friends/src/auto/func_02035e20.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_02138378;
extern u16 *data_02153708;
void func_02035e20(void *arg0) {
    if (*data_02153708 == 0xC) {
        return;
    }
    (*(s16 *) ((s8 *) (arg0) + (0x14A))) = (s16) (*(s16 *) ((s8 *) (arg0) + (0x148)));
    (*(s16 *) ((s8 *) (arg0) + (0x14E))) = (s16) (*(s16 *) ((s8 *) (arg0) + (0x14C)));
    (*(s16 *) ((s8 *) (arg0) + (0x148))) = (s16) (*(s16 *) ((s8 *) (arg0) + (0x146)));
    if (*data_02153708 == 3) {
        (*(s16 *) ((s8 *) (arg0) + (0x14C))) = 0x14;
    } else {
        (*(s16 *) ((s8 *) (arg0) + (0x14C))) =
            (s16) ((s16 *) &data_02138378)[((*(u8 *) ((s8 *) ((*(void **) ((s8 *) (arg0) + (0x9E4)))) + (0x12))) - 1)];
    }
    (*(s16 *) ((s8 *) (arg0) + (0x146))) = -1;
}

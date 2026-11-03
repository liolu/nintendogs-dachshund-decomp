/* compiler: 1.2/sp2p3  */
/* func_020a5d54 from projets/nintendogs-dachshund/src/auto/func_020a5d54.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02112904(M2C_UNK);
extern void *data_0215607c;
s32 func_021060cc(void) {
    s16 temp_r0;

    if (data_0215607c != ((void *) 0)) {
        temp_r0 = (*(s16 *) ((s8 *) (data_0215607c) + (0x84)));
        switch (temp_r0) {
            case 1:
                return (s32) (*(s16 *) ((s8 *) (data_0215607c) + (0xC6)));
            case 8:
                return func_02112904(-1);
            default:
                return -1;
        }
    } else {
        return -1;
    }
}

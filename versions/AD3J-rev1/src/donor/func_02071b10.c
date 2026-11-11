/* compiler: 1.2/sp2p3  */
/* func_02071b10 from projets/nintendogs-chihuahua-friends/src/auto/func_02071b10.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_0207d680(void *, M2C_UNK);
extern M2C_UNK func_0207d698(void *, void *);
extern M2C_UNK data_0214f37c;
s32 func_02071b10(s32 arg0, void *arg1) {
    void *temp_r0;
    void *temp_r5;

    temp_r5 = (M2C_UNK *) ((s8 *) &data_0214f37c + (arg0 << 5));
    temp_r0 = func_0207d680(temp_r5 + 0xC, 0);
    if (temp_r0 == ((void *) 0)) {
        return 0;
    }
    func_0207d698(temp_r5 + 0xC, temp_r0);
    (*(void **) ((s8 *) (temp_r0) + (0xC))) = arg1;
    (*(void **) ((s8 *) (arg1) + (8)))      = temp_r0;
    return (*(s32 *) ((s8 *) (temp_r0) + (8)));
}

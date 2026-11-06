/* compiler: 1.2/sp2p3  */
/* func_020bc100 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020bc100.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK func_020bc1c8(M2C_UNK);
extern M2C_UNK func_020bcea4(s32);
extern M2C_UNK func_020bddb8(s32, M2C_UNK);
extern void *data_02153740;
void func_020bc100(s32 arg0) {
    s32 temp_r0;

    func_020bc1c8(0xC);
    func_020bddb8(arg0 + 0x234, 0);
    func_020bddb8(arg0 + 0x254, 0);
    func_020bddb8(arg0 + 0x274, 0);
    func_020bddb8(arg0 + 0x294, 0);
    func_020bddb8(arg0 + 0x2B4, 0);
    func_020bddb8(arg0 + 0x2D4, 0);
    temp_r0 = (*(s32 *) ((s8 *) (data_02153740) + (0xA8)));
    switch (temp_r0) {
        case 0:
            func_020bcea4(arg0);
            return;
        case 4:
            (*(s32 *) ((s8 *) (data_02153740) + (0x3CA4))) = 0;
            func_020b8b0c(2, 0x11, 1);
            return;
        default:
            func_020b8b0c(2, 0x11, 0);
            return;
    }
}

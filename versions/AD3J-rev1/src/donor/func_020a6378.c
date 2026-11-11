/* compiler: 1.2/sp2p3  */
/* func_020d89e8 from projets/nintendogs-dachshund/src/auto/func_020d89e8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020b8f84();
extern M2C_UNK func_020bddb8();
void func_020a6378(void *arg0) {
    s32 temp_r5;
    void *temp_r4;

    func_020bddb8(arg0 + 0x130, 1);
    func_020bddb8(arg0 + 0x150, 1);
    func_020bddb8(arg0 + 0x170, 1);
    func_020bddb8(arg0 + 0x190, 1);
    func_020bddb8(arg0 + 0x1B0, 1);
    temp_r4 = (*(void **) ((s8 *) (arg0) + (0x1D0)));
    if (temp_r4 == ((void *) 0)) {
        return;
    }
    temp_r5 = (*(s32 *) ((s8 *) (arg0) + (0x1D4)));
    func_020b8f84(2, (*(u16 *) ((s8 *) (temp_r4) + (0))), -0x20, -0x20, temp_r5, temp_r5, 0, 0x1F, 2);
    func_020b8f84(2, (*(u16 *) ((s8 *) (temp_r4) + (2))), -0x20, -0x20, temp_r5, temp_r5, 0, 0x1E, 2);
}

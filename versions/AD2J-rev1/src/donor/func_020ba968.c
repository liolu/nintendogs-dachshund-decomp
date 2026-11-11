/* compiler: 1.2/sp2p3  */
/* func_020ed8a0 from projets/nintendogs-dachshund/src/auto/func_020ed8a0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020b89e8(M2C_UNK, M2C_UNK *, M2C_UNK);
extern M2C_UNK func_020b8ab8(M2C_UNK, M2C_UNK *, M2C_UNK);
extern M2C_UNK func_020b8b0c(s32, u16, s32);
extern M2C_UNK data_0213fd3c;
extern M2C_UNK data_0213fd48;
void func_020ba968(void) {
    s32 var_r5;

    func_020b8ab8(0, &data_0213fd3c, 1);
    func_020b8ab8(0, &data_0213fd48, 1);
    func_020b89e8(0, &data_0213fd3c, 1);
    func_020b89e8(0, &data_0213fd48, 0);
    var_r5 = 0;
    do {
        func_020b8b0c(0, (u16) (var_r5 + 4), 0);
        var_r5 += 1;
    } while (var_r5 < 0xA);
    func_020b8b0c(0, 0xEU, 0);
}

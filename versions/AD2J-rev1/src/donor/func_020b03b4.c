/* compiler: 1.2/sp2p3  */
/* func_020e3098 from projets/nintendogs-dachshund/src/auto/func_020e3098.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020b03b4(s32 arg0) {
    s32 var_r6;

    var_r6 = 0;
    do {
        func_020b8b0c(2, (s32) (u16) (var_r6 + 5), 0);
        var_r6 += 1;
    } while (var_r6 < 2);
    switch (arg0) {
        case 1:
            func_020b8b0c(2, 5, 1);
            return;
        case 2:
            func_020b8b0c(2, 6, 1);
            return;
    }
}

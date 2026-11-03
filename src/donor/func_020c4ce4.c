/* compiler: 1.2/sp2p3  */
/* func_020ca2ec from projets/nintendogs-dachshund/src/auto/func_020ca2ec.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02078340(s32, s32);
extern void *func_0207d680(void **, void *);
extern void ***data_02154c34;
void func_020c4ce4(void) {
    s32 temp_r0;
    s32 temp_r1;
    u16 temp_r2;
    void **temp_r5;
    void *var_r4;

    temp_r5 = *data_02154c34;
    var_r4  = *temp_r5;
    if (var_r4 == ((void *) 0)) {
        return;
    }
    do {
        temp_r0 = (*(s32 *) ((s8 *) (var_r4) + (8)));
        if (temp_r0 != 0) {
            temp_r2 = (*(u16 *) ((s8 *) (var_r4) + (4)));
            if (!(temp_r2 & 1)) {
                temp_r1 = temp_r2 & 2;
                if (temp_r1 == 0) {
                    func_02078340(temp_r0, temp_r1);
                    (*(u16 *) ((s8 *) (var_r4) + (4))) = (u16) ((*(u16 *) ((s8 *) (var_r4) + (4))) | 2);
                }
            }
        }
        var_r4 = func_0207d680(temp_r5, var_r4);
    } while (var_r4 != ((void *) 0));
}

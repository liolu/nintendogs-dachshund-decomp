/* compiler: 1.2/sp2p3  */
/* func_021118ec from projets/nintendogs-dachshund/src/auto/func_021118ec.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
void func_0209026c(void *arg0) {
    s16 var_ip;
    void *var_r3;

    var_ip                              = 0;
    (*(s32 *) ((s8 *) (arg0) + (0)))    = 0x434D5045;
    (*(s16 *) ((s8 *) (arg0) + (4)))    = 0;
    (*(s16 *) ((s8 *) (arg0) + (6)))    = 0;
    (*(s16 *) ((s8 *) (arg0) + (8)))    = 0;
    (*(s16 *) ((s8 *) (arg0) + (0xA)))  = 0;
    (*(s16 *) ((s8 *) (arg0) + (0xC)))  = 0;
    (*(s16 *) ((s8 *) (arg0) + (0xE)))  = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x10))) = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x12))) = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x14))) = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x16))) = 0;
    var_r3                              = arg0 + 0x18;
    do {
        (*(s16 *) ((s8 *) (var_r3) + (0))) = 0;
        (*(s16 *) ((s8 *) (var_r3) + (2))) = -1;
        (*(s16 *) ((s8 *) (var_r3) + (4))) = 0;
        (*(s16 *) ((s8 *) (var_r3) + (6))) = 0;
        var_ip += 1;
        (*(s16 *) ((s8 *) (var_r3) + (8))) = 0;
        var_r3 += 0xA;
    } while ((s32) var_ip < 4);
}

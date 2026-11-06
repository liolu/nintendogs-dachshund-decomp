/* compiler: 1.2/sp2p3  */
/* func_020cffa8 from projets/nintendogs-dachshund/src/auto/func_020cffa8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02080f5c(void);
void func_020ca750(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r5;

    var_r5  = arg1;
    temp_r0 = func_02080f5c();
    if (var_r5 == -1) {
        var_r5 = (s32) (s16) ((u16) ((u32) ((u16) ((temp_r0 * 0x10DCD) + 1) * 0x14) >> 0x10) + 0x75);
    }
    (*(s16 *) ((s8 *) (arg0) + (0x70))) = (s16) var_r5;
}

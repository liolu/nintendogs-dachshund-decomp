/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020aadac from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020aadac.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153720;
void func_02092c68(u8 *param_1, s32 param_2) {
    s32 i;
    s16 v;
    if (*(s16 *) (data_02153720 + 134) > 0) {
        if (*(s16 *) (param_1 + param_2 * 2 + 198) != -1) {
            return;
        }
        i = 0;
        do {
            v = *(s16 *) (param_1 + i * 2 + 198);
            if (v != -1) {
                *(s16 *) (param_1 + i * 2 + 198) = v + 1;
            }
            i = (s16) (i + 1);
        } while (i < 3);
        *(s16 *) (param_1 + 204)                           = *(s16 *) (param_1 + 204) + 1;
        *(s16 *) ((u32) param_1 + (u32) param_2 * 2 + 198) = 0;
        return;
    }
    if (*(s16 *) (param_1 + param_2 * 2 + 198) == -1) {
        *(s16 *) (param_1 + 204)               = *(s16 *) (param_1 + 204) + 1;
        *(s16 *) (param_1 + param_2 * 2 + 198) = *(s16 *) (param_1 + 204);
    }
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02088618 from projets/nintendogs-chihuahua-friends/src/donor/func_02088618.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern void func_02069498(s16 *a, s16 *b, s16 *c);
extern void func_0206919c(s16 *a, s16 *b);
void func_02088618(s32 *param_1, s32 *param_2, u8 *param_3) {
    s16 aLocal[3];

    func_02069498((s16 *) (param_3 + 0x60), (s16 *) (param_3 + 0x66), aLocal);
    func_0206919c(aLocal, aLocal);
    param_1[0] = ((s32) (((s64) (param_2[2]) * (aLocal[0]) + 0x800) >> 12)) +
                 (((s32) (((s64) (param_2[0]) * (*(s16 *) (param_3 + 0x60)) + 0x800) >> 12)) +
                  ((s32) (((s64) (param_2[1]) * (*(s16 *) (param_3 + 0x66)) + 0x800) >> 12)));
    param_1[1] = ((s32) (((s64) (param_2[2]) * (aLocal[1]) + 0x800) >> 12)) +
                 (((s32) (((s64) (param_2[0]) * (*(s16 *) (param_3 + 0x62)) + 0x800) >> 12)) +
                  ((s32) (((s64) (param_2[1]) * (*(s16 *) (param_3 + 0x68)) + 0x800) >> 12)));
    param_1[2] = ((s32) (((s64) (param_2[2]) * (aLocal[2]) + 0x800) >> 12)) +
                 (((s32) (((s64) (param_2[0]) * (*(s16 *) (param_3 + 0x64)) + 0x800) >> 12)) +
                  ((s32) (((s64) (param_2[1]) * (*(s16 *) (param_3 + 0x6a)) + 0x800) >> 12)));
}

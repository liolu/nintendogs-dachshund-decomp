/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02084f90 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02084f90.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern u16 data_0213b920[];
extern s32 func_0206919c(s16 *a, s16 *b);
extern s32 func_020695a0(s16 *a, s16 *b);
void func_02088778(u8 *param_1) {
    s16 local_20[3];
    s16 local_1a[3];
    u32 uVar1;
    s32 r;

    local_20[0] = (s16) data_0213b920[0];
    local_20[1] = (s16) data_0213b920[1];
    local_20[2] = (s16) data_0213b920[2];
    uVar1       = ((***(u32 ***) (param_1 + 0x18)) << 24) >> 30;
    if (uVar1 == 0) {
        goto C0;
    }
    if (uVar1 == 1) {
        goto C1;
    }
    if (uVar1 != 2) {
        goto D;
    }
    local_1a[0] = 0x1000;
    local_1a[1] = 0;
    local_1a[2] = 0;
    goto END;
C1:
    local_1a[0] = 0;
    local_1a[1] = 0x1000;
    local_1a[2] = 0;
    goto END;
C0:
    local_1a[0] = 0;
    local_1a[1] = 0;
    local_1a[2] = 0x1000;
    goto END;
D:
    func_0206919c((s16 *) (param_1 + 0x3c), local_1a);
END:
    r = func_020695a0(local_20, local_1a);
    if (r == 0x1000 || r == (s32) 0xfffff000) {
        local_20[0] = 0x1000;
        local_20[1] = 0;
        local_20[2] = 0;
    }
    *(s16 *) (param_1 + 0x60) = (s16) (((u32) ((((s64) (s32) (local_1a[1])) * (s32) (local_20[2]) + 0x800) >> 12)) -
                                       ((u32) ((((s64) (s32) (local_1a[2])) * (s32) (local_20[1]) + 0x800) >> 12)));
    *(s16 *) (param_1 + 0x62) = (s16) (((u32) ((((s64) (s32) (local_1a[2])) * (s32) (local_20[0]) + 0x800) >> 12)) -
                                       ((u32) ((((s64) (s32) (local_1a[0])) * (s32) (local_20[2]) + 0x800) >> 12)));
    *(s16 *) (param_1 + 0x64) = (s16) (((u32) ((((s64) (s32) (local_1a[0])) * (s32) (local_20[1]) + 0x800) >> 12)) -
                                       ((u32) ((((s64) (s32) (local_1a[1])) * (s32) (local_20[0]) + 0x800) >> 12)));
    *(s16 *) (param_1 + 0x66) =
        (s16) (((u32) ((((s64) (s32) (local_1a[1])) * (s32) (*(s16 *) (param_1 + 0x64)) + 0x800) >> 12)) -
               ((u32) ((((s64) (s32) (local_1a[2])) * (s32) (*(s16 *) (param_1 + 0x62)) + 0x800) >> 12)));
    *(s16 *) (param_1 + 0x68) =
        (s16) (((u32) ((((s64) (s32) (local_1a[2])) * (s32) (*(s16 *) (param_1 + 0x60)) + 0x800) >> 12)) -
               ((u32) ((((s64) (s32) (local_1a[0])) * (s32) (*(s16 *) (param_1 + 0x64)) + 0x800) >> 12)));
    *(s16 *) (param_1 + 0x6a) =
        (s16) (((u32) ((((s64) (s32) (local_1a[0])) * (s32) (*(s16 *) (param_1 + 0x62)) + 0x800) >> 12)) -
               ((u32) ((((s64) (s32) (local_1a[1])) * (s32) (*(s16 *) (param_1 + 0x60)) + 0x800) >> 12)));
    func_0206919c((s16 *) (param_1 + 0x60), (s16 *) (param_1 + 0x60));
    func_0206919c((s16 *) (param_1 + 0x66), (s16 *) (param_1 + 0x66));
}

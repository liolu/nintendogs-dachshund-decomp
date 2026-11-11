/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020beec0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020beec0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed int s32;
typedef signed long long s64;
extern void func_02027608(void *p, s32 *a);
extern void func_02027140(void *p, s32 *a, s32 b);
extern s32 func_020280f8(void *p);
extern s32 func_02027410(void *p);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
void func_02108e40(u8 *param_1, void *param_2, s32 *param_3) {
    s32 buf[12];
    s32 aiStack_40[3];
    s32 loc[6];
    s32 iVar2;
    s32 iVar3;
    s32 x;
    s32 v;

    func_02027608(param_2, aiStack_40);
    func_02027140(param_2, buf, 12);
    loc[0] = buf[0];
    loc[1] = buf[1];
    loc[2] = buf[2];
    loc[3] = buf[3];
    loc[4] = buf[4];
    loc[5] = buf[5];
    iVar2  = func_020280f8(param_2);
    iVar3  = func_02027410(param_2);
    x      = ((s32) (((s64) (iVar3) * (iVar2) + 0x800) >> 12));
    x      = ((s32) (((s64) (x) * (0x800) + 0x800) >> 12));

    switch (*(s32 *) (param_1 + 0x12c)) {
        case 0:
            v = *(s32 *) (param_1 + 0x124);
            func_01ff832c((s32) ((((s64) 1 - v) * 0x800) >> 12), &loc[3], aiStack_40, param_3);
            func_01ff832c(((s32) (((s64) (x) * (-1024) + 0x800) >> 12)), loc, param_3, param_3);
            return;
        case 1:
            v = *(s32 *) (param_1 + 0x124);
            func_01ff832c(-(((s32) (((s64) (v) * (0x800) + 0x800) >> 12)) +
                            ((s32) (((s64) (*(s32 *) (param_1 + 0x128)) * (0x333) + 0x800) >> 12))),
                          &loc[3], aiStack_40, param_3);
            func_01ff832c(((s32) (((s64) (*(s32 *) (param_1 + 0x128)) * (0xccd) + 0x800) >> 12)), loc, param_3, param_3);
            return;
        case 2:
            v = *(s32 *) (param_1 + 0x124);
            func_01ff832c(-((s32) (((s64) (v) * (0x800) + 0x800) >> 12)), &loc[3], aiStack_40, param_3);
            func_01ff832c(*(s32 *) (param_1 + 0x128) - x, loc, param_3, param_3);
            return;
        case 3:
            func_01ff832c(-((s32) (((s64) (*(s32 *) (param_1 + 0x124)) * (0xb33) + 0x800) >> 12)), &loc[3], aiStack_40,
                          param_3);
            func_01ff832c(*(s32 *) (param_1 + 0x128), loc, param_3, param_3);
            return;
        case 4:
            v = *(s32 *) (param_1 + 0x128);
            func_01ff832c(((s32) (((s64) (v) * (-0x333) + 0x800) >> 12)), &loc[3], aiStack_40, param_3);
            func_01ff832c(*(s32 *) (param_1 + 0x128) - x, loc, param_3, param_3);
            return;
    }
}

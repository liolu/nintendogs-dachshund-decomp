/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ce7e4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020ce7e4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_0214affc[];
extern u8 data_02124fd8[];
extern void func_02069634(s32 *a, s32 *b, s32 *c);
extern void func_020692f0(s32 *a, s32 *b);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_021170e8(s32 *a, s32 *b, s32 c, u32 d, u32 e);
extern void func_02116f50(u32 *a, u32 *b, u32 *c, s32 *d, s32 *e);
void func_02117cc8(u16 *param_1, s32 param_2) {
    u16 uVar1;
    s32 local_34[3];
    s32 local_28[3];
    s32 local_1c[4];
    u8 *p2;

    p2 = (u8 *) param_2;
    if (((u16) ((*(u16 *) (data_0214affc + 2)) & 0x100)) != 0) {
        func_02069634((s32 *) (p2 + 0x3c), (s32 *) (p2 + 0x30), local_34);
        local_34[1] = 0;
        func_020692f0(local_34, local_34);
        local_28[0] = local_34[2];
        local_28[1] = 0;
        local_28[2] = -local_34[0];
        local_1c[0] = 0;
        local_1c[1] = 0x1000;
        local_1c[2] = 0;
        if (((u16) ((*(u16 *) (data_0214affc + 2)) & 0x40)) != 0) {
            func_01ff832c(0x400, local_34, (s32 *) (p2 + 0x3c), (s32 *) (p2 + 0x3c));
        }
        if (((u16) ((*(u16 *) (data_0214affc + 2)) & 0x80)) != 0) {
            func_01ff832c(-0x400, local_34, (s32 *) (p2 + 0x3c), (s32 *) (p2 + 0x3c));
        }
        if (((u16) ((*(u16 *) (data_0214affc + 2)) & 0x20)) != 0) {
            func_01ff832c(0x400, local_28, (s32 *) (p2 + 0x3c), (s32 *) (p2 + 0x3c));
        }
        if (((u16) ((*(u16 *) (data_0214affc + 2)) & 0x10)) != 0) {
            func_01ff832c(-0x400, local_28, (s32 *) (p2 + 0x3c), (s32 *) (p2 + 0x3c));
        }
        if (((u16) ((*(u16 *) (data_0214affc + 2)) & 0x400)) != 0) {
            func_01ff832c(0x400, local_1c, (s32 *) (p2 + 0x3c), (s32 *) (p2 + 0x3c));
        }
        if (((u16) ((*(u16 *) (data_0214affc + 2)) & 0x800)) != 0) {
            func_01ff832c(-0x400, local_1c, (s32 *) (p2 + 0x3c), (s32 *) (p2 + 0x3c));
        }
    } else {
        if (((u16) ((*(u16 *) (data_0214affc + 2)) & 0x20)) != 0) {
            param_1[1] = param_1[1] - 0x100;
        }
        if (((u16) ((*(u16 *) (data_0214affc + 2)) & 0x10)) != 0) {
            param_1[1] = param_1[1] + 0x100;
        }
        if (((u16) ((*(u16 *) (data_0214affc + 2)) & 0x80)) != 0) {
            *param_1 = *param_1 - 0x100;
        }
        if (((u16) ((*(u16 *) (data_0214affc + 2)) & 0x40)) != 0) {
            *param_1 = *param_1 + 0x100;
        }
        if (((u16) ((*(u16 *) (data_0214affc + 2)) & 0x400)) != 0) {
            *(s32 *) (param_1 + 2) = *(s32 *) (param_1 + 2) - 0x400;
            if (*(s32 *) (param_1 + 2) <= 0x1000) {
                *(s32 *) (param_1 + 2) = 0x1000;
            }
        }
        if (((u16) ((*(u16 *) (data_0214affc + 2)) & 0x800)) != 0) {
            *(s32 *) (param_1 + 2) = *(s32 *) (param_1 + 2) + 0x400;
        }
        uVar1 = *param_1;
        if (uVar1 <= 0x3f00) {
            goto L278;
        }
        if (uVar1 <= 0x8000) {
            *param_1 = 0x3f00;
            goto Ltail;
        }
    L278:
        if (uVar1 >= 0xc100) {
            goto Ltail;
        }
        if (uVar1 > 0x8000) {
            *param_1 = 0xc100;
        }
    Ltail:;
    }
    func_021170e8((s32 *) (p2 + 0x30), (s32 *) (p2 + 0x3c), *(s32 *) (param_1 + 2), (u32) *param_1, param_1[1]);
    func_02116f50((u32 *) (p2 + 0x60), (u32 *) (p2 + 0x54), (u32 *) (p2 + 0x48), (s32 *) (p2 + 0x30), (s32 *) (p2 + 0x3c));
    *(s16 *) (p2 + 0x6c) = *(s16 *) (data_02124fd8 + 0x54);
    *(s16 *) (p2 + 0x6e) = *(s16 *) (data_02124fd8 + 0x56);
}

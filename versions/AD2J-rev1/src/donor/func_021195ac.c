/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d0118 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d0118.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    s32 v[3];
} V3;
extern s32 data_021490a8;
extern u8 data_021560c4[];
extern u8 data_0214affc[];
extern s64 data_021245cc;
extern u8 data_021490ac[];
extern void func_020692f0(void *a, void *b);
extern void func_01ff832c(s32 a, void *b, void *c, void *d);
extern s32 func_020069bc(void *a, void *b);
extern void func_02119994(void *a, void *b);
extern void func_02119bf0(void *a, void *b);
void func_021195ac(s32 unused, u8 *param_2) {
    V3 local_38;
    s32 local_2c[3];
    s32 local_20[3];
    s32 *piVar3;
    s32 unaff_r5;
    s32 unaff_r4;
    u16 uVar1;
    s64 lVar2;
    s32 iVar5;

    piVar3        = (s32 *) data_021560c4;
    local_38      = *(V3 *) (param_2 + 0x48);
    local_38.v[1] = 0;
    func_020692f0(&local_38, &local_38);
    local_2c[0] = local_38.v[2];
    local_2c[1] = 0;
    local_2c[2] = -local_38.v[0];
    local_20[0] = 0;
    local_20[1] = 0x1000;
    local_20[2] = 0;
    if (data_021490a8 != 0) {
        if (data_021490a8 == 1) {
            unaff_r4 = 0x100;
            unaff_r5 = 0x400;
        }
    } else {
        unaff_r4 = 0x10;
        unaff_r5 = 0x66;
    }
    uVar1 = (*(u16 *) (data_0214affc + 2));
    if ((u16) (uVar1 & 0x100) != 0) {
        if ((u16) (uVar1 & 0x40) != 0) {
            func_01ff832c(0x400, &local_38, piVar3, piVar3);
        }
        if ((u16) ((*(u16 *) (data_0214affc + 2)) & 0x80) != 0) {
            func_01ff832c(-0x400, &local_38, piVar3, piVar3);
        }
        if ((u16) ((*(u16 *) (data_0214affc + 2)) & 0x20) != 0) {
            func_01ff832c(0x400, local_2c, piVar3, piVar3);
        }
        if ((u16) ((*(u16 *) (data_0214affc + 2)) & 0x10) != 0) {
            func_01ff832c(-0x400, local_2c, piVar3, piVar3);
        }
        if ((u16) ((*(u16 *) (data_0214affc + 2)) & 0x400) != 0) {
            func_01ff832c(0x400, local_20, piVar3, piVar3);
        }
        if ((u16) ((*(u16 *) (data_0214affc + 2)) & 0x800) != 0) {
            func_01ff832c(-0x400, local_20, piVar3, piVar3);
        }
    } else {
        if ((u16) (uVar1 & 0x20) != 0) {
            *(u16 *) ((u8 *) piVar3 + 0x1a) = *(u16 *) ((u8 *) piVar3 + 0x1a) - unaff_r4;
        }
        if ((u16) ((*(u16 *) (data_0214affc + 2)) & 0x10) != 0) {
            *(u16 *) ((u8 *) piVar3 + 0x1a) = *(u16 *) ((u8 *) piVar3 + 0x1a) + unaff_r4;
        }
        if ((u16) ((*(u16 *) (data_0214affc + 2)) & 0x80) != 0) {
            *(u16 *) ((u8 *) piVar3 + 0x18) = *(u16 *) ((u8 *) piVar3 + 0x18) - unaff_r4;
        }
        if ((u16) ((*(u16 *) (data_0214affc + 2)) & 0x40) != 0) {
            *(u16 *) ((u8 *) piVar3 + 0x18) = *(u16 *) ((u8 *) piVar3 + 0x18) + unaff_r4;
        }
        if ((u16) ((*(u16 *) (data_0214affc + 2)) & 0x400) != 0) {
            piVar3[7] = piVar3[7] - unaff_r5;
        }
        if ((u16) ((*(u16 *) (data_0214affc + 2)) & 0x800) != 0) {
            piVar3[7] = piVar3[7] + unaff_r5;
        }
        if (piVar3[7] <= 0x1000) {
            piVar3[7] = 0x1000;
        }
        uVar1 = *(u16 *) ((u8 *) piVar3 + 0x18);
        if (uVar1 <= 0x3f00) {
            goto CL294;
        }
        if (uVar1 <= 0x8000) {
            *(u16 *) ((u8 *) piVar3 + 0x18) = 0x3f00;
            goto CLEND;
        }
    CL294:
        if (uVar1 >= 0xc100) {
            goto CLEND;
        }
        if (uVar1 > 0x8000) {
            *(u16 *) ((u8 *) piVar3 + 0x18) = 0xc100;
        }
    CLEND:;
    }
    lVar2 = (s64) piVar3[3] * piVar3[3] + (s64) piVar3[4] * piVar3[4] + (s64) piVar3[5] * piVar3[5];
    if (lVar2 < data_021245cc) {
        iVar5 = 0;
    } else {
        iVar5 = func_020069bc(piVar3 + 3, piVar3 + 3);
    }
    if (iVar5 == 0) {
        piVar3[3] = 0;
        piVar3[4] = 0x1000;
        piVar3[5] = 0;
    }
    func_02119994(piVar3, data_021490ac);
    func_02119bf0(data_021490ac, param_2);
}

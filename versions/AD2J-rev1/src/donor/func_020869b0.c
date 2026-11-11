/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020831c8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020831c8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef volatile u32 vu32;
typedef struct {
    s32 x, y, z;
} VecFx32;
typedef struct {
    s32 m[3][3];
} MtxFx33;
typedef struct {
    s32 m[4][3];
} MtxFx43;
extern void func_02069504(VecFx32 *, VecFx32 *, VecFx32 *);
extern void func_020692f0(VecFx32 *, VecFx32 *);
extern void func_0206e0b8(MtxFx43 *, MtxFx33 *);
extern void func_02067c44(VecFx32 *, MtxFx33 *, VecFx32 *);
extern void func_02068420(VecFx32 *, MtxFx43 *, VecFx32 *);
extern void func_0206b8a4(MtxFx43 *);
extern void func_0208755c(u8, u8);
typedef struct {
    u16 a : 5;
    u16 b : 5;
    u16 c : 6;
} Attr;
typedef struct {
    u32 pad : 24;
    u32 f24 : 2;
    u32 f26 : 2;
    u32 rest : 4;
} Bits;
void func_020869b0(u8 *param_1, u8 *param_2) {
    VecFx32 vel;
    VecFx32 pos;
    VecFx32 dir;
    VecFx32 look;
    MtxFx33 rot;
    MtxFx43 mtx;
    s16 sVar1;
    s64 lVar2;
    u32 uVar8, uVar7, uSel;
    s32 iTop, iVar6, iVar9;
    MtxFx43 *piVar8;
    s32 uVar5;

    sVar1 =
        *(s16 *) ((*(u8 **) ((u8 *) ((*(u8 **) ((u8 *) ((*(u8 **) ((u8 *) (param_1) + (0x34)))) + (0x18)))) + (0))) + 0x30);
    iTop                 = (s32) (((Attr *) (param_2 + 0x40))->a * (((Attr *) (param_2 + 0x40))->b + 1)) >> 5;
    piVar8               = (MtxFx43 *) (*(u8 **) ((u8 *) (param_1) + (0x38)));
    *(vu32 *) 0x040004a4 = ((Attr *) (param_2 + 0x40))->c << 24 | (*(u32 *) (param_1 + 0x30) | 0xc0) | iTop << 16;
    (void) *(vu32 *) 0x040004a4;
    if (iTop == 0) {
        return;
    }
    uVar7 = *(u32 *) (param_2 + 0x30);
    lVar2 = (s64) (s32) uVar7 * (s64) sVar1 + 0x800;
    uVar8 = (u32) (lVar2 >> 12);
    uSel =
        ((*(u32 *) ((*(u8 **) ((u8 *) ((*(u8 **) ((u8 *) ((*(u8 **) ((u8 *) (param_1) + (0x34)))) + (0x18)))) + (0))) + 0x44))
         << 1) >>
        29;
    if (uSel == 0) {
        goto c0;
    }
    if (uSel == 1) {
        goto c1;
    }
    if (uSel != 2) {
        goto end;
    }
    goto c2;
c0:
    iVar9 = (s32) * (s16 *) (param_2 + 0x34);
    lVar2 = (s64) (s32) uVar8 * (s64) iVar9 + 0x800;
    uVar8 = (u32) (lVar2 >> 12);
    lVar2 = (s64) (s32) uVar7 * (s64) iVar9 + 0x800;
    uVar7 = (u32) (lVar2 >> 12);
    goto end;
c1:
    lVar2 = (s64) (s32) uVar8 * (s64) * (s16 *) (param_2 + 0x34) + 0x800;
    uVar8 = (u32) (lVar2 >> 12);
    goto end;
c2:
    lVar2 = (s64) (s32) uVar7 * (s64) * (s16 *) (param_2 + 0x34) + 0x800;
    uVar7 = (u32) (lVar2 >> 12);
end:
    pos.x  = *(s32 *) (param_2 + 0x14) + *(s32 *) (param_2 + 8);
    pos.y  = *(s32 *) (param_2 + 0x18) + *(s32 *) (param_2 + 0xc);
    pos.z  = *(s32 *) (param_2 + 0x1c) + *(s32 *) (param_2 + 0x10);
    dir    = *(VecFx32 *) (param_2 + 0x20);
    look.x = piVar8->m[0][2];
    look.y = piVar8->m[1][2];
    look.z = piVar8->m[2][2];
    func_02069504(&dir, &look, &dir);
    if (dir.x == 0 && dir.y == 0 && dir.z == 0) {
        return;
    }
    func_020692f0(&dir, &dir);
    func_0206e0b8(piVar8, &rot);
    func_02067c44(&dir, &rot, &dir);
    func_02068420(&pos, piVar8, &pos);
    vel = *(VecFx32 *) (param_2 + 0x20);
    func_020692f0(&vel, &vel);
    iVar6 = ((s32) (((s64) (vel.z) * (-piVar8->m[2][2]) + 0x800) >> 12)) +
            (((s32) (((s64) (vel.x) * (-piVar8->m[0][2]) + 0x800) >> 12)) +
             ((s32) (((s64) (vel.y) * (-piVar8->m[1][2]) + 0x800) >> 12)));
    if (iVar6 < 0) {
        iVar6 = -iVar6;
    }
    uVar5 =
        ((s32) (((s64) (0x1000 - iVar6) *
                     ((s32) ((u32) (*(u32 *) ((*(u8 **) ((u8 *) ((*(u8 **) ((u8 *) ((*(u8 **) ((u8 *) (param_1) + (0x34)))) +
                                                                            (0x18)))) +
                                                         (0))) +
                                              0x44)
                                    << 8) >>
                             16)) +
                 0x800) >>
                12));
    uVar5                = ((s32) (((s64) ((s32) uVar7) * (uVar5 + 0x1000) + 0x800) >> 12));
    mtx.m[0][0]          = ((s32) (((s64) (dir.x) * ((s32) uVar8) + 0x800) >> 12));
    mtx.m[1][0]          = ((s32) (((s64) (-dir.y) * (uVar5) + 0x800) >> 12));
    mtx.m[2][0]          = 0;
    mtx.m[3][0]          = pos.x;
    mtx.m[0][1]          = ((s32) (((s64) (dir.y) * ((s32) uVar8) + 0x800) >> 12));
    mtx.m[1][1]          = ((s32) (((s64) (dir.x) * (uVar5) + 0x800) >> 12));
    mtx.m[2][1]          = 0;
    mtx.m[3][1]          = pos.y;
    mtx.m[0][2]          = 0;
    mtx.m[1][2]          = 0;
    mtx.m[2][2]          = 0x1000;
    mtx.m[3][2]          = pos.z;
    *(vu32 *) 0x04000454 = 0;
    func_0206b8a4(&mtx);
    *(vu32 *) 0x04000480 = (u16) (((s32) ((*(u16 *) (param_2 + 0x3a) & 0x1f) *
                                          ((uSel = *(u16 *) ((*(u8 **) ((u8 *) (param_1) + (0x34))) + 0x5a)) & 0x1f)) >>
                                   5) |
                                  (((s32) ((*(u16 *) (param_2 + 0x3a) & 0x3e0) * (uSel & 0x3e0)) >> 15) << 5) |
                                  (((s32) ((*(u16 *) (param_2 + 0x3a) & 0x7c00) * (uSel & 0x7c00)) >> 25) << 10));
    func_0208755c(
        (u8) ((Bits *) ((*(u8 **) ((u8 *) ((*(u8 **) ((u8 *) ((*(u8 **) ((u8 *) (param_1) + (0x34)))) + (0x18)))) + (0))) +
                        0x44))
            ->f24,
        (u8) ((Bits *) ((*(u8 **) ((u8 *) ((*(u8 **) ((u8 *) ((*(u8 **) ((u8 *) (param_1) + (0x34)))) + (0x18)))) + (0))) +
                        0x44))
            ->f26);
}

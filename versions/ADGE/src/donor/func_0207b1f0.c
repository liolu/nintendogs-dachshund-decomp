/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02070a5c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g3d/g3d_maya.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
typedef long fx32;
typedef struct {
    fx32 x;
    fx32 y;
    fx32 z;
} UnkVecFx32;
typedef struct {
    fx32 m[3][3];
} UnkMtxFx33;
typedef struct {
    u32 flag;
    UnkVecFx32 scale;
    UnkVecFx32 scaleEx0;
    UnkVecFx32 scaleEx1;
    UnkMtxFx33 rot;
    UnkVecFx32 trans;
} UnkJntAnmResult;
extern void func_0207782c(u32 op, const void *args, u32 num);
void func_0207b1f0(const UnkJntAnmResult *result) {
    BOOL trFlag = 0;

    if (!(result->flag & 4)) {
        trFlag = 1;
    }

    if ((result->flag & 0x20) && !(result->flag & 8)) {
        if (trFlag) {
            func_0207782c(0x1c, &result->trans, 3);
            trFlag = 0;
        }
        func_0207782c(0x1b, &result->scaleEx0, 3);
    }

    if (!(result->flag & 2)) {
        if (trFlag) {
            func_0207782c(0x19, &result->rot, 12);
        } else {
            func_0207782c(0x1a, &result->rot, 9);
        }
    } else {
        if (trFlag) {
            func_0207782c(0x1c, &result->trans, 3);
        }
    }

    if (!(result->flag & 1)) {
        func_0207782c(0x1b, &result->scale, 3);
    }
}

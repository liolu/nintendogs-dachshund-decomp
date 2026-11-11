/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d258c from projets/nintendogs-shiba-friends/src/donor/func_020d258c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern u32 data_0214a798;
extern u32 data_02156080;
extern void func_02069634(void *a, void *b, void *c);
extern void func_02069668(void *a, void *b, void *c);
typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3;
void func_020d2594(u8 *param_1, s32 param_2) {
    Vec3 acc = {0, 0, 0};
    Vec3 diff;
    u32 uVar2;
    s32 iVar8;
    s32 uVar7;
    s32 iVar6;
    s32 iVar4;
    s32 iVar5;
    s64 lVar1;

    uVar2 = 0x166c;
    uVar7 = *(s16 *) (param_1 + 0x88);
    if ((uVar7 & 3) == (*(u32 *) (*(u32 *) &data_0214a798 + 0x28) & 3)) {
        iVar8 = (s16) (uVar7 + 1);
        uVar7 = 7;
        iVar6 = 1;
    } else {
        iVar8 = 6;
        iVar6 = -1;
    }
    for (; iVar8 <= uVar7; iVar8 = (s16) (iVar8 + iVar6)) {
        if (iVar8 < 0 || *(s16 *) (*(u32 *) &data_02156080 + 0x20) <= iVar8) {
            iVar4 = 0;
        } else {
            iVar4 = *(s32 *) (*(u32 *) &data_02156080 + iVar8 * 4 + 4);
        }
        if (iVar4 != 0) {
            lVar1 = (s64) uVar2 * (s64) * (s32 *) (iVar4 + 0x24);
            iVar5 = param_2 + (s32) ((lVar1 + 0x800) >> 12);
            func_02069634(param_1 + 0xbc, (void *) (iVar4 + 0xbc), &diff);
            if (diff.x < iVar5 && diff.x > -iVar5 && diff.y < iVar5 && diff.y > -iVar5 && diff.z < iVar5 && diff.z > -iVar5) {
                if (diff.x > 0) {
                    acc.x = acc.x + (iVar5 - diff.x);
                } else {
                    acc.x = acc.x + (diff.x - iVar5);
                }
                if (diff.y > 0) {
                    acc.y = acc.y + (iVar5 - diff.y) * 2;
                } else {
                    acc.y = acc.y + (diff.y - iVar5) * 2;
                }
                if (diff.z > 0) {
                    acc.z = acc.z + (iVar5 - diff.z);
                } else {
                    acc.z = acc.z + (diff.z - iVar5);
                }
            }
        }
    }
    if (acc.x > 164) {
        acc.x = 164;
    }
    if (acc.y > 164) {
        acc.y = 164;
    }
    if (acc.z > 164) {
        acc.z = 164;
    }
    if (acc.x < -164) {
        acc.x = -164;
    }
    if (acc.y < -164) {
        acc.y = -164;
    }
    if (acc.z < -164) {
        acc.z = -164;
    }
    func_02069668(param_1 + 0xbc, &acc, param_1 + 0xbc);
    acc.x = acc.x >> 3;
    acc.y = acc.y >> 3;
    acc.z = acc.z >> 3;
    func_02069668(param_1 + 0xb0, &acc, param_1 + 0xb0);
}

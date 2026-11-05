/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210f1f8 from projets/nintendogs-shiba-friends/src/donor/func_0210f1f8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_01ffda04(s32 a);
extern s32 func_02034ab8(s32 a);
extern s32 func_02027500(s32 a);
extern void func_020275b8(s32 a, s32 *b);
extern s32 func_021120d8(s32 *a, s32 b, s32 *c, u32 d);
extern void func_02027518(s32 a, s32 *b);
extern void func_02069668(s32 *a, s32 *b, s32 *c);
extern s32 func_02069430(s32 *a);
extern void func_02027044(s32 a, u32 b);
extern void func_02027490(s32 a, s32 *b);
extern u32 data_02148dc0;
typedef struct {
    s32 w[3];
} T3;
void func_0210f200(u8 *p1) {
    s32 iv10;
    s32 iv9;
    s32 iv4;
    s32 *piVar1;
    s32 *puVar7;
    s32 *puVar8;
    s32 iv5;
    s32 *piVar3;
    s32 k1    = 1;
    s32 k2048 = 0x800;
    s32 k0    = 0;
    s32 k33   = 33;
    s32 aiStack_48[3];
    s32 local_3c[3];
    s32 local_30[3];
    s32 t;
    u32 uVar6;

    piVar3 = *(s32 **) (p1 + 0x214);
    iv10   = 0;
    do {
        iv4 = func_01ffda04(iv10);
        if (iv10 != *(s16 *) (p1 + 0x98) && iv4 != 0 && func_02034ab8(iv4)) {
            puVar7 = (s32 *) ((u8 *) piVar3 + 132) + 3;
            puVar8 = puVar7;
            iv9    = k1;
            piVar1 = piVar3 + 3;
            do {
                iv5 = func_02027500(iv4);
                func_020275b8(iv4, aiStack_48);
                *(T3 *) local_3c = *(T3 *) piVar1;
                iv5              = func_021120d8(aiStack_48, iv5, local_3c, k2048);
                if (iv5 != 0) {
                    uVar6        = puVar7[0];
                    piVar1[0x21] = (s32) ((((s64) (s32) uVar6 * 0x800) + 0x800) >> 12);
                    uVar6        = puVar7[1];
                    piVar1[0x22] = (s32) ((((s64) (s32) uVar6 * 0x800) + 0x800) >> 12);
                    uVar6        = puVar7[2];
                    piVar1[0x23] = (s32) ((((s64) (s32) uVar6 * 0x800) + 0x800) >> 12);
                    func_02027518(iv4, local_30);
                    local_30[1] = k0;
                    local_30[0] = local_30[0] >> 2;
                    local_30[2] = local_30[2] >> 2;
                    func_02069668(puVar8, local_30, local_30);
                    t = func_02069430(local_30);
                    if (t > (s32) data_02148dc0) {
                        func_02027044(iv4, k33);
                        func_02027490(iv4, local_30);
                        {
                            s32 *pe;
                            pe       = (s32 *) ((u8 *) piVar3 + 0x118);
                            pe[iv10] = k1;
                        }
                    }
                }
                piVar1 = piVar1 + 3;
                puVar7 = puVar7 + 3;
                puVar8 = puVar8 + 3;
                iv9    = (s16) (iv9 + 1);
            } while (iv9 <= 9);
        }
        iv10 = (s16) (iv10 + 1);
    } while (iv10 < 3);
}

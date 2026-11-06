/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020fa230 from projets/nintendogs-chihuahua-friends/src/donor/func_020fa230.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u16 vu16;
typedef struct {
    vu16 z;
    u16 pad;
} SZ2;
extern u32 data_0215598c;
extern u32 data_021550e0;
extern u32 data_021550e4;
extern u32 data_021559c8;
extern u32 data_02155084;
extern u32 data_02155060;
extern u32 data_021559a0;
extern u32 data_021552c4;
extern u32 data_021559b4;
extern s32 func_02080414(void *a, void *b, u32 c);
extern s32 func_020f4fdc(u32 a, u32 b, void *c, u32 d, s32 e);
extern void func_0206dfbc(u32 a, u32 b, u32 c);
extern void func_020804c0(void *a, u32 b, u32 c);
extern s32 func_020f605c(void *a, u32 b, u32 c);
extern void func_020f707c(void);
void func_020fa230(void) {
    u32 uVar10;
    s32 iVar4;
    u32 uVar9;
    s32 hi_c;
    s32 lo_c;

    s32 flag;
    u32 local_30;
    SZ2 zz;
    u32 local_28;

    {
        s32 one       = 1;
        flag          = one;
        data_0215598c = one;
    }
    lo_c = -0x8000;
    hi_c = 0x7fff;

    local_30 = 0xc00;
    do {
        u32 uVar8;

        func_02080414((void *) &data_021559c8, &local_28, flag);
        uVar10 = local_28 & 0xffffff;
        uVar9  = local_28 & 0xff000000;
        iVar4  = func_020f4fdc(data_02155060, data_021550e4, (void *) &data_021550e0, 0, *(s16 *) &data_02155084);
        if (uVar9 == 0x10000000) {
            if ((u32) (iVar4 + 3) <= 1) {
                zz.z = 0;
                func_0206dfbc(zz.z, data_021550e4, data_021550e0 << 1);
            } else if (iVar4 == -4) {
                u32 uVar7 = 0;
                if (uVar7 < (u32) data_021550e0) {
                    do {
                        s32 iVar5 = ((s16 *) data_021550e4)[uVar7] * 15;
                        if (iVar5 > hi_c) {
                            iVar5 = hi_c;
                        } else if (iVar5 < -0x8000) {
                            iVar5 = lo_c;
                        }
                        ((s16 *) data_021550e4)[uVar7] = (s16) iVar5;
                        uVar7                          = uVar7 + 1;
                    } while (uVar7 < (u32) data_021550e0);
                }
            }
            func_020804c0((void *) &data_021559a0, 0x504c4159, 0);
            uVar8 = local_30;
        } else {
            uVar8 = 0;
        }
        if (iVar4 == 0) {
            iVar4 = func_020f605c((void *) &data_021552c4, uVar10, uVar8);
        }
        if (iVar4 != -1 && iVar4 != 0) {
            u32 uVar7 = 0;
            u8 *q     = (u8 *) &data_021552c4;
            do {
                *(u32 *) (q + 0x80) = 0;
                *(s32 *) (q + 0x84) = iVar4;
                q                   = q + 136;
                uVar7               = uVar7 + 1;
            } while (uVar7 < 3);
        }
        func_020f707c();
        func_020804c0((void *) &data_021559b4, uVar9 + 0x46494e, 0);
    } while (1);
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020fadd4 from projets/nintendogs-chihuahua-friends/src/donor/func_020fadd4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_0213d4d0[];
extern void func_020b53f4(void);
extern s32 func_020caca0(void);
extern u8 *func_020cac44(s32 a);
typedef struct {
    u32 w[8];
} T8;
s32 func_020fadd4(u32 *param_1, s32 param_2, s32 param_3) {
    s32 iVar14;
    s32 iVar13;
    u32 *pe;
    u8 *q;
    s16 k;
    s32 iVar6;
    s32 m1;
    u32 ff;
    u32 *local_38;
    s32 local_30;
    s32 local_2c;
    s16 sVar4;

    m1       = -1;
    ff       = 0xffff;
    local_30 = 0;
    local_2c = 0;
    local_38 = param_1;
    pe       = data_0213d4d0;
    func_020b53f4();
    if (*(s16 *) ((u8 *) data_0213d4d0 + 4) == m1) {
        goto done;
    }
    do {
        iVar14 = local_2c;
        if (param_3 == 4) {
            iVar13 = local_2c;
            if (func_020caca0() > 0) {
                do {
                    q     = (u8 *) local_2c;
                    iVar6 = m1;
                    k     = local_2c;
                    do {
                        iVar6 = (s16) (iVar6 + 1);
                        while (iVar6 < 3 && *(u16 *) func_020cac44(iVar6) == ff) {
                            iVar6 = (s16) (iVar6 + 1);
                        }
                    } while (k++ < iVar13);
                    if (iVar6 >= 3) {
                        iVar6 = m1;
                    }
                    if (iVar6 >= 0) {
                        q = func_020cac44(iVar6);
                    }
                    iVar13 = iVar13 + 1;
                    if (*(s16 *) ((u8 *) pe + 2) == *(s16 *) (q + 6)) {
                        iVar14 = iVar14 + 1;
                    }
                } while (iVar13 < func_020caca0());
            }
        }
        if (*(s16 *) ((u8 *) pe + 4) == param_3 && (s32) * (u16 *) ((u8 *) pe + 12) > iVar14) {
            if (param_3 == 1) {
                sVar4 = *(s16 *) ((u8 *) pe + 2);
                if (sVar4 == 0x3e || sVar4 == 0x3f || sVar4 == 0x3c || sVar4 == 0x3d || sVar4 == 0x65 || sVar4 == 0x66 ||
                    sVar4 == 0x67 || sVar4 == 0x68 || sVar4 == 0x69 || sVar4 == 0x6a) {
                    goto skip;
                }
            }
            if (param_3 == 5) {
                sVar4 = *(s16 *) ((u8 *) pe + 2);
                if (sVar4 == 0 || sVar4 == 1 || sVar4 == 2 || sVar4 == 3 || sVar4 == 4 || sVar4 == 5 || sVar4 == 6 ||
                    sVar4 == 7) {
                    goto skip;
                }
            }
            *(T8 *) local_38 = *(T8 *) pe;
            local_38         = local_38 + 8;
            local_30         = local_30 + 1;
        }
    skip:
        pe = pe + 8;
    } while (*(s16 *) ((u8 *) pe + 4) != -1);
done:
    return local_30;
}

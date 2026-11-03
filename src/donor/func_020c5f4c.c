/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02090618 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02090618.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef struct {
    u16 n;
    s32 a[3];
} Stk;
u32 func_020c5f4c(u8 *param_1, u32 param_2, u32 param_3, s32 (*param_4)(u32, u32), s32 param_5) {
    u32 bVar2;
    u32 bVar1;
    u32 i;
    s32 iVar5;
    u32 uVar10;
    u32 uVar4;
    u32 uVar8;
    u32 sum;
    u16 uVar11;
    u32 uVar9;
    u16 *puVar7;
    u32 uVar6;
    Stk st;
    u32 w1;
    u32 w2;
    u32 w3;

    sum    = param_1[0x17];
    uVar11 = 0;
    bVar1  = uVar11;
    st.n   = uVar11;
    bVar2  = 1;
    i      = uVar11;
    do {
        st.a[i] = uVar11;
        i       = i + 1;
    } while (i < 2);
    st.a[st.n] = param_2;
    do {
        uVar10 = uVar11;
        uVar6  = st.n;
        puVar7 = (u16 *) st.a[uVar6];
        uVar9  = 2;
        uVar11 = *puVar7;
        switch ((s32) uVar11) {
            case 10:
                if (*(volatile s32 *) &param_5 != 0) {
                    if (uVar10 != 10) {
                        sum = sum + (param_3 + param_1[0x17]);
                    }
                } else {
                    sum = sum + (param_3 + param_1[0x17]);
                }
                break;
            case 0:
                if (uVar6 != 0) {
                    st.a[uVar6] = 0;
                    st.n        = st.n - 1;
                } else {
                    bVar2 = 0;
                }
                uVar9 = 0;
                break;
            case 13:
                break;
            case 26:
                w1    = puVar7[1];
                w2    = puVar7[2];
                uVar8 = (u16) (w1 >> 8);
                uVar4 = (uVar8 << 16) | w2;
                w3    = puVar7[3] & 0xff;
                uVar9 = w1 & 0xff;
                if (uVar4 == 0) {
                    goto c26_zero;
                }
                if (uVar4 != 9) {
                    goto c26_call;
                }
                goto c26_one;
            c26_zero:
                bVar2 = 0;
                uVar9 = 0;
                break;
            c26_one:
                bVar1 = 1;
                break;
            c26_call:
                if (uVar8 == 3 && param_4 != 0 && (iVar5 = param_4(uVar4, w3)) != 0) {
                    st.a[uVar6] = uVar9 + (u32) puVar7;
                    st.n        = st.n + 1;
                    st.a[st.n]  = iVar5;
                    uVar9       = 0;
                }
                break;
            default:
                if (bVar1) {
                    if (uVar11 >= 0x61 && uVar11 <= 0x7a) {
                        uVar11 = uVar11 - 0x20;
                    } else if (uVar11 >= 0xe0 && uVar11 <= 0xfd && uVar11 != 0xf7) {
                        uVar11 = uVar11 - 0x20;
                    }
                    bVar1 = 0;
                }
                break;
        }
        st.a[st.n] = uVar9 + st.a[st.n];
    } while (bVar2 != 0);
    return sum;
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c5cac from projets/nintendogs-chihuahua-friends/src/donor/func_020c5cac.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u32 vu32;
extern s32 func_0208975c(s32 a, u32 b);
typedef struct {
    u16 pos;
    u32 arr[2];
} Stk;
short *func_020c5cac(s32 param_1, u32 param_2, s32 *param_3, s32 param_4, u32 (*volatile param_5)(u32, u32), s32 param_6) {
    Stk st;
    s32 iVar12;
    u32 bVar1;
    u32 bVar2;
    u32 uVar11;
    u16 *puVar9;
    u32 uVar8;
    u32 uVar5;
    u32 uVar7;
    u32 local_38;
    s32 bVar4;
    u32 sum6;
    u32 dd;

    iVar12 = 0;
    bVar2  = 0;
    st.pos = 0;
    bVar1  = 1;
    uVar5  = 0;
    do {
        st.arr[uVar5] = 0;
        uVar5         = uVar5 + 1;
    } while (uVar5 < 2);
    st.arr[st.pos] = param_2;
    sum6           = *(vu32 *) &param_6 + param_4;
    local_38       = 2;
    for (;;) {
        uVar8  = st.pos;
        uVar11 = local_38;
        puVar9 = (u16 *) st.arr[uVar8];
        uVar7  = *puVar9;
        switch ((s32) uVar7) {
            case 10:
                bVar1 = 0;
                break;
            case 0:
                if (uVar8 != 0) {
                    st.arr[uVar8] = 0;
                    uVar5         = st.pos - 1;
                    st.pos        = uVar5;
                } else {
                    bVar1 = 0;
                }
                uVar11 = 0;
                break;
            case 13:
                break;
            case 26: {
                uVar7 = (u16) (puVar9[1] >> 8);
            }
                uVar5  = uVar7 << 16 | (u32) puVar9[2];
                dd     = puVar9[3] & 0xff;
                uVar11 = puVar9[1] & 0xff;
                if (uVar5 == 0) {
                    goto z26;
                }
                if (uVar5 != 9) {
                    goto c26;
                }
                goto b26;
            z26:
                if (uVar8 == 0) {
                    bVar1 = 0;
                } else {
                    st.arr[uVar8] = 0;
                    uVar11        = 0;
                    uVar5         = st.pos - 1;
                    st.pos        = uVar5;
                }
                break;
            b26:
                bVar2 = 1;
                break;
            c26:
                if (uVar7 == 3) {
                    uVar5 = (*param_5)(uVar5, dd);
                    if (uVar5 != 0) {
                        st.arr[uVar8]  = uVar11 + (u32) puVar9;
                        st.pos         = st.pos + 1;
                        uVar11         = 0;
                        st.arr[st.pos] = uVar5;
                    }
                }
                break;
            default:
                if (bVar2) {
                    if ((uVar7 >= 0x61) && (uVar7 <= 0x7a)) {
                        uVar7 = (u16) (uVar7 - 0x20);
                    } else if ((uVar7 >= 0xe0) && (uVar7 <= 0xfd) && (uVar7 != 0xf7)) {
                        uVar7 = (u16) (uVar7 - 0x20);
                    }
                    bVar2 = 0;
                }
                if (*(vu32 *) &param_6 == 0) {
                    bVar4  = func_0208975c(param_1, uVar7);
                    uVar5  = param_4 + bVar4;
                    iVar12 = iVar12 + uVar5;
                } else {
                    uVar5  = sum6;
                    iVar12 = iVar12 + uVar5;
                }
                break;
        }
        if (uVar11 != 0) {
            uVar5          = uVar11;
            uVar5          = uVar5 + st.arr[st.pos];
            st.arr[st.pos] = uVar5;
        }
        if (!bVar1) {
            if (param_3 != 0) {
                if (iVar12 > param_4) {
                    iVar12 = iVar12 - param_4;
                }
                *param_3 = iVar12;
            }
            puVar9 = (u16 *) st.arr[st.pos];
            if (*puVar9 == 0) {
                puVar9 = 0;
            }
            return (short *) puVar9;
        }
    }
}

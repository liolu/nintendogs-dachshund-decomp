/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f5a1c from projets/nintendogs-shiba-friends/src/donor/func_020f5a1c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef volatile u32 vu32;
typedef s32 fx32;
typedef s64 fx64;
extern fx32 data_027c09f0[32];
extern fx32 data_027c07f0[32];
extern s32 data_027c0bf0[32];
extern s16 data_02124ae0[];
extern s32 data_027c04ec[16];
extern s32 data_027c046c[16];
extern void func_0206dff0(u32 data, void *dest, u32 size);
extern fx32 func_0206902c(fx32 x);
void func_020f5a24(s16 *wave) {
    s32 m;
    s32 w;
    s32 step;
    s32 i;
    s32 j;
    s32 q;
    fx32 c;
    fx32 s;
    s32 k;
    fx32 tr;
    fx32 ti;
    fx32 t;
    vu32 vz;

    for (i = 0; i < 32; i++) {
        data_027c09f0[i] = (wave[i] >> 8) << 12;
    }
    vz = 0;
    func_0206dff0(vz, data_027c07f0, sizeof(data_027c07f0));
    for (i = 0; i < 32; i++) {
        j = data_027c0bf0[i];
        if (i < j) {
            t                = data_027c09f0[i];
            data_027c09f0[i] = data_027c09f0[j];
            data_027c09f0[j] = t;
        }
    }

    for (m = 1; m < 32; m = step) {
        step = m * 2;
        w    = 0;
        q    = 32 / step;
        for (i = 0; i < m; i++, w += q) {
            s32 idx = (w << 11) >> 4;
            c       = data_02124ae0[idx * 2 + 1];
            s       = data_02124ae0[idx * 2];
            for (j = i; j < 32; j += step) {
                k  = j + m;
                tr = ((fx32) (((fx64) (s) * (data_027c07f0[k]) + 0x800) >> 12)) +
                     ((fx32) (((fx64) (c) * (data_027c09f0[k]) + 0x800) >> 12));
                ti = ((fx32) (((fx64) (c) * (data_027c07f0[k]) + 0x800) >> 12)) -
                     ((fx32) (((fx64) (s) * (data_027c09f0[k]) + 0x800) >> 12));
                data_027c09f0[k] = data_027c09f0[j] - tr;
                data_027c09f0[j] += tr;
                data_027c07f0[k] = data_027c07f0[j] - ti;
                data_027c07f0[j] += ti;
            }
        }
    }

    for (i = 0; i < 15; i++) {
        data_027c09f0[i] /= 32;
        data_027c07f0[i] /= 32;
    }

    {
        s32 best    = 0;
        s32 bestIdx = 1;
        s32 mag;

        data_027c04ec[0] = 0;
        for (i = 1; i < 15; i++) {
            data_027c04ec[i] = (func_0206902c(((fx32) (((fx64) (data_027c09f0[i]) * (data_027c09f0[i]) + 0x800) >> 12)) +
                                              ((fx32) (((fx64) (data_027c07f0[i]) * (data_027c07f0[i]) + 0x800) >> 12)))
                                << 3) >>
                               12;
            if (i > 1) {
                mag = data_027c04ec[i];
                if (mag > 5) {
                    if (i - bestIdx < 0) {
                        if (best < mag) {
                            goto set;
                        }
                    }
                    if (i % bestIdx > (i / bestIdx) * 2 && bestIdx - i % bestIdx > (i / bestIdx) * 2) {
                        if ((best * 3) / 2 < mag) {
                            goto set;
                        }
                    }
                    if (best * 16 < mag) {
                    set:
                        best    = mag;
                        bestIdx = i;
                    }
                }
            }
        }
    }

    {
        s32 sum;
        for (i = 0, j = 0; i < 14; i++) {
            sum = 0;
            sum += data_027c04ec[j++];
            data_027c046c[i] = sum;
        }
    }
    for (i = 14; i < 16; i++) {
        data_027c046c[i] = data_027c046c[13];
    }
}

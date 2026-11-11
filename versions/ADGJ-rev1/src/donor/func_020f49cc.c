/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f49cc from projets/nintendogs-chihuahua-friends/src/donor/func_020f49cc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef s16 fx16;
typedef s32 fx32;
typedef s64 fx64;
extern fx32 data_027c09f0[128];
extern fx32 data_027c07f0[128];
extern s32 data_027c05f0[128];
extern const fx16 data_02124ae0[];
extern s32 data_027c04ec[128 / 2 + 1];
extern s32 data_027c046c[32];
extern void func_0206dff0(u32 data, void *dest, u32 size);
extern fx32 func_0206902c(fx32 x);
static inline void MI_CpuClear32(void *dest, u32 size) {
    volatile u32 zero = 0;
    func_0206dff0(zero, dest, size);
}
static inline fx16 FX_SinIdx(int idx) {
    return data_02124ae0[((idx >> 4) << 1)];
}
static inline fx16 FX_CosIdx(int idx) {
    return data_02124ae0[((idx >> 4) << 1) + 1];
}
void func_020f49cc(const s16 *wave) {
    int i, j, k, ik, h, d, k2;
    fx32 s, c, dx, dy;
    s32 v, maxv, maxi;

    for (i = 0; i < 128; i++) {
        data_027c09f0[i] = (wave[i] >> 6) << 12;
    }
    MI_CpuClear32(data_027c07f0, sizeof(data_027c07f0));
    for (i = 0; i < 128; i++) {
        j = data_027c05f0[i];
        if (i < j) {
            fx32 t           = data_027c09f0[i];
            data_027c09f0[i] = data_027c09f0[j];
            data_027c09f0[j] = t;
        }
    }
    for (k = 1; k < 128; k = k2) {
        h  = 0;
        k2 = k + k;
        d  = 128 / k2;
        for (j = 0; j < k; j++) {
            c = FX_CosIdx(h << 9);
            s = FX_SinIdx(h << 9);
            for (i = j; i < 128; i += k2) {
                ik = i + k;
                dx = ((fx32) (((fx64) (s) * (data_027c07f0[ik]) + 0x800LL) >> 12)) +
                     ((fx32) (((fx64) (c) * (data_027c09f0[ik]) + 0x800LL) >> 12));
                dy = ((fx32) (((fx64) (c) * (data_027c07f0[ik]) + 0x800LL) >> 12)) -
                     ((fx32) (((fx64) (s) * (data_027c09f0[ik]) + 0x800LL) >> 12));
                data_027c09f0[ik] = data_027c09f0[i] - dx;
                data_027c09f0[i] += dx;
                data_027c07f0[ik] = data_027c07f0[i] - dy;
                data_027c07f0[i] += dy;
            }
            h += d;
        }
    }
    for (i = 0; i < 128 / 2 + 1; i++) {
        data_027c09f0[i] /= 128;
        data_027c07f0[i] /= 128;
    }
    maxv             = 0;
    maxi             = 1;
    data_027c04ec[0] = 0;
    for (i = 1; i < 128 / 2 + 1; i++) {
        data_027c04ec[i] = (func_0206902c(((fx32) (((fx64) (data_027c09f0[i]) * (data_027c09f0[i]) + 0x800LL) >> 12)) +
                                          ((fx32) (((fx64) (data_027c07f0[i]) * (data_027c07f0[i]) + 0x800LL) >> 12)))
                            << 3) >>
                           12;
        if (i > 6 && data_027c04ec[i] > 5) {
            v = data_027c04ec[i];
            if ((i - maxi < 3 && maxv < v) ||
                (i % maxi > i / maxi * 2 && maxi - i % maxi > i / maxi * 2 && maxv * 3 / 2 < v) || maxv * 16 < v) {
                maxv = v;
                maxi = i;
            }
        }
    }
    for (i = 0; i < 32; i++) {
        s32 m, sum;
        sum = 0;
        for (m = 0; m < 2; m++) {
            sum += (data_027c04ec + i * 2)[m];
        }
        data_027c046c[i] = sum / 2;
    }
}

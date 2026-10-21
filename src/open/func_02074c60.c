#include "m2c.h"

typedef struct UnkResAnmHeader {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
} UnkResAnmHeader;

struct UnkAnmObj;
typedef void (*UnkAnmFunc)(void *result, struct UnkAnmObj *anm, u32 dataIdx);
typedef struct UnkAnmObj {
    s32 unk_00;
    s32 unk_04;
    UnkResAnmHeader *unk_08;
    UnkAnmFunc unk_0c;
    struct UnkAnmObj *unk_10;
    void *unk_14;
    u8 unk_18;
    u8 unk_19;
    u16 unk_1a[1];
} UnkAnmObj;

typedef struct UnkVecFx32 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} UnkVecFx32;

typedef struct UnkJntAnmResult {
    u32 unk_00;
    UnkVecFx32 unk_04;
    UnkVecFx32 unk_10;
    UnkVecFx32 unk_1c;
    UnkVecFx32 unk_28;
    UnkVecFx32 unk_34;
    UnkVecFx32 unk_40;
    UnkVecFx32 unk_4c;
} UnkJntAnmResult;

void func_0206cc3c(u32 value, void *dest, u32 count);
s32 func_02067ca0(s32 numer, s32 denom);
void func_02074f64(UnkVecFx32 *dst, const UnkVecFx32 *src, s32 ratio, u32 isOne);
void func_0206810c(const UnkVecFx32 *a, const UnkVecFx32 *b, UnkVecFx32 *axb);
void func_02067ef8(const UnkVecFx32 *src, UnkVecFx32 *dst);

s32 func_02074c60(UnkJntAnmResult *result, UnkAnmObj *anm, int jntID) {
    UnkJntAnmResult tmp;
    UnkAnmObj *last;
    UnkAnmObj *p;
    volatile u32 fill;
    s32 ratioSum;
    s32 ratio;
    u32 count;

    if (anm->unk_10 == 0) {
        if ((anm->unk_1a[jntID] & 0x300) == 0x100) {
            anm->unk_0c(result, anm, anm->unk_1a[jntID] & 0xFF);
            return 1;
        }
        return 0;
    }

    ratioSum = 0;
    count = 0;
    last = anm;
    p = anm;
    do {
        if ((p->unk_1a[jntID] & 0x300) == 0x100) {
            last = p;
            ratioSum += p->unk_04;
            count++;
        }
        p = p->unk_10;
    } while (p != 0);

    if (ratioSum == 0) {
        return 0;
    }
    if (count == 1) {
        last->unk_0c(result, last, last->unk_1a[jntID] & 0xFF);
        return 1;
    }

    fill = 0;
    func_0206cc3c(fill, result, sizeof(UnkJntAnmResult));
    result->unk_00 = 0xFFFFFFFF;

    do {
        if ((anm->unk_1a[jntID] & 0x300) == 0x100 && anm->unk_04 > 0) {
            anm->unk_0c(&tmp, anm, anm->unk_1a[jntID] & 0xFF);
            if (ratioSum == 0x1000) {
                ratio = anm->unk_04;
            } else {
                ratio = func_02067ca0(anm->unk_04, ratioSum);
            }
            func_02074f64(&result->unk_04, &tmp.unk_04, ratio, tmp.unk_00 & 1);
            func_02074f64(&result->unk_10, &tmp.unk_10, ratio, tmp.unk_00 & 8);
            func_02074f64(&result->unk_1c, &tmp.unk_1c, ratio, tmp.unk_00 & 0x10);
            if (!(tmp.unk_00 & 4)) {
                result->unk_4c.unk_00 += (s32) (((s64) ratio * tmp.unk_4c.unk_00) >> 12);
                result->unk_4c.unk_04 += (s32) (((s64) ratio * tmp.unk_4c.unk_04) >> 12);
                result->unk_4c.unk_08 += (s32) (((s64) ratio * tmp.unk_4c.unk_08) >> 12);
            }
            if (!(tmp.unk_00 & 2)) {
                result->unk_28.unk_00 += (ratio * tmp.unk_28.unk_00) >> 12;
                result->unk_28.unk_04 += (ratio * tmp.unk_28.unk_04) >> 12;
                result->unk_28.unk_08 += (ratio * tmp.unk_28.unk_08) >> 12;
                result->unk_34.unk_00 += (ratio * tmp.unk_34.unk_00) >> 12;
                result->unk_34.unk_04 += (ratio * tmp.unk_34.unk_04) >> 12;
                result->unk_34.unk_08 += (ratio * tmp.unk_34.unk_08) >> 12;
            } else {
                result->unk_28.unk_00 += ratio;
                result->unk_34.unk_04 += ratio;
            }
            result->unk_00 &= tmp.unk_00;
        }
        anm = anm->unk_10;
    } while (anm != 0);

    func_0206810c(&result->unk_28, &result->unk_34, &result->unk_40);
    func_02067ef8(&result->unk_28, &result->unk_28);
    func_02067ef8(&result->unk_40, &result->unk_40);
    func_0206810c(&result->unk_40, &result->unk_28, &result->unk_34);
    return 1;
}

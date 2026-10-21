#include "m2c.h"
typedef struct {
    s32 unk0;
    s32 unk4;
    s16 unk8;
} Unk_021549e4;
extern Unk_021549e4 data_021549e4;
s32 func_020972d4(void);
s32 func_02097328(void);
void func_02097004(s32, s32, s32);
#pragma opt_common_subs off
s32 func_02097278(void) {
    Unk_021549e4 *p;

    data_021549e4.unk0 = 0;
    data_021549e4.unk4 = 0;
    data_021549e4.unk8 = 0;
    if (func_020972d4() == 0) {
        return (s32) &data_021549e4;
    }
    p = (Unk_021549e4 *) func_02097328();
    func_02097004((s32) ((s8 *) p + 6), (s32) M2C_FIELD((s8 *) p, s16 *, 0), (s32) &data_021549e4);
    return (s32) &data_021549e4;
}

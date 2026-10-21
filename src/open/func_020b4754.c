#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

extern s32 data_0213eeb8;
extern s32 data_0213ed3c;
void func_02006a20(void *arg0, void *arg1);
void func_01ff832c(M2C_UNK arg0, void *arg1, void *arg2, M2C_UNK arg3);

void func_020b4754(M2C_S12 *arg0, M2C_S12 *arg1) {
    M2C_S12 v;
    M2C_S12 w;
    s32 e;

    *arg0 = *arg1;
    v.f0 = -arg0->f0;
    v.f1 = 0;
    v.f2 = -arg0->f2;
    e = data_0213eeb8;
    func_02006a20((void *) &v, (void *) &v);
    w.f0 = arg0->f0;
    w.f1 = 0;
    w.f2 = arg0->f2;
    func_01ff832c((M2C_UNK) e, (void *) &v, (void *) &w, (M2C_UNK) ((s32 *) arg0 + 3));
    ((s32 *) arg0)[6] = 0;
    ((s32 *) arg0)[7] = 0x1000;
    ((s32 *) arg0)[8] = 0;
    ((s32 *) arg0)[9] = data_0213ed3c;
}

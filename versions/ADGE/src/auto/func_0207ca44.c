/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0207c8c4(void);
void func_0207c8fc(void);
void func_0207c904(M2C_UNK);

extern void (*data_0213cd78)(s32);
extern void (*data_0213cd7c)();
extern M2C_UNK data_02153dd0;

void func_0207ca44(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_02153dd0, s32 *, 8) = arg0;
    func_0207c8c4();
    if (arg1 == 0) {
        return;
    }
    data_0213cd78 = func_0207c904;
    data_0213cd7c = func_0207c8fc;
}

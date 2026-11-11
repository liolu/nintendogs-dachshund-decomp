/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0206ba54(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0206bbe0(M2C_UNK, M2C_UNK, M2C_UNK);

extern void *data_0215a06c;

void func_0211b134(void) {
    if (data_0215a06c == NULL) {
        return;
    }
    func_0206ba54(M2C_FIELD(M2C_FIELD(data_0215a06c, void **, 0xC), s32 *, 0x14), 0, 0x4000);
    func_0206bbe0(M2C_FIELD(M2C_FIELD(data_0215a06c, void **, 0x10), s32 *, 0xC), 0, 0x100);
}

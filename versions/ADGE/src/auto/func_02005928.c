/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02005d68(M2C_UNK, M2C_UNK);
void func_02007c00(void);
void func_02068744(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0214cd9c;
extern M2C_UNK data_0214ce78;

void func_02005928(void) {
    func_02005d68((s32) &data_0214ce78, 0);
    func_02005d68((s32) &data_0214cd9c, 1);
    func_02007c00();
    func_02068744(0x0400006C, (s32) M2C_FIELD(&data_0214ce78, s16 *, 0x18));
    func_02068744(0x0400106C, (s32) M2C_FIELD(&data_0214cd9c, s16 *, 0x18));
}

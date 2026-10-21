#include "m2c.h"
extern void (*data_02134f5c)(void);
extern void *data_0214cd98;
extern u8 data_0214ce78;
extern u8 data_0214cd9c;
extern u64 func_02080978(void);
extern u64 func_0205dd48(u64, u64);
extern void func_0206a91c(void);
void func_02003fa4(void);

void func_02003aa0(u32 arg0, u32 arg1) {
    u64 now;
    u8 *p;
    void (**fn)(void);

    while (1) {
        p                   = data_0214cd98;
        now                 = func_02080978();
        *(u64 *) (p + 0xC4) = now;
        if (*(u16 *) (p + 0xA) == 1) {
            func_0206a91c();
        }
        data_02134f5c();
        ((void (*)(void)) arg0)();
        func_02003fa4();
        if (arg1 != 0) {
            ((void (*)(void)) arg1)();
        }
        fn = (void (**)(void)) ((u8 *) &data_02134f5c + 0xC);
        (*fn)();
        now = func_02080978();
        p   = data_0214cd98;
        M2C_FIELD(p, u32 *, 0x28)++;
        p = data_0214cd98;
        M2C_FIELD(p, u32 *, 0xD8) = func_0205dd48((now - M2C_FIELD(p, u64 *, 0xCC)) * 0xFA00, 0x82EA);
        p = data_0214cd98;
        M2C_FIELD(p, u32 *, 0xDC) = func_0205dd48((now - M2C_FIELD(p, u64 *, 0xC4)) * 0xFA00, 0x82EA);
        if (*(u16 *) ((u8 *) &data_0214ce78 + 4) != 0 || *(u16 *) ((u8 *) &data_0214cd9c + 4) != 0) {
            continue;
        }
        break;
    }
}

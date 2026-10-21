#include "m2c.h"
#include "engine.h"
extern void *data_0214cd98;
extern void (*data_02134f5c)(void);
extern u64 func_02080978(void);
extern void func_0206a91c(void);
void func_0200412c(void) {
    u8 *p = (u8 *) data_0214cd98;

    *(u64 *) (p + 0xC4) = func_02080978();
    if (*(u16 *) (p + 0xA) == 1) {
        func_0206a91c();
    }
    data_02134f5c();
}

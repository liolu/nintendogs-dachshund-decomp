#include "m2c.h"
u32 func_02067b68(void) {
    while (*(volatile u16 *) 0x40002B0 & 0x8000) {
    }
    return (*(volatile u32 *) 0x40002B4 + 0x200) >> 10;
}

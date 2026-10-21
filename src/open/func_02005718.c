#include "engine.h"
#include "m2c.h"
extern void *data_0214cd98;
extern void (*data_02134f5c)(void);
extern u64 func_02080978(void);
extern void func_0206a91c(void);
void func_02005718(u8 *arg0, s32 sel) {
    u32 v;

    *(u16 *) (arg0 + 0x00) = 0;
    *(u16 *) (arg0 + 0x02) = 0;
    *(u16 *) (arg0 + 0x04) = 0;
    *(u16 *) (arg0 + 0x06) = 0;
    *(u16 *) (arg0 + 0x08) = 0;
    *(u16 *) (arg0 + 0x0A) = 0;
    *(u16 *) (arg0 + 0x0C) = 0;
    *(u16 *) (arg0 + 0x10) = 1;
    *(u16 *) (arg0 + 0x14) = 0;
    *(u16 *) (arg0 + 0x16) = 0;
    *(u16 *) (arg0 + 0x12) = 0;
    *(u16 *) (arg0 + 0x18) = 0;
    *(u16 *) (arg0 + 0x1A) = 0;
    *(u16 *) (arg0 + 0x1C) = 0;
    v = 6;
    switch (sel) {
    case 0:
    case 1:
    case 3:
        v = 1;
        break;
    case 2:
    case 4:
        v = 2;
        break;
    case 5:
        v = 3;
        break;
    case 6:
        break;
    }
    *(u32 *) (arg0 + 0x20) = v;
    switch (v) {
    case 1:
        *(u16 *) (arg0 + 0x24) = 2;
        *(u16 *) (arg0 + 0x28) = 0;
        *(u16 *) (arg0 + 0x2A) = 0;
        *(u16 *) (arg0 + 0x26) = 0;
        *(u16 *) (arg0 + 0x2C) = 0;
        *(u16 *) (arg0 + 0x2E) = 0;
        break;
    case 2:
        *(u16 *) (arg0 + 0x24) = 2;
        *(u16 *) (arg0 + 0x28) = 0;
        *(u16 *) (arg0 + 0x26) = 0;
        *(u16 *) (arg0 + 0x2A) = 0;
        *(u16 *) (arg0 + 0x2C) = 0;
        *(u16 *) (arg0 + 0x2E) = 0;
        break;
    case 3:
        *(u16 *) (arg0 + 0x24) = 2;
        *(u16 *) (arg0 + 0x26) = 0;
        *(u16 *) (arg0 + 0x28) = 0;
        *(u16 *) (arg0 + 0x2A) = 0;
        *(u16 *) (arg0 + 0x2C) = 0;
        break;
    }
    v = 6;
    switch (sel) {
    case 0:
        v = 1;
        break;
    case 1:
    case 2:
        v = 2;
        break;
    case 3:
    case 4:
    case 5:
        v = 3;
        break;
    case 6:
        break;
    }
    *(u32 *) (arg0 + 0x30) = v;
    switch (v) {
    case 1:
        *(u16 *) (arg0 + 0x34) = 2;
        *(u16 *) (arg0 + 0x38) = 0;
        *(u16 *) (arg0 + 0x3A) = 0;
        *(u16 *) (arg0 + 0x36) = 0;
        *(u16 *) (arg0 + 0x3C) = 0;
        *(u16 *) (arg0 + 0x3E) = 0;
        break;
    case 2:
        *(u16 *) (arg0 + 0x34) = 2;
        *(u16 *) (arg0 + 0x38) = 0;
        *(u16 *) (arg0 + 0x36) = 0;
        *(u16 *) (arg0 + 0x3A) = 0;
        *(u16 *) (arg0 + 0x3C) = 0;
        *(u16 *) (arg0 + 0x3E) = 0;
        break;
    case 3:
        *(u16 *) (arg0 + 0x34) = 2;
        *(u16 *) (arg0 + 0x36) = 0;
        *(u16 *) (arg0 + 0x38) = 0;
        *(u16 *) (arg0 + 0x3A) = 0;
        *(u16 *) (arg0 + 0x3C) = 0;
        break;
    }
    *(u32 *) (arg0 + 0x40) = 0;
    *(u32 *) (arg0 + 0x44) = 0;
}

#include "engine.h"
#include "m2c.h"
void func_02005718(M2C_UNK, M2C_UNK);
typedef struct {
    u16 a;
    u16 b;
} Pair;

typedef struct {
    u16 v[20];
} Blob;

void func_02005690(u16 *arg0, u16 *arg1) {
    *(Blob *) arg0 = *(Blob *) arg1;
    *(u32 *) ((u8 *) arg0 + 0x28) = 0;
    func_02005718((s32) ((u8 *) arg0 + 0x2C), *(u16 *) ((u8 *) arg1 + 0x8));
    func_02005718((s32) ((u8 *) arg0 + 0x78), *(u16 *) ((u8 *) arg1 + 0xC));
    *(u32 *) ((u8 *) arg0 + 0x74) = 0;
    *(u32 *) ((u8 *) arg0 + 0xC4) = 0;
    *(u32 *) ((u8 *) arg0 + 0xC8) = 0;
    *(u32 *) ((u8 *) arg0 + 0xCC) = 0;
    *(u32 *) ((u8 *) arg0 + 0xD0) = 0;
    *(u32 *) ((u8 *) arg0 + 0xD4) = 0;
    *(u32 *) ((u8 *) arg0 + 0xD8) = 0;
    *(u32 *) ((u8 *) arg0 + 0xDC) = 0;
    *(u32 *) ((u8 *) arg0 + 0xC0) = 0;
}

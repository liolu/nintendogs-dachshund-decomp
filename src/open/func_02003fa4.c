#include "m2c.h"

extern u8 data_02134f5c;
extern u8 data_0214d758;
extern u8 data_0214ce78;
extern u8 data_0214cd9c;
extern void *data_0214cd98;
extern u64 func_02080978(void);
extern u64 func_0205dd48(u64, u64);
void func_02080180(void);
void func_0207eb80(s32, s32);
void func_02068744();

typedef struct {
    u8 pad[4];
    void (*fn4)();
    void (*fn8)();
    void (*fnC)();
} FnTable;

typedef struct {
    u8 pad[0x10];
    void (*fn)();
    u8 pad2[4];
    s16 v18;
} Callbacks;

typedef struct {
    u8 pad[0xC];
    void (*fnC)();
} FnTableC;

void func_02003fa4(void) {
    s32 old0;
    s32 old1;
    u8 *p;
    u8 *q;
    u64 now;
    u16 i;

    old0 = ((Callbacks *) &data_0214ce78)->v18;
    old1 = ((Callbacks *) &data_0214cd9c)->v18;
    ((FnTable *) &data_02134f5c)->fn4();
    if (((Callbacks *) &data_0214ce78)->fn != NULL) {
        ((Callbacks *) &data_0214ce78)->fn(&data_0214ce78);
    }
    if (((Callbacks *) &data_0214cd9c)->fn != NULL) {
        ((Callbacks *) &data_0214cd9c)->fn(&data_0214cd9c);
    }
    func_02080180();
    p = data_0214cd98;
    if (*(u16 *) (p + 0xA) == 1) {
        q                  = *(u8 **) (p + 0x74);
        *(u32 *) 0x4000540 = (q[3] << 1) | q[2];
    }
    p   = data_0214cd98;
    now = func_02080978();
    M2C_FIELD(p, u32 *, 0xD4) = func_0205dd48((now - M2C_FIELD(p, u64 *, 0xC4)) * 0xFA00, 0x82EA);
    for (i = 0; i < M2C_FIELD(data_0214cd98, u16 *, 0); i++) {
        func_0207eb80(1, 1);
    }
    if (((FnTableC *) &data_0214d758)->fnC != NULL) {
        ((FnTableC *) &data_0214d758)->fnC(&data_0214d758);
    }
    now = func_02080978();
    p   = data_0214cd98;
    *(u64 *) (p + 0xCC) = now;
    if (old0 != ((Callbacks *) &data_0214ce78)->v18) {
        func_02068744(0x0400006C, ((Callbacks *) &data_0214ce78)->v18);
    }
    if (old1 != ((Callbacks *) &data_0214cd9c)->v18) {
        func_02068744(0x0400106C, ((Callbacks *) &data_0214cd9c)->v18);
    }
    ((FnTable *) &data_02134f5c)->fn8();
}

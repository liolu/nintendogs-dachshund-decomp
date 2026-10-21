#include "m2c.h"

typedef struct {
    u32 offset;
    u32 length;
} RomRegion;

typedef struct {
    u8 pad_00[0x40];
    RomRegion arm9Overlays;
    RomRegion arm7Overlays;
} RomHeader;

#define ROM_HEADER ((RomHeader *) 0x027FFE00)

s32 func_0207efdc(void);                            /* extern */
void func_02065cc0(void);                           /* extern */
void func_020877c8(void *);                         /* extern */
s32 func_02087708(void *, char *, s32);             /* extern */
void func_020872b8(void *, void *, s32);            /* extern */
s32 func_020875f8(void *, s32, s32, s32, s32, s32, void *, void *); /* extern */
extern M2C_UNK func_02088608;
extern M2C_UNK func_02088610;
extern M2C_UNK func_02088618;
extern M2C_UNK func_020886a8;
extern M2C_UNK func_020886b0;

extern u32 data_021541c0;
extern s32 data_021541bc;
extern RomRegion data_021541c4;
extern RomRegion data_021541cc;
extern M2C_UNK data_021541d4;
extern char data_0213ce54[];

#pragma opt_propagation off
void func_02088468(u32 dma_no) {
    RomRegion *arm9;
    RomRegion *arm7;

    data_021541c0 = dma_no;
    data_021541bc = func_0207efdc();
    data_021541c4.offset = 0;
    data_021541c4.length = 0;
    data_021541cc.offset = 0;
    data_021541cc.length = 0;
    func_02065cc0();
    func_020877c8(&data_021541d4);
    func_02087708(&data_021541d4, data_0213ce54, 3);
    if (*(volatile u16 *) 0x027FFC40 == 2) {
        data_021541c4.offset = -1;
        data_021541c4.length = 0;
        data_021541cc.offset = -1;
        data_021541cc.length = 0;
        func_020872b8(&data_021541d4, &func_02088608, -1);
        func_020875f8(&data_021541d4, 0, 0, 0, 0, 0, &func_02088610, &func_020886a8);
        return;
    }
    arm9 = &ROM_HEADER->arm9Overlays;
    arm7 = &ROM_HEADER->arm7Overlays;
    func_020872b8(&data_021541d4, &func_02088618, 0x602);
    if (arm9->offset == -1 || arm9->offset == 0) {
        return;
    }
    if (arm7->offset == -1 || arm7->offset == 0) {
        return;
    }
    func_020875f8(&data_021541d4, 0, arm7->offset, arm7->length, arm9->offset, arm9->length,
                  &func_020886b0, &func_020886a8);
}

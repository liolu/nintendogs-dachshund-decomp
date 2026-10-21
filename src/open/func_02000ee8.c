#include "m2c.h"

#pragma opt_strength_reduction off
#pragma opt_common_subs off

typedef volatile u16 vu16;
typedef u32 OSIrqMask;

extern s32 data_0214cbc4;
extern u8 data_0214cbc0[];
extern u8 data_0214cbe0[];
extern u8 data_0214cbe4[];
extern OSIrqMask func_0207edd4(OSIrqMask mask);
extern void func_02000bd4(u16 lockId, void *lock);
extern void func_02000c88(void *cycles);
extern void func_02000c54(void *cycles);
extern void func_02000bac(u16 lockId, void *lock);
extern void func_0206c660(u32, u32, void *, u32);
extern void func_0206cc0c(void *dst, void *src, u32 len);
extern void func_020801ac(void);
extern void func_02000b48(u32 arg0);
extern void WaitByLoop(u32);

static inline u16 SetIme(u16 value) {
    u16 previous                   = *((volatile u16 *) 0x04000208);
    *((volatile u16 *) 0x04000208) = value;
    return previous;
}

#pragma opt_strength_reduction off
#pragma opt_common_subs off
#pragma opt_strength_reduction off
#pragma opt_common_subs off
#pragma opt_strength_reduction off
#pragma opt_common_subs off
void func_02000ee8(void) {
    OSIrqMask irq;
    u16 savedIme;
    s32 exmem;
    u32 lock[2];
    s32 cycles[2];
    s32 i;
    u8 *p;
    u8 *info;

    if (data_0214cbc4 != 0) {
        return;
    }
    data_0214cbc4 = 1;
    if ((*(vu16 *) 0x04000300 & 1) == 0) {
        return;
    }

    irq      = func_0207edd4(0x40000);
    savedIme = SetIme(1);
    func_02000bd4(*(u16 *) (data_0214cbc0 + 2), lock);
    exmem = (*(vu16 *) 0x04000204 & 0x8000) >> 15;
    func_02000c88(cycles);
    *(vu16 *) 0x04000204 &= ~0x8000;
    func_0206c660(1, 0x8000080, (void *) ((u32) data_0214cbe0 + 0x80), 0x40);
    *(vu16 *) 0x04000204 = (*(vu16 *) 0x04000204 & ~0x8000) | (exmem << 15);
    func_02000c54(cycles);
    func_02000bac(*(u16 *) (data_0214cbc0 + 2), lock);
    info = (u8 *) 0x027FFC30;
    *(u16 *) (info + 0) = *(u16 *) (data_0214cbe0 + 0xbe);
    for (i = 0; i < 3; i++) {
        p = data_0214cbe0 + i;
        *(u8 *) (0x027FFC32 + i) = p[0xb5];
    }
    *(u16 *) (info + 6) = *(u16 *) (data_0214cbe0 + 0xb0);
    *(u32 *) (info + 8) = *(u32 *) (data_0214cbe0 + 0xac);
    func_0206cc0c((void *) 0xFFFF0020, data_0214cbe4, 0x9C);
    func_020801ac();
    func_02000b48((((u32) data_0214cbe0 + 0xFE000000) >> 5 << 6) | 1);
    while (*(vu16 *) data_0214cbc0 != 1) {
        WaitByLoop(1);
    }
    SetIme(savedIme);
    func_0207edd4(irq);
}

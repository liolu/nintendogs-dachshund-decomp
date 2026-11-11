/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02125168[];
void *func_020c9990(void);
void func_020ca4b0(void *, void *);
extern void func_ov022_0215a670(void);

void *func_ov022_0215a608(void) {
    u8 *p;

    p                   = (u8 *) func_020c9990();
    *(s16 *) (p + 0x6C) = *(s16 *) (data_02125168 + 0x8C);
    *(s16 *) (p + 0x6E) = *(s16 *) (data_02125168 + 0x8E);
    *(s32 *) (p + 0x74) = 0x1000;
    *(s32 *) (p + 0x78) = 0x2BC000;
    *(s32 *) (p + 0x3C) = 0;
    *(s32 *) (p + 0x40) = 0x2000;
    *(s32 *) (p + 0x44) = 0;
    func_020ca4b0(p, func_ov022_0215a670);
    *(s32 *) (p + 0x7C) = 0x19000;
    return p;
}

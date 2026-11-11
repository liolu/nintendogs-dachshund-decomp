/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02124de0[];
void *func_020c438c(void);
void func_020c4eac(void *, void *);
extern void func_ov021_021581f0(void);

void *func_ov021_02158188(void) {
    u8 *p;

    p                   = (u8 *) func_020c438c();
    *(s16 *) (p + 0x6C) = *(s16 *) (data_02124de0 + 0x8C);
    *(s16 *) (p + 0x6E) = *(s16 *) (data_02124de0 + 0x8E);
    *(s32 *) (p + 0x74) = 0x1000;
    *(s32 *) (p + 0x78) = 0x2BC000;
    *(s32 *) (p + 0x3C) = 0;
    *(s32 *) (p + 0x40) = 0x2000;
    *(s32 *) (p + 0x44) = 0;
    func_020c4eac(p, func_ov021_021581f0);
    *(s32 *) (p + 0x7C) = 0x19000;
    return p;
}

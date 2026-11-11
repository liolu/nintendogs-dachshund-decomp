/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} Triple;

extern u8 *data_0215a064;
u8 *func_020361ac(void);
void func_02039128(void *a);
void func_02037130(void *a, s32 b);
s32 func_0203535c(void *a);
void func_0203e5e8(void *a, s32 b);

void func_ov003_0218cfd8(u8 *arg0) {
    u8 *temp;
    u8 *q;

    temp = func_020361ac();
    if (temp != NULL) {
        func_02039128(arg0);
        *(Triple *) (arg0 + 0x3B4) = *(Triple *) (temp + 0xBC);
        q                          = *(u8 **) (data_0215a064 + 0x1C);
        *(Triple *) (arg0 + 0x278) = *(Triple *) (q + 0x30);
        func_02037130(arg0, 0x392);
    }
    if (*(s16 *) (arg0 + 0xFA) == 0x22) {
        *(s16 *) (arg0 + 0xFA) = 0;
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0203e5e8(arg0, 0x438);
}

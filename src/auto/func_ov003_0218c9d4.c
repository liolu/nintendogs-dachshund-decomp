/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct T3 {
    s32 a;
    s32 b;
    s32 c;
} T3;

typedef struct T5 {
    s32 w[5];
} T5;

void *func_0200c488(s32, s32);
void func_0203910c(void *);
s32 func_02037130(void *, s32);
s32 func_02028114(void *);
s32 func_02022e04(void *, s32);
void func_02029248(void *);
void func_02037e18(void *, s32);
void func_020421c4(s8);
s32 func_0202f9a0(void *);
extern u8 *data_0214da7c;
extern T5 data_ov003_02198844;

void func_ov003_0218c9d4(void *arg0) {
    u8 *a;
    u8 *q;
    u8 *p4;
    u8 *e;
    T5 arr;
    s32 r6;
    s32 k;

    a = arg0;
    q = func_0200c488(0xE, 0);
    if (q != NULL) {
        p4 = *(u8 **) (data_0214da7c + 0x18) + (s16) (*(s32 *) (q + 0x20)) * 0x24;
        if (p4 != NULL) {
            k = *(s16 *) p4;
            e = *(u8 **) (data_0214da7c + 0x1C) + (s16) (k + *(s32 *) (a + 0x464)) * 0x44;
            if (e != NULL) {
                *(T3 *) (a + 0x26C) = *(T3 *) e;
                func_0203910c(arg0);
                r6 = func_02037130(arg0, 0x102);
                if (r6 < (func_02028114(arg0) << 6)) {
                    *(s32 *) (a + 0x464) = *(s32 *) (a + 0x464) + 1;
                    if (*(s32 *) (a + 0x464) >= *(s16 *) (p4 + 2)) {
                        *(s32 *) (a + 0x464) = 0;
                    }
                }
            }
        }
    }
    arr = data_ov003_02198844;
    if (func_02022e04(arg0, 0x4E) != 0) {
        *(s32 *) (a + 0x468) = *(u8 *) (a + 0xA5);
        *(s32 *) (a + 0x46C) = 0xB4 - (*(u8 *) (a + 0xA5) * 0x1E);
        func_02029248(arg0);
    }
    func_02037e18(arg0, arr.w[*(s32 *) (a + 0x468)]);
    *(s32 *) (a + 0x46C) = *(s32 *) (a + 0x46C) - 1;
    if (*(s32 *) (a + 0x46C) > 0) {
        return;
    }
    func_020421c4(*(s8 *) (a + 0x88));
    if (func_02022e04(arg0, 0x4E) != 0) {
        func_02029248(arg0);
    }
    func_0202f9a0(arg0);
}

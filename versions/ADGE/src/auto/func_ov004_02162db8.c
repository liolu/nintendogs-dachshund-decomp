/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} Tri;
s32 func_02106ef0(void);
void func_021058ac(s32);
s32 func_02035450(void *, s32);
s32 func_02035424(void *, s32);
void func_0202afa0(void *, void *);
s32 func_0203535c(void *);
void func_0203e5ac(void *, s32, s32);
void func_0202fa18(void *);
extern s32 *data_0214da84;

void func_ov004_02162db8(void *arg0) {
    Tri tmp;
    u16 t;

    *(s32 *) ((u8 *) arg0 + 0x484) = 0;
    *(s32 *) ((u8 *) arg0 + 0x2A0) = *(s32 *) ((u8 *) arg0 + 0x2A0) - *(s32 *) ((u8 *) arg0 + 0x484);
    *(s32 *) ((u8 *) arg0 + 0x3F0) = *(s32 *) ((u8 *) arg0 + 0x3F0) - *(s32 *) ((u8 *) arg0 + 0x484);
    *(s32 *) ((u8 *) arg0 + 0x3FC) = *(s32 *) ((u8 *) arg0 + 0x3FC) - *(s32 *) ((u8 *) arg0 + 0x484);
    *(s32 *) ((u8 *) arg0 + 0x488) = *(s32 *) ((u8 *) arg0 + 0x488) + 1;
    if (func_02106ef0() != 0) {
        func_021058ac(*(s32 *) ((u8 *) arg0 + 0x484));
    }
    tmp = *(Tri *) ((u8 *) arg0 + 0x490);
    if (func_02035450(arg0, 0xC) != 0) {
        if (func_02035424(arg0, 0x12) != 0) {
            s32 n          = *data_0214da84 * 0x10DCD + 1;
            *data_0214da84 = n;
            t              = (u16) n;
            if ((u16) (((u32) t * 0xB4) >> 0x10) == 0) {
                func_0202afa0(arg0, &tmp);
                return;
            }
        }
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0203e5ac(arg0, 0, 0x138);
    func_0202fa18(arg0);
}

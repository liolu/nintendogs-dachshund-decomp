/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_ov006_0215bb70;
extern u8 *data_ov006_0215bb64;
void func_02070abc(void);
void func_ov006_021592d0(void *a);
void func_ov006_021592e4(void *a);
void func_ov006_021592f8(void *a);
void func_ov006_0215930c(void *a);
void func_ov006_02159664(void);
void func_ov006_0215a218(s32 a, s32 b, s32 c);
extern void func_ov006_02159ef0(void);
extern void func_ov006_02159eac(void);
extern void func_ov006_02159e90(void);

void func_ov006_0215a58c(void) {
    s32 i;

    func_02070abc();
    for (i = 0; i < 16; i++) {
        (&data_ov006_0215bb70)[i] = 0;
    }
    *(s32 *) (data_ov006_0215bb64 + 0x10C) = 0;
    *(s32 *) (data_ov006_0215bb64 + 0x110) = 0;
    *(s32 *) (data_ov006_0215bb64 + 0x124) = 0;
    *(s32 *) (data_ov006_0215bb64 + 0x128) = 0;
    func_ov006_021592f8((void *) func_ov006_02159ef0);
    func_ov006_0215930c((void *) func_ov006_0215a218);
    func_ov006_021592e4((void *) func_ov006_02159eac);
    func_ov006_021592d0((void *) func_ov006_02159e90);
    *(u16 *) (data_ov006_0215bb64 + 0x12C) = 0;
    func_ov006_02159664();
}

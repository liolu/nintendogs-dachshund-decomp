/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020ca530(void *, s32);
void func_020ca4b0(void *, void *);
void func_020ca4f4(s32, void *);
extern s32 data_ov006_02164260;
extern void func_ov006_02162718(void);

void func_ov006_02162744(void *arg0) {
    func_020ca530(arg0, 0xFF);
    *(s32 *) ((u8 *) arg0 + 0x28) = 0;
    func_020ca4b0(arg0, (void *) func_ov006_02162718);
    func_020ca4f4(data_ov006_02164260 + 4, arg0);
}

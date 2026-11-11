/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c4f2c(void *, s32);
void func_020c4eac(void *, void *);
void func_020c4ef0(s32, void *);
extern s32 data_ov005_02161dc0;
extern void func_ov005_02160294(void);

void func_ov005_021602c0(void *arg0) {
    func_020c4f2c(arg0, 0xFF);
    *(s32 *) ((u8 *) arg0 + 0x28) = 0;
    func_020c4eac(arg0, (void *) func_ov005_02160294);
    func_020c4ef0(data_ov005_02161dc0 + 4, arg0);
}

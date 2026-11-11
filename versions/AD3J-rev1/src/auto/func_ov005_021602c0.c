/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c4f28(void *, s32);
void func_020c4ea8(void *, void *);
void func_020c4eec(s32, void *);
extern s32 data_ov005_02161dc0;
extern void func_ov005_02160294(void);

void func_ov005_021602c0(void *arg0) {
    func_020c4f28(arg0, 0xFF);
    *(s32 *) ((u8 *) arg0 + 0x28) = 0;
    func_020c4ea8(arg0, (void *) func_ov005_02160294);
    func_020c4eec(data_ov005_02161dc0 + 4, arg0);
}

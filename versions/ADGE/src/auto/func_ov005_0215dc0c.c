/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Triple;

s32 func_0203535c(void *);
void func_0203e5e8(void *, s32);

void func_ov005_0215dc0c(void *arg0) {
    *(Triple *) ((u8 *) arg0 + 0x3B4) = *(Triple *) ((u8 *) arg0 + 0x30C);
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0203e5e8(arg0, 0x451);
}

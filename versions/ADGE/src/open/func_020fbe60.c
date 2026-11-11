#include "m2c.h"

typedef struct {
    s32 w[3];
} Copy3;

extern void func_020b182c(s32, Copy3 *, s32);
void func_020fbe60(s32 arg0, Copy3 *arg1) {
    Copy3 local = *arg1;

    local.w[1] = 0;
    func_020b182c(arg0, &local, -3);
}

#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025850();
extern void func_020264e4();
// clang-format off
asm void func_ov003_0216ad70(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x9f
    strh r2, [r1, #0x52]
    add r2, r4, #0x97
    mov r1, #0x4
    swpb r1, r1, [r2]
    bl func_020264e4
    mov r0, r4
    bl func_02025850
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

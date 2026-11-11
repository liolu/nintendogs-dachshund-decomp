#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025ba0();
extern void func_020268cc();
// clang-format off
asm void func_ov003_0216e1dc(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x15
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_020268cc
    mov r0, r4
    bl func_02025ba0
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

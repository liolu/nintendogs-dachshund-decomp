#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025b20();
extern void func_02026504();
// clang-format off
asm void func_ov003_0216e2e0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x8e
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r1, #0x5
    swpb r1, r1, [r2]
    add r2, r4, #0x98
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026504
    mov r0, r4
    bl func_02025b20
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

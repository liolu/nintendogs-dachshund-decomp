#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025b20();
extern void func_02026928();
extern void func_02033dd4();
// clang-format off
asm void func_ov003_0216e3b0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x14
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r1, #0x5
    swpb r1, r1, [r2]
    add r2, r4, #0x98
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026928
    mov r0, r4
    bl func_02025b20
    mov r0, r4
    bl func_02033dd4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

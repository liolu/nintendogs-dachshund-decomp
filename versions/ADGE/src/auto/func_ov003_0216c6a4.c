#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025ba0();
extern void func_02026a9c();
extern void func_02033e78();
// clang-format off
asm void func_ov003_0216c6a4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x13
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r3, #0x5
    swpb r1, r3, [r2]
    add r2, r4, #0x98
    swpb r1, r3, [r2]
    bl func_02026a9c
    mov r0, r4
    bl func_02025ba0
    mov r0, r4
    bl func_02033e78
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

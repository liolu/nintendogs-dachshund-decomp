#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025ba0();
extern void func_020266e8();
// clang-format off
asm void func_ov006_0216377c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x11
    strh r2, [r1, #0x52]
    add r2, r4, #0x98
    mov r1, #0x6
    swpb r1, r1, [r2]
    bl func_020266e8
    mov r0, r4
    bl func_02025ba0
    ldrb r0, [r4, #0xb0]
    add r1, r4, #0xb0
    mov r2, #0x1
    bic r0, r0, #0x1
    swpb r0, r0, [r1]
    str r2, [r4, #0x464]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025c4c();
extern void func_02025e24();
// clang-format off
asm void func_0201e2e8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x169
    add r1, r4, #0x100
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_02025e24
    mov r0, r4
    bl func_02025c4c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025ba0();
extern void func_02026b9c();
// clang-format off
asm void func_ov004_0216b3a0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x151
    add r1, r4, #0x100
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r1, #0xa
    swpb r1, r1, [r2]
    add r2, r4, #0x98
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026b9c
    mov r0, r4
    bl func_02025ba0
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

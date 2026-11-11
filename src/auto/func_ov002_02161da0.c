#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020254f0();
extern void func_02026b54();
// clang-format off
asm void func_ov002_02161da0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x113
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    add r2, r4, #0xb0
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026b54
    mov r0, r4
    bl func_020254f0
    add r1, r4, #0xa1
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

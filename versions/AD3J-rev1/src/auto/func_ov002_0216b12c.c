#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025a2c();
extern void func_02026a54();
// clang-format off
asm void func_ov002_0216b12c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x14d
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0x8
    swpb r1, r1, [r2]
    add r2, r4, #0xb1
    mov r3, #0x1
    swpb r1, r3, [r2]
    add r2, r4, #0xbf
    swpb r1, r3, [r2]
    bl func_02026a54
    mov r0, r4
    bl func_02025a2c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

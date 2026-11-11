#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02023610();
extern void func_02025a2c();
extern void func_02026b54();
// clang-format off
asm void func_ov002_02169d98(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x14c
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0x5
    swpb r1, r1, [r2]
    add r2, r4, #0xb1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026b54
    mov r0, r4
    bl func_02025a2c
    mov r0, r4
    mov r1, #0x4f
    mov r2, #0x1
    bl func_02023610
    mov r0, #0x1f4
    str r0, [r4, #0x490]
    mvn r0, #0x0
    str r0, [r4, #0x494]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

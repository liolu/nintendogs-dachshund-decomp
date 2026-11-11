#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025b58();
extern void func_02026a54();
extern void func_02033d7c();
// clang-format off
asm void func_ov002_0216a210(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x13
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r3, #0x5
    swpb r1, r3, [r2]
    add r2, r4, #0xb1
    swpb r1, r3, [r2]
    bl func_02026a54
    mov r0, r4
    bl func_02025b58
    mov r0, r4
    bl func_02033d7c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

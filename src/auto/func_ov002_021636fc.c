#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020255f8();
extern void func_0202693c();
extern void func_02037d84();
// clang-format off
asm void func_ov002_021636fc(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_02037d84
    add r1, r4, #0x100
    strh r0, [r1, #0x50]
    add r1, r4, #0xac
    mov r0, #0x7
    swpb r0, r0, [r1]
    mov r0, r4
    add r2, r4, #0xb1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_0202693c
    mov r0, r4
    bl func_020255f8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

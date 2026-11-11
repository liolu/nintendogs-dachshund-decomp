#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025b58();
extern void func_0202693c();
extern void func_0203699c();
extern void func_02037d84();
// clang-format off
asm void func_ov002_0216ba60(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_02037d84
    add r1, r4, #0x100
    strh r0, [r1, #0x50]
    mov r0, #0x1
    strh r0, [r1, #0x54]
    add r1, r4, #0xb1
    swpb r0, r0, [r1]
    mov r0, r4
    bl func_0202693c
    mov r0, r4
    bl func_02025b58
    ldr r1, [r4, #0x188]
    mov r0, r4
    orr r1, r1, #0x1
    str r1, [r4, #0x188]
    bl func_0203699c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202554c();
extern void func_0202649c();
extern void func_0202d6f8();
// clang-format off
asm void func_ov002_02164020(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x18a
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    mov r2, #0x13
    strh r2, [r1, #0x52]
    add r2, r4, #0xb0
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_0202649c
    mov r0, r4
    bl func_0202554c
    mov r0, r4
    mov r1, #0x7
    bl func_0202d6f8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

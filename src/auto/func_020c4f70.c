#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003844();
extern char func_01ffec30[];
// clang-format off
asm void func_020c4f70(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    mov r1, #0x1c
    bl func_02003844
    mov r1, #0xff
    swpb r1, r1, [r0]
    add r2, r0, #0x1
    mov r3, #0x0
    swpb r1, r3, [r2]
    add r2, r0, #0x2
    swpb r1, r3, [r2]
    add r2, r0, #0x3
    swpb r1, r3, [r2]
    ldr r1, =func_01ffec30
    str r3, [r0, #0x4]
    str r0, [r0, #0x8]
    str r0, [r0, #0xc]
    str r3, [r0, #0x10]
    str r3, [r0, #0x14]
    str r1, [r0, #0x18]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on

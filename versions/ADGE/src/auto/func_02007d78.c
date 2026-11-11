#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205df50();
extern void func_0206a39c();
// clang-format off
asm void func_02007d78(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r1, =0x4001048
    add r2, sp, #0x1
    ldrb r1, [r1, #0x0]
    add r3, sp, #0x0
    swpb r1, r1, [r2]
    ldrb r1, [sp, #0x1]
    swpb r1, r1, [r3]
    ldrsh r2, [r0, #0x6]
    ldrsh r1, [r0, #0x8]
    mov r0, r2, lsl #0x3
    rsb r0, r0, #0x0
    bl func_0205df50
    ldrb r1, [sp, #0x0]
    mov r3, r0
    mvn r2, #0x7
    mov r1, r1, lsl #0x1b
    ldr r0, =0x4001050
    mov r1, r1, lsr #0x1b
    sub r2, r2, r3
    bl func_0206a39c
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on

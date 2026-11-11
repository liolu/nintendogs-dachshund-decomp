#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020038a8();
extern char data_02159e28[];
// clang-format off
asm void func_020c9250(void) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr r2, =data_02159e28
    mov r4, r1
    ldr r2, [r2, #0x0]
    mov r1, r4, lsl #0x2
    str r4, [r2, #0x4]
    bl func_020038a8
    ldr ip, =data_02159e28
    cmp r4, #0x0
    ldr r2, [ip, #0x0]
    mov r1, #0x0
    str r0, [r2, #0x8]
    ldmlefd sp!, {r4, r5, r6, lr}
    bxle lr
    mov r0, r1
    mov lr, r1
    mov r5, #0xff
L_020c9294:
    ldr r2, [ip, #0x0]
    add r1, r1, #0x1
    ldr r2, [r2, #0x8]
    cmp r1, r4
    add r6, r2, r0
    swpb r2, r5, [r6]
    add r3, r6, #0x1
    swpb r2, lr, [r3]
    add r3, r6, #0x2
    swpb r2, lr, [r3]
    add r3, r6, #0x3
    swpb r2, lr, [r3]
    add r0, r0, #0x4
    blt L_020c9294
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on

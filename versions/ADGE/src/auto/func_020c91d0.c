#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205df50();
extern char data_02159e28[];
// clang-format off
asm void func_020c91d0(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r1, =data_02159e28
    ldr r1, [r1, #0x0]
    ldr r1, [r1, #0x8]
    add r4, r1, r0, lsl #0x2
    ldrb r3, [r4, #0x1]
    ldrb r2, [r1, r0, lsl #0x2]
    ldrb r1, [r4, #0x2]
    add r0, r3, #0x1
    add r2, r2, r3
    and r5, r2, #0xff
    bl func_0205df50
    add r2, r4, #0x1
    swpb r0, r1, [r2]
    mov r0, r5
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on

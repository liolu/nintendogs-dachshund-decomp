#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02159e38[];
// clang-format off
asm void func_020ceb98(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    ldr r1, =data_02159e38
    mov r0, #0x0
    ldr r1, [r1, #0x0]
    mov r6, r0
    add r1, r1, #0x1000
    ldr r2, [r1, #0x41c]
    mov r5, r0
    add r1, r2, #0x60
    ldrsb r7, [r1, #0x25]
    add r4, r2, #0x248
L_020cebc8:
    add ip, r4, r5
    ldrsb r3, [ip, #0x3]
    ldrsh lr, [r4, r5]
    ldrsb ip, [ip, #0x2]
    cmp r3, #0x0
    ble L_020cebf4
    cmp ip, #0x2
    bne L_020cebf4
    cmp lr, r7
    moveq r0, r3
    beq L_020cec0c
L_020cebf4:
    add r3, r6, #0x1
    mov r3, r3, lsl #0x10
    mov r6, r3, asr #0x10
    cmp r6, #0xc8
    add r5, r5, #0x4
    blt L_020cebc8
L_020cec0c:
    cmp r0, #0x0
    bgt L_020cec30
    add r3, r1, #0x25
    mov r0, #0x0
    swpb r0, r0, [r3]
    add r0, r2, #0x600
    ldrh r2, [r0, #0xae]
    orr r2, r2, #0x1
    strh r2, [r0, #0xae]
L_020cec30:
    ldrsb r0, [r1, #0x25]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on

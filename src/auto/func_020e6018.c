#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020f07bc();
// clang-format off
asm void func_020e6018(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldrb r3, [r1, #0x0]
    ldrsb r4, [r2, #0x0]
    cmp r0, #0x3
    mov ip, r3, lsl #0x18
    mov r5, ip, asr #0x18
    mov ip, #0x1f
    addls pc, pc, r0, lsl #0x2
    b L_020e608c
L_020e6040:
    b L_020e6050
    b L_020e6060
    b L_020e6070
    b L_020e6080
L_020e6050:
    add lr, r5, #0x1
    mov lr, lr, lsl #0x18
    mov r5, lr, asr #0x18
    b L_020e608c
L_020e6060:
    add lr, r4, #0x1
    mov lr, lr, lsl #0x18
    mov r4, lr, asr #0x18
    b L_020e608c
L_020e6070:
    sub lr, r5, #0x1
    mov lr, lr, lsl #0x18
    mov r5, lr, asr #0x18
    b L_020e608c
L_020e6080:
    sub lr, r4, #0x1
    mov lr, lr, lsl #0x18
    mov r4, lr, asr #0x18
L_020e608c:
    cmp r5, #0x1
    movlt r5, #0xc
    cmp r5, #0xc
    movgt r5, #0x1
    cmp r5, #0x2
    moveq ip, #0x1d
    cmp r5, #0x4
    beq L_020e60c4
    cmp r5, #0x6
    beq L_020e60c4
    cmp r5, #0x9
    beq L_020e60c4
    cmp r5, #0xb
    bne L_020e60c8
L_020e60c4:
    mov ip, #0x1e
L_020e60c8:
    cmp r4, #0x1
    movlt r4, ip
    cmp r4, ip
    ble L_020e60e8
    mov r3, r3, lsl #0x18
    cmp r5, r3, asr #0x18
    movne r4, ip
    moveq r4, #0x1
L_020e60e8:
    swpb r3, r5, [r1]
    cmp r0, #0x1
    swpb r0, r4, [r2]
    bhi L_020e610c
    mov r0, #0x19
    bl func_020f07bc
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_020e610c:
    mov r0, #0x1a
    bl func_020f07bc
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on

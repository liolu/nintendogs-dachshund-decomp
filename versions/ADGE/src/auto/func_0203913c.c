#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02139e0c[];
extern char data_0214da84[];
// clang-format off
asm void func_0203913c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr ip, [r1, #0x0]
    ldr r3, [r0, #0x2a0]
    ldr r5, [r0, #0x18c]
    sub ip, ip, r3
    smull r5, lr, ip, r5
    ldr r4, [r1, #0x8]
    ldr r1, [r0, #0x2a8]
    ldr r3, [r0, #0x194]
    sub r4, r4, r1
    mov r1, #0x800
    adds r6, r5, r1
    adc ip, lr, #0x0
    smull r5, r3, r4, r3
    adds r4, r5, r1
    mov r5, r6, lsr #0xc
    adc r1, r3, #0x0
    mov r3, r4, lsr #0xc
    orr r5, r5, ip, lsl #0x14
    orr r3, r3, r1, lsl #0x14
    adds r1, r5, r3
    ldr r1, =data_0214da84
    ldr ip, =0x10dcd
    ldr r1, [r1, #0x0]
    mov lr, #0x5
    ldr r4, [r1, #0x0]
    mov r3, #0x0
    mul ip, r4, ip
    add r4, ip, #0x1
    mov ip, r4, lsl #0x10
    mov ip, ip, lsr #0x10
    mul lr, ip, lr
    mov ip, lr, lsr #0x10
    mov ip, ip, lsl #0x10
    movpl r3, #0x1
    mov ip, ip, lsr #0x10
    ldrsb r5, [r0, #0x8d]
    ldr lr, =data_02139e0c
    mov r3, r3, lsl #0x10
    ldrb lr, [lr, r5]
    add ip, ip, #0x5
    mov r5, r3, asr #0x10
    str r4, [r1, #0x0]
    subs r1, ip, lr
    beq L_020391fc
    cmp r1, #0x1
    beq L_02039218
    b L_02039238
L_020391fc:
    ldr r3, =0x259
    add r1, r0, #0x8a
    strh r3, [r0, #0xea]
    swpb r0, r2, [r1]
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02039218:
    ldr r1, =0x25a
    add r3, r0, #0x8a
    add r1, r5, r1
    strh r1, [r0, #0xea]
    swpb r0, r2, [r3]
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02039238:
    add r1, r5, #0x25c
    strh r1, [r0, #0xea]
    add r1, r0, #0x8a
    swpb r0, r2, [r1]
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on

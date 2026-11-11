#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02005a04(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    ldrh r1, [r0, #0x4]
    cmp r1, #0x3
    addls pc, pc, r1, lsl #0x2
    b L_02005c14
L_02005a1c:
    b L_02005c14
    b L_02005a2c
    b L_02005c14
    b L_02005b40
L_02005a2c:
    ldrsh r1, [r0, #0xe]
    sub r1, r1, #0x1
    strh r1, [r0, #0xe]
    ldrsh r1, [r0, #0xe]
    cmp r1, #0x0
    addgt sp, sp, #0x4
    ldmgtfd sp!, {r4, r5, r6, r7, lr}
    bxgt lr
    ldrsh r1, [r0, #0x8]
    mov r4, #0x1
    mov r5, #0x0
    add r1, r1, #0x1
    strh r1, [r0, #0x8]
    mov r1, r5
    mov r3, r5
    mov ip, #0x8
    mov r2, #0x10
L_02005a70:
    ldrh r6, [r0, #0xc]
    cmp r6, #0x0
    rsbeq r7, r5, #0xbf
    moveq r6, r7, asr #0x2
    addeq r6, r7, r6, lsr #0x1d
    moveq r7, r6, asr #0x3
    movne r6, r5, asr #0x2
    addne r6, r5, r6, lsr #0x1d
    movne r7, r6, asr #0x3
    ldrsh r6, [r0, #0x8]
    cmp r6, r7
    blt L_02005adc
    sub r6, r6, r7
    cmp r6, #0x8
    movgt r6, ip
    mov r7, r6, lsl #0x4
    mov r6, r7, asr #0x2
    add r6, r7, r6, lsr #0x1d
    add lr, r0, r5
    mov r6, r6, asr #0x3
    rsb r6, r6, #0x10
    add r7, lr, #0x1a
    swpb r6, r6, [r7]
    ldrsb r6, [lr, #0x1a]
    cmp r6, #0x0
    movgt r4, r3
    b L_02005aec
L_02005adc:
    add lr, r0, r5
    add r6, lr, #0x1a
    swpb r4, r2, [r6]
    mov r4, r1
L_02005aec:
    ldrh r6, [r0, #0x6]
    add r5, r5, #0x1
    cmp r6, #0x0
    ldreqsb r6, [lr, #0x1a]
    addeq lr, lr, #0x1a
    rsbeq r6, r6, #0x0
    swpeqb r6, r6, [lr]
    cmp r5, #0xc0
    blt L_02005a70
    cmp r4, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    mov r1, #0x2
    strh r1, [r0, #0x4]
    mov r1, #0x0
    strh r1, [r0, #0x18]
    str r1, [r0, #0x14]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02005b40:
    ldrsh r1, [r0, #0x8]
    mov r4, #0x1
    mov ip, #0x0
    add r1, r1, #0x1
    strh r1, [r0, #0x8]
    mov r1, ip
    mov r2, ip
    mov r3, #0x8
L_02005b60:
    ldrh r5, [r0, #0xc]
    cmp r5, #0x0
    moveq r5, ip, asr #0x2
    addeq r5, ip, r5, lsr #0x1d
    moveq r6, r5, asr #0x3
    rsbne r6, ip, #0xbf
    movne r5, r6, asr #0x2
    addne r5, r6, r5, lsr #0x1d
    movne r6, r5, asr #0x3
    ldrsh r5, [r0, #0x8]
    cmp r5, r6
    blt L_02005bc8
    sub r5, r5, r6
    cmp r5, #0x8
    movgt r5, r3
    mov r6, r5, lsl #0x4
    mov r5, r6, asr #0x2
    add r5, r6, r5, lsr #0x1d
    add lr, r0, ip
    mov r5, r5, asr #0x3
    add r6, lr, #0x1a
    swpb r5, r5, [r6]
    ldrsb r5, [lr, #0x1a]
    cmp r5, #0x10
    movlt r4, r2
    b L_02005bd8
L_02005bc8:
    add lr, r0, ip
    add r5, lr, #0x1a
    swpb r4, r1, [r5]
    mov r4, r1
L_02005bd8:
    ldrh r5, [r0, #0x6]
    add ip, ip, #0x1
    cmp r5, #0x0
    ldreqsb r5, [lr, #0x1a]
    addeq lr, lr, #0x1a
    rsbeq r5, r5, #0x0
    swpeqb r5, r5, [lr]
    cmp ip, #0xc0
    blt L_02005b60
    cmp r4, #0x0
    movne r2, #0x0
    strneh r2, [r0, #0x4]
    movne r1, #0x10
    strneh r1, [r0, #0x18]
    strne r2, [r0, #0x14]
L_02005c14:
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on

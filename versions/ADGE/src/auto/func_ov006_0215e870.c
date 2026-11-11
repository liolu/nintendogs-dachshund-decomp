#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200c488();
extern void func_02035fcc();
extern void func_02035fd8();
extern void func_020a58e4();
extern char data_0214da7c[];
extern char data_0214da84[];
extern char data_0215a044[];
// clang-format off
asm void func_ov006_0215e870(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    mov r9, r1
    ldr r1, [r9, #0x3c]
    mov r10, r0
    mov r0, r1, lsl #0x10
    mov r1, r0, asr #0x10
    mov r0, #0x9
    mov r8, r2
    mov r7, r3
    bl func_0200c488
    ldr r3, [r9, #0x20]
    ldrsb r2, [r10, #0x89]
    mov r1, r3, lsl #0x10
    mov r5, r1, asr #0x10
    mov r11, r0
    cmp r2, r5
    ble L_0215e8c8
    ldr r0, [r9, #0x24]
    cmp r0, #0x0
    movge r0, r0, lsl #0x10
    movge r5, r0, asr #0x10
L_0215e8c8:
    ldr r0, [r9, #0x3c]
    mov r2, r3, lsl #0x10
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    mov r0, #0x9
    mov r6, r2, asr #0x10
    bl func_0200c488
    cmp r0, #0x0
    mvn r4, #0x0
    beq L_0215e918
    ldr r1, [r0, #0x20]
    ldrsb r2, [r10, #0x89]
    mov r1, r1, lsl #0x10
    mov r4, r1, asr #0x10
    cmp r2, r4
    ble L_0215e918
    ldr r0, [r0, #0x24]
    cmp r0, #0x0
    movge r0, r0, lsl #0x10
    movge r4, r0, asr #0x10
L_0215e918:
    cmp r7, #0x0
    beq L_0215e924
    bl func_020a58e4
L_0215e924:
    cmp r8, #0x0
    bne L_0215e9bc
    ldr r3, =data_0214da7c
    mov r1, #0x0
    ldr r0, [r3, #0x0]
    ldr r0, [r0, #0x20]
    ldrsh r0, [r0, #0x26]
    cmp r0, #0x0
    ble L_0215e97c
    ldr r2, =data_0214da84
    mov r0, r1
L_0215e950:
    ldr r7, [r2, #0x0]
    add ip, r1, #0x1
    add r1, r7, r1, lsl #0x2
    str r0, [r1, #0xa4]
    ldr r7, [r3, #0x0]
    mov r1, ip, lsl #0x10
    ldr r7, [r7, #0x20]
    mov r1, r1, asr #0x10
    ldrsh r7, [r7, #0x26]
    cmp r1, r7
    blt L_0215e950
L_0215e97c:
    ldr r1, =data_0214da84
    mov r0, r10
    ldr r1, [r1, #0x0]
    mov r2, #0x0
    str r2, [r1, #0x98]
    bl func_02035fd8
    cmp r11, #0x0
    beq L_0215e9bc
    ldr r1, [r9, #0x3c]
    mov r0, r10
    add r1, r1, #0x2d
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035fcc
    mov r0, r10
    bl func_02035fd8
L_0215e9bc:
    cmp r8, #0x0
    beq L_0215ea6c
    ldr r0, =data_0215a044
    ldr r0, [r0, #0x0]
    ldrsh r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldrsb r0, [r10, #0x89]
    cmp r5, r0
    addeq r0, r0, #0x1
    addeq r1, r10, #0x89
    swpeqb r0, r0, [r1]
    addeq sp, sp, #0x4
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    cmp r4, r0
    addeq r0, r0, #0x1
    addeq r1, r10, #0x89
    swpeqb r0, r0, [r1]
    addeq sp, sp, #0x4
    moveq r0, #0x2
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    sub r0, r0, #0x1
    cmp r5, r0
    addeq sp, sp, #0x4
    moveq r0, #0x3
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    cmp r6, r0
    addeq sp, sp, #0x4
    moveq r0, #0x3
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    cmp r4, r0
    moveq r0, #0x3
    add sp, sp, #0x4
    movne r0, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_0215ea6c:
    mov r0, #0x0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

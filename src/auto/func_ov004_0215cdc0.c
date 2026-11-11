#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffdb08();
extern void func_02027f68();
extern void func_02067ca0();
extern void func_0207ca98();
extern void func_0208dae8();
extern void func_020f47cc();
extern void func_ov004_0215e860();
extern void func_ov004_0215ebac();
extern void func_ov004_0215ecdc();
extern void func_ov004_0215fb1c();
extern char data_0215a078[];
extern char data_ov004_0216e00c[];
extern char data_ov004_0216e03c[];
extern char data_ov004_0216e3c0[];
// clang-format off
asm void func_ov004_0215cdc0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x60
    ldr r2, =data_ov004_0216e3c0
    ldr r3, [r2, #0x0]
    add r0, r3, #0x3000
    ldrb r1, [r0, #0x6cc]
    cmp r1, #0x1
    bne L_0215d0d0
    mvn r1, #0x0
    str r1, [r0, #0x6c8]
    ldr r0, [r2, #0x0]
    mov r3, #0x1
    add r1, r0, #0x3000
    ldr r0, [r1, #0x6c4]
    ldrb r4, [r0, #0x0]
    ldrsh r0, [r0, #0x2]
    mov r4, r4, lsl #0x3
    sub r0, r4, r0
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [r1, #0x394]
    ldr r0, [r2, #0x0]
    add r1, r0, #0x3000
    ldr r0, [r1, #0x6c4]
    ldrb r4, [r0, #0x1]
    ldrsh r0, [r0, #0x4]
    mov r4, r4, lsl #0x3
    sub r0, r4, r0
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [r1, #0x398]
    ldr r0, [r2, #0x0]
    add r1, r0, #0x10
    swpb r0, r3, [r1]
    ldr r0, [r2, #0x0]
    add r1, r0, #0x11
    swpb r0, r3, [r1]
    ldr r1, [r2, #0x0]
    ldrb r0, [r1, #0x10]
    add r2, r1, #0x16
    add r1, r1, #0x10
    cmp r0, #0x0
    beq L_0215ce84
    cmp r0, #0x1
    beq L_0215ce90
    cmp r0, #0x2
    moveq r0, #0xf0
    streqh r0, [r2, #0x0]
    b L_0215ce98
L_0215ce84:
    mov r0, #0x0
    strh r0, [r2, #0x0]
    b L_0215ce98
L_0215ce90:
    mov r0, #0x78
    strh r0, [r2, #0x0]
L_0215ce98:
    ldrb r0, [r1, #0x1]
    cmp r0, #0x0
    beq L_0215cebc
    cmp r0, #0x1
    beq L_0215cec8
    cmp r0, #0x2
    moveq r0, #0xc0
    streqh r0, [r2, #0x2]
    b L_0215ced0
L_0215cebc:
    mov r0, #0x0
    strh r0, [r2, #0x2]
    b L_0215ced0
L_0215cec8:
    mov r0, #0x60
    strh r0, [r2, #0x2]
L_0215ced0:
    ldr r1, =data_ov004_0216e3c0
    ldr r2, [r1, #0x0]
    add r0, r2, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrsh r0, [r0, #0x2]
    strh r0, [r2, #0x12]
    ldr r2, [r1, #0x0]
    add r0, r2, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrsh r0, [r0, #0x4]
    strh r0, [r2, #0x14]
    ldr r3, [r1, #0x0]
    add r0, r3, #0x3000
    ldr r2, [r0, #0x6c4]
    ldrsh r0, [r3, #0x16]
    ldrsh r1, [r2, #0x2]
    cmp r1, r0
    bne L_0215cf30
    ldrsh r1, [r2, #0x4]
    ldrsh r0, [r3, #0x18]
    cmp r1, r0
    moveq r0, #0x4
    swpeqb r0, r0, [r3]
    beq L_0215cf48
L_0215cf30:
    mov r1, #0x0
    ldr r0, =data_ov004_0216e3c0
    str r1, [r3, #0x8]
    ldr r1, [r0, #0x0]
    mov r0, #0x3
    swpb r0, r0, [r1]
L_0215cf48:
    ldr r0, =data_0215a078
    ldr r0, [r0, #0x0]
    ldrsh r0, [r0, #0x2]
    bl func_01ffdb08
    ldr r7, =data_ov004_0216e00c
    mov r8, r0
    add r6, sp, #0x0
    ldmia r7!, {r0, r1, r2, r3}
    stmia r6!, {r0, r1, r2, r3}
    ldmia r7!, {r0, r1, r2, r3}
    stmia r6!, {r0, r1, r2, r3}
    ldmia r7, {r0, r1, r2, r3}
    ldr r5, =data_ov004_0216e03c
    stmia r6, {r0, r1, r2, r3}
    add r4, sp, #0x30
    ldmia r5!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia r5!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia r5, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    mov r0, r8
    mov r1, #0x4
    bl func_02027f68
    ldr r2, =0x1b4e81b5
    mov r1, r0, lsr #0x1f
    smull r0, r4, r2, r0
    mov r4, r4, asr #0x5
    add r4, r1, r4
    cmp r4, #0x5
    movgt r4, #0x5
    bl func_020f47cc
    cmp r0, #0x0
    beq L_0215d044
    ldr r3, =data_ov004_0216e3c0
    ldr r0, =0x10dcd
    ldr r1, [r3, #0x0]
    add r5, sp, #0x0
    add r1, r1, #0x3000
    ldr r6, [r1, #0x6c0]
    add r2, sp, #0x4
    mul r0, r6, r0
    add r6, r0, #0x1
    str r6, [r1, #0x6c0]
    ldr r1, [r2, r4, lsl #0x3]
    ldr r0, [r5, r4, lsl #0x3]
    mov r2, r6, lsl #0x10
    sub r1, r1, r0
    add r1, r1, #0x1
    mov r1, r1, lsl #0x10
    mov r4, r1, lsr #0x10
    mov r1, r2, lsr #0x10
    mul r2, r4, r1
    ldr r1, [r3, #0x0]
    mov r3, r2, lsr #0x10
    add r1, r1, #0x3000
    ldr r2, [r1, #0x6c4]
    mov r1, r3, lsl #0x10
    add r2, r2, #0x2000
    add r0, r0, r1, lsr #0x10
    add r1, r2, #0x2a4
    swpb r0, r0, [r1]
    b L_0215d0b4
L_0215d044:
    ldr r3, =data_ov004_0216e3c0
    ldr r0, =0x10dcd
    ldr r1, [r3, #0x0]
    add r5, sp, #0x30
    add r1, r1, #0x3000
    ldr r6, [r1, #0x6c0]
    add r2, sp, #0x34
    mul r0, r6, r0
    add r6, r0, #0x1
    str r6, [r1, #0x6c0]
    ldr r1, [r2, r4, lsl #0x3]
    ldr r0, [r5, r4, lsl #0x3]
    mov r2, r6, lsl #0x10
    sub r1, r1, r0
    add r1, r1, #0x1
    mov r1, r1, lsl #0x10
    mov r4, r1, lsr #0x10
    mov r1, r2, lsr #0x10
    mul r2, r4, r1
    ldr r1, [r3, #0x0]
    mov r3, r2, lsr #0x10
    add r1, r1, #0x3000
    ldr r2, [r1, #0x6c4]
    mov r1, r3, lsl #0x10
    add r2, r2, #0x2000
    add r0, r0, r1, lsr #0x10
    add r1, r2, #0x2a4
    swpb r0, r0, [r1]
L_0215d0b4:
    bl func_ov004_0215ebac
    bl func_ov004_0215e860
    mov r0, #0x1
    bl func_0208dae8
    add sp, sp, #0x60
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0215d0d0:
    cmp r1, #0x2
    bne L_0215d2a4
    bl func_ov004_0215fb1c
    ldr r0, =data_ov004_0216e3c0
    mov r2, #0x0
    ldr r3, [r0, #0x0]
    mov r1, #0x1
    add r3, r3, #0x3000
    ldr r4, [r3, #0x6c4]
    ldr r3, [r4, #0x8]
    add r3, r4, r3, lsl #0x1
    ldrb r3, [r3, #0xa]
    swpb r3, r3, [r4]
    ldr r3, [r0, #0x0]
    add r3, r3, #0x3000
    ldr r5, [r3, #0x6c4]
    ldr r3, [r5, #0x8]
    add r4, r5, #0x1
    add r3, r5, r3, lsl #0x1
    ldrb r3, [r3, #0xb]
    swpb r3, r3, [r4]
    ldr r3, [r0, #0x0]
    str r2, [r3, #0x20]
    ldr r4, [r0, #0x0]
    add r3, r4, #0x3000
    ldr r3, [r3, #0x6c4]
    add r4, r4, #0x1a
    ldrb r3, [r3, #0x0]
    swpb r3, r3, [r4]
    ldr r4, [r0, #0x0]
    add r3, r4, #0x3000
    ldr r3, [r3, #0x6c4]
    add r4, r4, #0x1b
    ldrb r3, [r3, #0x1]
    swpb r3, r3, [r4]
    ldr r3, [r0, #0x0]
    add r4, r3, #0x10
    swpb r3, r1, [r4]
    ldr r3, [r0, #0x0]
    add r3, r3, #0x11
    swpb r1, r1, [r3]
    ldr r1, [r0, #0x0]
    ldrb r0, [r1, #0x10]
    add r3, r1, #0x16
    add r1, r1, #0x10
    cmp r0, #0x0
    beq L_0215d1a4
    cmp r0, #0x1
    beq L_0215d1ac
    cmp r0, #0x2
    moveq r0, #0xf0
    streqh r0, [r3, #0x0]
    b L_0215d1b4
L_0215d1a4:
    strh r2, [r3, #0x0]
    b L_0215d1b4
L_0215d1ac:
    mov r0, #0x78
    strh r0, [r3, #0x0]
L_0215d1b4:
    ldrb r0, [r1, #0x1]
    cmp r0, #0x0
    beq L_0215d1d8
    cmp r0, #0x1
    beq L_0215d1e4
    cmp r0, #0x2
    moveq r0, #0xc0
    streqh r0, [r3, #0x2]
    b L_0215d1ec
L_0215d1d8:
    mov r0, #0x0
    strh r0, [r3, #0x2]
    b L_0215d1ec
L_0215d1e4:
    mov r0, #0x60
    strh r0, [r3, #0x2]
L_0215d1ec:
    ldr r1, =data_ov004_0216e3c0
    ldr r2, [r1, #0x0]
    add r0, r2, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrsh r0, [r0, #0x2]
    strh r0, [r2, #0x12]
    ldr r2, [r1, #0x0]
    add r0, r2, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrsh r0, [r0, #0x4]
    strh r0, [r2, #0x14]
    ldr r3, [r1, #0x0]
    add r0, r3, #0x3000
    ldr r2, [r0, #0x6c4]
    ldrsh r0, [r3, #0x16]
    ldrsh r1, [r2, #0x2]
    cmp r1, r0
    bne L_0215d24c
    ldrsh r1, [r2, #0x4]
    ldrsh r0, [r3, #0x18]
    cmp r1, r0
    moveq r0, #0x0
    swpeqb r0, r0, [r3]
    beq L_0215d264
L_0215d24c:
    mov r1, #0x0
    ldr r0, =data_ov004_0216e3c0
    str r1, [r3, #0x8]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    swpb r0, r0, [r1]
L_0215d264:
    ldr r2, =data_ov004_0216e3c0
    mvn r3, #0x0
    ldr r1, [r2, #0x0]
    mov r0, #0x19
    add r1, r1, #0x3000
    str r3, [r1, #0x6c8]
    ldr r2, [r2, #0x0]
    mov r1, #0x0
    add r2, r2, #0x3000
    ldr r2, [r2, #0x6c4]
    mov r3, #0x2000
    add r2, r2, #0x264
    bl func_0207ca98
    add sp, sp, #0x60
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0215d2a4:
    add r0, r3, #0x1000
    ldr r0, [r0, #0x2f0]
    cmp r0, #0x0
    bne L_0215d39c
    bl func_ov004_0215ecdc
    cmp r0, #0x0
    addeq sp, sp, #0x60
    ldmeqfd sp!, {r4, r5, r6, r7, r8, lr}
    bxeq lr
    ldr r0, =data_ov004_0216e3c0
    ldr r1, [r0, #0x0]
    ldrb r0, [r1, #0x10]
    add r2, r1, #0x16
    add r1, r1, #0x10
    cmp r0, #0x0
    beq L_0215d2fc
    cmp r0, #0x1
    beq L_0215d308
    cmp r0, #0x2
    moveq r0, #0xf0
    streqh r0, [r2, #0x0]
    b L_0215d310
L_0215d2fc:
    mov r0, #0x0
    strh r0, [r2, #0x0]
    b L_0215d310
L_0215d308:
    mov r0, #0x78
    strh r0, [r2, #0x0]
L_0215d310:
    ldrb r0, [r1, #0x1]
    cmp r0, #0x0
    beq L_0215d334
    cmp r0, #0x1
    beq L_0215d340
    cmp r0, #0x2
    moveq r0, #0xc0
    streqh r0, [r2, #0x2]
    b L_0215d348
L_0215d334:
    mov r0, #0x0
    strh r0, [r2, #0x2]
    b L_0215d348
L_0215d340:
    mov r0, #0x60
    strh r0, [r2, #0x2]
L_0215d348:
    ldr r1, =data_ov004_0216e3c0
    mov r3, #0x0
    ldr r4, [r1, #0x0]
    mov r2, #0x1
    add r0, r4, #0x3000
    ldr r0, [r0, #0x6c4]
    add sp, sp, #0x60
    ldrsh r0, [r0, #0x2]
    strh r0, [r4, #0x12]
    ldr r4, [r1, #0x0]
    add r0, r4, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrsh r0, [r0, #0x4]
    strh r0, [r4, #0x14]
    ldr r0, [r1, #0x0]
    str r3, [r0, #0x8]
    ldr r0, [r1, #0x0]
    add r0, r0, #0x1000
    str r2, [r0, #0x2f0]
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0215d39c:
    ldr r0, [r3, #0x8]
    add r0, r0, #0x1
    str r0, [r3, #0x8]
    ldr r1, [r2, #0x0]
    ldr r0, [r1, #0x8]
    cmp r0, #0x1e
    blt L_0215d3e4
    add r0, r1, #0x3000
    ldrsh r1, [r1, #0x16]
    ldr r0, [r0, #0x6c4]
    mov lr, #0x1
    strh r1, [r0, #0x2]
    ldr r1, [r2, #0x0]
    add r0, r1, #0x3000
    ldrsh r1, [r1, #0x18]
    ldr r0, [r0, #0x6c4]
    strh r1, [r0, #0x4]
    b L_0215d47c
L_0215d3e4:
    mov r0, r0, lsl #0xc
    mov r1, #0x1e000
    bl func_02067ca0
    ldr r5, =data_ov004_0216e3c0
    mov r4, #0x800
    ldr ip, [r5, #0x0]
    mov lr, #0x0
    ldrsh r3, [ip, #0x14]
    ldrsh r6, [ip, #0x18]
    ldrsh r1, [ip, #0x12]
    ldrsh r2, [ip, #0x16]
    sub r6, r6, r3
    mov r7, r6, lsl #0xc
    sub r2, r2, r1
    mov r6, r2, lsl #0xc
    smull r2, r8, r0, r7
    adds r2, r2, r4
    add ip, ip, #0x3000
    smull r7, r6, r0, r6
    adc r0, r8, #0x0
    adds r4, r7, r4
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    add r0, r2, r3, lsl #0xc
    add r2, r0, #0x800
    adc r0, r6, #0x0
    mov r3, r4, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    add r0, r3, r1, lsl #0xc
    add r1, r0, #0x800
    ldr r0, [ip, #0x6c4]
    mov r1, r1, asr #0xc
    strh r1, [r0, #0x2]
    ldr r0, [r5, #0x0]
    mov r1, r2, asr #0xc
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    strh r1, [r0, #0x4]
L_0215d47c:
    cmp lr, #0x0
    ldrne r0, =data_ov004_0216e3c0
    movne r1, #0x0
    ldrne r0, [r0, #0x0]
    addne r0, r0, #0x1000
    strne r1, [r0, #0x2f0]
    add sp, sp, #0x60
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on

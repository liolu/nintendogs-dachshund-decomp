#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_ov019_0215aac8();
extern void func_ov019_0215ad48();
extern void func_ov019_0215ad78();
extern void func_ov019_0215f240();
// clang-format off
asm void func_ov019_0215cb6c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r9, r0
    ldrsh r0, [r9, #0x2c]
    bl func_ov019_0215ad48
    mov r4, r0
    mov r0, r9
    bl func_ov019_0215ad78
    cmp r0, #0x0
    beq L_0215cbb0
    ldrh r2, [r0, #0x20]
    add r1, r0, #0x1
    bic r2, r2, #0x1
    strh r2, [r0, #0x20]
    ldrb r0, [r0, #0x1]
    bic r0, r0, #0x1
    swpb r0, r0, [r1]
L_0215cbb0:
    cmp r4, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r4
    add r1, r9, #0x3c
    bl func_ov019_0215aac8
    mov r0, #0x3
    strh r0, [r9, #0x1e]
    mov r8, #0x0
    add r11, sp, #0x0
    mov r7, r8
    mov r5, r8
    mov r4, r8
    mvn r6, #0x0
L_0215cbec:
    cmp r8, #0x0
    blt L_0215cbfc
    cmp r8, #0x32
    blt L_0215cc04
L_0215cbfc:
    mov r3, r7
    b L_0215cc10
L_0215cc04:
    bl func_ov019_0215f240
    add r0, r0, r8, lsl #0x2
    ldr r3, [r0, #0x4]
L_0215cc10:
    ldrsh r0, [r9, #0x1c]
    cmp r8, r0
    beq L_0215cd30
    cmp r3, #0x0
    beq L_0215cd30
    cmp r3, #0x0
    ldrnesh r0, [r3, #0x24]
    moveq r0, r6
    cmp r0, #0x7
    bne L_0215cd30
    cmp r3, #0x0
    ldrnesh r0, [r3, #0x1e]
    moveq r0, r6
    cmp r0, #0x1
    beq L_0215cc60
    cmp r3, #0x0
    ldrnesh r0, [r3, #0x1e]
    moveq r0, r6
    cmp r0, #0x3
    bne L_0215cd30
L_0215cc60:
    cmp r3, #0x0
    addne r0, r3, #0x3c
    ldmneia r0, {r0, r1, r2}
    stmneia r11, {r0, r1, r2}
    ldr r10, [sp, #0x0]
    ldr r0, [r9, #0x3c]
    ldr r2, [sp, #0x8]
    ldr r1, [r9, #0x44]
    sub r0, r10, r0
    sub r10, r2, r1
    smull r1, ip, r0, r0
    mov r0, #0x800
    adds lr, r1, r0
    smull r2, r1, r10, r10
    adc r10, ip, #0x0
    adds r0, r2, r0
    mov r2, lr, lsr #0xc
    adc r1, r1, #0x0
    mov r0, r0, lsr #0xc
    orr r2, r2, r10, lsl #0x14
    orr r0, r0, r1, lsl #0x14
    add r0, r2, r0
    cmp r0, #0x2400
    bge L_0215cd30
    ldrsh lr, [r3, #0x1c]
    ldr r10, [r9, #0xac]
    mov ip, r5
L_0215cccc:
    add r2, r10, ip, lsl #0x1
    ldrsh r1, [r2, #0x8]
    mvn r0, #0x0
    cmp r1, r0
    streqh lr, [r2, #0x8]
    beq L_0215ccf8
    add r0, ip, #0x1
    mov r0, r0, lsl #0x10
    mov ip, r0, asr #0x10
    cmp ip, #0x8
    blt L_0215cccc
L_0215ccf8:
    ldrsh r1, [r9, #0x1c]
    ldr r0, [r3, #0xac]
    mov ip, r4
L_0215cd04:
    add r10, r0, ip, lsl #0x1
    ldrsh r3, [r10, #0x8]
    mvn r2, #0x0
    cmp r3, r2
    streqh r1, [r10, #0x8]
    beq L_0215cd30
    add r2, ip, #0x1
    mov r2, r2, lsl #0x10
    mov ip, r2, asr #0x10
    cmp ip, #0x8
    blt L_0215cd04
L_0215cd30:
    add r0, r8, #0x1
    mov r0, r0, lsl #0x10
    mov r8, r0, asr #0x10
    cmp r8, #0x32
    blt L_0215cbec
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

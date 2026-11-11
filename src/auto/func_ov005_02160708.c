#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200c3ec();
extern void _s32_div_f();
extern void func_ov005_02160604();
extern char data_0214b47c[];
extern char data_02153704[];
extern char data_ov005_021618c8[];
extern char data_ov005_02161dc4[];
// clang-format off
asm void func_ov005_02160708(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x24
    ldr r1, =data_0214b47c
    ldr r0, =data_ov005_02161dc4
    ldr r1, [r1, #0x0]
    mov r2, #0x0
    ldr r1, [r1, #0x20]
    ldr r3, [r0, #0x0]
    ldrsh r1, [r1, #0x26]
    str r2, [sp, #0x4]
    str r1, [sp, #0x0]
    swpb r1, r2, [r3]
    mvn r1, #0x0
L_02162bc0:
    ldr r3, [r0, #0x0]
    add r3, r3, r2, lsl #0x1
    add r4, r3, #0x1
    ldr r3, [sp, #0x4]
    swpb r3, r3, [r4]
    ldr r3, [r0, #0x0]
    add r3, r3, r2, lsl #0x1
    add r4, r3, #0x2
    ldr r3, [sp, #0x4]
    swpb r3, r3, [r4]
    ldr r3, [r0, #0x0]
    add r4, r3, r2, lsl #0x1
    ldr r3, [sp, #0x4]
    strh r3, [r4, #0x2a]
    ldr r3, [r0, #0x0]
    add r3, r3, r2, lsl #0x1
    add r4, r3, #0x66
    swpb r3, r1, [r4]
    ldr r3, [r0, #0x0]
    add r3, r3, r2, lsl #0x1
    add r4, r3, #0x67
    add r2, r2, #0x1
    cmp r2, #0x14
    swpb r3, r1, [r4]
    blt L_02162bc0
    ldr r0, [sp, #0x0]
    cmp r0, #0x0
    addle sp, sp, #0x24
    ldmlefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxle lr
    mvn r0, #0x0
    str r0, [sp, #0x10]
    mov r0, #0x4
    str r0, [sp, #0x1c]
    mov r0, #0x3
    str r0, [sp, #0x18]
    mov r0, #0x2
    str r0, [sp, #0x14]
    mov r0, #0x0
    str r0, [sp, #0xc]
    mov r0, #0x9
    ldr r4, =data_ov005_02161dc4
    mov r10, #0x1
    str r0, [sp, #0x8]
L_02162c70:
    ldr r1, [sp, #0x4]
    ldr r0, [sp, #0x8]
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0200c3ec
    ldr r9, [sp, #0xc]
    mov r8, r0
L_02162c8c:
    ldr r3, [sp, #0xc]
    cmp r9, #0x1
    mov r0, r3
    moveq r0, r10
    add r0, r8, r0, lsl #0x2
    ldr r11, [r0, #0x20]
    cmp r11, #0x0
    blt L_02162e94
    ldr r1, [r8, #0x2c]
    ldr r7, [r8, #0x30]
    mov r1, r1, lsl #0x10
    mov r0, r7
    mov r1, r1, asr #0x10
    bl func_0200c3ec
    ldr r2, [r4, #0x0]
    mov r6, r0
    ldrb r1, [r2, #0x0]
    mov r0, r11
    ldr r5, [sp, #0x10]
    add r1, r2, r1, lsl #0x1
    add r1, r9, r1
    add r2, r1, #0x66
    swpb r1, r11, [r2]
    ldr r11, [r4, #0x0]
    bl func_ov005_02160604
    ldrb r1, [r11, #0x0]
    cmp r9, #0x0
    add r1, r11, r1, lsl #0x1
    add r2, r9, r1
    ldr r1, =0x11a
    add r1, r2, r1
    swpb r0, r0, [r1]
    bne L_02162d30
    ldr r1, [r4, #0x0]
    ldr r2, [r8, #0x34]
    ldrb r0, [r1, #0x0]
    add r0, r1, r0, lsl #0x1
    add r0, r9, r0
    add r1, r0, #0x8e
    swpb r0, r2, [r1]
    b L_02162d4c
L_02162d30:
    ldr r1, [r4, #0x0]
    ldr r2, [r8, #0x38]
    ldrb r0, [r1, #0x0]
    add r0, r1, r0, lsl #0x1
    add r0, r9, r0
    add r1, r0, #0x8e
    swpb r0, r2, [r1]
L_02162d4c:
    cmp r7, #0x3
    bne L_02162d80
    ldr r0, [r6, #0x24]
    cmp r0, #0x1
    bne L_02162d80
    ldr r1, [r4, #0x0]
    ldrb r0, [r1, #0x0]
    add r0, r1, r0, lsl #0x1
    add r1, r0, r9
    ldrsb r0, [r1, #0x8e]
    add r1, r1, #0x8e
    rsb r0, r0, #0x1
    swpb r0, r0, [r1]
L_02162d80:
    ldr r1, [r6, #0x8]
    mov r0, #0x84
    mul r0, r1, r0
    ldr r1, =data_02153704
    ldr r11, [r4, #0x0]
    ldr r1, [r1, #0x0]
    ldr r1, [r1, #0xc]
    bl _s32_div_f
    add r1, r0, #0x80
    ldrb r0, [r11, #0x0]
    mov r2, #0x64
    add r0, r11, r0, lsl #0x2
    strh r1, [r0, #0xb6]
    ldr r0, =data_02153704
    ldr r1, [r6, #0x10]
    ldr r3, [r0, #0x0]
    mul r0, r1, r2
    ldr r11, [r4, #0x0]
    ldr r1, [r3, #0xc]
    bl _s32_div_f
    add r1, r0, #0x60
    ldrb r0, [r11, #0x0]
    cmp r7, #0x5
    add r0, r11, r0, lsl #0x2
    strh r1, [r0, #0xb8]
    addls pc, pc, r7, lsl #0x2
    b L_02162e28
L_02162dec:
    b L_02162e28
    b L_02162e04
    b L_02162e0c
    b L_02162e14
    b L_02162e1c
    b L_02162e24
L_02162e04:
    ldr r5, [sp, #0xc]
    b L_02162e28
L_02162e0c:
    mov r5, r10
    b L_02162e28
L_02162e14:
    ldr r5, [sp, #0x14]
    b L_02162e28
L_02162e1c:
    ldr r5, [sp, #0x18]
    b L_02162e28
L_02162e24:
    ldr r5, [sp, #0x1c]
L_02162e28:
    ldr r2, [r4, #0x0]
    ldrh r3, [r6, #0x4]
    ldrb r6, [r2, #0x0]
    ldr r1, =0xfa5
    ldr r0, =data_ov005_021618c8
    add r1, r3, r1
    add r6, r2, r6
    ldr r2, =0x142
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x1d
    add r2, r6, r2
    swpb r1, r1, [r2]
    ldr r2, [r4, #0x0]
    add r0, r0, r5, lsl #0x3
    ldrb r1, [r2, #0x0]
    mov r3, r10
    add r6, r2, r1
    ldrb r2, [r6, #0x142]
    ldr r1, =0x106
    ldrb r0, [r2, r0]
    add r1, r6, r1
    swpb r0, r0, [r1]
    ldr r1, [r4, #0x0]
    ldrb r0, [r1, #0x0]
    add r0, r1, r0
    add r1, r0, #0x52
    swpb r0, r5, [r1]
L_02162e94:
    cmp r3, #0x0
    ldrne r1, [r4, #0x0]
    add r9, r9, #0x1
    ldrneb r0, [r1, #0x0]
    addne r0, r0, #0x1
    swpneb r0, r0, [r1]
    cmp r9, #0x2
    blt L_02162c8c
    ldr r0, [sp, #0x4]
    add r1, r0, #0x1
    ldr r0, [sp, #0x0]
    str r1, [sp, #0x4]
    cmp r1, r0
    blt L_02162c70
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

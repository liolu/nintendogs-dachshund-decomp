#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02080d64();
extern void func_02080d78();
extern void func_02080df4();
extern void func_020cd418();
extern char data_02159e40[];
extern char data_02159e4c[];
// clang-format off
asm void func_020cd01c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc4
    mov r10, r0
    add r0, sp, #0x8
    mov r9, r1
    mov r8, r2
    bl func_02080df4
    add r2, sp, #0x8
    mov r4, #0x1
    mov r3, #0x0
L_020cd044:
    add r0, r10, r3
    ldrb r1, [r2, #0x0]
    ldrb r0, [r0, #0x8]
    cmp r1, r0
    movne r4, #0x0
    bne L_020cd074
    add r0, r3, #0x1
    mov r0, r0, lsl #0x10
    mov r3, r0, asr #0x10
    cmp r3, #0x6
    add r2, r2, #0x1
    blt L_020cd044
L_020cd074:
    cmp r4, #0x0
    beq L_020cd240
    bl func_02080d64
    ldr r4, [r10, #0x4]
    ldr r2, [r10, #0x0]
    ldrb r3, [r10, #0x13]
    orr ip, r4, #0x0
    orr lr, r2, #0x0
    str r3, [sp, #0x10]
    ldrb r2, [r10, #0x12]
    cmp r1, ip
    cmpeq r0, lr
    str r2, [sp, #0x14]
    ldrb r11, [r10, #0x11]
    mov r7, #0x0
    str r11, [sp, #0x18]
    ldrb r6, [r10, #0x10]
    ldrb r5, [r10, #0xf]
    ldrb r4, [r10, #0xe]
    bne L_020cd154
    ldr r0, [r9, #0x0]
    mov lr, #0x180
    mul r1, r0, lr
    ldr r0, [r9, #0x4]
    mul lr, r3, lr
    ldr ip, [r9, #0x8]
    sub r0, r0, #0x1
    sub r2, r2, #0x1
    add r0, r1, r0, lsl #0x5
    sub r3, ip, #0x1
    add r1, lr, r2, lsl #0x5
    sub r11, r11, #0x1
    add r2, r3, r0
    add r0, r11, r1
    cmp r2, r0
    movlt r5, r7
    blt L_020cd368
    add r0, sp, #0x10
    mov r1, r9
    bl func_020cd418
    mov r2, #0xe10
    mul r3, r6, r2
    ldr r7, [r8, #0x0]
    mov r1, #0x3c
    mla r3, r5, r1, r3
    mul r2, r7, r2
    ldr r5, [r8, #0x4]
    ldr r6, [r8, #0x8]
    mla r1, r5, r1, r2
    add r5, r6, r1
    add r2, r4, r3
    ldr r1, =0x15180
    sub r2, r5, r2
    mla r7, r0, r1, r2
    mov r5, r7, asr #0x1f
    b L_020cd368
L_020cd154:
    subs r0, r0, lr
    str r0, [sp, #0x0]
    sbc r0, r1, ip
    str r0, [sp, #0x4]
    ldr r0, [sp, #0x0]
    ldr r3, [r9, #0x4]
    subs r0, r0, r7
    ldr r0, [sp, #0x4]
    ldr r2, [sp, #0x10]
    sbcs r0, r0, r7
    ldr r0, [r9, #0x0]
    mov r1, #0x180
    strlt r7, [sp, #0x0]
    strlt r7, [sp, #0x4]
    mul r7, r0, r1
    mul r1, r2, r1
    ldr r0, [sp, #0x14]
    ldr r11, [r9, #0x8]
    ldr r2, [sp, #0x18]
    sub r3, r3, #0x1
    sub r0, r0, #0x1
    sub r11, r11, #0x1
    add r3, r7, r3, lsl #0x5
    add r0, r1, r0, lsl #0x5
    sub r2, r2, #0x1
    add r1, r11, r3
    add r0, r2, r0
    cmp r1, r0
    movlt r1, #0x0
    movlt r2, r1
    blt L_020cd218
    add r0, sp, #0x10
    mov r1, r9
    bl func_020cd418
    mov r2, #0xe10
    mul r3, r6, r2
    ldr r7, [r8, #0x0]
    mov r1, #0x3c
    mla r3, r5, r1, r3
    mul r2, r7, r2
    ldr r5, [r8, #0x4]
    ldr r6, [r8, #0x8]
    mla r1, r5, r1, r2
    add r5, r6, r1
    add r2, r4, r3
    ldr r1, =0x15180
    sub r2, r5, r2
    mla r1, r0, r1, r2
    mov r2, r1, asr #0x1f
L_020cd218:
    ldr r0, [sp, #0x0]
    subs r7, r1, r0
    ldr r0, [sp, #0x4]
    mov r1, #0x0
    sbc r5, r2, r0
    subs r0, r7, r1
    sbcs r0, r5, r1
    movlt r7, r1
    movlt r5, r1
    b L_020cd368
L_020cd240:
    bl func_02080d64
    mov r4, r0
    add r0, sp, #0x20
    mov r5, r1
    bl func_02080d78
    mvn r0, #0x0
    and r1, r4, r0
    str r1, [r10, #0x0]
    and r1, r5, r0
    add r0, r10, #0x8
    str r1, [r10, #0x4]
    bl func_02080df4
    ldr r4, =data_02159e40
    add r1, r10, #0xe
    ldr r0, [r4, #0x8]
    add r2, r10, #0xf
    swpb r0, r0, [r1]
    ldr r1, [r4, #0x4]
    add r3, r10, #0x10
    swpb r1, r1, [r2]
    ldr r0, =data_02159e4c
    ldr r1, [r4, #0x0]
    add r2, r10, #0x11
    swpb r1, r1, [r3]
    add r4, r10, #0x12
    ldr r1, [r0, #0x8]
    add r3, r10, #0x13
    swpb r1, r1, [r2]
    mov r5, #0x180
    ldr r1, [r0, #0x4]
    swpb r1, r1, [r4]
    ldr r1, [r0, #0x0]
    swpb r1, r1, [r3]
    ldr r3, [r0, #0x4]
    ldr r1, [r9, #0x8]
    ldr r11, [r9, #0x0]
    sub r2, r1, #0x1
    ldr r4, [r0, #0x0]
    mul r1, r11, r5
    mul r5, r4, r5
    ldr r7, [r9, #0x4]
    ldr r6, [r0, #0x8]
    sub r4, r7, #0x1
    add r7, r1, r4, lsl #0x5
    sub r3, r3, #0x1
    sub r4, r6, #0x1
    add r1, r5, r3, lsl #0x5
    add r2, r2, r7
    add r1, r4, r1
    cmp r2, r1
    movlt r7, #0x0
    movlt r5, r7
    blt L_020cd368
    mov r1, r9
    bl func_020cd418
    ldr r2, =data_02159e40
    ldr r4, [r8, #0x0]
    mov r1, #0xe10
    ldr r3, [r2, #0x0]
    mul r5, r4, r1
    mul r4, r3, r1
    ldr r3, [r2, #0x4]
    ldr r6, [r8, #0x4]
    mov r1, #0x3c
    mla r5, r6, r1, r5
    mla r1, r3, r1, r4
    ldr r6, [r8, #0x8]
    ldr r2, [r2, #0x8]
    add r3, r6, r5
    add r2, r2, r1
    ldr r1, =0x15180
    sub r2, r3, r2
    mla r7, r0, r1, r2
    mov r5, r7, asr #0x1f
L_020cd368:
    mov r1, #0x0
    subs r0, r1, r7
    sbcs r0, r1, r5
    blt L_020cd3f8
    mov r7, r1
    mov r5, r1
    bl func_02080d64
    mov r4, r0
    add r0, sp, #0x70
    mov r6, r1
    bl func_02080d78
    mvn r0, #0x0
    and r1, r4, r0
    str r1, [r10, #0x0]
    and r0, r6, r0
    str r0, [r10, #0x4]
    add r0, r10, #0x8
    bl func_02080df4
    ldr r0, [r8, #0x8]
    add r1, r10, #0xe
    swpb r0, r0, [r1]
    add r1, r10, #0xf
    ldr r0, [r8, #0x4]
    add r2, r10, #0x10
    swpb r0, r0, [r1]
    add r1, r10, #0x11
    ldr r0, [r8, #0x0]
    add r3, r10, #0x12
    swpb r0, r0, [r2]
    add r2, r10, #0x13
    ldr r0, [r9, #0x8]
    swpb r0, r0, [r1]
    ldr r0, [r9, #0x4]
    swpb r0, r0, [r3]
    ldr r0, [r9, #0x0]
    swpb r0, r0, [r2]
L_020cd3f8:
    mov r0, r7
    mov r1, r5
    add sp, sp, #0xc4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

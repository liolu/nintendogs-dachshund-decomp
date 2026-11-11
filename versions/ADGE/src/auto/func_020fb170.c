#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02131628[];
extern char data_027c0bb8[];
extern char data_027c0bbc[];
extern char data_027c0bc0[];
extern char data_027c0bc4[];
// clang-format off
asm void func_020fb170(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    ldr r0, =data_027c0bb8
    ldrsb r2, [r0, #0x0]
    cmp r2, #0x3
    beq L_020fb190
    cmp r2, #0x1
    bne L_020fb1d0
L_020fb190:
    mov r0, #0x3
    mul r1, r2, r0
    ldr r3, =data_02131628
    ldr r2, =data_027c0bbc
    ldrb r0, [r3, r1]
    add r3, r3, r1
    add r1, r2, #0x1
    swpb r0, r0, [r2]
    add r2, r2, #0x2
    ldrb r0, [r3, #0x1]
    add sp, sp, #0xc
    swpb r0, r0, [r1]
    ldrb r0, [r3, #0x2]
    swpb r0, r0, [r2]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
L_020fb1d0:
    ldr r0, =data_027c0bc0
    ldr r1, [r0, #0x0]
    cmp r1, #0x1e
    mov r2, r1, lsl #0x7
    subhs r0, r1, #0x1e
    movhs r2, r0, lsl #0x7
    ldr r0, =data_027c0bc4
    ldr r0, [r0, #0x0]
    cmp r0, #0x6
    bne L_020fb29c
    cmp r1, #0x1e
    bhs L_020fb250
    ldr r11, =data_02131628
    add r3, sp, #0x1
    ldrb r10, [r11, #0xa]
    ldrb r9, [r11, #0xb]
    add r4, sp, #0x2
    swpb r10, r10, [r3]
    ldrb r6, [r11, #0x9]
    add lr, sp, #0x0
    ldrb r8, [r11, #0x0]
    swpb r6, r6, [lr]
    swpb r3, r9, [r4]
    add r5, sp, #0x3
    ldrb r7, [r11, #0x1]
    swpb r3, r8, [r5]
    add ip, sp, #0x4
    ldrb r6, [r11, #0x2]
    swpb r3, r7, [ip]
    add lr, sp, #0x5
    swpb r3, r6, [lr]
    b L_020fb29c
L_020fb250:
    ldr r11, =data_02131628
    add r3, sp, #0x1
    ldrb r10, [r11, #0x1]
    ldrb r9, [r11, #0x2]
    add ip, sp, #0x2
    swpb r10, r10, [r3]
    ldrb r8, [r11, #0x3]
    swpb r3, r9, [ip]
    add lr, sp, #0x3
    ldrb r5, [r11, #0x0]
    add r6, sp, #0x0
    ldrb r7, [r11, #0x4]
    swpb r5, r5, [r6]
    swpb r3, r8, [lr]
    add r4, sp, #0x4
    ldrb r6, [r11, #0x5]
    swpb r3, r7, [r4]
    add r5, sp, #0x5
    swpb r3, r6, [r5]
L_020fb29c:
    cmp r0, #0x12
    bne L_020fb348
    cmp r1, #0x1e
    bhs L_020fb2fc
    ldr r0, =data_02131628
    add r1, sp, #0x0
    ldrb lr, [r0, #0x3]
    ldrb ip, [r0, #0x4]
    ldrb r11, [r0, #0x5]
    ldrb r10, [r0, #0x6]
    ldrb r9, [r0, #0x7]
    ldrb r8, [r0, #0x8]
    swpb r0, lr, [r1]
    add r3, sp, #0x1
    swpb r0, ip, [r3]
    add r4, sp, #0x2
    swpb r0, r11, [r4]
    add r5, sp, #0x3
    swpb r0, r10, [r5]
    add r6, sp, #0x4
    swpb r0, r9, [r6]
    add r7, sp, #0x5
    swpb r0, r8, [r7]
    b L_020fb348
L_020fb2fc:
    ldr r0, =data_02131628
    add r1, sp, #0x0
    ldrb lr, [r0, #0x6]
    ldrb ip, [r0, #0x7]
    ldrb r11, [r0, #0x8]
    ldrb r10, [r0, #0x9]
    ldrb r9, [r0, #0xa]
    ldrb r8, [r0, #0xb]
    swpb r0, lr, [r1]
    add r3, sp, #0x1
    swpb r0, ip, [r3]
    add r4, sp, #0x2
    swpb r0, r11, [r4]
    add r5, sp, #0x3
    swpb r0, r10, [r5]
    add r6, sp, #0x4
    swpb r0, r9, [r6]
    add r7, sp, #0x5
    swpb r0, r8, [r7]
L_020fb348:
    ldr r6, =data_027c0bbc
    add r8, sp, #0x3
    add r7, sp, #0x0
    rsb r5, r2, #0x1000
    mov r9, #0x0
    mov r1, #0x1f
L_020fb360:
    ldrb r0, [r8, #0x0]
    ldrb r4, [r7, #0x0]
    add r9, r9, #0x1
    mul r3, r0, r2
    mla r0, r4, r5, r3
    mov r0, r0, asr #0xc
    cmp r0, #0x1f
    movgt r0, r1
    swpb r0, r0, [r6]
    cmp r9, #0x3
    add r8, r8, #0x1
    add r7, r7, #0x1
    add r6, r6, #0x1
    blt L_020fb360
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

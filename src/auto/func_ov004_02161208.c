#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern char data_ov004_0216ddcc[];
extern char data_ov004_0216dde8[];
extern char data_ov004_0216e3c0[];
// clang-format off
asm void func_ov004_02161208(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r1, #0x0
    add r0, sp, #0x10
    mov r9, r1
L_0216121c:
    str r9, [r0, r1, lsl #0x2]
    add r1, r1, #0x1
    cmp r1, #0x2
    blt L_0216121c
    ldr r0, =data_ov004_0216dde8
    ldrb r4, [r0, #0x8]
    add ip, sp, #0x10
    ldr r1, =data_ov004_0216ddcc
    ldr r0, =data_ov004_0216e3c0
    mov r2, #0x0
    str r2, [sp, #0xc]
    ldr r11, =0x3b1
L_0216124c:
    ldr r7, [sp, #0xc]
    mov r2, r7
    str r2, [sp, #0x0]
L_02161258:
    ldr r8, [sp, #0xc]
    mov r2, r8
    str r2, [sp, #0x4]
    ldr r2, [sp, #0x0]
    mov r2, r2, lsl #0x1
    str r2, [sp, #0x8]
L_02161270:
    ldr r2, [r0, #0x0]
    ldr lr, [sp, #0xc]
    add r2, r2, r9, lsl #0x2
    add r2, r2, #0x3000
    ldr r2, [r2, #0x408]
    cmp r4, #0x0
    add r3, r2, #0xc
    ldr r2, [sp, #0x8]
    add r3, r3, r2
    ldr r2, [sp, #0x4]
    add r6, r3, r2
    ldrh r5, [r3, r2]
    ble L_02161328
L_021612a4:
    ldr r2, [r0, #0x0]
    add r3, r2, lr, lsl #0x1
    add r3, r3, #0x1000
    ldrh r3, [r3, #0x9a]
    cmp r5, r3
    bne L_0216131c
    add r10, r2, lr, lsl #0x2
    ldr r3, [ip, lr, lsl #0x2]
    ldrb r2, [r1, r9, lsl #0x1]
    add r10, r10, r3, lsl #0x1
    add r10, r10, #0x3000
    add r2, r8, r2
    add r10, r10, #0x3b0
    swpb r2, r2, [r10]
    add r2, r1, r9, lsl #0x1
    ldrb r2, [r2, #0x1]
    ldr r10, [r0, #0x0]
    add r2, r7, r2
    add r10, r10, lr, lsl #0x2
    add r3, r10, r3, lsl #0x1
    add r3, r3, #0x3000
    add r3, r3, r11
    swpb r2, r2, [r3]
    ldr r2, [ip, lr, lsl #0x2]
    add r2, r2, #0x1
    str r2, [ip, lr, lsl #0x2]
    ldr r2, [r0, #0x0]
    add r2, r2, #0xc00
    ldrh r2, [r2, #0x1a]
    strh r2, [r6, #0x0]
L_0216131c:
    add lr, lr, #0x1
    cmp lr, r4
    blt L_021612a4
L_02161328:
    ldr r2, [sp, #0x4]
    add r8, r8, #0x1
    add r2, r2, #0x2
    cmp r8, #0x20
    str r2, [sp, #0x4]
    blt L_02161270
    ldr r2, [sp, #0x0]
    add r7, r7, #0x1
    add r2, r2, #0x20
    cmp r7, #0x18
    str r2, [sp, #0x0]
    blt L_02161258
    add r9, r9, #0x1
    cmp r9, #0x4
    blt L_0216124c
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02006c00();
extern void func_020893d0();
extern void func_02089418();
extern void func_0208948c();
extern void func_020894b4();
extern void func_020894dc();
// clang-format off
asm void func_020b20ac(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r10, r1
    ldr r1, [sp, #0x40]
    mov r4, r0
    ldr r11, [sp, #0x44]
    bl func_0208948c
    ldrb r8, [r0, #0x0]
    ldrb r5, [r0, #0x1]
    ldrh r0, [sp, #0x38]
    cmp r8, #0x0
    moveq r8, #0x100
    sub r2, sp, #0x4
    strh r0, [r2, #0x0]
    mov r1, r8
    ldmia r2, {r0}
    bl func_02089418
    ldrh r1, [sp, #0x3c]
    sub r2, sp, #0x4
    mov r7, r0
    strh r1, [r2, #0x0]
    mov r1, r5
    ldmia r2, {r0}
    bl func_020893d0
    mov r6, r0
    cmp r7, #0x100
    bge L_020b2134
    cmp r6, #0xc0
    bge L_020b2134
    adds r0, r7, r8
    bmi L_020b2134
    adds r0, r6, r5
    bpl L_020b2148
L_020b2134:
    add sp, sp, #0xc
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
L_020b2148:
    ldr r1, [sp, #0x40]
    mov r0, r4
    bl func_020894dc
    mov r8, r0
    ldr r1, [sp, #0x40]
    mov r0, r4
    bl func_020894b4
    mov r5, r0
    cmp r8, #0x0
    mov r9, #0x0
    ble L_020b2220
    ldr r0, [sp, #0x48]
    add r4, sp, #0x4
    mov r0, r0, lsl #0xa
    str r0, [sp, #0x0]
L_020b2184:
    ldr r2, [r5, #0x0]
    ldr r1, [r5, #0x4]
    mov r0, #0x400
    str r2, [sp, #0x4]
    str r1, [sp, #0x8]
    ldrh r1, [r5, #0x8]
    ldrh r2, [sp, #0x8]
    rsb r0, r0, #0x0
    add r1, r1, r11
    and r0, r2, r0
    orr r0, r0, r1
    strh r0, [sp, #0x8]
    ldrh r0, [sp, #0x8]
    bic r1, r0, #0xc00
    ldr r0, [sp, #0x0]
    orr r0, r1, r0
    strh r0, [sp, #0x8]
    ldr r2, [r4, #0x0]
    mov r0, r2, lsl #0x7
    add r1, r7, r0, lsr #0x17
    ldr r0, =0xfe00ffff
    and r2, r2, r0
    ldr r0, =0x1ff
    and r0, r1, r0
    orr r0, r2, r0, lsl #0x10
    str r0, [r4, #0x0]
    ldrb r0, [sp, #0x4]
    add r0, r0, r6
    swpb r0, r0, [r4]
    ldrh r0, [r10, #0x2]
    cmp r0, #0x78
    bhi L_020b2210
    mov r0, r10
    mov r1, r4
    bl func_02006c00
L_020b2210:
    add r9, r9, #0x1
    cmp r9, r8
    add r5, r5, #0xc
    blt L_020b2184
L_020b2220:
    mov r0, r8
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on

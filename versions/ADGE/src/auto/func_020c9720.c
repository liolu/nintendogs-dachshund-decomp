#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020038a8();
extern void func_0206cbf8();
extern char data_02142be8[];
// clang-format off
asm void func_020c9720(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r6, r1
    mov r1, #0x24
    mul r1, r6, r1
    str r0, [sp, #0x0]
    mov r5, r2
    bl func_020038a8
    str r0, [sp, #0x4]
    cmp r6, #0x0
    mov r4, #0x0
    ble L_020c980c
    mov r9, r0
    mov r11, r4
    mov r8, r4
    str r4, [sp, #0x8]
    mov r7, #0x1000
L_020c9764:
    ldr r0, [r5, #0x4]
    ldr r10, [sp, #0x8]
    cmp r0, #0x0
    beq L_020c97a8
    ldrb r1, [r0, #0x17]
    ldr r0, [sp, #0x0]
    mov r1, r1, lsl #0x1
    add r1, r1, #0x1c
    bic r10, r1, #0x3
    mov r1, r10
    bl func_020038a8
    mov r2, r10
    mov r10, r0
    str r11, [sp, #0xc]
    ldr r0, [sp, #0xc]
    mov r1, r10
    bl func_0206cbf8
L_020c97a8:
    ldr r0, =data_02142be8
    str r8, [r9, #0x0]
    ldrsh r2, [r0, #0x0]
    add r0, r4, #0x1
    mov r1, r0, lsl #0x10
    ldr r0, =data_02142be8
    strh r2, [r9, #0x4]
    ldrsh r0, [r0, #0x0]
    mov r4, r1, asr #0x10
    add r1, r9, #0x14
    strh r0, [r9, #0x6]
    str r7, [r9, #0x8]
    str r5, [r9, #0xc]
    str r10, [r9, #0x10]
    swpb r0, r8, [r1]
    add r1, r9, #0x15
    swpb r0, r8, [r1]
    cmp r4, r6
    strh r8, [r9, #0x16]
    strh r8, [r9, #0x18]
    strh r8, [r9, #0x1a]
    str r7, [r9, #0x1c]
    str r8, [r9, #0x20]
    add r9, r9, #0x24
    blt L_020c9764
L_020c980c:
    ldr r0, [sp, #0x4]
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

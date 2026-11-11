#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020038a8();
extern void func_0206cbf8();
// clang-format off
asm void func_020c9518(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r8, r2
    str r1, [sp, #0x4]
    mov r1, r8, lsl #0x5
    str r0, [sp, #0x0]
    mov r7, r3
    ldr r6, [sp, #0x38]
    bl func_020038a8
    mov r5, r0
    cmp r8, #0x0
    mov r4, #0x0
    ble L_020c95ec
    str r4, [sp, #0xc]
    mov r9, r4
    str r4, [sp, #0x8]
    mov r11, #0x1000
L_020c955c:
    ldr r0, [r7, #0x4]
    ldr r10, [sp, #0x8]
    cmp r0, #0x0
    beq L_020c95a4
    ldrb r1, [r0, #0x18]
    ldr r0, [sp, #0x0]
    mov r1, r1, lsl #0x1
    add r1, r1, #0x1c
    bic r10, r1, #0x3
    mov r1, r10
    bl func_020038a8
    ldr r1, [sp, #0xc]
    mov r2, r10
    str r1, [sp, #0x10]
    mov r10, r0
    ldr r0, [sp, #0x10]
    mov r1, r10
    bl func_0206cbf8
L_020c95a4:
    add r2, r5, r4, lsl #0x5
    swpb r0, r9, [r2]
    add r1, r2, #0x1
    swpb r0, r9, [r1]
    add r4, r4, #0x1
    strh r9, [r2, #0x2]
    strh r9, [r2, #0x4]
    strh r9, [r2, #0x6]
    str r11, [r2, #0x8]
    ldr r0, [sp, #0x4]
    str r9, [r2, #0xc]
    strh r0, [r2, #0x10]
    strh r9, [r2, #0x12]
    str r7, [r2, #0x14]
    str r10, [r2, #0x18]
    str r6, [r2, #0x1c]
    cmp r4, r8
    blt L_020c955c
L_020c95ec:
    mov r0, r5
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

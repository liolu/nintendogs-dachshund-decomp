#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020977a0();
extern void func_020978b8();
// clang-format off
asm void func_020976e8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r10, r1
    mov r11, #0x0
    mov r1, #0x1
    str r0, [sp, #0x0]
    mov r8, r11
    strh r10, [sp, #0x6]
    strh r1, [sp, #0x8]
    mov r9, #0x10000
    add r7, sp, #0x4
    add r5, sp, #0xe
    mov r6, #0x2
    add r4, sp, #0x10
L_02097720:
    swpb r0, r8, [r4]
    mov r1, r7
    add r0, sp, #0x6
    mov r2, r6
    mov r3, r5
    strh r10, [sp, #0xe]
    bl func_020978b8
    swpb r0, r8, [r4]
    add r1, sp, #0xa
    mov r0, r7
    mov r2, r6
    mov r3, r5
    bl func_020977a0
    ldrsh r0, [sp, #0xa]
    subs r0, r0, r10
    rsbmi r0, r0, #0x0
    cmp r0, r9
    movlt r9, r0
    add r0, r8, #0x1
    mov r0, r0, lsl #0x18
    movlt r11, r8
    mov r8, r0, asr #0x18
    cmp r8, #0x59
    blt L_02097720
    ldr r0, [sp, #0x0]
    mov r1, #0x0
    strh r1, [r0, #0x0]
    add r1, r0, #0x2
    swpb r0, r11, [r1]
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

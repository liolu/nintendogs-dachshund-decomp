#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void _u32_div_f();
extern void func_020f7f24();
extern char data_02147400[];
extern char data_021558d8[];
// clang-format off
asm void func_020f82dc(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    ldr r4, =data_02147400
    ldr r6, =0xcccccccd
    ldr r5, [r4, #0x0]
    mov r4, r2
    umull r2, r8, r5, r6
    add r10, r0, #0xc
    mov r8, r8, lsr #0x5
    add r6, r1, #0xc
    mov r0, r4
    mov r1, r8
    mov r7, r3
    bl _u32_div_f
    cmp r4, r7
    mul r9, r0, r8
    addhs sp, sp, #0xc
    ldmhsfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxhs lr
    cmp r4, r5
    addhs sp, sp, #0xc
    ldmhsfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxhs lr
    cmp r7, r5
    addhi sp, sp, #0xc
    ldmhifd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxhi lr
    ldr r1, =data_021558d8
    mov r2, r0, lsl #0x2
    add r0, r1, r0, lsl #0x2
    ldrh r3, [r1, r2]
    ldrh r2, [r0, #0x2]
    mov r1, r9, lsr #0x1
    ldr r0, [sp, #0x30]
    add r1, r1, #0x4
    bic r7, r7, #0x1
    strh r3, [sp, #0x0]
    strh r2, [sp, #0x2]
    cmp r9, r7
    add r5, sp, #0x0
    add r10, r10, r1
    add r6, r6, r0
    addhs sp, sp, #0xc
    ldmhsfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxhs lr
    bic r8, r4, #0x1
    add r11, sp, #0x4
    mov r4, #0x2
L_02097c18:
    mov r0, r10
    mov r1, r11
    mov r2, r4
    mov r3, r5
    bl func_020f7f24
    cmp r9, r8
    add r10, r10, #0x1
    blo L_02097c58
    ldrsh r0, [sp, #0x4]
    add r1, r6, #0x1
    mov r0, r0, asr #0x8
    swpb r0, r0, [r6]
    add r6, r6, #0x2
    ldrsh r0, [sp, #0x6]
    mov r0, r0, asr #0x8
    swpb r0, r0, [r1]
L_02097c58:
    add r9, r9, #0x2
    cmp r9, r7
    blo L_02097c18
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

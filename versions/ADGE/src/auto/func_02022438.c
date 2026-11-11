#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02022a80();
extern void func_0208129c();
extern char data_02139ae4[];
extern char data_02139af0[];
extern char data_02139c20[];
extern char data_0214da84[];
extern char data_02150e58[];
extern char data_0215a02c[];
// clang-format off
asm void func_02022438(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x6c
    ldr r1, =data_02139af0
    add r3, sp, #0x18
    mov r7, r0
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r4, =data_02139ae4
    add r3, sp, #0x24
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r4, =data_02139c20
    add r3, sp, #0x30
    mov r2, #0x4
L_02022470:
    ldrh r1, [r4], #0x2
    ldrh r0, [r4], #0x2
    subs r2, r2, #0x1
    strh r1, [r3], #0x2
    strh r0, [r3], #0x2
    bne L_02022470
    ldrh r0, [r4, #0x0]
    strh r0, [r3, #0x0]
    bl func_02022a80
    ldr r0, [r7, #0x9e8]
    ldr r1, [sp, #0x18]
    ldr r0, [r0, #0x8]
    ldr r4, =data_0214da84
    smull r5, r2, r1, r0
    mov r3, #0x800
    adds r5, r5, r3
    ldr r1, [r4, #0x0]
    adc r2, r2, #0x0
    mov r5, r5, lsr #0xc
    orr r5, r5, r2, lsl #0x14
    add r2, r1, #0x7000
    str r5, [r2, #0x3c8]
    ldr r5, [sp, #0x1c]
    ldr r2, =0x73c8
    smull r8, r6, r5, r0
    adds r8, r8, r3
    adc r5, r6, #0x0
    mov r6, r8, lsr #0xc
    add r1, r1, r2
    orr r6, r6, r5, lsl #0x14
    str r6, [r1, #0x4]
    ldr r5, [sp, #0x20]
    ldr r2, =0x73d4
    smull r6, r0, r5, r0
    adds r5, r6, r3
    adc r0, r0, #0x0
    mov r5, r5, lsr #0xc
    orr r5, r5, r0, lsl #0x14
    str r5, [r1, #0x8]
    ldr r0, [r7, #0x9e8]
    ldr r6, [r4, #0x0]
    ldr r0, [r0, #0x8]
    add r1, r6, r2
    ldr r5, [sp, #0x24]
    add r2, r6, #0x7000
    smull r8, r6, r5, r0
    adds r8, r8, r3
    adc r5, r6, #0x0
    mov r6, r8, lsr #0xc
    orr r6, r6, r5, lsl #0x14
    str r6, [r2, #0x3d4]
    ldr r5, [sp, #0x28]
    ldr r2, =data_02150e58
    smull r8, r6, r5, r0
    adds r8, r8, r3
    adc r5, r6, #0x0
    mov r6, r8, lsr #0xc
    orr r6, r6, r5, lsl #0x14
    str r6, [r1, #0x4]
    ldr r6, [sp, #0x2c]
    add r5, r7, #0x2dc
    smull r8, r0, r6, r0
    adds r3, r8, r3
    adc r0, r0, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    str r3, [r1, #0x8]
    ldr r0, [r4, #0x0]
    ldr r1, [r2, #0x4c]
    add r4, r0, #0x7000
    str r1, [sp, #0x44]
    ldr r1, [r2, #0x58]
    ldr r0, [r2, #0x64]
    str r1, [sp, #0x48]
    str r0, [sp, #0x4c]
    ldr r1, [r2, #0x50]
    ldr r0, [r2, #0x5c]
    str r1, [sp, #0x50]
    str r0, [sp, #0x54]
    ldr r1, [r2, #0x68]
    ldr r0, [r2, #0x54]
    str r1, [sp, #0x58]
    str r0, [sp, #0x5c]
    ldr r1, [r2, #0x60]
    ldr r0, [r2, #0x6c]
    add r3, sp, #0x0
    str r1, [sp, #0x60]
    str r0, [sp, #0x64]
    ldmia r5, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r5, sp, #0xc
    ldmia r3, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
    ldr r0, [r4, #0x3c8]
    add r1, sp, #0x44
    mov r2, r3
    bl func_01ff832c
    ldr r0, =data_0214da84
    add r2, sp, #0x0
    ldr r0, [r0, #0x0]
    add r1, sp, #0x50
    add r0, r0, #0x7000
    ldr r0, [r0, #0x3cc]
    mov r3, r2
    bl func_01ff832c
    ldr r0, =data_0214da84
    add r2, sp, #0x0
    ldr r0, [r0, #0x0]
    add r1, sp, #0x5c
    add r0, r0, #0x7000
    ldr r0, [r0, #0x3d0]
    mov r3, r2
    bl func_01ff832c
    ldr r0, =data_0214da84
    mov r2, r5
    ldr r0, [r0, #0x0]
    add r1, sp, #0x44
    add r0, r0, #0x7000
    ldr r0, [r0, #0x3d4]
    mov r3, r2
    bl func_01ff832c
    ldr r0, =data_0214da84
    mov r2, r5
    ldr r0, [r0, #0x0]
    add r1, sp, #0x50
    add r0, r0, #0x7000
    ldr r0, [r0, #0x3d8]
    mov r3, r2
    bl func_01ff832c
    ldr r0, =data_0214da84
    mov r2, r5
    ldr r0, [r0, #0x0]
    add r1, sp, #0x5c
    add r0, r0, #0x7000
    ldr r0, [r0, #0x3dc]
    mov r3, r2
    bl func_01ff832c
    mov r6, #0x0
    ldr r9, =data_0214da84
    ldr r8, =data_0215a02c
    add r4, sp, #0x30
    add r11, sp, #0x0
    mov r5, r6
L_020226ac:
    ldr r0, [r8, #0x0]
    mov r1, r6, lsl #0x1
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldrsh r1, [r4, r1]
    ldr r10, [r9, #0x0]
    moveq r0, r5
    mov r2, r11
    bl func_0208129c
    add r1, r10, r6, lsl #0x2
    add r1, r1, #0x7000
    str r0, [r1, #0x3e0]
    ldr r0, [r9, #0x0]
    mov r1, r6, lsl #0x2
    add r0, r0, r6, lsl #0x2
    add r0, r0, #0x7000
    ldr r2, [r0, #0x3e0]
    cmp r2, #0x0
    beq L_020227bc
    ldr r0, [r7, #0x9e8]
    cmp r6, #0x2
    ldr r0, [r0, #0x8]
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [r2, #0x54]
    bne L_020227bc
    ldr r0, [r9, #0x0]
    ldr lr, [sp, #0xc]
    add r0, r0, r1
    add r0, r0, #0x7000
    ldr r0, [r0, #0x3e0]
    mov ip, #0x0
    ldr r3, [r0, #0x18]
    mov r2, #0x19
    ldr r10, [r3, #0x0]
    mov r3, #0x800
    ldr r10, [r10, #0x4]
    add r10, lr, r10
    str r10, [r0, #0x20]
    ldr r10, [r0, #0x18]
    ldr lr, [sp, #0x10]
    ldr r10, [r10, #0x0]
    ldr r10, [r10, #0x8]
    add r10, lr, r10
    str r10, [r0, #0x24]
    ldr r10, [r0, #0x18]
    ldr lr, [sp, #0x14]
    ldr r10, [r10, #0x0]
    ldr r10, [r10, #0xc]
    add r10, lr, r10
    str r10, [r0, #0x28]
    ldr r10, [r7, #0x9e8]
    ldr r0, [r9, #0x0]
    ldr lr, [r10, #0x8]
    add r0, r0, r1
    umull r10, r1, lr, r2
    adds r3, r10, r3
    mla r1, lr, ip, r1
    mov r10, lr, asr #0x1f
    mla r1, r10, r2, r1
    add r2, r0, #0x7000
    adc r0, r1, #0x0
    mov r1, r3, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    mov r0, r1, lsl #0x10
    ldr r1, [r2, #0x3e0]
    mov r0, r0, asr #0x10
    str r0, [r1, #0x50]
L_020227bc:
    add r0, r6, #0x1
    mov r0, r0, lsl #0x10
    mov r6, r0, asr #0x10
    cmp r6, #0x9
    blt L_020226ac
    ldr r0, =data_0214da84
    mov r2, #0x1
    ldr r0, [r0, #0x0]
    add r1, r0, #0xc
    swpb r0, r2, [r1]
    add sp, sp, #0x6c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

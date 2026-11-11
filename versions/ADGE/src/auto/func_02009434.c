#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02028120();
extern void func_0208129c();
extern char data_0215a02c[];
// clang-format off
asm void func_02009434(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    ldr r5, [sp, #0x34]
    mov r9, r0
    mov r8, r1
    mov r7, r2
    mov r6, r3
    mov r4, #0x0
L_02009454:
    add r0, r9, r4, lsl #0x2
    ldr r0, [r0, #0x8fc]
    cmp r0, #0x0
    beq L_0200947c
    add r0, r4, #0x1
    mov r0, r0, lsl #0x10
    mov r4, r0, asr #0x10
    cmp r4, #0x7
    blt L_02009454
    mvn r4, #0x0
L_0200947c:
    mvn r0, #0x0
    cmp r4, r0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r0, =data_0215a02c
    mov r1, r8
    ldr r0, [r0, #0x0]
    add r2, r9, #0x2a0
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    moveq r0, #0x0
    bl func_0208129c
    add r10, r9, r4, lsl #0x2
    str r0, [r10, #0x8fc]
    add lr, r9, r4, lsl #0x1
    add r0, lr, #0x800
    ldr r11, =0x82a
    add ip, r9, r4
    strh r8, [r0, #0x1c]
    add r8, ip, r11
    ldr r2, =0x838
    swpb r7, r7, [r8]
    ldr r1, =0x831
    add r2, ip, r2
    add r7, ip, r1
    swpb r1, r6, [r7]
    ldr r3, =0x83f
    ldr r1, [sp, #0x28]
    ldr r10, [sp, #0x30]
    swpb r1, r1, [r2]
    add r2, ip, r3
    ldr r1, [sp, #0x38]
    cmp r10, #0x0
    swpb r1, r1, [r2]
    ldrsh r1, [sp, #0x2c]
    strh r1, [r0, #0x46]
    beq L_02009534
    mov r0, #0xc
    mul r3, r4, r0
    ldr r0, =0x854
    add r1, r9, r3
    add r6, r1, r0
    ldmia r10, {r0, r1, r2}
    stmia r6, {r0, r1, r2}
    b L_02009550
L_02009534:
    mov r0, #0xc
    mul r3, r4, r0
    add r0, r9, r3
    mov r1, #0x0
    str r1, [r0, #0x854]
    str r1, [r0, #0x858]
    str r1, [r0, #0x85c]
L_02009550:
    cmp r5, #0x0
    beq L_020095e8
    ldr r0, [sp, #0x28]
    cmp r0, #0x1
    bgt L_0200957c
    ldr r0, =0x8a8
    add r1, r9, r3
    add r3, r1, r0
    ldmia r5, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    b L_02009600
L_0200957c:
    mov r0, r9
    bl func_02028120
    ldr r2, [r5, #0x0]
    mov r1, #0xc
    smull r6, r3, r2, r0
    mov r2, #0x800
    adds r6, r6, r2
    mla r1, r4, r1, r9
    adc r3, r3, #0x0
    mov r6, r6, lsr #0xc
    orr r6, r6, r3, lsl #0x14
    str r6, [r1, #0x8a8]
    ldr r3, [r5, #0x4]
    smull r7, r6, r3, r0
    adds r7, r7, r2
    adc r3, r6, #0x0
    mov r6, r7, lsr #0xc
    orr r6, r6, r3, lsl #0x14
    str r6, [r1, #0x8ac]
    ldr r3, [r5, #0x8]
    smull r5, r0, r3, r0
    adds r2, r5, r2
    adc r0, r0, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    str r2, [r1, #0x8b0]
    b L_02009600
L_020095e8:
    mov r0, #0xc
    mla r0, r4, r0, r9
    mov r1, #0x0
    str r1, [r0, #0x8a8]
    str r1, [r0, #0x8ac]
    str r1, [r0, #0x8b0]
L_02009600:
    mov r0, r4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

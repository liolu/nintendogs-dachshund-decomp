#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205df50();
extern void func_02067ca0();
// clang-format off
asm void func_020985d0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    ldr r4, [sp, #0x2c]
    ldrsh r7, [sp, #0x28]
    mov r5, r1
    cmp r4, #0x1
    ldreq r9, =0x7fff
    sub r8, r2, r5
    mov r10, r3
    mov r6, r0
    sub r0, r7, r10
    movne r9, #0xff
    mov r0, r0, lsl #0xc
    mov r1, r8, lsl #0xc
    bl func_02067ca0
    mov r1, r9, lsl #0xc
    bl func_02067ca0
    mov r7, r0
    mov r0, r10
    mov r1, r9
    bl func_0205df50
    cmp r8, #0x0
    addls sp, sp, #0x4
    mov r1, r0, lsl #0xc
    mov r2, #0x0
    ldmlsfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxls lr
    add r0, r6, r5
L_02098640:
    cmp r4, #0x1
    bne L_0209867c
    mov ip, r2, lsl #0x1
    add r10, r6, r5, lsl #0x1
    ldrsh r9, [ip, r10]
    mov r3, #0x800
    mov r9, r9, lsl #0xc
    smull r11, lr, r9, r1
    adds r9, r11, r3
    adc r3, lr, #0x0
    mov r9, r9, lsr #0xc
    orr r9, r9, r3, lsl #0x14
    mov r3, r9, asr #0xc
    strh r3, [ip, r10]
    b L_020986a4
L_0209867c:
    ldrsb r9, [r0, #0x0]
    mov r3, #0x800
    mov r9, r9, lsl #0xc
    smull ip, r10, r9, r1
    adds r9, ip, r3
    adc r3, r10, #0x0
    mov r9, r9, lsr #0xc
    orr r9, r9, r3, lsl #0x14
    mov r3, r9, asr #0xc
    swpb r3, r3, [r0]
L_020986a4:
    add r2, r2, #0x1
    cmp r2, r8
    add r1, r1, r7
    add r0, r0, #0x1
    blo L_02098640
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

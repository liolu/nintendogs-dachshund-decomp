#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020280f8();
extern void func_02084a14();
extern char data_02154c9c[];
// clang-format off
asm void func_020093c8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r5, [sp, #0x2c]
    mov r9, r0
    mov r8, r1
    mov r7, r2
    mov r6, r3
    mov r4, #0x0
L_020093e4:
    add r0, r9, r4, lsl #0x2
    ldr r0, [r0, #0x914]
    cmp r0, #0x0
    beq L_0200940c
    add r0, r4, #0x1
    mov r0, r0, lsl #0x10
    mov r4, r0, asr #0x10
    cmp r4, #0x7
    blt L_020093e4
    mvn r4, #0x0
L_0200940c:
    mvn r0, #0x0
    cmp r4, r0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
    ldr r0, =data_02154c9c
    mov r1, r8
    ldr r0, [r0, #0x0]
    add r2, r9, #0x2a0
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    moveq r0, #0x0
    bl func_02084a14
    add r10, r9, r4, lsl #0x2
    add lr, r9, r4, lsl #0x1
    str r0, [r10, #0x914]
    add r0, lr, #0x800
    ldr r3, =0x842
    add ip, r9, r4
    strh r8, [r0, #0x34]
    add r8, ip, r3
    swpb r7, r7, [r8]
    ldr r1, =0x849
    ldr r2, =0x857
    add r7, ip, r1
    swpb r1, r6, [r7]
    add r6, ip, #0x850
    ldr r1, [sp, #0x20]
    ldr r3, [sp, #0x28]
    swpb r1, r1, [r6]
    add r2, ip, r2
    ldr r1, [sp, #0x30]
    cmp r3, #0x0
    swpb r1, r1, [r2]
    ldrsh r1, [sp, #0x24]
    strh r1, [r0, #0x5e]
    beq L_020094bc
    mov r0, #0xc
    mul r6, r4, r0
    ldr r0, =0x86c
    add r1, r9, r6
    add r7, r1, r0
    ldmia r3, {r0, r1, r2}
    stmia r7, {r0, r1, r2}
    b L_020094d8
L_020094bc:
    mov r0, #0xc
    mul r6, r4, r0
    add r0, r9, r6
    mov r1, #0x0
    str r1, [r0, #0x86c]
    str r1, [r0, #0x870]
    str r1, [r0, #0x874]
L_020094d8:
    cmp r5, #0x0
    beq L_02009568
    ldr r0, [sp, #0x20]
    cmp r0, #0x1
    addle r0, r9, r6
    addle r3, r0, #0x8c0
    ldmleia r5, {r0, r1, r2}
    stmleia r3, {r0, r1, r2}
    ble L_02009580
    mov r0, r9
    bl func_020280f8
    ldr r2, [r5, #0x0]
    mov r1, #0xc
    smull r6, r3, r2, r0
    mov r2, #0x800
    adds r6, r6, r2
    mla r1, r4, r1, r9
    adc r3, r3, #0x0
    mov r6, r6, lsr #0xc
    orr r6, r6, r3, lsl #0x14
    str r6, [r1, #0x8c0]
    ldr r3, [r5, #0x4]
    smull r7, r6, r3, r0
    adds r7, r7, r2
    adc r3, r6, #0x0
    mov r6, r7, lsr #0xc
    orr r6, r6, r3, lsl #0x14
    str r6, [r1, #0x8c4]
    ldr r3, [r5, #0x8]
    smull r5, r0, r3, r0
    adds r2, r5, r2
    adc r0, r0, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    str r2, [r1, #0x8c8]
    b L_02009580
L_02009568:
    mov r0, #0xc
    mla r0, r4, r0, r9
    mov r1, #0x0
    str r1, [r0, #0x8c0]
    str r1, [r0, #0x8c4]
    str r1, [r0, #0x8c8]
L_02009580:
    mov r0, r4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on

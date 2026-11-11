#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020cd884();
extern char data_02159e38[];
// clang-format off
asm void func_020cd76c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x8
    cmp r2, #0x2
    mov r6, r0
    mov r5, r3
    addlt sp, sp, #0x8
    ldmltfd sp!, {r4, r5, r6, lr}
    bxlt lr
    cmp r2, #0x5
    addgt sp, sp, #0x8
    ldmgtfd sp!, {r4, r5, r6, lr}
    bxgt lr
    ldr r0, =data_02159e38
    sub r3, r2, #0x2
    ldr r0, [r0, #0x0]
    mov r2, #0x70
    add r0, r0, #0x1000
    ldr r0, [r0, #0x41c]
    ldrsh ip, [sp, #0x1c]
    add r0, r0, #0xf8
    smlabb r2, r1, r2, r0
    mov r0, #0x1c
    smlabb r4, r3, r0, r2
    ldrsh r3, [sp, #0x18]
    mov r0, r4
    mov r2, r5
    str ip, [sp, #0x0]
    bl func_020cd884
    cmp r0, #0x0
    addeq sp, sp, #0x8
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    ldrh r0, [r6, #0x0]
    add r2, r4, #0x2
    add r3, r4, #0x3
    strh r0, [r4, #0x0]
    ldrb r1, [r6, #0x2]
    mov r0, #0x0
    swpb r1, r1, [r2]
    ldrb r1, [r6, #0x3]
    swpb r1, r1, [r3]
    mov r3, r0
L_020cd814:
    add r1, r0, #0x1
    mov r1, r1, lsl #0x10
    add r2, r4, r0, lsl #0x1
    mov r0, r1, asr #0x10
    strh r3, [r2, #0x4]
    cmp r0, #0x8
    blt L_020cd814
L_020cd830:
    add r0, r6, r3, lsl #0x1
    ldrh r2, [r0, #0x78]
    mov r1, r3, lsl #0x1
    cmp r2, #0x0
    beq L_020cd860
    add r0, r3, #0x1
    mov r0, r0, lsl #0x10
    add r1, r4, r1
    mov r3, r0, asr #0x10
    strh r2, [r1, #0x4]
    cmp r3, #0x7
    blt L_020cd830
L_020cd860:
    ldrsh r1, [sp, #0x18]
    ldrsh r0, [sp, #0x1c]
    strh r5, [r4, #0x14]
    strh r1, [r4, #0x16]
    strh r0, [r4, #0x18]
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on

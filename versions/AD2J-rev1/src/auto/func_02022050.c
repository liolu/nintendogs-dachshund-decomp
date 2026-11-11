#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02022824();
extern void func_02022a4c();
extern void func_02069098();
extern void func_02084a14();
extern void func_0210634c();
extern char data_0214b484[];
extern char data_02154c9c[];
// clang-format off
asm void func_02022050(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    mov r5, r0
    mov r4, r1
    bl func_02022a4c
    add r0, sp, #0x0
    bl func_02022824
    ldr r0, =data_02154c9c
    ldr r1, =data_0214b484
    ldr r0, [r0, #0x0]
    ldr r6, [r1, #0x0]
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    add r2, sp, #0x0
    moveq r0, #0x0
    mov r1, #0x78
    bl func_02084a14
    add r1, r6, #0x7000
    ldr r2, =data_0214b484
    str r0, [r1, #0x3dc]
    ldr r0, [r2, #0x0]
    add r0, r0, #0x7000
    ldr r0, [r0, #0x3dc]
    cmp r0, #0x0
    beq L_02022118
    bl func_0210634c
    mov r6, r0
    bl func_0210634c
    mov r1, r0
    ldrsh r0, [r6, #0x6c]
    ldrsh r1, [r1, #0x6e]
    bl func_02069098
    mov r1, #0x1c00
    ldr ip, =data_0214b484
    mov r3, #0x0
    umull r6, lr, r0, r1
    mov r2, #0x800
    adds r6, r6, r2
    ldr r2, [ip, #0x0]
    mla lr, r0, r3, lr
    mov r0, r0, asr #0x1f
    mla lr, r0, r1, lr
    add r1, r2, #0x7000
    adc r0, lr, #0x0
    mov r2, r6, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    mov r0, r2, lsl #0x10
    ldr r1, [r1, #0x3dc]
    mov r0, r0, asr #0x10
    str r0, [r1, #0x54]
L_02022118:
    ldr r2, =data_0214b484
    mov r3, #0x3
    ldr r0, [r2, #0x0]
    add r1, r0, #0x6
    swpb r0, r3, [r1]
    ldr r0, [r2, #0x0]
    add r1, r0, #0xf
    swpb r0, r5, [r1]
    ldr r0, [r2, #0x0]
    strh r4, [r0, #0x20]
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on

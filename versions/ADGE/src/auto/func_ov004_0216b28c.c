#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025ad0();
extern void func_02026bfc();
extern void func_02028174();
extern void func_0210d7b4();
extern char data_0214da84[];
extern char data_021555f8[];
extern char data_0215a064[];
// clang-format off
asm void func_ov004_0216b28c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    ldr r2, =0x152
    add r1, r5, #0x100
    strh r2, [r1, #0x52]
    add r2, r5, #0x98
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026bfc
    mov r0, r5
    bl func_02025ad0
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrsh r2, [r0, #0x7a]
    cmp r2, #0x0
    blt L_0216b2e0
    ldr r0, =data_021555f8
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x20]
    cmp r0, r2
    bgt L_0216b2e8
L_0216b2e0:
    mov r4, #0x0
    b L_0216b2f0
L_0216b2e8:
    add r0, r1, r2, lsl #0x2
    ldr r4, [r0, #0x4]
L_0216b2f0:
    cmp r4, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    ldr r0, =data_0214da84
    ldr r1, =0x10dcd
    ldr r3, [r0, #0x0]
    mov r0, r5
    ldr r2, [r3, #0x0]
    mul r1, r2, r1
    add r6, r1, #0x1
    str r6, [r3, #0x0]
    bl func_02028174
    mov r0, r6, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, #0x14
    mul r0, r1, r0
    mov r0, r0, lsr #0x10
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    ldr r1, [r5, #0x9e8]
    add r2, r0, #0x75
    mov r0, r4
    strh r2, [r1, #0x70]
    bl func_0210d7b4
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on

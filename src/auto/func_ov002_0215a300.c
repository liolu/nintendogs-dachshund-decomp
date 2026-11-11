#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207ca98();
extern char data_ov002_0215a8e0[];
// clang-format off
asm void func_ov002_0215a300(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r0, =data_ov002_0215a8e0
    ldr r3, [r0, #0x0]
    ldr r1, [r3, #0x8]
    ldr r2, [r3, #0x18]
    add r1, r1, #0x1
    str r1, [r3, #0x8]
    ldr r1, [r0, #0x0]
    add lr, r2, #0x23
    ldr r0, [r1, #0x8]
    cmp r0, #0x3e
    movge r0, #0x0
    strge r0, [r1, #0x8]
    ldr r0, =data_ov002_0215a8e0
    add r1, r2, #0x22
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x8]
    cmp r0, #0x20
    andlt ip, r0, #0xff
    rsbge r0, r0, #0x3e
    andge ip, r0, #0xff
    orr r0, ip, ip, lsl #0x5
    swpb r0, r0, [r1]
    mov r3, ip, asr #0x3
    orr ip, r3, ip, lsl #0x2
    swpb ip, ip, [lr]
    mov r0, #0x1f
    mov r1, #0x0
    mov r3, #0x200
    bl func_0207ca98
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on

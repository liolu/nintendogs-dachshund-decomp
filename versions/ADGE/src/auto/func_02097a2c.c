#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205df50();
extern void func_0208022c();
// clang-format off
asm void func_02097a2c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    cmp r1, #0x0
    ldr r6, [sp, #0x10]
    ldr r4, [sp, #0x14]
    beq L_02097a60
    cmp r1, #0x1
    beq L_02097a70
    cmp r1, #0x2
    moveq r0, r6, lsl #0xd
    moveq r6, r0, lsr #0x10
    moveq r4, r4, lsr #0x3
    b L_02097a7c
L_02097a60:
    mov r0, r6, lsl #0xe
    mov r6, r0, lsr #0x10
    mov r4, r4, lsr #0x2
    b L_02097a7c
L_02097a70:
    mov r0, r6, lsl #0xf
    mov r6, r0, lsr #0x10
    mov r4, r4, lsr #0x1
L_02097a7c:
    swpb r0, r1, [r5]
    add r1, r5, #0x1
    swpb r0, r2, [r1]
    ldr r0, =0xffb0ff
    mov r1, r3
    strh r3, [r5, #0x2]
    bl func_0205df50
    strh r0, [r5, #0x4]
    mov r1, r4, lsl #0x2
    strh r6, [r5, #0x6]
    mov r0, r5
    add r1, r1, #0xc
    str r4, [r5, #0x8]
    bl func_0208022c
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on

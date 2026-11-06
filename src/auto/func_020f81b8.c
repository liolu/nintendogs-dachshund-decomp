#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void _s32_div_f();
extern void func_02080858();
// clang-format off
asm void func_020f81b8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    cmp r1, #0x0
    ldr r6, [sp, #0x10]
    ldr r4, [sp, #0x14]
    beq L_020f81ec
    cmp r1, #0x1
    beq L_020f81fc
    cmp r1, #0x2
    moveq r0, r6, lsl #0xd
    moveq r6, r0, lsr #0x10
    moveq r4, r4, lsr #0x3
    b L_020f8208
L_020f81ec:
    mov r0, r6, lsl #0xe
    mov r6, r0, lsr #0x10
    mov r4, r4, lsr #0x2
    b L_020f8208
L_020f81fc:
    mov r0, r6, lsl #0xf
    mov r6, r0, lsr #0x10
    mov r4, r4, lsr #0x1
L_020f8208:
    swpb r0, r1, [r5]
    add r1, r5, #0x1
    swpb r0, r2, [r1]
    ldr r0, =0xffb0ff
    mov r1, r3
    strh r3, [r5, #0x2]
    bl _s32_div_f
    strh r0, [r5, #0x4]
    mov r1, r4, lsl #0x2
    strh r6, [r5, #0x6]
    mov r0, r5
    add r1, r1, #0xc
    str r4, [r5, #0x8]
    bl func_02080858
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on

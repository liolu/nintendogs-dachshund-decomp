#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200da50();
extern void func_02026568();
extern void func_02026b9c();
extern void func_02028114();
extern void func_02034e44();
extern void func_0203535c();
extern void func_02037130();
extern void func_0203910c();
extern void func_0203e5ac();
// clang-format off
asm void func_0200d550(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    bl func_0203910c
    mov r0, r4
    mov r1, #0x300
    bl func_02037130
    mov r5, r0
    mov r0, r4
    bl func_02028114
    mov r1, #0x9
    mul r1, r0, r1
    cmp r5, r1
    bge L_0200d5b0
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x90
    bl func_0203e5ac
    mov r0, r4
    bl func_02026568
    add r1, r4, #0x93
    mov r0, #0x2
    swpb r0, r0, [r1]
    b L_0200d600
L_0200d5b0:
    ldr r2, =0x111
    mov r0, r4
    mov r1, #0x0
    bl func_0203e5ac
    mov r0, r4
    bl func_02034e44
    mov r2, r0
    mov r0, r4
    mov r1, #0x3
    bl func_0203e5ac
    mov r0, r4
    bl func_02026b9c
    add r2, r4, #0x93
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov r0, r4
    bl func_0203535c
    cmp r0, #0x0
    movne r0, #0x1
    strne r0, [r4, #0x464]
L_0200d600:
    ldr r2, [r4, #0x464]
    mov r0, r4
    mov r1, #0x0
    bl func_0200da50
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on

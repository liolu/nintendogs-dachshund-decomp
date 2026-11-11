#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02026b9c();
extern void func_0202f9a0();
extern void func_02034e44();
extern void func_0203535c();
extern void func_02037130();
extern void func_0203910c();
extern void func_0203e5ac();
extern char data_0215a064[];
// clang-format off
asm void func_ov003_0217a6a8(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    add r1, r5, #0x100
    ldrsh r2, [r1, #0x52]
    mov r4, #0x0
    cmp r2, #0x90
    beq L_0217a6d8
    ldr r1, =0x111
    cmp r2, r1
    beq L_0217a758
    b L_0217a764
L_0217a6d8:
    ldr r0, =data_0215a064
    add r3, r5, #0x26c
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r5
    bl func_0203910c
    mov r0, r5
    mov r1, #0x300
    bl func_02037130
    mov r0, r5
    bl func_0203535c
    cmp r0, #0x0
    beq L_0217a764
    ldr r2, =0x111
    mov r0, r5
    mov r1, r4
    bl func_0203e5ac
    mov r0, r5
    bl func_02034e44
    mov r2, r0
    mov r0, r5
    mov r1, #0x3
    bl func_0203e5ac
    mov r0, r5
    bl func_02026b9c
    add r1, r5, #0x93
    mov r0, #0xa
    swpb r0, r0, [r1]
    b L_0217a764
L_0217a758:
    bl func_0203535c
    cmp r0, #0x0
    movne r4, #0x1
L_0217a764:
    cmp r4, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r0, r5
    bl func_0202f9a0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on

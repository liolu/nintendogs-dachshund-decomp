#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025ba0();
extern void func_02026810();
extern void func_0202f9a0();
extern void func_02035450();
extern void func_02035fd8();
extern void func_02036258();
extern void func_02037130();
extern void func_02037ed0();
extern void func_0203910c();
extern void func_0203e5ac();
extern void func_0204bb68();
// clang-format off
asm void func_0204b710(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    bl func_02036258
    add r1, r5, #0x100
    ldrsh r1, [r1, #0x52]
    mov r4, r0
    cmp r1, #0x17
    beq L_0204b790
    ldr r0, =0x1e3
    cmp r1, r0
    bne L_0204b83c
    mov r0, r5
    mov r1, #0x1e
    bl func_02035450
    cmp r0, #0x0
    beq L_0204b83c
    mov r0, r5
    mov r1, #0x0
    mov r2, #0x17
    bl func_0203e5ac
    add r1, r5, #0x93
    mov r0, #0x5
    swpb r0, r0, [r1]
    mov r0, r5
    add r2, r5, #0x98
    mov r1, #0x7
    swpb r1, r1, [r2]
    bl func_02026810
    mov r0, r5
    bl func_02025ba0
    b L_0204b83c
L_0204b790:
    add r0, r5, #0x360
    add r3, r5, #0x3b4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldrsb r0, [r5, #0x98]
    cmp r0, #0x7
    bne L_0204b7e8
    ldr r1, [r5, #0x18c]
    ldr r0, [r5, #0x1a4]
    ldr r2, [r5, #0x2a0]
    sub r0, r1, r0, lsl #0x1
    add r0, r2, r0
    str r0, [r5, #0x26c]
    ldr r0, [r5, #0x2a4]
    str r0, [r5, #0x270]
    ldr r1, [r5, #0x194]
    ldr r0, [r5, #0x1ac]
    ldr r2, [r5, #0x2a8]
    sub r0, r1, r0, lsl #0x1
    add r0, r2, r0
    str r0, [r5, #0x274]
    b L_0204b820
L_0204b7e8:
    ldr r1, [r5, #0x18c]
    ldr r0, [r5, #0x1a4]
    ldr r2, [r5, #0x2a0]
    add r0, r1, r0, lsl #0x1
    sub r0, r2, r0
    str r0, [r5, #0x26c]
    ldr r0, [r5, #0x2a4]
    str r0, [r5, #0x270]
    ldr r1, [r5, #0x194]
    ldr r0, [r5, #0x1ac]
    ldr r2, [r5, #0x2a8]
    add r0, r1, r0, lsl #0x1
    sub r0, r2, r0
    str r0, [r5, #0x274]
L_0204b820:
    mov r0, r5
    bl func_0203910c
    mov r0, r5
    mov r1, #0x300
    bl func_02037130
    mov r0, r5
    bl func_02037ed0
L_0204b83c:
    mov r0, r5
    mov r1, r4
    mov r2, #0x0
    bl func_0204bb68
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    ldrh r0, [r5, #0xfc]
    cmp r0, #0x96
    addls sp, sp, #0x4
    ldmlsfd sp!, {r4, r5, lr}
    bxls lr
    mov r0, r5
    bl func_02035fd8
    mov r0, r5
    bl func_0202f9a0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on

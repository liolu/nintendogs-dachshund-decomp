#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02009dec();
extern void func_0203e5ac();
extern void func_020681f8();
extern void func_0206823c();
extern void func_02114658();
extern void func_ov003_02188bb0();
extern char data_0214da80[];
extern char data_02150e58[];
extern char data_0215a064[];
// clang-format off
asm void func_ov003_0218808c(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x38
    ldr r2, =data_02150e58
    ldr r1, =data_0214da80
    mov r4, r0
    ldr lr, [r2, #0x4c]
    ldr ip, [r2, #0x58]
    ldr r3, [r2, #0x64]
    ldr r0, [r1, #0x0]
    add r1, sp, #0x20
    add r2, r4, #0x2c4
    str lr, [sp, #0x14]
    str ip, [sp, #0x18]
    str r3, [sp, #0x1c]
    bl func_02114658
    add r0, sp, #0x20
    add r1, r4, #0x2c4
    mov r2, r0
    bl func_0206823c
    ldr r0, =data_0215a064
    add ip, sp, #0x2c
    ldr r0, [r0, #0x0]
    add r3, r4, #0x3b4
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    mov r2, ip
    mov r0, #0x3000
    add r1, sp, #0x20
    bl func_01ff832c
    ldr r1, [r4, #0x3b8]
    add r0, sp, #0x20
    add r1, r1, #0xa000
    str r1, [r4, #0x3b8]
    add r1, sp, #0x14
    bl func_020681f8
    cmp r0, #0x0
    addgt r0, r4, #0x100
    movgt r1, #0x1000
    strgth r1, [r0, #0x2e]
    addle r0, r4, #0x100
    movle r1, #0xf000
    strleh r1, [r0, #0x2e]
    ldr r1, =0x14d2
    ldr r2, =0x1ff
    str r1, [sp, #0x0]
    mov ip, #0x2
    mov r0, r4
    add r3, r4, #0x348
    mov r1, #0x0
    str ip, [sp, #0x4]
    bl func_ov003_02188bb0
    ldr r1, =data_02150e58
    add r0, sp, #0x8
    ldr lr, [r1, #0x54]
    ldr ip, [r1, #0x60]
    ldr r3, [r1, #0x6c]
    add r1, r4, #0x1a4
    add r2, r4, #0x18c
    str lr, [sp, #0x8]
    str ip, [sp, #0xc]
    str r3, [sp, #0x10]
    bl func_02009dec
    cmp r0, #0x1
    beq L_021881a0
    cmp r0, #0x2
    beq L_021881e0
    b L_02188220
L_021881a0:
    ldr r2, =0x1e1
    mov r0, r4
    mov r1, #0x0
    bl func_0203e5ac
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x0
    bl func_0203e5ac
    add r1, r4, #0x93
    mov r2, #0x0
    swpb r0, r2, [r1]
    add sp, sp, #0x38
    add r0, r4, #0x100
    strh r2, [r0, #0x2e]
    ldmfd sp!, {r4, lr}
    bx lr
L_021881e0:
    ldr r2, =0x1e2
    mov r0, r4
    mov r1, #0x0
    bl func_0203e5ac
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x0
    bl func_0203e5ac
    add r1, r4, #0x93
    mov r2, #0x0
    swpb r0, r2, [r1]
    add sp, sp, #0x38
    add r0, r4, #0x100
    strh r2, [r0, #0x2e]
    ldmfd sp!, {r4, lr}
    bx lr
L_02188220:
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    bl func_0203e5ac
    add sp, sp, #0x38
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200c488();
extern void func_02025ba0();
extern void func_02036188();
extern void func_02037f70();
// clang-format off
asm void func_ov006_021638d8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_02037f70
    add r1, r4, #0x100
    strh r0, [r1, #0x52]
    add r2, r4, #0xab
    mov r1, #0x1
    swpb r1, r1, [r2]
    mov r0, r4
    bl func_02025ba0
    mov r0, r4
    bl func_02036188
    cmp r0, #0x0
    beq L_02163968
    ldr r1, [r0, #0x2c]
    ldr r0, [r0, #0x30]
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0200c488
    cmp r0, #0x0
    beq L_02163968
    add r0, r0, #0x8
    add r3, r4, #0x26c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r2, [r4, #0x26c]
    ldr r1, [r4, #0x2a0]
    mov r0, #0xa
    sub r1, r2, r1
    mla r2, r1, r0, r2
    str r2, [r4, #0x26c]
    ldr r2, [r4, #0x274]
    ldr r1, [r4, #0x2a8]
    sub r1, r2, r1
    mla r0, r1, r0, r2
    str r0, [r4, #0x274]
L_02163968:
    ldrb r0, [r4, #0xb0]
    add r1, r4, #0xb0
    bic r0, r0, #0x4
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

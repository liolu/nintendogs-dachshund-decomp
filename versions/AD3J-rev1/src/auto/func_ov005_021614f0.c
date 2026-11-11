#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200c3ec();
extern void func_02025b58();
extern void func_02035fd0();
// clang-format off
asm void func_ov005_021614f0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x13e
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    add r2, r4, #0xbf
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02025b58
    mov r0, r4
    bl func_02035fd0
    cmp r0, #0x0
    beq L_0216157c
    ldr r1, [r0, #0x2c]
    ldr r0, [r0, #0x30]
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0200c3ec
    cmp r0, #0x0
    beq L_0216157c
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
L_0216157c:
    ldrb r0, [r4, #0xc0]
    add r1, r4, #0xc0
    bic r0, r0, #0x4
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

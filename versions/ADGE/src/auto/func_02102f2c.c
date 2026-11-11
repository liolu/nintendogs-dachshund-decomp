#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02149fa4[];
// clang-format off
asm void func_02102f2c(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r3, =data_02149fa4
    mov r2, #0x6c
    mla r3, r0, r2, r3
    ldr r0, [r3, #0x1c]
    mov ip, r1
    str r0, [ip, #0xf8]
    add r0, r3, #0x20
    add lr, ip, #0xfc
    ldmia r0, {r0, r1, r2}
    stmia lr, {r0, r1, r2}
    ldr r0, [r3, #0x1c]
    add r2, ip, #0x160
    str r0, [ip, #0x120]
    ldr r1, [r3, #0x2c]
    mov r0, #0x0
    str r1, [ip, #0x128]
    ldr r1, [r3, #0x14]
    str r1, [ip, #0x124]
    ldr r1, [r3, #0x18]
    str r1, [ip, #0xac]
    ldrb r1, [r3, #0x60]
    swpb r1, r1, [r2]
    ldr r1, [r3, #0x64]
    str r1, [ip, #0x12c]
    ldr r1, [r3, #0x68]
    str r1, [ip, #0x168]
L_02102f9c:
    add lr, r3, r0, lsl #0x2
    add r1, r0, #0x1
    mov r1, r1, lsl #0x10
    add r2, ip, r0, lsl #0x2
    ldr lr, [lr, #0x30]
    mov r0, r1, asr #0x10
    str lr, [r2, #0x108]
    cmp r0, #0x6
    blt L_02102f9c
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on

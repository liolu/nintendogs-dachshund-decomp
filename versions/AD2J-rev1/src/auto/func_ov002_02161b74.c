#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202643c();
extern void func_020280f8();
extern void func_02033d7c();
// clang-format off
asm void func_ov002_02161b74(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x92
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0x13
    swpb r1, r1, [r2]
    bl func_0202643c
    mov r0, r4
    bl func_020280f8
    ldr r1, =0x1338
    mov r3, #0x0
    umull lr, ip, r0, r1
    mov r2, #0x800
    adds r2, lr, r2
    mla ip, r0, r3, ip
    mov r0, r0, asr #0x1f
    mla ip, r0, r1, ip
    adc r0, ip, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    mov r0, r4
    str r1, [r4, #0x938]
    add r2, r4, #0xbc
    mov r1, #0x2
    swpb r1, r1, [r2]
    bl func_02033d7c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

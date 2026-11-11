#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02023610();
extern void func_020254f0();
extern void func_0202643c();
extern void func_02033d7c();
extern void func_02038ef8();
extern char data_0214b484[];
extern char data_02150330[];
// clang-format off
asm void func_ov002_02160d44(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x18
    mov r5, r0
    add r1, r5, #0x100
    mov r2, #0x0
    strh r2, [r1, #0x50]
    add r2, r5, #0xac
    mov r1, #0x7
    swpb r1, r1, [r2]
    add r2, r5, #0xb1
    mov r1, #0x9
    swpb r1, r1, [r2]
    bl func_0202643c
    mov r0, r5
    bl func_020254f0
    mov r0, r5
    bl func_02033d7c
    ldr r0, =data_0214b484
    ldr r2, =0x10dcd
    ldr r6, [r0, #0x0]
    mov r1, #0x78
    ldr r3, [r6, #0x0]
    mul r4, r3, r2
    add r3, r4, #0x1
    str r3, [r6, #0x0]
    ldr r4, [r0, #0x0]
    mov r0, r3, lsl #0x10
    ldr r3, [r4, #0x0]
    mov r6, r0, lsr #0x10
    mul r0, r3, r2
    add r2, r0, #0x1
    mul r0, r6, r1
    mov r0, r0, lsr #0x10
    mov r1, r2, lsl #0x10
    mov r0, r0, lsl #0x10
    mov r1, r1, lsr #0x1f
    mov r3, r0, lsr #0x10
    mov r0, r1, lsl #0x10
    str r2, [r4, #0x0]
    ldr r1, =data_02150330
    add r4, r3, #0x1e
    movs r0, r0, lsr #0x10
    ldr r6, [r1, #0x4c]
    ldr lr, [r1, #0x58]
    ldr ip, [r1, #0x64]
    ldr r3, [r1, #0x54]
    ldr r2, [r1, #0x60]
    ldr r1, [r1, #0x6c]
    mov r0, r5
    rsbne r4, r4, #0x0
    str r6, [sp, #0x0]
    str lr, [sp, #0x4]
    str ip, [sp, #0x8]
    str r3, [sp, #0xc]
    str r2, [sp, #0x10]
    str r1, [sp, #0x14]
    bl func_02038ef8
    ldr r0, =0x19a
    add r1, sp, #0x0
    mul r0, r4, r0
    add r2, r5, #0x2a0
    add r3, r5, #0x278
    bl func_01ff832c
    add r2, r5, #0x278
    ldr r0, =0xf03c
    add r1, sp, #0xc
    mov r3, r2
    bl func_01ff832c
    mov r0, r5
    mov r1, #0x24
    mov r2, #0x1
    bl func_02023610
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on

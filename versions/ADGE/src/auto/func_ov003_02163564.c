#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02025538();
extern void func_02026468();
extern void func_02033e78();
extern char data_0214da84[];
extern char data_02150e58[];
// clang-format off
asm void func_ov003_02163564(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x18
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x0
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r1, #0x7
    swpb r1, r1, [r2]
    add r2, r4, #0x98
    mov r1, #0x5
    swpb r1, r1, [r2]
    add r2, r4, #0x97
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026468
    mov r0, r4
    bl func_02025538
    mov r0, r4
    bl func_02033e78
    ldr r0, =data_0214da84
    ldr r2, =0x10dcd
    ldr r6, [r0, #0x0]
    mov r1, #0x14
    ldr r3, [r6, #0x0]
    mul r5, r3, r2
    add r3, r5, #0x1
    str r3, [r6, #0x0]
    ldr r5, [r0, #0x0]
    mov r0, r3, lsl #0x10
    ldr r3, [r5, #0x0]
    mov r6, r0, lsr #0x10
    mul r0, r3, r2
    add r2, r0, #0x1
    mul r0, r6, r1
    mov r0, r0, lsr #0x10
    mov r1, r2, lsl #0x10
    mov r0, r0, lsl #0x10
    str r2, [r5, #0x0]
    ldr r2, =data_02150e58
    mov r1, r1, lsr #0x1f
    mov r3, r0, lsr #0x10
    mov r0, r1, lsl #0x10
    add r1, r3, #0x32
    movs r0, r0, lsr #0x10
    ldr r8, [r2, #0x4c]
    ldr r7, [r2, #0x58]
    ldr r6, [r2, #0x64]
    ldr r5, [r2, #0x54]
    ldr lr, [r2, #0x60]
    ldr ip, [r2, #0x6c]
    rsbne r1, r1, #0x0
    mov r0, #0x29
    mul r0, r1, r0
    add r1, sp, #0x0
    add r2, r4, #0x2a0
    add r3, r4, #0x278
    str r8, [sp, #0x0]
    str r7, [sp, #0x4]
    str r6, [sp, #0x8]
    str r5, [sp, #0xc]
    str lr, [sp, #0x10]
    str ip, [sp, #0x14]
    bl func_01ff832c
    add r2, r4, #0x278
    ldr r0, =0xffff0fc4
    add r1, sp, #0xc
    mov r3, r2
    bl func_01ff832c
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on

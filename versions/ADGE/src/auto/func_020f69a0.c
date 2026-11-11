#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02006a20();
extern void func_02044980();
extern void func_0206810c();
extern void func_0206823c();
extern void func_0208bad4();
extern void func_020a7470();
extern char data_021555f8[];
extern char data_0215a064[];
// clang-format off
asm void func_020f69a0(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x30
    ldr r1, =data_021555f8
    mov r4, r0
    ldr lr, [r1, #0x0]
    ldr r1, =0x10dcd
    ldr r3, [lr, #0x0]
    mov r2, #0x3
    mul r1, r3, r1
    add ip, r1, #0x1
    mov r1, ip, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r3, r1, r2
    mov r1, r3, lsr #0x10
    ldr r0, [r4, #0x214]
    mov r1, r1, lsl #0x10
    str ip, [lr, #0x0]
    ldrh r2, [r4, #0x20]
    mov r1, r1, lsr #0x10
    mov r3, #0x0
    orr r2, r2, #0x8
    strh r2, [r4, #0x20]
    strh r1, [r4, #0x84]
    strh r1, [r4, #0x86]
    str r1, [r0, #0x0]
    str r3, [r0, #0x4]
    add r2, r0, #0x8
    swpb r1, r3, [r2]
    ldr r1, =0x4ce
    str r1, [r4, #0x24]
    str r1, [r4, #0x28]
    str r1, [r4, #0x2c]
    str r3, [r0, #0x14]
    ldrsh r0, [r4, #0x9c]
    bl func_02044980
    ldr r0, =data_0215a064
    add r3, sp, #0x24
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r2, sp, #0xc
    mov r1, r3
    add r0, r4, #0xbc
    bl func_0206823c
    add r0, sp, #0xc
    mov r2, #0x0
    mov r1, r0
    str r2, [sp, #0x10]
    bl func_02006a20
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x8]
    mov r0, #0x1000
    rsb r0, r0, #0x0
    str r0, [sp, #0x4]
    add r0, sp, #0xc
    add r1, sp, #0x0
    add r2, sp, #0x18
    bl func_0206810c
    ldr r0, [sp, #0x18]
    mov r1, #0x0
    str r0, [r4, #0xc8]
    ldr r2, [sp, #0x1c]
    mov r0, r4
    str r2, [r4, #0xcc]
    ldr r2, [sp, #0x20]
    str r2, [r4, #0xd0]
    ldr r2, [sp, #0xc]
    str r2, [r4, #0xd4]
    ldr r2, [sp, #0x10]
    str r2, [r4, #0xd8]
    ldr r2, [sp, #0x14]
    str r2, [r4, #0xdc]
    ldr r2, [sp, #0x0]
    str r2, [r4, #0xe0]
    ldr r2, [sp, #0x4]
    str r2, [r4, #0xe4]
    ldr r2, [sp, #0x8]
    str r2, [r4, #0xe8]
    strh r1, [r4, #0xa6]
    bl func_020a7470
    ldrsh r1, [r4, #0x94]
    add r0, r4, #0x190
    bl func_0208bad4
    add sp, sp, #0x30
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

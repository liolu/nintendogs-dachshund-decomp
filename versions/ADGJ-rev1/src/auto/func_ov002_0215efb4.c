#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200938c();
extern void func_0202354c();
extern void func_020254f0();
extern void func_02026bcc();
extern void func_020280f8();
extern void func_0202d5f0();
extern void func_020f07bc();
extern char data_021386c4[];
// clang-format off
asm void func_ov002_0215efb4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x14
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x0
    strh r2, [r1, #0x50]
    mov r2, #0x43
    strh r2, [r1, #0x52]
    add r2, r4, #0xb0
    mov r1, #0x4
    swpb r1, r1, [r2]
    bl func_02026bcc
    mov r0, r4
    bl func_020254f0
    ldr r1, =data_021386c4
    mov r0, r4
    ldr r1, [r1, #0x0]
    bl func_0202d5f0
    add r0, r4, #0x2f4
    add r3, sp, #0x4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    bl func_020280f8
    ldr r2, =0x1ccd
    mov lr, #0x0
    umull r9, r8, r0, r2
    mov ip, #0x800
    adds r9, r9, ip
    mla r8, r0, lr, r8
    mov r7, r0, asr #0x1f
    mla r8, r7, r2, r8
    ldr r1, [sp, #0x8]
    mov r9, r9, lsr #0xc
    adc r0, r8, #0x0
    orr r9, r9, r0, lsl #0x14
    add r0, r1, r9
    add r3, sp, #0x4
    str r0, [sp, #0x8]
    add r6, r4, #0x3a8
    ldmia r3, {r0, r1, r2}
    stmia r6, {r0, r1, r2}
    mov r5, #0x1
    mov r2, lr
    mov r0, r4
    mov r1, #0x4f
    str r5, [sp, #0x0]
    bl func_0200938c
    mov r0, r5
    str r0, [sp, #0x0]
    mov r0, r4
    mov r1, #0x49
    mov r2, #0x0
    add r3, sp, #0x4
    bl func_0200938c
    mov r0, r5
    str r0, [sp, #0x0]
    mov r0, r4
    mov r1, #0x4a
    mov r2, #0x0
    add r3, sp, #0x4
    bl func_0200938c
    mov r0, r5
    str r0, [sp, #0x0]
    mov r0, r4
    mov r1, #0x4b
    mov r2, #0x0
    add r3, sp, #0x4
    bl func_0200938c
    mov r0, r5
    str r0, [sp, #0x0]
    mov r0, r4
    mov r1, #0x4c
    mov r2, #0x0
    add r3, sp, #0x4
    bl func_0200938c
    mov r0, r5
    str r0, [sp, #0x0]
    mov r0, r4
    mov r1, #0x4d
    mov r2, #0x0
    add r3, sp, #0x4
    bl func_0200938c
    mov r0, r5
    str r0, [sp, #0x0]
    mov r0, r4
    mov r1, #0x4e
    mov r2, #0x0
    add r3, sp, #0x4
    bl func_0200938c
    mov r0, r4
    bl func_0202354c
    mov r0, #0x45
    bl func_020f07bc
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on

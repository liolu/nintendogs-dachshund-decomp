#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020c6ea0();
extern void func_020c6edc();
extern void func_020c7184();
extern void func_020c74f0();
extern void func_020c90bc();
extern void func_020c9154();
extern void func_020c9304();
extern void func_020ca2ec();
extern void func_020ca3a8();
extern void func_020ca4b0();
extern void func_020ca4f4();
extern void func_020ca5d4();
extern void func_020ca750();
extern void func_020ca7b8();
extern void func_020ca970();
extern void func_020ca9b8();
extern void func_020caa6c();
extern void func_ov004_0216c840();
extern void func_ov004_0216c85c();
extern void func_ov004_0216ca44();
extern char data_ov020_0215a5e0[];
extern char data_ov020_0215a600[];
extern char func_ov020_0215a45c[];
extern char func_ov020_0215a468[];
// clang-format off
asm void func_ov020_0215a2bc(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x10
    mov r7, r0
    bl func_020c9304
    mov r0, r7
    mov r1, #0x0
    bl func_020ca3a8
    mov r6, r0
    mov r0, r7
    mov r1, #0x0
    bl func_020c74f0
    mov r1, r0
    mov r0, r7
    bl func_020ca3a8
    mov r4, r0
    mov r0, r7
    bl func_020c6edc
    mov r0, r7
    mov r1, #0x0
    bl func_020c7184
    ldr r2, =data_ov020_0215a600
    mov r1, #0x4
    ldr r2, [r2, #0x0]
    str r0, [r2, #0x8]
    mov r0, r7
    bl func_020c7184
    ldr r2, =data_ov020_0215a600
    mov r1, #0x7b
    ldr r2, [r2, #0x0]
    str r0, [r2, #0xc]
    mov r0, r7
    bl func_020c7184
    ldr r1, =data_ov020_0215a600
    ldr r1, [r1, #0x0]
    str r0, [r1, #0x10]
    mov r0, r7
    bl func_ov004_0216ca44
    mov r0, r7
    bl func_ov004_0216c85c
    bl func_020ca2ec
    add r0, sp, #0x0
    bl func_020c9154
    ldr r1, =func_ov020_0215a468
    mov r0, r7
    str r1, [sp, #0x4]
    add r1, sp, #0x0
    bl func_020c90bc
    mov r1, #0x0
    mov r5, r0
    bl func_020ca5d4
    mov r8, r0
    mov r2, r4
    mov r0, r7
    mov r1, #0x88
    bl func_020caa6c
    mov r1, r0
    mov r0, r8
    bl func_020ca4f4
    mov r2, r6
    mov r0, r7
    mov r1, #0x8c
    bl func_020caa6c
    mov r4, r0
    mov r1, #0x0
    str r1, [r4, #0x88]
    ldr r2, =data_ov020_0215a600
    mov r0, r8
    ldr r2, [r2, #0x0]
    mov r1, r4
    str r4, [r2, #0x4]
    bl func_020ca4f4
    ldr r1, =0x2108
    mov r0, r4
    bl func_020ca750
    mov r0, r4
    mov r1, r7
    mov r2, #0x1
    bl func_020ca9b8
    mov r1, r7
    mov r0, r4
    mov r2, #0x1
    bl func_020ca970
    ldr r0, =data_ov020_0215a5e0
    bl func_020c6ea0
    mov r1, r0
    mov r0, r4
    bl func_020ca7b8
    ldr r2, [r4, #0x7c]
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov r0, r4
    ldr r1, =func_ov020_0215a45c
    bl func_020ca4b0
    mov r0, r5
    bl func_ov004_0216c840
    mov r0, r5
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on

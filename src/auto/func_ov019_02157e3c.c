#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020c1970();
extern void func_020c19ac();
extern void func_020c1c54();
extern void func_020c1fac();
extern void func_020c3ab4();
extern void func_020c3b4c();
extern void func_020c3cfc();
extern void func_020c4ce4();
extern void func_020c4da0();
extern void func_020c4ea8();
extern void func_020c4eec();
extern void func_020c4fcc();
extern void func_020c5148();
extern void func_020c51b0();
extern void func_020c5368();
extern void func_020c53b0();
extern void func_020c5464();
extern void func_ov003_0216a2bc();
extern void func_ov003_0216a2d8();
extern void func_ov003_0216a4c0();
extern char data_ov019_02158160[];
extern char data_ov019_02158180[];
extern char func_ov019_02157fdc[];
extern char func_ov019_02157fe8[];
// clang-format off
asm void func_ov019_02157e3c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x10
    mov r7, r0
    bl func_020c3cfc
    mov r0, r7
    mov r1, #0x0
    bl func_020c4da0
    mov r6, r0
    mov r0, r7
    mov r1, #0x0
    bl func_020c1fac
    mov r1, r0
    mov r0, r7
    bl func_020c4da0
    mov r4, r0
    mov r0, r7
    bl func_020c19ac
    mov r0, r7
    mov r1, #0x0
    bl func_020c1c54
    ldr r2, =data_ov019_02158180
    mov r1, #0x4
    ldr r2, [r2, #0x0]
    str r0, [r2, #0x8]
    mov r0, r7
    bl func_020c1c54
    ldr r2, =data_ov019_02158180
    mov r1, #0x7a
    ldr r2, [r2, #0x0]
    str r0, [r2, #0xc]
    mov r0, r7
    bl func_020c1c54
    ldr r1, =data_ov019_02158180
    ldr r1, [r1, #0x0]
    str r0, [r1, #0x10]
    mov r0, r7
    bl func_ov003_0216a4c0
    mov r0, r7
    bl func_ov003_0216a2d8
    bl func_020c4ce4
    add r0, sp, #0x0
    bl func_020c3b4c
    ldr r1, =func_ov019_02157fe8
    mov r0, r7
    str r1, [sp, #0x4]
    add r1, sp, #0x0
    bl func_020c3ab4
    mov r1, #0x0
    mov r5, r0
    bl func_020c4fcc
    mov r8, r0
    mov r2, r4
    mov r0, r7
    mov r1, #0x88
    bl func_020c5464
    mov r1, r0
    mov r0, r8
    bl func_020c4eec
    mov r2, r6
    mov r0, r7
    mov r1, #0x8c
    bl func_020c5464
    mov r4, r0
    mov r1, #0x0
    str r1, [r4, #0x88]
    ldr r2, =data_ov019_02158180
    mov r0, r8
    ldr r2, [r2, #0x0]
    mov r1, r4
    str r4, [r2, #0x4]
    bl func_020c4eec
    ldr r1, =0x2108
    mov r0, r4
    bl func_020c5148
    mov r0, r4
    mov r1, r7
    mov r2, #0x1
    bl func_020c53b0
    mov r1, r7
    mov r0, r4
    mov r2, #0x1
    bl func_020c5368
    ldr r0, =data_ov019_02158160
    bl func_020c1970
    mov r1, r0
    mov r0, r4
    bl func_020c51b0
    ldr r2, [r4, #0x7c]
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov r0, r4
    ldr r1, =func_ov019_02157fdc
    bl func_020c4ea8
    mov r0, r5
    bl func_ov003_0216a2bc
    mov r0, r5
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on

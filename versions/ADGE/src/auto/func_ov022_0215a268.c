#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020c6edc();
extern void func_020c6f9c();
extern void func_020c7020();
extern void func_020c7184();
extern void func_020c90bc();
extern void func_020c9154();
extern void func_020c9304();
extern void func_020c93d4();
extern void func_020ca2ec();
extern void func_020ca3a8();
extern void func_020ca4b0();
extern void func_020ca4f4();
extern void func_020ca5d4();
extern void func_020ca750();
extern void func_020ca7c8();
extern void func_020ca944();
extern void func_020ca9b8();
extern void func_020caa6c();
extern char data_ov022_0215a740[];
extern char data_ov022_0215a748[];
extern char data_ov022_0215a760[];
extern char data_ov022_0215a778[];
extern char data_ov022_0215a790[];
extern char data_ov022_0215a7a8[];
extern char data_ov022_0215a7c0[];
extern char func_ov022_0215a598[];
extern char func_ov022_0215a5dc[];
extern char func_ov022_0215a5fc[];
extern char func_ov022_0215a608[];
// clang-format off
asm void func_ov022_0215a268(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r10, r0
    bl func_020c9304
    mov r0, r10
    mov r1, #0x0
    bl func_020ca3a8
    str r0, [sp, #0x4]
    ldr r1, =data_ov022_0215a748
    mov r0, r10
    bl func_020c7020
    mov r1, r0
    mov r0, r10
    bl func_020ca3a8
    mov r5, r0
    ldr r1, =data_ov022_0215a760
    mov r0, r10
    bl func_020c7020
    mov r1, r0
    mov r0, r10
    bl func_020ca3a8
    mov r4, r0
    ldr r1, =data_ov022_0215a778
    mov r0, r10
    bl func_020c7020
    mov r1, r0
    mov r0, r10
    bl func_020ca3a8
    str r0, [sp, #0x8]
    ldr r1, =data_ov022_0215a790
    mov r0, r10
    bl func_020c7020
    mov r1, r0
    mov r0, r10
    bl func_020ca3a8
    str r0, [sp, #0xc]
    mov r0, r10
    bl func_020c6edc
    mov r0, r10
    mov r1, #0x0
    bl func_020c7184
    ldr r2, =data_ov022_0215a7c0
    mov r1, #0x4
    ldr r2, [r2, #0x0]
    str r0, [r2, #0x8]
    mov r0, r10
    bl func_020c7184
    ldr r1, =data_ov022_0215a7c0
    ldr r1, [r1, #0x0]
    str r0, [r1, #0xc]
    bl func_020ca2ec
    add r0, sp, #0x10
    bl func_020c9154
    ldr r1, =func_ov022_0215a608
    mov r0, r10
    str r1, [sp, #0x14]
    add r1, sp, #0x10
    bl func_020c90bc
    mov r1, #0x0
    str r0, [sp, #0x0]
    bl func_020ca5d4
    mov r9, r0
    mov r2, r4
    mov r0, r10
    mov r1, #0x88
    bl func_020caa6c
    mov r1, r0
    mov r0, r9
    bl func_020ca4f4
    mov r2, r5
    mov r0, r10
    mov r1, #0x88
    bl func_020caa6c
    ldr r1, =func_ov022_0215a5dc
    mov r5, r0
    bl func_020ca4b0
    mov r0, r5
    mov r1, r10
    mov r2, #0x1
    bl func_020ca944
    ldr r4, [r5, #0x78]
    ldr r1, =data_ov022_0215a7a8
    mov r0, r10
    bl func_020c6f9c
    mov r1, r0
    mov r0, r4
    bl func_020c93d4
    ldr r0, =data_ov022_0215a740
    mov r2, #0x0
    ldr r3, [r0, #0x0]
    mov r1, r5
    str r3, [r4, #0x8]
    swpb r2, r2, [r4]
    mov r0, r9
    bl func_020ca4f4
    ldr r11, =func_ov022_0215a598
    mov r8, #0x0
    add r6, sp, #0x8
    mov r7, #0x88
    mov r4, #0x64000
L_0215a3f8:
    and r0, r8, #0x1
    ldr r2, [r6, r0, lsl #0x2]
    mov r0, r10
    mov r1, r7
    bl func_020caa6c
    mul r2, r8, r4
    mov r5, r0
    mov r1, r11
    str r2, [r5, #0x38]
    bl func_020ca4b0
    mov r0, r9
    mov r1, r5
    bl func_020ca4f4
    add r0, r8, #0x1
    mov r0, r0, lsl #0x10
    mov r8, r0, asr #0x10
    cmp r8, #0x4
    blt L_0215a3f8
    ldr r2, [sp, #0x4]
    mov r0, r10
    mov r1, #0x88
    bl func_020caa6c
    ldr r1, =data_ov022_0215a7c0
    mov r4, r0
    ldr r2, [r1, #0x0]
    mov r0, r9
    mov r1, r4
    str r4, [r2, #0x4]
    bl func_020ca4f4
    ldr r1, =0x2108
    mov r0, r4
    bl func_020ca750
    mov r0, r4
    mov r1, r10
    mov r2, #0x1
    bl func_020ca9b8
    ldr r1, =data_ov022_0215a7c0
    mov r0, r4
    ldr r1, [r1, #0x0]
    ldr r1, [r1, #0xc]
    bl func_020ca7c8
    ldr r1, =func_ov022_0215a5fc
    mov r0, r4
    bl func_020ca4b0
    ldr r0, [sp, #0x0]
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

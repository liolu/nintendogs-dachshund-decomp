#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020c1974();
extern void func_020c19b0();
extern void func_020c1c58();
extern void func_020c1fb0();
extern void func_020c3ab8();
extern void func_020c3b50();
extern void func_020c3d00();
extern void func_020c4ce8();
extern void func_020c4da4();
extern void func_020c4eac();
extern void func_020c4ef0();
extern void func_020c4fd0();
extern void func_020c514c();
extern void func_020c51b4();
extern void func_020c536c();
extern void func_020c53b4();
extern void func_020c5468();
extern char data_ov007_021582e0[];
extern char data_ov007_02158300[];
extern char func_ov007_02157fc4[];
extern char func_ov007_021581dc[];
// clang-format off
asm void func_ov007_02157e3c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x10
    mov r7, r0
    bl func_020c3d00
    mov r0, r7
    mov r1, #0x0
    bl func_020c4da4
    mov r6, r0
    mov r0, r7
    mov r1, #0x0
    bl func_020c1fb0
    mov r1, r0
    mov r0, r7
    bl func_020c4da4
    mov r4, r0
    mov r0, r7
    bl func_020c19b0
    mov r0, r7
    mov r1, #0x0
    bl func_020c1c58
    ldr r2, =data_ov007_02158300
    mov r1, #0x4
    ldr r2, [r2, #0x0]
    str r0, [r2, #0x8]
    mov r0, r7
    bl func_020c1c58
    ldr r2, =data_ov007_02158300
    mov r1, #0x7a
    ldr r2, [r2, #0x0]
    str r0, [r2, #0xc]
    mov r0, r7
    bl func_020c1c58
    ldr r1, =data_ov007_02158300
    ldr r1, [r1, #0x0]
    str r0, [r1, #0x10]
    bl func_020c4ce8
    add r0, sp, #0x0
    bl func_020c3b50
    ldr r1, =func_ov007_021581dc
    mov r0, r7
    str r1, [sp, #0x4]
    add r1, sp, #0x0
    bl func_020c3ab8
    mov r1, #0x0
    mov r5, r0
    bl func_020c4fd0
    mov r8, r0
    mov r2, r4
    mov r0, r7
    mov r1, #0x88
    bl func_020c5468
    mov r1, r0
    mov r0, r8
    bl func_020c4ef0
    mov r2, r6
    mov r0, r7
    mov r1, #0x8c
    bl func_020c5468
    mov r4, r0
    mov r1, #0x0
    str r1, [r4, #0x88]
    ldr r2, =data_ov007_02158300
    mov r0, r8
    ldr r2, [r2, #0x0]
    mov r1, r4
    str r4, [r2, #0x4]
    bl func_020c4ef0
    ldr r1, =0x2108
    mov r0, r4
    bl func_020c514c
    mov r0, r4
    mov r1, r7
    mov r2, #0x1
    bl func_020c53b4
    mov r1, r7
    mov r0, r4
    mov r2, #0x1
    bl func_020c536c
    ldr r0, =data_ov007_021582e0
    bl func_020c1974
    mov r1, r0
    mov r0, r4
    bl func_020c51b4
    ldr r2, [r4, #0x7c]
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov r0, r4
    ldr r1, =func_ov007_02157fc4
    bl func_020c4eac
    mov r0, r5
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on

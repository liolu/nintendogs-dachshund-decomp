#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02072294();
extern void func_0207dcec();
extern void func_020f4e14();
extern void func_020f534c();
extern void func_020f5414();
extern void func_020f5424();
extern void func_020f54b8();
extern void func_020f7de0();
extern void func_020fa174();
extern char data_02155068[];
extern char data_02155070[];
extern char data_0215508c[];
extern char data_02155090[];
extern char data_02155094[];
extern char data_021550b4[];
extern char data_021550b8[];
extern char data_021550e4[];
extern char data_021550ec[];
extern char data_02155104[];
extern char data_0215512c[];
extern char data_021552c4[];
extern char data_027c0bf0[];
// clang-format off
asm void func_020f7640(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    bl func_020f54b8
    ldr r0, =data_02155068
    ldr r1, =0xbb8c
    ldr r0, [r0, #0x0]
    mov r2, #0x4
    bl func_0207dcec
    ldr r1, =data_02155090
    add r2, r0, #0xc
    str r0, [r1, #0x0]
    ldr r1, =data_021550e4
    ldr r0, =data_02155094
    str r2, [r1, #0x0]
    bl func_02072294
    ldr r7, =data_021550ec
    mov r8, #0x0
    ldr r4, =data_02155104
    mov r5, r7
    mov r6, #0x14
L_020f768c:
    mov r0, r7
    bl func_020f5414
    mov r0, r7
    mov r1, r6
    bl func_020f5424
    ldr r0, [r5, r8, lsl #0x2]
    add r7, r7, #0x4
    str r0, [r4, r8, lsl #0x2]
    add r8, r8, #0x1
    cmp r8, #0x3
    blo L_020f768c
    ldr r0, =data_02155068
    mov r1, #0x2000
    ldr r0, [r0, #0x0]
    mov r2, #0x20
    bl func_0207dcec
    ldr r2, =data_021550b4
    mov r1, #0x2000
    str r0, [r2, #0x0]
    bl func_020f7de0
    ldr r2, =data_021550e4
    ldr r1, =data_02155070
    mov r4, #0x0
    swpb r0, r4, [r1]
    ldr r3, [r2, #0x0]
    ldr r1, =data_0215508c
    ldr r0, =data_021550b8
    mov r2, #0x1
    ldr r6, =data_021552c4
    ldr r5, =data_0215512c
    str r3, [r1, #0x0]
    str r2, [r0, #0x0]
L_020f770c:
    mov r0, r6
    bl func_020f534c
    mov r0, r5
    bl func_020f534c
    add r4, r4, #0x1
    cmp r4, #0x3
    add r6, r6, #0x88
    add r5, r5, #0x88
    blo L_020f770c
    ldr r0, =data_027c0bf0
    mov r1, #0x20
    bl func_020f4e14
    bl func_020fa174
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on

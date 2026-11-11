#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02070efc();
extern void func_0207d6a4();
extern void func_0209464c();
extern void func_02094bb4();
extern void func_02094bb8();
extern void func_02094c80();
extern void func_02094c90();
extern void func_02094d24();
extern void func_02097654();
extern void func_020999e8();
extern char data_021545e0[];
extern char data_021545e8[];
extern char data_02154604[];
extern char data_02154608[];
extern char data_0215460c[];
extern char data_0215462c[];
extern char data_02154630[];
extern char data_0215465c[];
extern char data_02154664[];
extern char data_0215467c[];
extern char data_021546a4[];
extern char data_0215483c[];
extern char data_027c07e0[];
// clang-format off
asm void func_02096eac(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    bl func_02094d24
    ldr r0, =data_021545e0
    ldr r1, =0xbb8c
    ldr r0, [r0, #0x0]
    mov r2, #0x4
    bl func_0207d6a4
    ldr r1, =data_02154608
    add r2, r0, #0xc
    str r0, [r1, #0x0]
    ldr r1, =data_0215465c
    ldr r0, =data_0215460c
    str r2, [r1, #0x0]
    bl func_02070efc
    ldr r7, =data_02154664
    mov r8, #0x0
    ldr r4, =data_0215467c
    mov r5, r7
    mov r6, #0x14
L_02096ef8:
    mov r0, r7
    bl func_02094c80
    mov r0, r7
    mov r1, r6
    bl func_02094c90
    ldr r0, [r5, r8, lsl #0x2]
    add r7, r7, #0x4
    str r0, [r4, r8, lsl #0x2]
    add r8, r8, #0x1
    cmp r8, #0x3
    blo L_02096ef8
    ldr r0, =data_021545e0
    mov r1, #0x2000
    ldr r0, [r0, #0x0]
    mov r2, #0x20
    bl func_0207d6a4
    ldr r2, =data_0215462c
    mov r1, #0x2000
    str r0, [r2, #0x0]
    bl func_02097654
    ldr r2, =data_0215465c
    ldr r1, =data_021545e8
    mov r4, #0x0
    swpb r0, r4, [r1]
    ldr r3, [r2, #0x0]
    ldr r1, =data_02154604
    ldr r0, =data_02154630
    mov r2, #0x1
    ldr r6, =data_0215483c
    ldr r5, =data_021546a4
    str r3, [r1, #0x0]
    str r2, [r0, #0x0]
L_02096f78:
    mov r0, r6
    bl func_02094bb8
    mov r0, r5
    bl func_02094bb8
    add r4, r4, #0x1
    cmp r4, #0x3
    add r6, r6, #0x88
    add r5, r5, #0x88
    blo L_02096f78
    mov r0, #0x2
    bl func_02094bb4
    ldr r0, =data_027c07e0
    mov r1, #0x20
    bl func_0209464c
    bl func_020999e8
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on

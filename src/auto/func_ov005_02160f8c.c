#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003844();
extern void func_0205e950();
extern void func_02074d7c();
extern void func_02074dec();
extern void func_02074e3c();
extern void func_0207e718();
extern void func_0207e76c();
extern void func_020c234c();
extern char data_ov005_02161b84[];
extern char data_ov005_02161b8c[];
extern char data_ov005_02161ba4[];
extern char data_ov005_02161bb4[];
extern char data_ov005_02161bcc[];
extern char data_ov005_02161be0[];
extern char data_ov005_02161bf4[];
extern char data_ov005_02161c08[];
extern char data_ov005_02161dc4[];
// clang-format off
asm void func_ov005_02160f8c(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x40
    mov r1, #0x188
    mov r4, r0
    bl func_02003844
    ldr r1, =data_ov005_02161b84
    ldr r2, =data_ov005_02161dc4
    ldr r1, [r1, #0x0]
    str r0, [r2, #0x0]
    ldr r2, =data_ov005_02161b8c
    mov r0, r4
    bl func_020c234c
    ldr r1, =data_ov005_02161b84
    mov r4, r0
    ldr r3, [r1, #0x0]
    ldr r2, =data_ov005_02161ba4
    add r0, sp, #0x0
    mov r1, #0x40
    bl func_0205e950
    add r0, sp, #0x0
    bl func_0207e718
    ldr r2, =data_ov005_02161dc4
    mov r1, #0x40
    ldr r3, [r2, #0x0]
    ldr r2, =data_ov005_02161bb4
    str r0, [r3, #0x158]
    ldr r3, =data_ov005_02161b84
    add r0, sp, #0x0
    ldr r3, [r3, #0x0]
    bl func_0205e950
    add r0, sp, #0x0
    bl func_0207e718
    ldr r2, =data_ov005_02161dc4
    mov r1, #0x40
    ldr r3, [r2, #0x0]
    ldr r2, =data_ov005_02161bcc
    str r0, [r3, #0x15c]
    ldr r3, =data_ov005_02161b84
    add r0, sp, #0x0
    ldr r3, [r3, #0x0]
    bl func_0205e950
    add r0, sp, #0x0
    bl func_0207e718
    ldr r2, =data_ov005_02161dc4
    mov r1, #0x40
    ldr r3, [r2, #0x0]
    ldr r2, =data_ov005_02161be0
    str r0, [r3, #0x160]
    ldr r3, =data_ov005_02161b84
    add r0, sp, #0x0
    ldr r3, [r3, #0x0]
    bl func_0205e950
    add r0, sp, #0x0
    bl func_0207e718
    ldr r2, =data_ov005_02161dc4
    mov r1, #0x40
    ldr r3, [r2, #0x0]
    ldr r2, =data_ov005_02161bf4
    str r0, [r3, #0x164]
    ldr r3, =data_ov005_02161b84
    add r0, sp, #0x0
    ldr r3, [r3, #0x0]
    bl func_0205e950
    add r0, sp, #0x0
    bl func_0207e718
    ldr r2, =data_ov005_02161dc4
    mov r1, #0x40
    ldr r3, [r2, #0x0]
    ldr r2, =data_ov005_02161c08
    str r0, [r3, #0x168]
    ldr r3, =data_ov005_02161b84
    add r0, sp, #0x0
    ldr r3, [r3, #0x0]
    bl func_0205e950
    add r0, sp, #0x0
    bl func_0207e718
    ldr r1, =data_ov005_02161dc4
    ldr r1, [r1, #0x0]
    str r0, [r1, #0x16c]
    mov r0, r4
    bl func_0207e76c
    ldr r0, =data_ov005_02161dc4
    ldr r1, [r0, #0x0]
    ldr r0, [r1, #0x160]
    add r1, r1, #0x170
    bl func_02074dec
    ldr r0, =data_ov005_02161dc4
    ldr r1, [r0, #0x0]
    ldr r0, [r1, #0x164]
    add r1, r1, #0x174
    bl func_02074d7c
    ldr r0, =data_ov005_02161dc4
    ldr r1, [r0, #0x0]
    ldr r0, [r1, #0x168]
    add r1, r1, #0x178
    bl func_02074dec
    ldr r0, =data_ov005_02161dc4
    ldr r1, [r0, #0x0]
    ldr r0, [r1, #0x16c]
    add r1, r1, #0x17c
    bl func_02074e3c
    ldr r1, =data_ov005_02161dc4
    mov r3, #0x0
    ldr r2, [r1, #0x0]
    swpb r0, r3, [r2]
    ldr r0, [r1, #0x0]
    str r3, [r0, #0x180]
    ldr r0, [r1, #0x0]
    str r3, [r0, #0x184]
    add sp, sp, #0x40
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

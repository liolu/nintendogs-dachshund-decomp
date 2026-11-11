#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003844();
extern void func_0205e950();
extern void func_02078b34();
extern void func_02078f8c();
extern void func_0207e718();
extern void func_02107c9c();
extern void func_020c3dcc();
extern void func_020c533c();
extern char data_ov004_02163c7c[];
extern char func_ov004_02161ee0[];
extern char func_ov004_02162674[];
extern char func_ov004_02162818[];
// clang-format off
asm void func_ov004_02162874(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x44
    mov r4, r1
    mov r1, #0x6f
    mov r5, r0
    bl func_02107c9c
    ldr r1, =func_ov004_02162674
    ldr r0, =func_ov004_02161ee0
    str r1, [r5, #0x1f4]
    str r0, [r5, #0x1f8]
    ldr r1, =func_ov004_02162818
    mov r0, r4
    str r1, [r5, #0x1f0]
    mov r1, #0x24
    bl func_02003844
    str r0, [r5, #0x214]
    ldr r1, [r5, #0x214]
    mvn r0, #0x0
    strh r0, [r1, #0x0]
    mov r0, #0x0
    str r0, [r1, #0x20]
    strh r0, [r1, #0x1c]
    ldr r0, [r5, #0x1c]
    mov r1, #0x1
    ldr r0, [r0, #0x8]
    mov r2, #0x1f0000
    bl func_02078b34
    mov r1, r4
    mov r0, r5
    mov r2, #0x1
    bl func_020c533c
    ldr r2, =data_ov004_02163c7c
    ldr r3, [r5, #0x1ec]
    add r0, sp, #0x0
    mov r1, #0x40
    bl func_0205e950
    add r0, sp, #0x0
    bl func_0207e718
    mov r1, #0x0
    bl func_02078f8c
    ldr r4, [r5, #0x78]
    mov r1, r0
    mov r0, r4
    bl func_020c3dcc
    mov r0, #0x0
    swpb r0, r0, [r4]
    mov r0, #0x1000
    str r0, [r4, #0x8]
    add sp, sp, #0x44
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on

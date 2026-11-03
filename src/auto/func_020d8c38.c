#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003844();
extern void func_0205e950();
extern void func_02074d7c();
extern void func_02074dec();
extern void func_02074e3c();
extern void func_0207e718();
extern void func_020eb398();
extern void func_02107c9c();
extern char data_0214491c[];
extern char data_0214492c[];
extern char data_0214493c[];
extern char data_02144950[];
extern char data_02144960[];
extern char data_02144974[];
extern char data_02144988[];
extern char func_020d8540[];
extern char func_020d8554[];
extern char func_020d85e0[];
extern char func_020d8634[];
extern char func_020d8bf8[];
extern char func_020d8c34[];
// clang-format off
asm void func_020d8c38(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x44
    mov r4, r1
    mov r1, #0x4f
    mov r5, r0
    bl func_02107c9c
    ldr r0, =func_020d8bf8
    ldr r1, =func_020d8634
    str r0, [r5, #0x1f4]
    str r1, [r5, #0x1f8]
    ldr r0, =func_020d8c34
    ldr r1, =func_020d85e0
    str r0, [r5, #0x1f0]
    str r1, [r5, #0x20c]
    ldr r0, =func_020d8554
    ldr r1, =func_020d8540
    str r0, [r5, #0x208]
    str r1, [r5, #0x204]
    mov r0, r4
    mov r1, #0x2bc
    bl func_02003844
    str r0, [r5, #0x214]
    ldr r3, [r5, #0x1ec]
    ldr r2, =data_0214491c
    add r0, sp, #0x0
    mov r1, #0x40
    ldr r4, [r5, #0x214]
    bl func_0205e950
    add r0, sp, #0x0
    bl func_0207e718
    str r0, [r4, #0xc]
    ldr r2, =data_0214492c
    ldr r3, [r5, #0x1ec]
    add r0, sp, #0x0
    mov r1, #0x40
    bl func_0205e950
    add r0, sp, #0x0
    bl func_0207e718
    str r0, [r4, #0x10]
    ldr r2, =data_0214493c
    ldr r3, [r5, #0x1ec]
    add r0, sp, #0x0
    mov r1, #0x40
    bl func_0205e950
    add r0, sp, #0x0
    bl func_0207e718
    str r0, [r4, #0x14]
    ldr r2, =data_02144950
    ldr r3, [r5, #0x1ec]
    add r0, sp, #0x0
    mov r1, #0x40
    bl func_0205e950
    add r0, sp, #0x0
    bl func_0207e718
    str r0, [r4, #0x18]
    ldr r2, =data_02144960
    ldr r3, [r5, #0x1ec]
    add r0, sp, #0x0
    mov r1, #0x40
    bl func_0205e950
    add r0, sp, #0x0
    bl func_0207e718
    str r0, [r4, #0x1c]
    ldr r2, =data_02144974
    ldr r3, [r5, #0x1ec]
    add r0, sp, #0x0
    mov r1, #0x40
    bl func_0205e950
    add r0, sp, #0x0
    bl func_0207e718
    str r0, [r4, #0x20]
    ldr r3, [r5, #0x1ec]
    ldr r2, =data_02144988
    add r0, sp, #0x0
    mov r1, #0x40
    bl func_0205e950
    add r0, sp, #0x0
    bl func_0207e718
    str r0, [r4, #0x24]
    ldr r0, [r4, #0x18]
    add r1, r4, #0x28
    bl func_02074dec
    ldr r0, [r4, #0x1c]
    add r1, r4, #0x2c
    bl func_02074d7c
    ldr r0, [r4, #0x20]
    add r1, r4, #0x30
    bl func_02074dec
    ldr r0, [r4, #0x24]
    add r1, r4, #0x34
    bl func_02074e3c
    mov r3, #0x0
    mov r0, r3
    mov r2, #0x1
L_020fcda8:
    add r1, r4, r3, lsl #0x4
    str r2, [r1, #0x38]
    strh r0, [r1, #0x3e]
    strh r0, [r1, #0x40]
    strh r0, [r1, #0x42]
    strh r0, [r1, #0x44]
    add r3, r3, #0x1
    strh r2, [r1, #0x3c]
    cmp r3, #0x28
    blt L_020fcda8
    str r0, [r4, #0x2b8]
    str r0, [r4, #0x0]
    ldr r0, [r4, #0x0]
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    bl func_020eb398
    add r1, r4, #0x8
    mvn r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x44
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on

#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02071ae4();
extern void func_02071ce4();
extern void func_02097a2c();
extern void func_020c608c();
extern void func_020c629c();
extern char data_0213d1ac[];
// clang-format off
asm void func_02098bac(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x14
    mov r4, r2
    mov r2, #0x0
    ldr r3, =data_0213d1ac
    str r2, [sp, #0x0]
    ldr r6, [r3, #0x0]
    mov r7, r1
    mov r1, #0x2
    mov r3, #0x1f40
    mov r5, r0
    str r6, [sp, #0x4]
    bl func_02097a2c
    mov r0, r7
    bl func_02071ce4
    cmp r0, #0x0
    addeq sp, sp, #0x14
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    ldr r0, [r0, #0x0]
    bl func_02071ae4
    movs r7, r0
    addeq sp, sp, #0x14
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    add r3, sp, #0x8
    mov r1, r4
    mov r2, #0x3c
    bl func_020c629c
    mov lr, r5, lsr #0x10
    add r3, sp, #0x8
    mov r6, #0x4
    mov r1, r4
    swpb r4, r6, [r3]
    add ip, sp, #0xe
    mov r2, #0x3c
    mov r0, r7
    strh r5, [sp, #0xa]
    strh lr, [sp, #0xc]
    swpb r4, r2, [ip]
    bl func_020c608c
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on

#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200718c();
extern void func_02080d64();
extern void func_02080d78();
extern void func_02080df4();
extern char data_02159e38[];
// clang-format off
asm void func_020cedd4(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x6c
    ldr r1, =data_02159e38
    ldr r1, [r1, #0x0]
    add r1, r1, #0x1000
    ldr r5, [r1, #0x41c]
    add r4, r5, #0x60
    ldrh r1, [r4, #0x20]
    cmp r1, r0
    addeq sp, sp, #0x6c
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    strh r0, [r4, #0x20]
    add r0, sp, #0x0
    add r1, sp, #0x10
    bl func_0200718c
    bl func_02080d64
    mov r6, r0
    add r0, sp, #0x1c
    mov r7, r1
    bl func_02080d78
    mvn r0, #0x0
    and r1, r6, r0
    str r1, [r4, #0x2c]
    and r0, r7, r0
    str r0, [r4, #0x30]
    add r0, r4, #0x34
    bl func_02080df4
    ldr r0, [sp, #0x18]
    add r1, r4, #0x3a
    swpb r0, r0, [r1]
    add r1, r4, #0x3b
    ldr r0, [sp, #0x14]
    add r2, r4, #0x3c
    swpb r0, r0, [r1]
    add r1, r4, #0x3d
    ldr r0, [sp, #0x10]
    add r3, r4, #0x3e
    swpb r0, r0, [r2]
    add r2, r4, #0x3f
    ldr r0, [sp, #0x8]
    add r4, r5, #0x600
    swpb r0, r0, [r1]
    ldr r0, [sp, #0x4]
    swpb r0, r0, [r3]
    ldr r0, [sp, #0x0]
    swpb r0, r0, [r2]
    ldrh r0, [r4, #0xae]
    orr r0, r0, #0x1
    strh r0, [r4, #0xae]
    add sp, sp, #0x6c
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on

#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02080d64();
extern void func_02080d78();
extern void func_02080df4();
extern void func_020d1cdc();
extern void func_020d28d8();
extern char data_0214d750[];
extern char data_02159e38[];
// clang-format off
asm void func_020d1bd4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x5c
    movs r10, r0
    str r1, [sp, #0x0]
    str r2, [sp, #0x4]
    str r3, [sp, #0x8]
    bne L_020d1c9c
    ldr r0, =data_02159e38
    ldr r1, =data_0214d750
    ldr r0, [r0, #0x0]
    ldr r4, [r1, #0x0]
    add r0, r0, #0x1000
    ldr r8, [r0, #0x41c]
    add r6, r4, #0x2c
    add r5, r4, #0x1c
    add r7, r8, #0x60
    bl func_02080d64
    mov r11, r0
    add r0, sp, #0xc
    mov r9, r1
    bl func_02080d78
    mvn r0, #0x0
    and r1, r11, r0
    and r0, r9, r0
    str r1, [r8, #0x60]
    str r0, [r7, #0x4]
    add r0, r7, #0x8
    bl func_02080df4
    ldr r0, [r6, #0x8]
    add r1, r7, #0xe
    swpb r0, r0, [r1]
    add r1, r7, #0xf
    ldr r0, [r6, #0x4]
    add r2, r7, #0x10
    swpb r0, r0, [r1]
    add r1, r7, #0x11
    ldr r0, [r4, #0x2c]
    add r3, r7, #0x12
    swpb r0, r0, [r2]
    add r2, r7, #0x13
    ldr r0, [r5, #0x8]
    add r6, r8, #0x600
    swpb r0, r0, [r1]
    ldr r0, [r5, #0x4]
    swpb r0, r0, [r3]
    ldr r0, [r4, #0x1c]
    swpb r0, r0, [r2]
    ldrh r0, [r6, #0xae]
    orr r0, r0, #0x1
    strh r0, [r6, #0xae]
L_020d1c9c:
    ldr r1, [sp, #0x0]
    mov r0, r10
    bl func_020d28d8
    ldr r1, [r0, #0x10]
    cmp r1, #0x0
    addeq sp, sp, #0x5c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r1, [sp, #0x4]
    ldr r2, [sp, #0x8]
    bl func_020d1cdc
    add sp, sp, #0x5c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

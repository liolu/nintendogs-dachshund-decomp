#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020dd934();
extern void func_020e1564();
extern void func_020e1958();
extern void func_020e1a70();
extern char data_02159e70[];
// clang-format off
asm void func_020e2a84(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r2, =data_02159e70
    ldr ip, [r2, #0x0]
    add r1, ip, #0xc4
    ldr r0, [r1, #0x240]
    add lr, r1, #0x254
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    ldrb r3, [lr, #0xc]
    add r0, ip, #0x11000
    ldr ip, [lr, #0x10]
    add r1, r0, #0x164
    swpb r0, r3, [r1]
    ldr r0, [r2, #0x0]
    add r0, r0, #0x11000
    str ip, [r0, #0x168]
    ldr r0, [lr, #0x8]
    cmp r0, #0x0
    beq L_020e2af8
    cmp r0, #0x1
    beq L_020e2b20
    cmp r0, #0x2
    beq L_020e2b4c
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_020e2af8:
    mov r0, #0x1b
    bl func_020e1564
    ldr r0, =data_02159e70
    mov r1, #0xa
    ldr r0, [r0, #0x0]
    add sp, sp, #0x4
    add r0, r0, #0x1000
    str r1, [r0, #0xd1c]
    ldmfd sp!, {lr}
    bx lr
L_020e2b20:
    mov r0, #0x1f
    bl func_020e1564
    ldr r0, =data_02159e70
    mov r1, #0xf
    ldr r0, [r0, #0x0]
    add r0, r0, #0x1000
    str r1, [r0, #0xd1c]
    bl func_020dd934
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_020e2b4c:
    mov r0, #0x25
    bl func_020e1564
    ldr r0, =data_02159e70
    mov r1, #0x14
    ldr r0, [r0, #0x0]
    add r0, r0, #0x1000
    str r1, [r0, #0xd1c]
    bl func_020e1a70
    cmp r0, #0x4
    bhs L_020e2b88
    mov r0, #0x2
    bl func_020e1958
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_020e2b88:
    mov r0, #0x3
    bl func_020e1958
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on

#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02139bbc[];
extern char data_0214da84[];
// clang-format off
asm void func_0203de80(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r1, =data_0214da84
    ldrsb ip, [r0, #0x88]
    ldr r3, [r1, #0x0]
    mov lr, #0x0
    mov r2, lr
L_0203de9c:
    cmp lr, ip
    beq L_0203decc
    cmp lr, #0x0
    blt L_0203deb4
    cmp lr, #0x3
    blt L_0203debc
L_0203deb4:
    mov r1, r2
    b L_0203dec4
L_0203debc:
    add r1, r3, lr, lsl #0x2
    ldr r1, [r1, #0x54]
L_0203dec4:
    cmp r1, #0x0
    bne L_0203dee4
L_0203decc:
    add r1, lr, #0x1
    mov r1, r1, lsl #0x10
    mov lr, r1, asr #0x10
    cmp lr, #0x3
    blt L_0203de9c
    mov r1, #0x0
L_0203dee4:
    cmp r1, #0x0
    beq L_0203df10
    add r2, r0, #0xd2
    mov r1, #0x1
    swpb r1, r1, [r2]
    add sp, sp, #0x4
    ldr r0, [r0, #0x9e8]
    mov r1, #0x0
    strh r1, [r0, #0x24]
    ldmfd sp!, {lr}
    bx lr
L_0203df10:
    ldrsb r3, [r0, #0x8d]
    ldr r1, =data_02139bbc
    add r2, r0, #0xd2
    mov r3, r3, lsl #0x1
    ldrh r1, [r1, r3]
    mov r3, #0x1
    mov r1, r1, asr #0x1
    mov r1, r1, lsl #0x10
    movs ip, r1, asr #0x10
    swpb r1, r3, [r2]
    movmi ip, #0x0
    ldr r1, =0x2710
    ldr r0, [r0, #0x9e8]
    cmp ip, r1
    movgt ip, r1
    strh ip, [r0, #0x24]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on

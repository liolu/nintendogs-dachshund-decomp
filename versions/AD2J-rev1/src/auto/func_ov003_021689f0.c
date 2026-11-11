#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020280c8();
extern void func_02028f90();
extern char data_0214b484[];
// clang-format off
asm void func_ov003_021689f0(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r1
    mov r5, r0
    cmp r4, #0x1
    beq L_02168a24
    cmp r4, #0x2
    beq L_02168a44
    cmp r4, #0x3
    beq L_02168ab8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02168a24:
    mov r1, #0x4d
    mov r2, #0x1
    bl func_02028f90
    add r1, r5, #0xce
    add sp, sp, #0x4
    swpb r0, r4, [r1]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02168a44:
    bl func_020280c8
    cmp r0, #0x0
    bne L_02168a94
    ldr r0, =data_0214b484
    ldr r2, =0x10dcd
    ldr r3, [r0, #0x0]
    mov r0, r5
    ldr ip, [r3, #0x0]
    mov r1, #0x4e
    mul r2, ip, r2
    add ip, r2, #0x1
    mov r2, ip, lsl #0x10
    mov r2, r2, lsr #0x1f
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    add r2, r2, #0x1
    and r2, r2, #0xff
    str ip, [r3, #0x0]
    bl func_02028f90
    b L_02168aa4
L_02168a94:
    mov r0, r5
    mov r1, #0x4e
    mov r2, #0x3
    bl func_02028f90
L_02168aa4:
    add r1, r5, #0xce
    add sp, sp, #0x4
    swpb r0, r4, [r1]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02168ab8:
    mov r1, #0x4f
    mov r2, #0x1
    bl func_02028f90
    add r1, r5, #0xce
    swpb r0, r4, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on

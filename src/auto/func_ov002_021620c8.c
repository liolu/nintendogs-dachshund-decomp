#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020254f0();
extern void func_02026420();
extern char data_0214b484[];
// clang-format off
asm void func_ov002_021620c8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x11f
    add r0, r4, #0x100
    ldr r1, =data_0214b484
    strh r2, [r0, #0x50]
    ldr r2, [r1, #0x0]
    ldr r0, =0x10dcd
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1e
    mov r0, r0, lsl #0x10
    str r1, [r2, #0x0]
    movs r0, r0, lsr #0x10
    beq L_02162120
    cmp r0, #0x1
    beq L_02162128
    cmp r0, #0x2
    beq L_02162130
    b L_02162138
L_02162120:
    mov r1, #0x3a
    b L_0216213c
L_02162128:
    mov r1, #0x3b
    b L_0216213c
L_02162130:
    mov r1, #0x3c
    b L_0216213c
L_02162138:
    mov r1, #0x0
L_0216213c:
    add r0, r4, #0x100
    strh r1, [r0, #0x52]
    add r1, r4, #0xac
    mov r0, #0x5
    swpb r0, r0, [r1]
    mov r0, r4
    add r2, r4, #0xb0
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026420
    mov r0, r4
    bl func_020254f0
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

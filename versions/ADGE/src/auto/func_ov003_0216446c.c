#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025538();
extern void func_02026468();
extern char data_0214da84[];
// clang-format off
asm void func_ov003_0216446c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x11e
    add r0, r4, #0x100
    ldr r1, =data_0214da84
    strh r2, [r0, #0x52]
    ldr r3, [r1, #0x0]
    ldr r0, =0x10dcd
    ldr r2, [r3, #0x0]
    mov r1, #0x3
    mul r0, r2, r0
    add r2, r0, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    str r2, [r3, #0x0]
    movs r0, r0, lsr #0x10
    beq L_021644d0
    cmp r0, #0x1
    beq L_021644d8
    cmp r0, #0x2
    beq L_021644e0
    b L_021644e8
L_021644d0:
    mov r1, #0x3a
    b L_021644ec
L_021644d8:
    mov r1, #0x3b
    b L_021644ec
L_021644e0:
    mov r1, #0x3c
    b L_021644ec
L_021644e8:
    mov r1, #0x0
L_021644ec:
    add r0, r4, #0x100
    strh r1, [r0, #0x54]
    add r1, r4, #0x93
    mov r0, #0x5
    swpb r0, r0, [r1]
    mov r0, r4
    add r2, r4, #0x97
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026468
    mov r0, r4
    bl func_02025538
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

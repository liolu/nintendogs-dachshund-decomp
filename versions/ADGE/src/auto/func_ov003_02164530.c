#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025538();
extern void func_02026468();
extern char data_0214da84[];
// clang-format off
asm void func_ov003_02164530(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x11f
    add r0, r4, #0x100
    ldr r1, =data_0214da84
    strh r2, [r0, #0x52]
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
    beq L_02164588
    cmp r0, #0x1
    beq L_02164590
    cmp r0, #0x2
    beq L_02164598
    b L_021645a0
L_02164588:
    mov r1, #0x3a
    b L_021645a4
L_02164590:
    mov r1, #0x3b
    b L_021645a4
L_02164598:
    mov r1, #0x3c
    b L_021645a4
L_021645a0:
    mov r1, #0x0
L_021645a4:
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

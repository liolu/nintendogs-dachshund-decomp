#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025690();
extern void func_02026468();
extern void func_02034e44();
extern char data_0214da84[];
// clang-format off
asm void func_020590fc(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0xf1
    strh r2, [r1, #0x52]
    bl func_02034e44
    add r1, r4, #0x100
    strh r0, [r1, #0x58]
    add r1, r4, #0x93
    mov r0, #0x5
    swpb r0, r0, [r1]
    mov r0, r4
    add r2, r4, #0x97
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026468
    mov r0, r4
    bl func_02025690
    ldr r1, =data_0214da84
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1f
    mov r0, r0, lsl #0x10
    str r1, [r2, #0x0]
    mov r0, r0, lsr #0x10
    str r0, [r4, #0x464]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

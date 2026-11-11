#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02023644();
extern void func_02025690();
extern void func_02026468();
extern char data_0214da84[];
// clang-format off
asm void func_02059420(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0xeb
    strh r2, [r1, #0x52]
    add r2, r4, #0x97
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026468
    mov r0, r4
    bl func_02025690
    ldr r0, =data_0214da84
    ldr r2, =0x10dcd
    ldr ip, [r0, #0x0]
    mov r0, r4
    ldr r3, [ip, #0x0]
    mov r1, #0x3b
    mul r2, r3, r2
    add r3, r2, #0x1
    mov r2, r3, lsl #0x10
    mov r2, r2, lsr #0x1f
    mov r2, r2, lsl #0x10
    str r3, [ip, #0x0]
    mov r3, r2, lsr #0x10
    mov r2, #0x1
    str r3, [r4, #0x464]
    bl func_02023644
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

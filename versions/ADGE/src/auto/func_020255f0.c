#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020255f0(void) {
    stmfd sp!, {r4, lr}
    ldr r2, [r0, #0x9e8]
    ldr r1, =0x1cd4
    ldr r2, [r2, #0x8]
    mov r3, #0x0
    umull r4, lr, r2, r1
    mla lr, r2, r3, lr
    mov ip, r2, asr #0x1f
    mov r2, #0x800
    adds r2, r4, r2
    mla lr, ip, r1, lr
    adc r1, lr, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [r0, #0x920]
    add r1, r0, #0xaf
    swpb r0, r3, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

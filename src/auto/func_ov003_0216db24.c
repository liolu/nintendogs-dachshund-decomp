#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025538();
extern void func_02028114();
// clang-format off
asm void func_ov003_0216db24(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x170
    strh r2, [r1, #0x52]
    mov r3, #0x4
    strh r3, [r1, #0x56]
    add r2, r4, #0x97
    swpb r1, r3, [r2]
    add r2, r4, #0x98
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02028114
    mov r1, #0x400
    rsb r1, r1, #0x0
    mvn r2, #0x0
    umull lr, ip, r0, r1
    mov r3, #0x800
    adds r3, lr, r3
    mla ip, r0, r2, ip
    mov r0, r0, asr #0x1f
    mla ip, r0, r1, ip
    adc r0, ip, #0x0
    mov r1, r3, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r0, =0x111
    str r1, [r4, #0x240]
    ldr r1, =0x99c
    str r0, [r4, #0x244]
    mov r0, r4
    str r1, [r4, #0x24c]
    bl func_02025538
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

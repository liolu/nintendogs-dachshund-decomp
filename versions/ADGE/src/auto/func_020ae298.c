#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0213eac0[];
// clang-format off
asm void func_020ae298(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    ldr r2, =data_0213eac0
    mov ip, #0x800
    add r3, r2, r0, lsl #0x4
    ldr r4, [r3, #0x8]
    mov r5, #0x29
    str r4, [r1, #0xf8]
    ldr r7, [r3, #0x8]
    ldr r6, [r2, r0, lsl #0x4]
    mov r4, #0x5000
    str r7, [r1, #0xfc]
    str r6, [r1, #0x100]
    str r7, [r1, #0x104]
    ldr r7, [r3, #0x8]
    mov lr, #0x4
    mov r6, r7, asr #0x1f
    mov r6, r6, lsl #0xb
    mov r8, r7, lsl #0xb
    adds r8, r8, ip
    orr r6, r6, r7, lsr #0x15
    adc r6, r6, #0x0
    mov r7, r8, lsr #0xc
    orr r7, r7, r6, lsl #0x14
    str r7, [r1, #0x120]
    str r5, [r1, #0x108]
    str r5, [r1, #0x10c]
    str r5, [r1, #0x110]
    str r4, [r1, #0x114]
    str r5, [r1, #0x118]
    str r5, [r1, #0x11c]
    ldr r4, [r3, #0xc]
    add ip, r1, #0x160
    str r4, [r1, #0x128]
    ldr r0, [r2, r0, lsl #0x4]
    mov r2, #0x0
    str r0, [r1, #0x124]
    str lr, [r1, #0x12c]
    swpb r0, r2, [ip]
    mov r0, #0x2
    str r2, [r1, #0x168]
    ldr r2, [r3, #0x4]
    str r2, [r1, #0xac]
    strh r0, [r1, #0xa6]
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on

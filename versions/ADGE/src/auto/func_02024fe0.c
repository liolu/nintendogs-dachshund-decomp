#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
// clang-format off
asm void func_02024fe0(void) {
    stmfd sp!, {r4, lr}
    mov ip, r0
    ldrb r0, [ip, #0xac]
    cmp r0, #0x0
    beq L_02025060
    ldr r2, [ip, #0x18c]
    mov r0, #0x800
    smull r4, r3, r2, r1
    adds r4, r4, r0
    adc r2, r3, #0x0
    mov r3, r4, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    str r3, [ip, #0x260]
    ldr r3, [ip, #0x190]
    add r2, ip, #0xac
    smull lr, r4, r3, r1
    adds lr, lr, r0
    adc r3, r4, #0x0
    mov r4, lr, lsr #0xc
    orr r4, r4, r3, lsl #0x14
    str r4, [ip, #0x264]
    ldr lr, [ip, #0x194]
    mov r3, #0x0
    smull r4, r1, lr, r1
    adds r4, r4, r0
    adc r0, r1, #0x0
    mov r1, r4, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [ip, #0x268]
    swpb r0, r3, [r2]
    ldmfd sp!, {r4, lr}
    bx lr
L_02025060:
    add r2, ip, #0x260
    mov r0, r1
    mov r3, r2
    add r1, ip, #0x18c
    bl func_01ff832c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

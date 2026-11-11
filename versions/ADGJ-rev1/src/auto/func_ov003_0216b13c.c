#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020280f8();
extern void func_ov003_0216a024();
// clang-format off
asm void func_ov003_0216b13c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r5, r0
    ldrsh r0, [r5, #0xdc]
    bl func_ov003_0216a024
    movs r4, r0
    beq L_0216d758
    bl func_020280f8
    mov r1, #0x6000
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
    mov r0, r4
    str r1, [sp, #0x0]
    bl func_020280f8
    mov r1, #0x6000
    mov r4, #0x1000
    mov r3, #0x0
    umull lr, ip, r0, r1
    mov r2, #0x800
    adds r2, lr, r2
    mla ip, r0, r3, ip
    mov r0, r0, asr #0x1f
    mla ip, r0, r1, ip
    adc r0, ip, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [sp, #0x4]
    str r4, [sp, #0x8]
    b L_0216d770
L_0216d758:
    mov r1, #0x6000
    rsb r2, r1, #0x0
    mov r0, #0x1000
    str r2, [sp, #0x0]
    str r1, [sp, #0x4]
    str r0, [sp, #0x8]
L_0216d770:
    mov r0, #0x0
    add r1, r5, #0xa4
    str r0, [r5, #0xe0]
    swpb r0, r0, [r1]
    add r3, r5, #0xa8
    add r0, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on

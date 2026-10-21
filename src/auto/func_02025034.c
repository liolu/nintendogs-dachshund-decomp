#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
// clang-format off
asm void func_02025034(void) {
    stmfd sp!, {r4, lr}
    mov ip, r0
    add r0, ip, #0x100
    ldrsh lr, [r0, #0x50]
    ldrsh r4, [r0, #0x60]
    cmp r4, lr
    bne L_02025060
    ldrsh r0, [r0, #0x2]
    cmp r0, r1
    movge r0, #0x1
    bge L_02025064
L_02025060:
    mov r0, #0x0
L_02025064:
    cmp r0, #0x0
    beq L_02025128
    cmp r4, lr
    bne L_02025088
    add r0, ip, #0x100
    ldrsh r0, [r0, #0x2]
    cmp r0, r2
    movle r0, #0x1
    ble L_0202508c
L_02025088:
    mov r0, #0x0
L_0202508c:
    cmp r0, #0x0
    beq L_02025128
    ldrb r0, [ip, #0xc3]
    cmp r0, #0x0
    beq L_02025108
    ldr r1, [ip, #0x1a4]
    mov r0, #0x800
    smull r4, r2, r1, r3
    adds r4, r4, r0
    adc r1, r2, #0x0
    mov r2, r4, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [ip, #0x260]
    ldr r2, [ip, #0x1a8]
    add r1, ip, #0xc3
    smull lr, r4, r2, r3
    adds lr, lr, r0
    adc r2, r4, #0x0
    mov r4, lr, lsr #0xc
    orr r4, r4, r2, lsl #0x14
    str r4, [ip, #0x264]
    ldr lr, [ip, #0x1ac]
    mov r2, #0x0
    smull r4, r3, lr, r3
    adds r4, r4, r0
    adc r0, r3, #0x0
    mov r3, r4, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    str r3, [ip, #0x268]
    swpb r0, r2, [r1]
    b L_0202511c
L_02025108:
    add r2, ip, #0x260
    mov r0, r3
    mov r3, r2
    add r1, ip, #0x1a4
    bl func_01ff832c
L_0202511c:
    mov r0, #0x1
    ldmfd sp!, {r4, lr}
    bx lr
L_02025128:
    mov r0, #0x0
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

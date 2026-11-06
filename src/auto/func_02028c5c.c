#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214b484[];
// clang-format off
asm void func_02028c5c(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r3, =data_0214b484
    ldrsb ip, [r0, #0x88]
    ldr r3, [r3, #0x0]
    ldrsb r3, [r3, #0xc]
    cmp ip, r3
    bne L_02028d70
    ldrsh lr, [r0, #0xf0]
    cmp lr, #0x4
    blt L_02028c94
    cmp lr, #0x8
    movle r3, #0x1
    ble L_02028cd4
L_02028c94:
    cmp lr, #0x57
    moveq r3, #0x1
    beq L_02028cd4
    ldrsh ip, [r0, #0xe8]
    cmp ip, #0xf
    blt L_02028cb8
    cmp ip, #0x4b
    movle r3, #0x1
    ble L_02028cd4
L_02028cb8:
    ldr r3, =0x119
    cmp ip, r3
    blt L_02028cd0
    cmp ip, #0x13c
    movle r3, #0x1
    ble L_02028cd4
L_02028cd0:
    mov r3, #0x0
L_02028cd4:
    cmp r3, #0x0
    movne r3, #0x0
    bne L_02028d34
    ldrsh ip, [r0, #0xe8]
    ldr r3, =0x477
    cmp ip, r3
    blt L_02028d00
    ldr r3, =0x47d
    cmp ip, r3
    movle r3, #0x0
    ble L_02028d34
L_02028d00:
    ldr r3, =0x4c6
    cmp ip, r3
    blt L_02028d1c
    ldr r3, =0x4c9
    cmp ip, r3
    movle r3, #0x0
    ble L_02028d34
L_02028d1c:
    cmp lr, #0x53
    moveq r3, #0x0
    beq L_02028d34
    cmp lr, #0x54
    moveq r3, #0x0
    movne r3, #0x1
L_02028d34:
    cmp r3, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    add ip, r0, #0xbe
    mov lr, #0x0
    swpb r3, lr, [ip]
    add sp, sp, #0x4
    add r3, r0, #0x100
    strh lr, [r3, #0x20]
    strh r1, [r0, #0xf0]
    add r1, r0, #0xc4
    swpb r0, r2, [r1]
    ldmfd sp!, {lr}
    bx lr
L_02028d70:
    ldrsh lr, [r0, #0xf0]
    cmp lr, #0x4
    blt L_02028d88
    cmp lr, #0x8
    movle r3, #0x1
    ble L_02028dc8
L_02028d88:
    cmp lr, #0x57
    moveq r3, #0x1
    beq L_02028dc8
    ldrsh ip, [r0, #0xe8]
    cmp ip, #0xf
    blt L_02028dac
    cmp ip, #0x4b
    movle r3, #0x1
    ble L_02028dc8
L_02028dac:
    ldr r3, =0x119
    cmp ip, r3
    blt L_02028dc4
    cmp ip, #0x13c
    movle r3, #0x1
    ble L_02028dc8
L_02028dc4:
    mov r3, #0x0
L_02028dc8:
    cmp r3, #0x0
    movne r3, #0x0
    bne L_02028e28
    ldrsh ip, [r0, #0xe8]
    ldr r3, =0x477
    cmp ip, r3
    blt L_02028df4
    ldr r3, =0x47d
    cmp ip, r3
    movle r3, #0x0
    ble L_02028e28
L_02028df4:
    ldr r3, =0x4c6
    cmp ip, r3
    blt L_02028e10
    ldr r3, =0x4c9
    cmp ip, r3
    movle r3, #0x0
    ble L_02028e28
L_02028e10:
    cmp lr, #0x53
    moveq r3, #0x0
    beq L_02028e28
    cmp lr, #0x54
    moveq r3, #0x0
    movne r3, #0x1
L_02028e28:
    cmp r3, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    add ip, r0, #0xbe
    mov r3, #0x1
    swpb r3, r3, [ip]
    add r3, r0, #0x100
    mov ip, #0x0
    strh ip, [r3, #0x20]
    strh r1, [r0, #0xf0]
    add r1, r0, #0xc4
    swpb r0, r2, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on

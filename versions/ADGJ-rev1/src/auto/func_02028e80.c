#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02028e80(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldrsh lr, [r0, #0xf0]
    cmp lr, #0x4
    blt L_02028ea0
    cmp lr, #0x8
    movle r3, #0x1
    ble L_02028ee0
L_02028ea0:
    cmp lr, #0x57
    moveq r3, #0x1
    beq L_02028ee0
    ldrsh ip, [r0, #0xe8]
    cmp ip, #0xf
    blt L_02028ec4
    cmp ip, #0x4b
    movle r3, #0x1
    ble L_02028ee0
L_02028ec4:
    ldr r3, =0x119
    cmp ip, r3
    blt L_02028edc
    cmp ip, #0x13c
    movle r3, #0x1
    ble L_02028ee0
L_02028edc:
    mov r3, #0x0
L_02028ee0:
    cmp r3, #0x0
    movne r3, #0x0
    bne L_02028f40
    ldrsh ip, [r0, #0xe8]
    ldr r3, =0x477
    cmp ip, r3
    blt L_02028f0c
    ldr r3, =0x47d
    cmp ip, r3
    movle r3, #0x0
    ble L_02028f40
L_02028f0c:
    ldr r3, =0x4c6
    cmp ip, r3
    blt L_02028f28
    ldr r3, =0x4c9
    cmp ip, r3
    movle r3, #0x0
    ble L_02028f40
L_02028f28:
    cmp lr, #0x53
    moveq r3, #0x0
    beq L_02028f40
    cmp lr, #0x54
    moveq r3, #0x0
    movne r3, #0x1
L_02028f40:
    cmp r3, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    add ip, r0, #0xbe
    mov lr, #0x0
    swpb r3, lr, [ip]
    add r3, r0, #0x100
    strh lr, [r3, #0x20]
    strh r1, [r0, #0xf0]
    add r1, r0, #0xc4
    swpb r0, r2, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on

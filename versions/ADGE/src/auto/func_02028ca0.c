#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214da84[];
// clang-format off
asm void func_02028ca0(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r3, =data_0214da84
    ldrsb ip, [r0, #0x88]
    ldr r3, [r3, #0x0]
    ldrsb r3, [r3, #0x7]
    cmp ip, r3
    bne L_02028db4
    ldrsh lr, [r0, #0xf0]
    cmp lr, #0x4
    blt L_02028cd8
    cmp lr, #0x8
    movle r3, #0x1
    ble L_02028d18
L_02028cd8:
    cmp lr, #0x57
    moveq r3, #0x1
    beq L_02028d18
    ldrsh ip, [r0, #0xea]
    cmp ip, #0xf
    blt L_02028cfc
    cmp ip, #0x4b
    movle r3, #0x1
    ble L_02028d18
L_02028cfc:
    ldr r3, =0x119
    cmp ip, r3
    blt L_02028d14
    cmp ip, #0x13c
    movle r3, #0x1
    ble L_02028d18
L_02028d14:
    mov r3, #0x0
L_02028d18:
    cmp r3, #0x0
    movne r3, #0x0
    bne L_02028d78
    ldrsh ip, [r0, #0xea]
    ldr r3, =0x478
    cmp ip, r3
    blt L_02028d44
    ldr r3, =0x47e
    cmp ip, r3
    movle r3, #0x0
    ble L_02028d78
L_02028d44:
    ldr r3, =0x4c7
    cmp ip, r3
    blt L_02028d60
    ldr r3, =0x4ca
    cmp ip, r3
    movle r3, #0x0
    ble L_02028d78
L_02028d60:
    cmp lr, #0x53
    moveq r3, #0x0
    beq L_02028d78
    cmp lr, #0x54
    moveq r3, #0x0
    movne r3, #0x1
L_02028d78:
    cmp r3, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    add ip, r0, #0xa8
    mov lr, #0x0
    swpb r3, lr, [ip]
    add sp, sp, #0x4
    add r3, r0, #0x100
    strh lr, [r3, #0x12]
    strh r1, [r0, #0xf0]
    add r1, r0, #0xa5
    swpb r0, r2, [r1]
    ldmfd sp!, {lr}
    bx lr
L_02028db4:
    ldrsh lr, [r0, #0xf0]
    cmp lr, #0x4
    blt L_02028dcc
    cmp lr, #0x8
    movle r3, #0x1
    ble L_02028e0c
L_02028dcc:
    cmp lr, #0x57
    moveq r3, #0x1
    beq L_02028e0c
    ldrsh ip, [r0, #0xea]
    cmp ip, #0xf
    blt L_02028df0
    cmp ip, #0x4b
    movle r3, #0x1
    ble L_02028e0c
L_02028df0:
    ldr r3, =0x119
    cmp ip, r3
    blt L_02028e08
    cmp ip, #0x13c
    movle r3, #0x1
    ble L_02028e0c
L_02028e08:
    mov r3, #0x0
L_02028e0c:
    cmp r3, #0x0
    movne r3, #0x0
    bne L_02028e6c
    ldrsh ip, [r0, #0xea]
    ldr r3, =0x478
    cmp ip, r3
    blt L_02028e38
    ldr r3, =0x47e
    cmp ip, r3
    movle r3, #0x0
    ble L_02028e6c
L_02028e38:
    ldr r3, =0x4c7
    cmp ip, r3
    blt L_02028e54
    ldr r3, =0x4ca
    cmp ip, r3
    movle r3, #0x0
    ble L_02028e6c
L_02028e54:
    cmp lr, #0x53
    moveq r3, #0x0
    beq L_02028e6c
    cmp lr, #0x54
    moveq r3, #0x0
    movne r3, #0x1
L_02028e6c:
    cmp r3, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    add ip, r0, #0xa8
    mov r3, #0x1
    swpb r3, r3, [ip]
    add r3, r0, #0x100
    mov ip, #0x0
    strh ip, [r3, #0x12]
    strh r1, [r0, #0xf0]
    add r1, r0, #0xa5
    swpb r0, r2, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on

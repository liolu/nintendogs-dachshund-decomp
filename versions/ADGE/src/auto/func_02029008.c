#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02029008(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldrsh lr, [r0, #0xf0]
    cmp lr, #0x4
    blt L_02029028
    cmp lr, #0x8
    movle r3, #0x1
    ble L_02029068
L_02029028:
    cmp lr, #0x57
    moveq r3, #0x1
    beq L_02029068
    ldrsh ip, [r0, #0xea]
    cmp ip, #0xf
    blt L_0202904c
    cmp ip, #0x4b
    movle r3, #0x1
    ble L_02029068
L_0202904c:
    ldr r3, =0x119
    cmp ip, r3
    blt L_02029064
    cmp ip, #0x13c
    movle r3, #0x1
    ble L_02029068
L_02029064:
    mov r3, #0x0
L_02029068:
    cmp r3, #0x0
    movne r3, #0x0
    bne L_020290c8
    ldrsh ip, [r0, #0xea]
    ldr r3, =0x478
    cmp ip, r3
    blt L_02029094
    ldr r3, =0x47e
    cmp ip, r3
    movle r3, #0x0
    ble L_020290c8
L_02029094:
    ldr r3, =0x4c7
    cmp ip, r3
    blt L_020290b0
    ldr r3, =0x4ca
    cmp ip, r3
    movle r3, #0x0
    ble L_020290c8
L_020290b0:
    cmp lr, #0x53
    moveq r3, #0x0
    beq L_020290c8
    cmp lr, #0x54
    moveq r3, #0x0
    movne r3, #0x1
L_020290c8:
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

#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0202d3cc(void) {
    ldrb r1, [r0, #0xa5]
    cmp r1, #0x0
    beq L_0202d5c0
    cmp r1, #0x1
    beq L_0202d4d4
    cmp r1, #0x2
    bxne lr
    ldrsh r3, [r0, #0xf0]
    cmp r3, #0x4
    blt L_0202d400
    cmp r3, #0x8
    movle r1, #0x1
    ble L_0202d440
L_0202d400:
    cmp r3, #0x57
    moveq r1, #0x1
    beq L_0202d440
    ldrsh r2, [r0, #0xea]
    cmp r2, #0xf
    blt L_0202d424
    cmp r2, #0x4b
    movle r1, #0x1
    ble L_0202d440
L_0202d424:
    ldr r1, =0x119
    cmp r2, r1
    blt L_0202d43c
    cmp r2, #0x13c
    movle r1, #0x1
    ble L_0202d440
L_0202d43c:
    mov r1, #0x0
L_0202d440:
    cmp r1, #0x0
    movne r1, #0x0
    bne L_0202d4a0
    ldrsh r2, [r0, #0xea]
    ldr r1, =0x478
    cmp r2, r1
    blt L_0202d46c
    ldr r1, =0x47e
    cmp r2, r1
    movle r1, #0x0
    ble L_0202d4a0
L_0202d46c:
    ldr r1, =0x4c7
    cmp r2, r1
    blt L_0202d488
    ldr r1, =0x4ca
    cmp r2, r1
    movle r1, #0x0
    ble L_0202d4a0
L_0202d488:
    cmp r3, #0x53
    moveq r1, #0x0
    beq L_0202d4a0
    cmp r3, #0x54
    moveq r1, #0x0
    movne r1, #0x1
L_0202d4a0:
    cmp r1, #0x0
    bxeq lr
    add r2, r0, #0xa8
    mov r3, #0x0
    swpb r1, r3, [r2]
    add r1, r0, #0x100
    strh r3, [r1, #0x12]
    mov r1, #0xd
    strh r1, [r0, #0xf0]
    add r1, r0, #0xa5
    mov r0, #0x3
    swpb r0, r0, [r1]
    bx lr
L_0202d4d4:
    ldrsh r3, [r0, #0xf0]
    cmp r3, #0x4
    blt L_0202d4ec
    cmp r3, #0x8
    movle r1, #0x1
    ble L_0202d52c
L_0202d4ec:
    cmp r3, #0x57
    moveq r1, #0x1
    beq L_0202d52c
    ldrsh r2, [r0, #0xea]
    cmp r2, #0xf
    blt L_0202d510
    cmp r2, #0x4b
    movle r1, #0x1
    ble L_0202d52c
L_0202d510:
    ldr r1, =0x119
    cmp r2, r1
    blt L_0202d528
    cmp r2, #0x13c
    movle r1, #0x1
    ble L_0202d52c
L_0202d528:
    mov r1, #0x0
L_0202d52c:
    cmp r1, #0x0
    movne r1, #0x0
    bne L_0202d58c
    ldrsh r2, [r0, #0xea]
    ldr r1, =0x478
    cmp r2, r1
    blt L_0202d558
    ldr r1, =0x47e
    cmp r2, r1
    movle r1, #0x0
    ble L_0202d58c
L_0202d558:
    ldr r1, =0x4c7
    cmp r2, r1
    blt L_0202d574
    ldr r1, =0x4ca
    cmp r2, r1
    movle r1, #0x0
    ble L_0202d58c
L_0202d574:
    cmp r3, #0x53
    moveq r1, #0x0
    beq L_0202d58c
    cmp r3, #0x54
    moveq r1, #0x0
    movne r1, #0x1
L_0202d58c:
    cmp r1, #0x0
    bxeq lr
    add r2, r0, #0xa8
    mov r3, #0x0
    swpb r1, r3, [r2]
    add r1, r0, #0x100
    strh r3, [r1, #0x12]
    mov r1, #0xd
    strh r1, [r0, #0xf0]
    add r1, r0, #0xa5
    mov r0, #0x2
    swpb r0, r0, [r1]
    bx lr
L_0202d5c0:
    ldrsh r3, [r0, #0xf0]
    cmp r3, #0x4
    blt L_0202d5d8
    cmp r3, #0x8
    movle r1, #0x1
    ble L_0202d618
L_0202d5d8:
    cmp r3, #0x57
    moveq r1, #0x1
    beq L_0202d618
    ldrsh r2, [r0, #0xea]
    cmp r2, #0xf
    blt L_0202d5fc
    cmp r2, #0x4b
    movle r1, #0x1
    ble L_0202d618
L_0202d5fc:
    ldr r1, =0x119
    cmp r2, r1
    blt L_0202d614
    cmp r2, #0x13c
    movle r1, #0x1
    ble L_0202d618
L_0202d614:
    mov r1, #0x0
L_0202d618:
    cmp r1, #0x0
    movne r1, #0x0
    bne L_0202d678
    ldrsh r2, [r0, #0xea]
    ldr r1, =0x478
    cmp r2, r1
    blt L_0202d644
    ldr r1, =0x47e
    cmp r2, r1
    movle r1, #0x0
    ble L_0202d678
L_0202d644:
    ldr r1, =0x4c7
    cmp r2, r1
    blt L_0202d660
    ldr r1, =0x4ca
    cmp r2, r1
    movle r1, #0x0
    ble L_0202d678
L_0202d660:
    cmp r3, #0x53
    moveq r1, #0x0
    beq L_0202d678
    cmp r3, #0x54
    moveq r1, #0x0
    movne r1, #0x1
L_0202d678:
    cmp r1, #0x0
    bxeq lr
    add r2, r0, #0xa8
    mov r3, #0x0
    swpb r1, r3, [r2]
    add r1, r0, #0x100
    strh r3, [r1, #0x12]
    mov r1, #0xd
    strh r1, [r0, #0xf0]
    add r1, r0, #0xa5
    mov r0, #0x1
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on

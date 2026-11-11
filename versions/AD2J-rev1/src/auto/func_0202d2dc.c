#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0202d2dc(void) {
    ldrb r1, [r0, #0xc4]
    cmp r1, #0x0
    beq L_0202d4d0
    cmp r1, #0x1
    beq L_0202d3e4
    cmp r1, #0x2
    bxne lr
    ldrsh r3, [r0, #0xf0]
    cmp r3, #0x4
    blt L_0202d310
    cmp r3, #0x8
    movle r1, #0x1
    ble L_0202d350
L_0202d310:
    cmp r3, #0x57
    moveq r1, #0x1
    beq L_0202d350
    ldrsh r2, [r0, #0xe8]
    cmp r2, #0xf
    blt L_0202d334
    cmp r2, #0x4b
    movle r1, #0x1
    ble L_0202d350
L_0202d334:
    ldr r1, =0x119
    cmp r2, r1
    blt L_0202d34c
    cmp r2, #0x13c
    movle r1, #0x1
    ble L_0202d350
L_0202d34c:
    mov r1, #0x0
L_0202d350:
    cmp r1, #0x0
    movne r1, #0x0
    bne L_0202d3b0
    ldrsh r2, [r0, #0xe8]
    ldr r1, =0x477
    cmp r2, r1
    blt L_0202d37c
    ldr r1, =0x47d
    cmp r2, r1
    movle r1, #0x0
    ble L_0202d3b0
L_0202d37c:
    ldr r1, =0x4c6
    cmp r2, r1
    blt L_0202d398
    ldr r1, =0x4c9
    cmp r2, r1
    movle r1, #0x0
    ble L_0202d3b0
L_0202d398:
    cmp r3, #0x53
    moveq r1, #0x0
    beq L_0202d3b0
    cmp r3, #0x54
    moveq r1, #0x0
    movne r1, #0x1
L_0202d3b0:
    cmp r1, #0x0
    bxeq lr
    add r2, r0, #0xbe
    mov r3, #0x0
    swpb r1, r3, [r2]
    add r1, r0, #0x100
    strh r3, [r1, #0x20]
    mov r1, #0xd
    strh r1, [r0, #0xf0]
    add r1, r0, #0xc4
    mov r0, #0x3
    swpb r0, r0, [r1]
    bx lr
L_0202d3e4:
    ldrsh r3, [r0, #0xf0]
    cmp r3, #0x4
    blt L_0202d3fc
    cmp r3, #0x8
    movle r1, #0x1
    ble L_0202d43c
L_0202d3fc:
    cmp r3, #0x57
    moveq r1, #0x1
    beq L_0202d43c
    ldrsh r2, [r0, #0xe8]
    cmp r2, #0xf
    blt L_0202d420
    cmp r2, #0x4b
    movle r1, #0x1
    ble L_0202d43c
L_0202d420:
    ldr r1, =0x119
    cmp r2, r1
    blt L_0202d438
    cmp r2, #0x13c
    movle r1, #0x1
    ble L_0202d43c
L_0202d438:
    mov r1, #0x0
L_0202d43c:
    cmp r1, #0x0
    movne r1, #0x0
    bne L_0202d49c
    ldrsh r2, [r0, #0xe8]
    ldr r1, =0x477
    cmp r2, r1
    blt L_0202d468
    ldr r1, =0x47d
    cmp r2, r1
    movle r1, #0x0
    ble L_0202d49c
L_0202d468:
    ldr r1, =0x4c6
    cmp r2, r1
    blt L_0202d484
    ldr r1, =0x4c9
    cmp r2, r1
    movle r1, #0x0
    ble L_0202d49c
L_0202d484:
    cmp r3, #0x53
    moveq r1, #0x0
    beq L_0202d49c
    cmp r3, #0x54
    moveq r1, #0x0
    movne r1, #0x1
L_0202d49c:
    cmp r1, #0x0
    bxeq lr
    add r2, r0, #0xbe
    mov r3, #0x0
    swpb r1, r3, [r2]
    add r1, r0, #0x100
    strh r3, [r1, #0x20]
    mov r1, #0xd
    strh r1, [r0, #0xf0]
    add r1, r0, #0xc4
    mov r0, #0x2
    swpb r0, r0, [r1]
    bx lr
L_0202d4d0:
    ldrsh r3, [r0, #0xf0]
    cmp r3, #0x4
    blt L_0202d4e8
    cmp r3, #0x8
    movle r1, #0x1
    ble L_0202d528
L_0202d4e8:
    cmp r3, #0x57
    moveq r1, #0x1
    beq L_0202d528
    ldrsh r2, [r0, #0xe8]
    cmp r2, #0xf
    blt L_0202d50c
    cmp r2, #0x4b
    movle r1, #0x1
    ble L_0202d528
L_0202d50c:
    ldr r1, =0x119
    cmp r2, r1
    blt L_0202d524
    cmp r2, #0x13c
    movle r1, #0x1
    ble L_0202d528
L_0202d524:
    mov r1, #0x0
L_0202d528:
    cmp r1, #0x0
    movne r1, #0x0
    bne L_0202d588
    ldrsh r2, [r0, #0xe8]
    ldr r1, =0x477
    cmp r2, r1
    blt L_0202d554
    ldr r1, =0x47d
    cmp r2, r1
    movle r1, #0x0
    ble L_0202d588
L_0202d554:
    ldr r1, =0x4c6
    cmp r2, r1
    blt L_0202d570
    ldr r1, =0x4c9
    cmp r2, r1
    movle r1, #0x0
    ble L_0202d588
L_0202d570:
    cmp r3, #0x53
    moveq r1, #0x0
    beq L_0202d588
    cmp r3, #0x54
    moveq r1, #0x0
    movne r1, #0x1
L_0202d588:
    cmp r1, #0x0
    bxeq lr
    add r2, r0, #0xbe
    mov r3, #0x0
    swpb r1, r3, [r2]
    add r1, r0, #0x100
    strh r3, [r1, #0x20]
    mov r1, #0xd
    strh r1, [r0, #0xf0]
    add r1, r0, #0xc4
    mov r0, #0x1
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on

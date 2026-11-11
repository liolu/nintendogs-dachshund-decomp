/* compiler: 2.0/sp1p5  */
/* func_02028fc4 from projets/nintendogs-chihuahua-friends/src/auto/func_02028fc4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_02028fc4(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldrsh lr, [r0, #0xf0]
    cmp lr, #0x4
    blt L_02028fe4
    cmp lr, #0x8
    movle r3, #0x1
    ble L_02029024
L_02028fe4:
    cmp lr, #0x57
    moveq r3, #0x1
    beq L_02029024
    ldrsh ip, [r0, #0xe8]
    cmp ip, #0xf
    blt L_02029008
    cmp ip, #0x4b
    movle r3, #0x1
    ble L_02029024
L_02029008:
    ldr r3, =0x119
    cmp ip, r3
    blt L_02029020
    cmp ip, #0x13c
    movle r3, #0x1
    ble L_02029024
L_02029020:
    mov r3, #0x0
L_02029024:
    cmp r3, #0x0
    movne r3, #0x0
    bne L_02029084
    ldrsh ip, [r0, #0xe8]
    ldr r3, =0x477
    cmp ip, r3
    blt L_02029050
    ldr r3, =0x47d
    cmp ip, r3
    movle r3, #0x0
    ble L_02029084
L_02029050:
    ldr r3, =0x4c6
    cmp ip, r3
    blt L_0202906c
    ldr r3, =0x4c9
    cmp ip, r3
    movle r3, #0x0
    ble L_02029084
L_0202906c:
    cmp lr, #0x53
    moveq r3, #0x0
    beq L_02029084
    cmp lr, #0x54
    moveq r3, #0x0
    movne r3, #0x1
L_02029084:
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

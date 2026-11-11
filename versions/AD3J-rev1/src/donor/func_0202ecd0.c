/* compiler: 2.0/sp1p5  */
/* func_0202ecd0 from projets/nintendogs-chihuahua-friends/src/auto/func_0202ecd0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern char data_0214b484[];
extern char data_02153708[];
// clang-format off
asm void func_0202ecd0(void) {
    ldr r2, =data_02153708
    ldr r2, [r2, #0x0]
    ldrh r2, [r2, #0x0]
    cmp r2, #0x11
    bne L_0202ecf8
    ldr r2, [r0, #0x9e4]
    ldrb r2, [r2, #0x72]
    cmp r2, #0x4
    moveq r0, #0x0
    bxeq lr
L_0202ecf8:
    cmp r1, #0x8
    addls pc, pc, r1, lsl #0x2
    b L_0202eedc
L_0202ed04:
    b L_0202ed28
    b L_0202ee20
    b L_0202ee30
    b L_0202ee40
    b L_0202ee50
    b L_0202eeac
    b L_0202eeb4
    b L_0202eebc
    b L_0202eecc
L_0202ed28:
    mov r1, #0x224
    strh r1, [r0, #0xe8]
    ldrsh r3, [r0, #0xf0]
    cmp r3, #0x4
    blt L_0202ed48
    cmp r3, #0x8
    movle r1, #0x1
    ble L_0202ed88
L_0202ed48:
    cmp r3, #0x57
    moveq r1, #0x1
    beq L_0202ed88
    ldrsh r2, [r0, #0xe8]
    cmp r2, #0xf
    blt L_0202ed6c
    cmp r2, #0x4b
    movle r1, #0x1
    ble L_0202ed88
L_0202ed6c:
    ldr r1, =0x119
    cmp r2, r1
    blt L_0202ed84
    cmp r2, #0x13c
    movle r1, #0x1
    ble L_0202ed88
L_0202ed84:
    mov r1, #0x0
L_0202ed88:
    cmp r1, #0x0
    movne r1, #0x0
    bne L_0202ede8
    ldrsh r2, [r0, #0xe8]
    ldr r1, =0x477
    cmp r2, r1
    blt L_0202edb4
    ldr r1, =0x47d
    cmp r2, r1
    movle r1, #0x0
    ble L_0202ede8
L_0202edb4:
    ldr r1, =0x4c6
    cmp r2, r1
    blt L_0202edd0
    ldr r1, =0x4c9
    cmp r2, r1
    movle r1, #0x0
    ble L_0202ede8
L_0202edd0:
    cmp r3, #0x53
    moveq r1, #0x0
    beq L_0202ede8
    cmp r3, #0x54
    moveq r1, #0x0
    movne r1, #0x1
L_0202ede8:
    cmp r1, #0x0
    beq L_0202ee18
    add r2, r0, #0xbe
    mov r3, #0x0
    swpb r1, r3, [r2]
    add r1, r0, #0x100
    strh r3, [r1, #0x20]
    mov r1, #0xb
    strh r1, [r0, #0xf0]
    add r1, r0, #0xc4
    mov r0, #0x4
    swpb r0, r0, [r1]
L_0202ee18:
    mov r0, #0x1
    bx lr
L_0202ee20:
    ldr r1, =0x22f
    strh r1, [r0, #0xe8]
    mov r0, #0x1
    bx lr
L_0202ee30:
    ldr r1, =0x233
    strh r1, [r0, #0xe8]
    mov r0, #0x1
    bx lr
L_0202ee40:
    ldr r1, =0x236
    strh r1, [r0, #0xe8]
    mov r0, #0x1
    bx lr
L_0202ee50:
    ldr r2, =data_0214b484
    ldr r1, =0x10dcd
    ldr r3, [r2, #0x0]
    ldr r2, [r3, #0x0]
    mul r1, r2, r1
    add r2, r1, #0x1
    mov r1, r2, lsl #0x10
    mov r1, r1, lsr #0x1f
    mov r1, r1, lsl #0x10
    str r2, [r3, #0x0]
    movs r1, r1, lsr #0x10
    beq L_0202ee8c
    cmp r1, #0x1
    beq L_0202ee9c
    b L_0202eedc
L_0202ee8c:
    ldr r1, =0x23b
    strh r1, [r0, #0xe8]
    mov r0, #0x1
    bx lr
L_0202ee9c:
    mov r1, #0x23c
    strh r1, [r0, #0xe8]
    mov r0, #0x1
    bx lr
L_0202eeac:
    mov r0, #0x0
    bx lr
L_0202eeb4:
    mov r0, #0x0
    bx lr
L_0202eebc:
    ldr r1, =0x247
    strh r1, [r0, #0xe8]
    mov r0, #0x1
    bx lr
L_0202eecc:
    mov r1, #0x248
    strh r1, [r0, #0xe8]
    mov r0, #0x1
    bx lr
L_0202eedc:
    mov r0, #0x0
    bx lr
}
// clang-format on

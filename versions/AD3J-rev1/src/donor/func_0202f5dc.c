/* compiler: 2.0/sp1p5  */
/* func_0202f5dc from projets/nintendogs-chihuahua-friends/src/auto/func_0202f5dc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern char data_0214b484[];
// clang-format off
asm void func_0202f5dc(void) {
    ldrsh r1, [r0, #0xf0]
    cmp r1, #0x34
    bne L_0202f624
    ldr r1, =0x472
    add r2, r0, #0xbe
    mov r3, #0x0
    strh r1, [r0, #0xe8]
    swpb r1, r3, [r2]
    add r2, r0, #0xc5
    add r1, r0, #0x100
    strh r3, [r1, #0x20]
    mov r1, #0x6f
    strh r1, [r0, #0xf0]
    add r1, r0, #0xc4
    swpb r0, r3, [r1]
    swpb r1, r3, [r2]
    mov r0, #0x1
    bx lr
L_0202f624:
    cmp r1, #0x35
    bne L_0202f668
    ldr r1, =0x471
    add r2, r0, #0xbe
    mov r3, #0x0
    strh r1, [r0, #0xe8]
    swpb r1, r3, [r2]
    add r2, r0, #0xc5
    add r1, r0, #0x100
    strh r3, [r1, #0x20]
    mov r1, #0x6f
    strh r1, [r0, #0xf0]
    add r1, r0, #0xc4
    swpb r0, r3, [r1]
    swpb r1, r3, [r2]
    mov r0, #0x1
    bx lr
L_0202f668:
    ldr r2, =data_0214b484
    ldr r1, =0x10dcd
    ldr r3, [r2, #0x0]
    ldr r2, [r3, #0x0]
    mul r1, r2, r1
    add r2, r1, #0x1
    mov r1, r2, lsl #0x10
    mov r1, r1, lsr #0x1e
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str r2, [r3, #0x0]
    cmp r1, #0x3
    addls pc, pc, r1, lsl #0x2
    b L_0202f6f0
L_0202f6a0:
    b L_0202f6b0
    b L_0202f6c0
    b L_0202f6d0
    b L_0202f6e0
L_0202f6b0:
    ldr r1, =0x46f
    strh r1, [r0, #0xe8]
    mov r0, #0x1
    bx lr
L_0202f6c0:
    mov r1, #0x470
    strh r1, [r0, #0xe8]
    mov r0, #0x1
    bx lr
L_0202f6d0:
    ldr r1, =0x471
    strh r1, [r0, #0xe8]
    mov r0, #0x1
    bx lr
L_0202f6e0:
    ldr r1, =0x472
    strh r1, [r0, #0xe8]
    mov r0, #0x1
    bx lr
L_0202f6f0:
    mov r0, #0x0
    bx lr
}
// clang-format on

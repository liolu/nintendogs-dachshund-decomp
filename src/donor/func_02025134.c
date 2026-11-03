/* compiler: 2.0/sp1p5  */
/* func_02025134 from projets/nintendogs-chihuahua-friends/src/auto/func_02025134.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_01ff832c();
// clang-format off
asm void func_02025134(void) {
    stmfd sp!, {r4, lr}
    mov ip, r0
    add r0, ip, #0x100
    ldrsh r4, [r0, #0x60]
    ldrsh r3, [r0, #0x50]
    cmp r4, r3
    bne L_02025160
    ldrsh r0, [r0, #0x2]
    cmp r0, r1
    movle r0, #0x1
    ble L_02025164
L_02025160:
    mov r0, #0x0
L_02025164:
    cmp r0, #0x0
    beq L_02025200
    ldrb r0, [ip, #0xc3]
    cmp r0, #0x0
    beq L_020251e0
    ldr r1, [ip, #0x1a4]
    mov r0, #0x800
    smull r4, r3, r1, r2
    adds r4, r4, r0
    adc r1, r3, #0x0
    mov r3, r4, lsr #0xc
    orr r3, r3, r1, lsl #0x14
    str r3, [ip, #0x260]
    ldr r3, [ip, #0x1a8]
    add r1, ip, #0xc3
    smull lr, r4, r3, r2
    adds lr, lr, r0
    adc r3, r4, #0x0
    mov r4, lr, lsr #0xc
    orr r4, r4, r3, lsl #0x14
    str r4, [ip, #0x264]
    ldr lr, [ip, #0x1ac]
    mov r3, #0x0
    smull r4, r2, lr, r2
    adds r4, r4, r0
    adc r0, r2, #0x0
    mov r2, r4, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    str r2, [ip, #0x268]
    swpb r0, r3, [r1]
    b L_020251f4
L_020251e0:
    mov r0, r2
    add r2, ip, #0x260
    mov r3, r2
    add r1, ip, #0x1a4
    bl func_01ff832c
L_020251f4:
    mov r0, #0x1
    ldmfd sp!, {r4, lr}
    bx lr
L_02025200:
    mov r0, #0x0
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

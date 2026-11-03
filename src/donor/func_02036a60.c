/* compiler: 2.0/sp1p5  */
/* func_02036a60 from projets/nintendogs-chihuahua-friends/src/auto/func_02036a60.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_01ff8930();
extern void func_02032510();
extern void func_02038ab8();
extern void func_0206902c();
// clang-format off
asm void func_02036a60(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r3, #0x0
    mov r7, r0
    str r3, [sp, #0xc]
    str r3, [sp, #0x10]
    ldr r5, [r7, #0x26c]
    ldr r4, [r7, #0x2a0]
    ldr r3, [r7, #0x274]
    ldr r0, [r7, #0x2a8]
    sub r5, r5, r4
    sub r4, r3, r0
    smull r3, r0, r5, r5
    mov r8, #0x800
    adds r3, r3, r8
    smull r10, r9, r4, r4
    adc r0, r0, #0x0
    adds r8, r10, r8
    mov r10, r3, lsr #0xc
    adc r3, r9, #0x0
    mov r8, r8, lsr #0xc
    orr r10, r10, r0, lsl #0x14
    orr r8, r8, r3, lsl #0x14
    add r0, r10, r8
    str r0, [sp, #0x4]
    mov r11, r1
    mov r8, r2
    bl func_0206902c
    bl func_01ff8930
    smull r1, r9, r5, r0
    mov r2, #0x800
    smull r5, r3, r4, r0
    adds r1, r1, r2
    adc r0, r9, #0x0
    adds r4, r5, r2
    mov r5, r1, lsr #0xc
    ldrsb r1, [r7, #0xb9]
    adc r2, r3, #0x0
    mov r4, r4, lsr #0xc
    cmp r1, #0x0
    orr r5, r5, r0, lsl #0x14
    orr r4, r4, r2, lsl #0x14
    beq L_02036b18
    cmp r1, #0x1
    beq L_02036b34
    b L_02036f50
L_02036b18:
    add r1, r7, #0xb9
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r1, r7, #0xba
    mov r0, #0x5
    swpb r0, r0, [r1]
    b L_02036f50
L_02036b34:
    ands r0, r11, #0x80
    beq L_02036b44
    mov r0, r7
    bl func_02032510
L_02036b44:
    add r9, sp, #0x10
    add r2, sp, #0x8
    add r3, sp, #0xc
    mov r0, r7
    add r1, r7, #0x278
    str r9, [sp, #0x0]
    bl func_02038ab8
    cmp r8, #0x5
    addls pc, pc, r8, lsl #0x2
    b L_02036f0c
L_02036b6c:
    b L_02036b84
    b L_02036c1c
    b L_02036cb4
    b L_02036d4c
    b L_02036de0
    b L_02036e78
L_02036b84:
    add r0, r7, #0x100
    mov r1, #0x11
    strh r1, [r0, #0x50]
    ldr r0, [r7, #0x9e4]
    mov r8, #0x0
    ldr r10, [r0, #0xc]
    mov r0, #0x39
    str r8, [r7, #0x240]
    ldr r1, [r7, #0x9e4]
    umull lr, ip, r10, r0
    ldr r2, [r1, #0xc]
    mov r1, #0x110
    umull r6, r3, r2, r1
    mov r9, r10, asr #0x1f
    mla ip, r10, r8, ip
    mla ip, r9, r0, ip
    mla r3, r2, r8, r3
    mov r0, r2, asr #0x1f
    mla r3, r0, r1, r3
    mov r1, #0x800
    adds r8, lr, r1
    adc r0, ip, #0x0
    adds r2, r6, r1
    mov r6, r8, lsr #0xc
    adc r1, r3, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [r7, #0x244]
    mov r1, #0xcd0
    str r1, [r7, #0x24c]
    ldr r1, [r7, #0x240]
    orr r6, r6, r0, lsl #0x14
    str r1, [r7, #0x250]
    ldr r0, [r7, #0x244]
    str r0, [r7, #0x254]
    ldr r0, [r7, #0x24c]
    str r0, [r7, #0x258]
    b L_02036f0c
L_02036c1c:
    add r0, r7, #0x100
    mov r1, #0x12
    strh r1, [r0, #0x50]
    ldr r0, [r7, #0x9e4]
    mov r8, #0x0
    ldr r10, [r0, #0xc]
    mov r0, #0x6d
    str r8, [r7, #0x240]
    ldr r1, [r7, #0x9e4]
    umull lr, ip, r10, r0
    ldr r2, [r1, #0xc]
    mov r1, #0x220
    umull r6, r3, r2, r1
    mov r9, r10, asr #0x1f
    mla ip, r10, r8, ip
    mla ip, r9, r0, ip
    mla r3, r2, r8, r3
    mov r0, r2, asr #0x1f
    mla r3, r0, r1, r3
    mov r1, #0x800
    adds r8, lr, r1
    adc r0, ip, #0x0
    adds r2, r6, r1
    mov r6, r8, lsr #0xc
    adc r1, r3, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [r7, #0x244]
    mov r1, #0xcd0
    str r1, [r7, #0x24c]
    ldr r1, [r7, #0x240]
    orr r6, r6, r0, lsl #0x14
    str r1, [r7, #0x250]
    ldr r0, [r7, #0x244]
    str r0, [r7, #0x254]
    ldr r0, [r7, #0x24c]
    str r0, [r7, #0x258]
    b L_02036f0c
L_02036cb4:
    add r0, r7, #0x100
    mov r1, #0x13
    strh r1, [r0, #0x50]
    ldr r0, [r7, #0x9e4]
    mov r8, #0x0
    ldr r10, [r0, #0xc]
    mov r0, #0xaa
    str r8, [r7, #0x240]
    ldr r1, [r7, #0x9e4]
    umull lr, ip, r10, r0
    ldr r2, [r1, #0xc]
    mov r1, #0x340
    umull r6, r3, r2, r1
    mov r9, r10, asr #0x1f
    mla ip, r10, r8, ip
    mla ip, r9, r0, ip
    mla r3, r2, r8, r3
    mov r0, r2, asr #0x1f
    mla r3, r0, r1, r3
    mov r1, #0x800
    adds r8, lr, r1
    adc r0, ip, #0x0
    adds r2, r6, r1
    mov r6, r8, lsr #0xc
    adc r1, r3, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [r7, #0x244]
    mov r1, #0xcd0
    str r1, [r7, #0x24c]
    ldr r1, [r7, #0x240]
    orr r6, r6, r0, lsl #0x14
    str r1, [r7, #0x250]
    ldr r0, [r7, #0x244]
    str r0, [r7, #0x254]
    ldr r0, [r7, #0x24c]
    str r0, [r7, #0x258]
    b L_02036f0c
L_02036d4c:
    add r0, r7, #0x100
    mov r1, #0x14
    strh r1, [r0, #0x50]
    ldr r0, [r7, #0x9e4]
    mov r6, #0x0
    ldr r8, [r0, #0xc]
    mov r2, #0xcd
    umull r1, r0, r8, r2
    str r6, [r7, #0x240]
    ldr r3, [r7, #0x9e4]
    mla r0, r8, r6, r0
    ldr r6, [r3, #0xc]
    mov r9, r8, asr #0x1f
    mov r3, r6, asr #0x1f
    mov r8, r3, lsl #0xa
    mov r3, #0x800
    adds r1, r1, r3
    mla r0, r9, r2, r0
    mov r2, r6, lsl #0xa
    adc r0, r0, #0x0
    adds r2, r2, r3
    orr r8, r8, r6, lsr #0x16
    mov r6, r1, lsr #0xc
    adc r1, r8, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [r7, #0x244]
    mov r1, #0xcd0
    str r1, [r7, #0x24c]
    ldr r1, [r7, #0x240]
    orr r6, r6, r0, lsl #0x14
    str r1, [r7, #0x250]
    ldr r0, [r7, #0x244]
    str r0, [r7, #0x254]
    ldr r0, [r7, #0x24c]
    str r0, [r7, #0x258]
    b L_02036f0c
L_02036de0:
    add r0, r7, #0x100
    mov r1, #0x15
    strh r1, [r0, #0x50]
    ldr r0, [r7, #0x9e4]
    mov ip, #0x0
    ldr r8, [r0, #0xc]
    mov r0, #0x118
    str ip, [r7, #0x240]
    ldr r1, [r7, #0x9e4]
    umull r10, r9, r8, r0
    ldr r2, [r1, #0xc]
    mov r1, #0x500
    umull r6, r3, r2, r1
    mov lr, r8, asr #0x1f
    mla r9, r8, ip, r9
    mla r9, lr, r0, r9
    mla r3, r2, ip, r3
    mov r0, r2, asr #0x1f
    mla r3, r0, r1, r3
    mov r1, #0x800
    adds r8, r10, r1
    adc r0, r9, #0x0
    adds r2, r6, r1
    mov r6, r8, lsr #0xc
    adc r1, r3, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [r7, #0x244]
    mov r1, #0xcd0
    str r1, [r7, #0x24c]
    ldr r1, [r7, #0x240]
    orr r6, r6, r0, lsl #0x14
    str r1, [r7, #0x250]
    ldr r0, [r7, #0x244]
    str r0, [r7, #0x254]
    ldr r0, [r7, #0x24c]
    str r0, [r7, #0x258]
    b L_02036f0c
L_02036e78:
    add r0, r7, #0x100
    mov r1, #0x16
    strh r1, [r0, #0x50]
    ldr r0, [r7, #0x9e4]
    mov r6, #0x0
    ldr r9, [r0, #0xc]
    ldr lr, =0x1b3
    str r6, [r7, #0x240]
    ldr r0, [r7, #0x9e4]
    umull ip, r10, r9, lr
    ldr r1, [r0, #0xc]
    mov r0, #0x600
    umull r3, r2, r1, r0
    mov r8, r9, asr #0x1f
    mla r10, r9, r6, r10
    mla r10, r8, lr, r10
    mla r2, r1, r6, r2
    mov r1, r1, asr #0x1f
    mla r2, r1, r0, r2
    mov r1, #0x800
    adds r6, ip, r1
    adc r0, r10, #0x0
    adds r3, r3, r1
    mov r6, r6, lsr #0xc
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [r7, #0x244]
    mov r1, #0xcd0
    str r1, [r7, #0x24c]
    ldr r1, [r7, #0x240]
    orr r6, r6, r0, lsl #0x14
    str r1, [r7, #0x250]
    ldr r0, [r7, #0x244]
    str r0, [r7, #0x254]
    ldr r0, [r7, #0x24c]
    str r0, [r7, #0x258]
L_02036f0c:
    smull r1, r3, r5, r6
    mov r0, #0x800
    adds r5, r1, r0
    smull r2, r1, r4, r6
    adc r3, r3, #0x0
    adds r2, r2, r0
    mov r0, r5, lsr #0xc
    ldr r4, [r7, #0x260]
    orr r0, r0, r3, lsl #0x14
    add r0, r4, r0
    str r0, [r7, #0x260]
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    ldr r2, [r7, #0x268]
    orr r1, r1, r0, lsl #0x14
    add r0, r2, r1
    str r0, [r7, #0x268]
L_02036f50:
    ands r0, r11, #0x100
    beq L_02036fa8
    ldr r3, [r7, #0x254]
    mov r0, #0x3
    rsb r1, r3, #0x0
    mul r2, r1, r0
    ldr r5, [sp, #0x8]
    ldr r1, [r7, #0x830]
    sub r4, r5, r1
    cmp r4, r2
    mullt r0, r3, r0
    sublt r0, r1, r0
    strlt r0, [r7, #0x830]
    blt L_02036f9c
    mul r0, r3, r0
    cmp r4, r0
    addgt r0, r1, r0
    strgt r0, [r7, #0x830]
    strle r5, [r7, #0x830]
L_02036f9c:
    add r1, r7, #0xb5
    mov r0, #0x1
    swpb r0, r0, [r1]
L_02036fa8:
    ldr r0, [sp, #0x4]
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

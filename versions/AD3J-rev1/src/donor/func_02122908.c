/* compiler: 2.0/sp1p5  */
/* func_020c2fec from projets/nintendogs-dachshund/src/auto/func_020c2fec.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern void func_020619e4();
extern char data_0214a524[];
extern char data_0214a528[];
extern char data_0214a530[];
extern char data_0214a534[];
extern char data_0214a538[];
extern char data_0214a53c[];
extern char data_0214a540[];
extern char data_0214a544[];
extern char data_0214a548[];
extern char data_0214a54c[];
extern char data_0214a554[];
extern char data_0214a558[];
extern char data_0214a55c[];
extern char data_0214a560[];
extern char data_0214a564[];
extern char data_0214a568[];
extern char data_02153704[];
// clang-format off
asm void func_02122908(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r4, r0
    add r2, r4, #0x2c
    swpb r0, r1, [r2]
    ldr r0, =data_02153704
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x6]
    cmp r0, #0x12
    beq L_020c3228
    ldrb r0, [r4, #0x2c]
    cmp r0, #0x0
    beq L_020c30e0
    cmp r0, #0x1
    beq L_020c3034
    cmp r0, #0x2
    beq L_020c3184
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020c3034:
    ldr r0, =data_0214a564
    ldr r1, =data_0214a560
    ldr r2, [r0, #0x0]
    ldr r0, =data_0214a55c
    str r2, [r4, #0x34]
    ldr r1, [r1, #0x0]
    ldr r0, [r0, #0x0]
    rsb r5, r1, #0x0
    rsb r6, r0, #0x0
    bl func_020619e4
    mov r2, r0, lsl #0xc
    ldr r3, =0x80010003
    mov r1, r2, lsr #0x1f
    smull r2, ip, r3, r2
    add ip, ip, r0, lsl #0xc
    mov ip, ip, asr #0xe
    add ip, r1, ip
    sub r0, r5, r6
    smull r2, r1, r0, ip
    mov r0, #0x800
    adds r2, r2, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r3, r6, r1
    ldr r0, =0xb60b60b
    mov r1, #0xb6
    umull r6, r5, r3, r0
    mla r5, r3, r1, r5
    mov r1, r3, asr #0x1f
    mla r5, r1, r0, r5
    mov r2, #0x0
    adds r0, r6, r2
    adc r0, r5, #0x800
    mov r1, r0, asr #0xc
    ldr r0, =data_0214a558
    strh r1, [r4, #0x38]
    ldr r1, [r0, #0x0]
    mov r0, #0x3e8
    str r1, [r4, #0x3c]
    strh r0, [r4, #0x40]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020c30e0:
    ldr r0, =data_0214a564
    ldr r1, =data_0214a55c
    ldr r2, [r0, #0x0]
    ldr r0, =data_0214a560
    str r2, [r4, #0x34]
    ldr r5, [r1, #0x0]
    ldr r6, [r0, #0x0]
    bl func_020619e4
    mov r2, r0, lsl #0xc
    ldr r3, =0x80010003
    mov r1, r2, lsr #0x1f
    smull r2, ip, r3, r2
    add ip, ip, r0, lsl #0xc
    mov ip, ip, asr #0xe
    add ip, r1, ip
    sub r0, r5, r6
    smull r2, r1, r0, ip
    mov r0, #0x800
    adds r2, r2, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r3, r6, r1
    ldr r0, =0xb60b60b
    mov r1, #0xb6
    umull r6, r5, r3, r0
    mla r5, r3, r1, r5
    mov r1, r3, asr #0x1f
    mla r5, r1, r0, r5
    mov r2, #0x0
    adds r0, r6, r2
    adc r0, r5, #0x800
    mov r1, r0, asr #0xc
    ldr r0, =data_0214a558
    strh r1, [r4, #0x38]
    ldr r1, [r0, #0x0]
    mov r0, #0x3e8
    str r1, [r4, #0x3c]
    strh r0, [r4, #0x40]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020c3184:
    ldr r0, =data_0214a554
    ldr r1, =data_0214a548
    ldr r2, [r0, #0x0]
    ldr r0, =data_0214a54c
    str r2, [r4, #0x34]
    ldr r5, [r1, #0x0]
    ldr r6, [r0, #0x0]
    bl func_020619e4
    mov r2, r0, lsl #0xc
    ldr r3, =0x80010003
    mov r1, r2, lsr #0x1f
    smull r2, ip, r3, r2
    add ip, ip, r0, lsl #0xc
    mov ip, ip, asr #0xe
    add ip, r1, ip
    sub r0, r5, r6
    smull r2, r1, r0, ip
    mov r0, #0x800
    adds r2, r2, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r3, r6, r1
    ldr r0, =0xb60b60b
    mov r1, #0xb6
    umull r6, r5, r3, r0
    mla r5, r3, r1, r5
    mov r1, r3, asr #0x1f
    mla r5, r1, r0, r5
    mov r2, #0x0
    adds r0, r6, r2
    adc r0, r5, #0x800
    mov r1, r0, asr #0xc
    ldr r0, =data_0214a544
    strh r1, [r4, #0x38]
    ldr r1, [r0, #0x0]
    mov r0, #0x1f4
    str r1, [r4, #0x3c]
    strh r0, [r4, #0x40]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020c3228:
    ldrb r0, [r4, #0x2c]
    cmp r0, #0x0
    beq L_020c32f8
    cmp r0, #0x1
    beq L_020c324c
    cmp r0, #0x2
    beq L_020c339c
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020c324c:
    ldr r0, =data_0214a540
    ldr r1, =data_0214a53c
    ldr r2, [r0, #0x0]
    ldr r0, =data_0214a538
    str r2, [r4, #0x34]
    ldr r1, [r1, #0x0]
    ldr r0, [r0, #0x0]
    rsb r5, r1, #0x0
    rsb r6, r0, #0x0
    bl func_020619e4
    mov r2, r0, lsl #0xc
    ldr r3, =0x80010003
    mov r1, r2, lsr #0x1f
    smull r2, ip, r3, r2
    add ip, ip, r0, lsl #0xc
    mov ip, ip, asr #0xe
    add ip, r1, ip
    sub r0, r5, r6
    smull r2, r1, r0, ip
    mov r0, #0x800
    adds r2, r2, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r3, r6, r1
    ldr r0, =0xb60b60b
    mov r1, #0xb6
    umull r6, r5, r3, r0
    mla r5, r3, r1, r5
    mov r1, r3, asr #0x1f
    mla r5, r1, r0, r5
    mov r2, #0x0
    adds r0, r6, r2
    adc r0, r5, #0x800
    mov r1, r0, asr #0xc
    ldr r0, =data_0214a534
    strh r1, [r4, #0x38]
    ldr r1, [r0, #0x0]
    mov r0, #0x3e8
    str r1, [r4, #0x3c]
    strh r0, [r4, #0x40]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020c32f8:
    ldr r0, =data_0214a540
    ldr r1, =data_0214a538
    ldr r2, [r0, #0x0]
    ldr r0, =data_0214a53c
    str r2, [r4, #0x34]
    ldr r5, [r1, #0x0]
    ldr r6, [r0, #0x0]
    bl func_020619e4
    mov r2, r0, lsl #0xc
    ldr r3, =0x80010003
    mov r1, r2, lsr #0x1f
    smull r2, ip, r3, r2
    add ip, ip, r0, lsl #0xc
    mov ip, ip, asr #0xe
    add ip, r1, ip
    sub r0, r5, r6
    smull r2, r1, r0, ip
    mov r0, #0x800
    adds r2, r2, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r3, r6, r1
    ldr r0, =0xb60b60b
    mov r1, #0xb6
    umull r6, r5, r3, r0
    mla r5, r3, r1, r5
    mov r1, r3, asr #0x1f
    mla r5, r1, r0, r5
    mov r2, #0x0
    adds r0, r6, r2
    adc r0, r5, #0x800
    mov r1, r0, asr #0xc
    ldr r0, =data_0214a534
    strh r1, [r4, #0x38]
    ldr r1, [r0, #0x0]
    mov r0, #0x3e8
    str r1, [r4, #0x3c]
    strh r0, [r4, #0x40]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020c339c:
    ldr r0, =data_0214a530
    ldr r1, =data_0214a524
    ldr r2, [r0, #0x0]
    ldr r0, =data_0214a528
    str r2, [r4, #0x34]
    ldr r5, [r1, #0x0]
    ldr r6, [r0, #0x0]
    bl func_020619e4
    mov r2, r0, lsl #0xc
    ldr r3, =0x80010003
    mov r1, r2, lsr #0x1f
    smull r2, ip, r3, r2
    add ip, ip, r0, lsl #0xc
    mov ip, ip, asr #0xe
    add ip, r1, ip
    sub r0, r5, r6
    smull r2, r1, r0, ip
    mov r0, #0x800
    adds r2, r2, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r3, r6, r1
    ldr r0, =0xb60b60b
    mov r1, #0xb6
    umull r6, r5, r3, r0
    mov r2, #0x0
    mla r5, r3, r1, r5
    mov r1, r3, asr #0x1f
    mla r5, r1, r0, r5
    adds r0, r6, r2
    adc r0, r5, #0x800
    mov r1, r0, asr #0xc
    ldr r0, =data_0214a568
    strh r1, [r4, #0x38]
    ldr r1, [r0, #0x0]
    mov r0, #0x1f4
    str r1, [r4, #0x3c]
    strh r0, [r4, #0x40]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on

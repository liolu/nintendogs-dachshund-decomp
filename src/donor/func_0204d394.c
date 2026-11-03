/* compiler: 2.0/sp1p5  */
/* func_0204d394 from projets/nintendogs-chihuahua-friends/src/auto/func_0204d394.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02025034();
extern void func_020254f0();
extern void func_02025b58();
extern void func_02026404();
extern void func_02026a54();
extern void func_02027044();
extern void func_0202745c();
extern void func_0202761c();
extern void func_02027630();
extern void func_020276d0();
extern void func_020280ec();
extern void func_020324d4();
extern void func_02032690();
extern void func_020351a0();
extern void func_02035294();
extern void func_02036fbc();
extern void func_02037c9c();
extern void func_02038edc();
extern void func_0203e280();
extern char data_0214b484[];
// clang-format off
asm void func_0204d394(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xc
    movs r5, r1
    mov r8, r0
    mov r4, r2
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxeq lr
    ldr r1, [r8, #0x488]
    cmp r1, #0x0
    beq L_0204d3dc
    cmp r1, #0x1
    beq L_0204d7d0
    cmp r1, #0x2
    beq L_0204d810
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204d3dc:
    add r1, sp, #0x0
    mov r0, r5
    bl func_02027630
    mov r0, r5
    add r1, r8, #0x3d8
    bl func_0202761c
    ldr r0, [r8, #0x2a0]
    ldr r1, [sp, #0x0]
    ldr r3, [sp, #0x8]
    ldr r2, [r8, #0x2a8]
    sub r7, r1, r0
    sub r6, r3, r2
    ldr r1, [r8, #0x18c]
    ldr r2, [r8, #0x194]
    smull r3, r4, r7, r1
    mov r1, #0x800
    adds r5, r3, r1
    smull r3, r2, r6, r2
    adc r4, r4, #0x0
    adds r3, r3, r1
    mov r5, r5, lsr #0xc
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r5, r5, r4, lsl #0x14
    orr r2, r2, r1, lsl #0x14
    add r1, r5, r2
    cmp r1, #0x0
    mov r5, r6, asr #0x1f
    mov r4, r7, asr #0x1f
    ble L_0204d47c
    add r0, r0, r7, lsl #0x1
    sub r0, r0, r6
    str r0, [r8, #0x26c]
    ldr r0, [r8, #0x2a4]
    str r0, [r8, #0x270]
    ldr r0, [r8, #0x2a8]
    add r0, r0, r6, lsl #0x1
    add r0, r7, r0
    str r0, [r8, #0x274]
    b L_0204d4a0
L_0204d47c:
    add r0, r0, r7, lsl #0x1
    add r0, r6, r0
    str r0, [r8, #0x26c]
    ldr r0, [r8, #0x2a4]
    str r0, [r8, #0x270]
    ldr r0, [r8, #0x2a8]
    add r0, r0, r6, lsl #0x1
    sub r0, r0, r7
    str r0, [r8, #0x274]
L_0204d4a0:
    mov r0, r8
    bl func_02038edc
    mov r0, r8
    mov r1, #0x304
    bl func_02036fbc
    mov r0, r8
    bl func_02037c9c
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r1, [r1, #0x0]
    mov r3, #0x64
    ldr r2, [r1, #0x0]
    mul r0, r2, r0
    add r0, r0, #0x1
    mov r2, r0, lsl #0x10
    mov r2, r2, lsr #0x10
    mul r3, r2, r3
    mov r2, r3, lsr #0x10
    mov r2, r2, lsl #0x10
    str r0, [r1, #0x0]
    movs r0, r2, lsr #0x10
    beq L_0204d510
    mov r0, r8
    bl func_020324d4
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxeq lr
L_0204d510:
    mov r0, r8
    bl func_020280ec
    mov r2, r7, asr #0x1f
    umull r9, r1, r7, r7
    mla r1, r7, r2, r1
    mov ip, #0x19
    mov r3, #0x800
    adds r2, r9, r3
    mla r1, r4, r7, r1
    mov r7, r6, asr #0x1f
    umull r9, lr, r6, r6
    mul r4, r0, ip
    mla lr, r6, r7, lr
    adc r7, r1, #0x0
    adds r1, r9, r3
    mla lr, r5, r6, lr
    mov r2, r2, lsr #0xc
    adc r0, lr, #0x0
    mov r1, r1, lsr #0xc
    orr r2, r2, r7, lsl #0x14
    orr r1, r1, r0, lsl #0x14
    add r0, r2, r1
    cmp r0, r4
    mov r1, #0x0
    ble L_0204d58c
    ldr r2, =0x11f
    mov r3, #0x1
    mov r0, r8
    str r3, [r8, #0x488]
    bl func_0203e280
    b L_0204d5a0
L_0204d58c:
    ldr r2, =0x11e
    mov r3, #0x2
    mov r0, r8
    str r3, [r8, #0x488]
    bl func_0203e280
L_0204d5a0:
    add r1, r8, #0xac
    mov r0, #0x0
    swpb r0, r0, [r1]
    mov r0, r8
    bl func_02026404
    mov r0, r8
    bl func_020254f0
    ldrsb r0, [r8, #0xa4]
    cmp r0, #0x2
    bne L_0204d6cc
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x6
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str r3, [r0, #0x0]
    cmp r1, #0x5
    addls pc, pc, r1, lsl #0x2
    b L_0204d930
L_0204d60c:
    b L_0204d624
    b L_0204d640
    b L_0204d65c
    b L_0204d678
    b L_0204d694
    b L_0204d6b0
L_0204d624:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x3a
    bl func_0203e280
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204d640:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x3b
    bl func_0203e280
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204d65c:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x3c
    bl func_0203e280
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204d678:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x3d
    bl func_0203e280
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204d694:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x3e
    bl func_0203e280
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204d6b0:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x3f
    bl func_0203e280
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204d6cc:
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x6
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str r3, [r0, #0x0]
    cmp r1, #0x5
    addls pc, pc, r1, lsl #0x2
    b L_0204d930
L_0204d710:
    b L_0204d728
    b L_0204d744
    b L_0204d760
    b L_0204d77c
    b L_0204d798
    b L_0204d7b4
L_0204d728:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x3a
    bl func_0203e280
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204d744:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x3d
    bl func_0203e280
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204d760:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x3e
    bl func_0203e280
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204d77c:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x3f
    bl func_0203e280
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204d798:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x40
    bl func_0203e280
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204d7b4:
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x41
    bl func_0203e280
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_0204d7d0:
    bl func_020280ec
    ldr r1, =0x117
    mov r3, #0x0
    umull r7, r6, r0, r1
    mla r6, r0, r3, r6
    mov r0, r0, asr #0x1f
    mla r6, r0, r1, r6
    mov r2, #0x800
    adds r2, r7, r2
    mov r3, r2, lsr #0xc
    adc r1, r6, #0x0
    orr r3, r3, r1, lsl #0x14
    mov r0, r8
    mov r1, #0x10
    mov r2, #0x26
    bl func_02025034
L_0204d810:
    mov r0, r5
    add r1, r8, #0x26c
    bl func_02027630
    mov r0, r8
    bl func_02038edc
    mov r0, r8
    mov r1, #0x300
    bl func_02036fbc
    mov r0, r8
    bl func_020351a0
    cmp r0, #0x0
    beq L_0204d884
    mov r0, r8
    mov r1, #0x0
    mov r2, #0x13
    bl func_0203e280
    mov r0, r8
    mov r1, #0x1
    mov r2, #0x0
    bl func_0203e280
    mov r0, r8
    bl func_02026a54
    mov r0, r8
    bl func_02025b58
    add r1, r8, #0xac
    mov r0, #0x7
    swpb r0, r0, [r1]
    mov r0, #0x0
    str r0, [r8, #0x488]
L_0204d884:
    cmp r4, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxeq lr
    mov r0, r8
    mov r1, #0xa
    bl func_02035294
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxeq lr
    mov r0, r5
    bl func_020276d0
    mov r1, r0
    mov r0, r8
    bl func_02032690
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxeq lr
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0xa
    ldr r2, [r3, #0x0]
    mul r0, r2, r0
    add r2, r0, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    str r2, [r3, #0x0]
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxne lr
    mov r0, r5
    mov r1, #0x5
    bl func_02027044
    mov r0, r5
    add r1, r8, #0x2a0
    bl func_0202745c
L_0204d930:
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on

/* compiler: 2.0/sp1p5  */
/* func_020573cc from projets/nintendogs-chihuahua-friends/src/auto/func_020573cc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02027630();
extern void func_020276d0();
extern void func_02027724();
extern void func_0202d9e0();
extern void func_02038094();
extern void func_02038f0c();
extern void func_0203e2b8();
extern char data_0214b484[];
// clang-format off
asm void func_020573cc(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x28
    mov r5, r0
    mov r4, r1
    mov r6, r2
    bl func_02027724
    cmp r0, #0x0
    beq L_02057778
    cmp r0, #0x1
    beq L_0205758c
    cmp r0, #0x2
    bne L_02057994
    ldr r0, =data_0214b484
    add r1, r6, #0x1
    ldr r0, [r0, #0x0]
    mov r2, r1, lsl #0x10
    ldr r3, [r0, #0x0]
    ldr r1, =0x10dcd
    mov r2, r2, lsr #0x10
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r1, r2, r1
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    movs r0, r1, lsr #0x10
    beq L_0205744c
    cmp r0, #0x1
    beq L_0205748c
    b L_02057548
L_0205744c:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r1, #0x304
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0205748c:
    cmp r4, #0x0
    beq L_02057538
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r0, r5
    bl func_02038094
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02057538
L_020574b8:
    b L_020574c8
    b L_020574e4
    b L_02057500
    b L_0205751c
L_020574c8:
    mov r0, r5
    mov r1, #0x274
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020574e4:
    ldr r1, =0x275
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057500:
    ldr r1, =0x276
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0205751c:
    ldr r1, =0x277
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057538:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057548:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    add r1, sp, #0x0
    mov r0, r4
    bl func_02027630
    mov r0, r4
    bl func_020276d0
    mov r2, r0
    add r1, sp, #0x0
    mov r0, r5
    bl func_02038f0c
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0205758c:
    ldr r0, =data_0214b484
    add r1, r6, #0x2
    ldr r0, [r0, #0x0]
    mov r2, r1, lsl #0x10
    ldr r3, [r0, #0x0]
    ldr r1, =0x10dcd
    mov r2, r2, lsr #0x10
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r1, r2, r1
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    movs r0, r1, lsr #0x10
    beq L_020575e4
    cmp r0, #0x1
    beq L_02057624
    cmp r0, #0x2
    beq L_02057678
    b L_02057734
L_020575e4:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r1, #0x304
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057624:
    cmp r4, #0x0
    beq L_02057668
    mov r0, r5
    bl func_0202d9e0
    cmp r0, #0x0
    bne L_02057668
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x305
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057668:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057678:
    cmp r4, #0x0
    beq L_02057724
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r0, r5
    bl func_02038094
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02057724
L_020576a4:
    b L_020576b4
    b L_020576d0
    b L_020576ec
    b L_02057708
L_020576b4:
    mov r0, r5
    mov r1, #0x274
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020576d0:
    ldr r1, =0x275
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020576ec:
    ldr r1, =0x276
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057708:
    ldr r1, =0x277
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057724:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057734:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    add r1, sp, #0xc
    mov r0, r4
    bl func_02027630
    mov r0, r4
    bl func_020276d0
    mov r2, r0
    add r1, sp, #0xc
    mov r0, r5
    bl func_02038f0c
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057778:
    ldr r0, =data_0214b484
    add r1, r6, #0x3
    ldr r0, [r0, #0x0]
    mov r2, r1, lsl #0x10
    ldr r3, [r0, #0x0]
    ldr r1, =0x10dcd
    mov r2, r2, lsr #0x10
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r1, r2, r1
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str r3, [r0, #0x0]
    cmp r1, #0x3
    addls pc, pc, r1, lsl #0x2
    b L_02057950
L_020577c4:
    b L_020577d4
    b L_02057814
    b L_02057854
    b L_02057894
L_020577d4:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r1, #0x304
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057814:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x306
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057854:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x307
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057894:
    cmp r4, #0x0
    beq L_02057940
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r0, r5
    bl func_02038094
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02057940
L_020578c0:
    b L_020578d0
    b L_020578ec
    b L_02057908
    b L_02057924
L_020578d0:
    mov r0, r5
    mov r1, #0x274
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020578ec:
    ldr r1, =0x275
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057908:
    ldr r1, =0x276
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057924:
    ldr r1, =0x277
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057940:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057950:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    add r1, sp, #0x18
    mov r0, r4
    bl func_02027630
    mov r0, r4
    bl func_020276d0
    mov r2, r0
    add r1, sp, #0x18
    mov r0, r5
    bl func_02038f0c
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057994:
    mov r0, #0x0
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on

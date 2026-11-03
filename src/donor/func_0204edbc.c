/* compiler: 2.0/sp1p5  */
/* func_0204edbc from projets/nintendogs-chihuahua-friends/src/auto/func_0204edbc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02027044();
extern void func_020276d0();
extern void func_020276d8();
extern void func_0202785c();
extern void func_0202f960();
extern void func_02035e14();
extern void func_02035e20();
extern void func_020360a0();
extern void func_0203e2b8();
extern void func_02044358();
extern char data_0214b484[];
// clang-format off
asm void func_0204edbc(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r1
    ldrsh r3, [r4, #0xe8]
    ldr r2, =0x2fe
    mov r5, r0
    cmp r3, r2
    beq L_0204ee58
    ldr r2, =0x2ff
    cmp r3, r2
    beq L_0204ee68
    cmp r3, #0x300
    beq L_0204f368
    bl func_020276d8
    mvn r1, #0x0
    cmp r0, r1
    beq L_0204ee10
    cmp r0, #0x0
    beq L_0204ee10
    cmp r0, #0x1
    bne L_0204f398
L_0204ee10:
    mov r0, r5
    bl func_02035e20
    cmp r4, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x302
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ee58:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ee68:
    bl func_020276d8
    mvn r1, #0x0
    cmp r0, r1
    beq L_0204f1ec
    cmp r0, #0x0
    beq L_0204f1ec
    cmp r0, #0x1
    bne L_0204f398
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
    b L_0204f398
L_0204eecc:
    b L_0204eee4
    b L_0204efa8
    b L_0204f004
    b L_0204f060
    b L_0204f0bc
    b L_0204f128
L_0204eee4:
    mov r0, r5
    bl func_020360a0
    mov r4, r0
    bl func_02044358
    ands r0, r0, #0x1
    bne L_0204ef10
    mov r0, r5
    bl func_0202f960
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ef10:
    cmp r4, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1f
    mov r0, r0, lsl #0x10
    str r1, [r2, #0x0]
    movs r0, r0, lsr #0x10
    beq L_0204ef60
    cmp r0, #0x1
    beq L_0204ef7c
    b L_0204ef98
L_0204ef60:
    mov r0, r5
    mov r1, #0x278
    bl func_0203e2b8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ef7c:
    ldr r1, =0x279
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ef98:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204efa8:
    mov r0, r5
    bl func_020360a0
    mov r4, r0
    bl func_02044358
    ands r0, r0, #0x2
    bne L_0204efd4
    mov r0, r5
    bl func_0202f960
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204efd4:
    cmp r4, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r1, =0x282
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f004:
    mov r0, r5
    bl func_020360a0
    mov r4, r0
    bl func_02044358
    ands r0, r0, #0x4
    bne L_0204f030
    mov r0, r5
    bl func_0202f960
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f030:
    cmp r4, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r1, =0x289
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f060:
    mov r0, r5
    bl func_020360a0
    mov r4, r0
    bl func_02044358
    ands r0, r0, #0x8
    bne L_0204f08c
    mov r0, r5
    bl func_0202f960
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f08c:
    cmp r4, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r1, =0x28f
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f0bc:
    mov r0, r5
    bl func_020360a0
    mov r4, r0
    bl func_02044358
    ands r0, r0, #0x10
    bne L_0204f0e8
    mov r0, r5
    bl func_0202f960
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f0e8:
    cmp r4, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r0, r5
    mov r1, r4
    bl func_0202785c
    str r0, [r5, #0x4a8]
    ldr r1, =0x295
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f128:
    mov r0, r5
    bl func_020360a0
    mov r4, r0
    bl func_02044358
    ands r0, r0, #0x20
    bne L_0204f154
    mov r0, r5
    bl func_0202f960
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f154:
    cmp r4, #0x0
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1f
    mov r0, r0, lsl #0x10
    str r1, [r2, #0x0]
    movs r0, r0, lsr #0x10
    beq L_0204f1a4
    cmp r0, #0x1
    beq L_0204f1c0
    b L_0204f1dc
L_0204f1a4:
    ldr r1, =0x2cd
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f1c0:
    ldr r1, =0x2ce
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f1dc:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f1ec:
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
    b L_0204f398
L_0204f230:
    b L_0204f248
    b L_0204f278
    b L_0204f2a8
    b L_0204f2d8
    b L_0204f308
    b L_0204f338
L_0204f248:
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    mov r0, r4
    mov r1, #0x7
    bl func_02027044
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f278:
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    mov r0, r4
    mov r1, #0x9
    bl func_02027044
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f2a8:
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    mov r0, r4
    mov r1, #0xb
    bl func_02027044
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f2d8:
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    mov r0, r4
    mov r1, #0xd
    bl func_02027044
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f308:
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    mov r0, r4
    mov r1, #0xf
    bl func_02027044
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f338:
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    mov r0, r4
    mov r1, #0x11
    bl func_02027044
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f368:
    bl func_020276d8
    mvn r1, #0x0
    cmp r0, r1
    beq L_0204f388
    cmp r0, #0x0
    beq L_0204f388
    cmp r0, #0x1
    bne L_0204f398
L_0204f388:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204f398:
    mov r0, #0x0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on

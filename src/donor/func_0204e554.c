/* compiler: 2.0/sp1p5  */
/* func_0204e554 from projets/nintendogs-chihuahua-friends/src/auto/func_0204e554.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02027044();
extern void func_020276d0();
extern void func_020276d8();
extern void func_0202f960();
extern void func_02035e14();
extern void func_02035e20();
extern void func_020360a0();
extern void func_0203e2b8();
extern void func_02044358();
extern char data_0214b484[];
// clang-format off
asm void func_0204e554(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r1
    ldrsh r3, [r4, #0xe8]
    ldr r2, =0x2fe
    mov r5, r0
    cmp r3, r2
    beq L_0204e58c
    ldr r2, =0x2ff
    cmp r3, r2
    beq L_0204e9fc
    cmp r3, #0x300
    beq L_0204ea40
    b L_0204ed84
L_0204e58c:
    bl func_020276d8
    mvn r1, #0x0
    cmp r0, r1
    beq L_0204e7d4
    cmp r0, #0x0
    beq L_0204e7d4
    cmp r0, #0x1
    bne L_0204ed84
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0x3
    ldr r2, [r3, #0x0]
    mul r0, r2, r0
    add r2, r0, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    str r2, [r3, #0x0]
    movs r0, r0, lsr #0x10
    beq L_0204e5fc
    cmp r0, #0x1
    beq L_0204e658
    cmp r0, #0x2
    beq L_0204e71c
    b L_0204ed84
L_0204e5fc:
    mov r0, r5
    bl func_020360a0
    mov r4, r0
    bl func_02044358
    ands r0, r0, #0x2
    bne L_0204e628
    mov r0, r5
    bl func_0202f960
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204e628:
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
L_0204e658:
    mov r0, r5
    bl func_020360a0
    mov r4, r0
    bl func_02044358
    ands r0, r0, #0x20
    bne L_0204e684
    mov r0, r5
    bl func_0202f960
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204e684:
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
    beq L_0204e6d4
    cmp r0, #0x1
    beq L_0204e6f0
    b L_0204e70c
L_0204e6d4:
    ldr r1, =0x2cd
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204e6f0:
    ldr r1, =0x2ce
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204e70c:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204e71c:
    bl func_02044358
    ands r0, r0, #0x100
    bne L_0204e73c
    mov r0, r5
    bl func_0202f960
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204e73c:
    ldrsb r0, [r5, #0xa4]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bls L_0204e774
    ldrsb r0, [r4, #0xa4]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bhi L_0204e784
L_0204e774:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204e784:
    ldrsb r1, [r4, #0x88]
    mov r0, r5
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    ldr r1, =0x26f
    mov r0, r5
    bl func_0203e2b8
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    mov r0, r4
    mov r1, #0x18
    bl func_02027044
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204e7d4:
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0x3
    ldr r2, [r3, #0x0]
    mul r0, r2, r0
    add r2, r0, #0x1
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r1, r0, r1
    mov r0, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    str r2, [r3, #0x0]
    movs r0, r0, lsr #0x10
    beq L_0204e824
    cmp r0, #0x1
    beq L_0204e880
    cmp r0, #0x2
    beq L_0204e944
    b L_0204ed84
L_0204e824:
    mov r0, r5
    bl func_020360a0
    mov r4, r0
    bl func_02044358
    ands r0, r0, #0x2
    bne L_0204e850
    mov r0, r5
    bl func_0202f960
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204e850:
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
L_0204e880:
    mov r0, r5
    bl func_020360a0
    mov r4, r0
    bl func_02044358
    ands r0, r0, #0x20
    bne L_0204e8ac
    mov r0, r5
    bl func_0202f960
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204e8ac:
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
    beq L_0204e8fc
    cmp r0, #0x1
    beq L_0204e918
    b L_0204e934
L_0204e8fc:
    ldr r1, =0x2cd
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204e918:
    ldr r1, =0x2ce
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204e934:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204e944:
    bl func_02044358
    ands r0, r0, #0x100
    bne L_0204e964
    mov r0, r5
    bl func_0202f960
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204e964:
    ldrsb r0, [r5, #0xa4]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bls L_0204e99c
    ldrsb r0, [r4, #0xa4]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bhi L_0204e9ac
L_0204e99c:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204e9ac:
    ldrsb r1, [r4, #0x88]
    mov r0, r5
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    ldr r1, =0x26f
    mov r0, r5
    bl func_0203e2b8
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    mov r0, r4
    mov r1, #0x18
    bl func_02027044
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204e9fc:
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
L_0204ea40:
    bl func_020276d8
    mvn r1, #0x0
    cmp r0, r1
    beq L_0204ec60
    cmp r0, #0x0
    beq L_0204ec18
    cmp r0, #0x1
    bne L_0204ed84
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
    beq L_0204ea9c
    cmp r0, #0x1
    beq L_0204eb60
    b L_0204ed84
L_0204ea9c:
    mov r0, r5
    bl func_020360a0
    mov r4, r0
    bl func_02044358
    ands r0, r0, #0x20
    bne L_0204eac8
    mov r0, r5
    bl func_0202f960
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204eac8:
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
    beq L_0204eb18
    cmp r0, #0x1
    beq L_0204eb34
    b L_0204eb50
L_0204eb18:
    ldr r1, =0x2cd
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204eb34:
    ldr r1, =0x2ce
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204eb50:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204eb60:
    bl func_02044358
    ands r0, r0, #0x100
    bne L_0204eb80
    mov r0, r5
    bl func_0202f960
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204eb80:
    ldrsb r0, [r5, #0xa4]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bls L_0204ebb8
    ldrsb r0, [r4, #0xa4]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bhi L_0204ebc8
L_0204ebb8:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ebc8:
    ldrsb r1, [r4, #0x88]
    mov r0, r5
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    ldr r1, =0x26f
    mov r0, r5
    bl func_0203e2b8
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    mov r0, r4
    mov r1, #0x18
    bl func_02027044
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ec18:
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
L_0204ec60:
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
    beq L_0204ec9c
    cmp r0, #0x1
    beq L_0204eccc
    b L_0204ed84
L_0204ec9c:
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
L_0204eccc:
    bl func_02044358
    ands r0, r0, #0x100
    bne L_0204ecec
    mov r0, r5
    bl func_0202f960
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ecec:
    ldrsb r0, [r5, #0xa4]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bls L_0204ed24
    ldrsb r0, [r4, #0xa4]
    sub r0, r0, #0x4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    and r0, r0, #0xff
    cmp r0, #0x1
    bhi L_0204ed34
L_0204ed24:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ed34:
    ldrsb r1, [r4, #0x88]
    mov r0, r5
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    ldr r1, =0x273
    mov r0, r5
    bl func_0203e2b8
    ldrsb r1, [r5, #0x88]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    mov r0, r4
    mov r1, #0x16
    bl func_02027044
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204ed84:
    mov r0, #0x0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on

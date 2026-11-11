/* compiler: 2.0/sp1p5  */
/* func_0204e114 from projets/nintendogs-chihuahua-friends/src/auto/func_0204e114.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02027044();
extern void func_020276d0();
extern void func_020276d8();
extern void func_0202f8a4();
extern void func_0202f960();
extern void func_02035e14();
extern void func_02035e20();
extern void func_020360a0();
extern void func_02039038();
extern void func_0203e2b8();
extern void func_02044358();
extern char data_0214b484[];
// clang-format off
asm void func_0204e114(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r4, r0
    mov r6, r1
    bl func_020360a0
    add r1, r4, #0x100
    ldrh r1, [r1, #0xa]
    mov r5, r0
    cmp r1, #0x1f4
    bls L_0204e150
    mov r0, r4
    bl func_02035e20
    mov r0, r4
    bl func_0202f960
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e150:
    cmp r5, #0x0
    bne L_0204e170
    mov r0, r4
    bl func_02035e20
    mov r0, r4
    bl func_0202f8a4
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e170:
    cmp r1, #0x1f4
    bne L_0204e338
    cmp r6, #0x2
    bgt L_0204e1d4
    mov r0, r4
    bl func_02035e20
    mov r0, r4
    bl func_02039038
    cmp r0, #0x0
    bne L_0204e1c8
    cmp r5, #0x0
    beq L_0204e1c8
    mov r0, r5
    bl func_020276d0
    add r1, r4, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x303
    mov r0, r4
    bl func_0203e2b8
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e1c8:
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e1d4:
    mov r0, r4
    mov r1, r5
    bl func_020276d8
    mvn r1, #0x0
    cmp r0, r1
    beq L_0204e300
    cmp r0, #0x0
    beq L_0204e2ac
    cmp r0, #0x1
    bne L_0204e32c
    mov r0, r4
    bl func_020360a0
    mov r5, r0
    bl func_02044358
    ands r0, r0, #0x20
    bne L_0204e224
    mov r0, r4
    bl func_0202f960
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e224:
    cmp r5, #0x0
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
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
    beq L_0204e270
    cmp r0, #0x1
    beq L_0204e288
    b L_0204e2a0
L_0204e270:
    ldr r1, =0x2cd
    mov r0, r4
    bl func_0203e2b8
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e288:
    ldr r1, =0x2ce
    mov r0, r4
    bl func_0203e2b8
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e2a0:
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e2ac:
    mov r0, r4
    bl func_02035e20
    mov r0, r4
    bl func_02039038
    cmp r0, #0x0
    bne L_0204e2f4
    cmp r5, #0x0
    beq L_0204e2f4
    mov r0, r5
    bl func_020276d0
    add r1, r4, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x303
    mov r0, r4
    bl func_0203e2b8
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e2f4:
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e300:
    ldrsb r1, [r4, #0x88]
    mov r0, r5
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02035e14
    mov r0, r5
    mov r1, #0x11
    bl func_02027044
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e32c:
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0204e338:
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on

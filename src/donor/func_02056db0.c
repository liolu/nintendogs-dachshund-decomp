/* compiler: 2.0/sp1p5  */
/* func_02056db0 from projets/nintendogs-chihuahua-friends/src/auto/func_02056db0.c (same code in another game of this
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
asm void func_02056db0(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x28
    mov r5, r0
    mov r4, r1
    mov r6, r2
    bl func_02027724
    cmp r0, #0x0
    beq L_020571b8
    cmp r0, #0x1
    beq L_02056fcc
    cmp r0, #0x2
    bne L_020573a4
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
    beq L_02056e38
    cmp r0, #0x1
    beq L_02056e78
    cmp r0, #0x2
    beq L_02056ecc
    b L_02056f88
L_02056e38:
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
L_02056e78:
    cmp r4, #0x0
    beq L_02056ebc
    mov r0, r5
    bl func_0202d9e0
    cmp r0, #0x0
    bne L_02056ebc
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
L_02056ebc:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02056ecc:
    cmp r4, #0x0
    beq L_02056f78
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r0, r5
    bl func_02038094
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02056f78
L_02056ef8:
    b L_02056f08
    b L_02056f24
    b L_02056f40
    b L_02056f5c
L_02056f08:
    mov r0, r5
    mov r1, #0x274
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02056f24:
    ldr r1, =0x275
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02056f40:
    ldr r1, =0x276
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02056f5c:
    ldr r1, =0x277
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02056f78:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02056f88:
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
L_02056fcc:
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
    beq L_02057024
    cmp r0, #0x1
    beq L_02057064
    cmp r0, #0x2
    beq L_020570b8
    b L_02057174
L_02057024:
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
L_02057064:
    cmp r4, #0x0
    beq L_020570a8
    mov r0, r5
    bl func_0202d9e0
    cmp r0, #0x0
    bne L_020570a8
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
L_020570a8:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020570b8:
    cmp r4, #0x0
    beq L_02057164
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r0, r5
    bl func_02038094
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02057164
L_020570e4:
    b L_020570f4
    b L_02057110
    b L_0205712c
    b L_02057148
L_020570f4:
    mov r0, r5
    mov r1, #0x274
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057110:
    ldr r1, =0x275
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0205712c:
    ldr r1, =0x276
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057148:
    ldr r1, =0x277
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057164:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057174:
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
L_020571b8:
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
    beq L_02057210
    cmp r0, #0x1
    beq L_02057250
    cmp r0, #0x2
    beq L_020572a4
    b L_02057360
L_02057210:
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
L_02057250:
    cmp r4, #0x0
    beq L_02057294
    mov r0, r5
    bl func_0202d9e0
    cmp r0, #0x0
    bne L_02057294
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
L_02057294:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020572a4:
    cmp r4, #0x0
    beq L_02057350
    mov r0, r4
    bl func_020276d0
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r0, r5
    bl func_02038094
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02057350
L_020572d0:
    b L_020572e0
    b L_020572fc
    b L_02057318
    b L_02057334
L_020572e0:
    mov r0, r5
    mov r1, #0x274
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020572fc:
    ldr r1, =0x275
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057318:
    ldr r1, =0x276
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057334:
    ldr r1, =0x277
    mov r0, r5
    bl func_0203e2b8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057350:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057360:
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
L_020573a4:
    mov r0, #0x0
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on

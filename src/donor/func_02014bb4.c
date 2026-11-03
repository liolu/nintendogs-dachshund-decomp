/* compiler: 2.0/sp1p5  */
/* func_02014bb4 from projets/nintendogs-chihuahua-friends/src/auto/func_02014bb4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02027ea8();
extern void func_02028104();
extern void func_020286ec();
extern void func_0202c938();
extern void func_0202f970();
extern void func_02034f40();
extern void func_0203e280();
extern void func_0203e2b8();
extern void func_020415e0();
extern void func_ov002_02193e98();
extern char data_0214b484[];
// clang-format off
asm void func_02014bb4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    add r2, r5, #0x100
    ldrh r3, [r2, #0x14]
    mov r4, r1
    add r1, r3, #0x1
    strh r1, [r2, #0x14]
    bl func_02034f40
    movs r6, r0
    beq L_02014c44
    mov r0, r5
    mov r1, #0x2
    mov r2, #0x1
    bl func_0203e280
    ldrsh r0, [r6, #0x90]
    cmp r0, #0x4
    beq L_02014c04
    cmp r0, #0x7
    beq L_02014c20
    b L_02014c38
L_02014c04:
    ldrsb r0, [r5, #0xa4]
    cmp r0, #0x5
    beq L_02014c38
    cmp r0, #0x4
    movne r0, #0x1
    strne r0, [r5, #0x188]
    b L_02014c38
L_02014c20:
    ldrsb r0, [r5, #0xa4]
    cmp r0, #0x5
    beq L_02014c38
    cmp r0, #0x4
    movne r0, #0x8
    strne r0, [r5, #0x188]
L_02014c38:
    mov r0, r5
    bl func_ov002_02193e98
    b L_02014c48
L_02014c44:
    mov r0, #0x0
L_02014c48:
    cmp r0, #0x0
    movne r0, #0x1
    bne L_02014c8c
    mov r0, r5
    mov r1, r4
    mov r2, #0x0
    bl func_020286ec
    cmp r0, #0x0
    movne r0, #0x1
    bne L_02014c8c
    mov r1, r4, lsl #0x10
    mov r0, r5
    mov r1, r1, asr #0x10
    bl func_0202c938
    cmp r0, #0x0
    movne r0, #0x1
    moveq r0, #0x0
L_02014c8c:
    cmp r0, #0x0
    beq L_02014d00
    mov r0, r5
    bl func_020415e0
    cmp r0, #0x0
    beq L_02014cd4
    ldrb r0, [r5, #0xa3]
    add r1, r5, #0xa3
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldrb r0, [r5, #0xa3]
    cmp r0, #0x2
    blo L_02014cd4
    mov r0, r5
    bl func_02028104
    add r1, r5, #0xa3
    mov r0, #0x0
    swpb r0, r0, [r1]
L_02014cd4:
    ldr r2, =0xfffff448
    mov r0, r5
    mov r1, #0x2
    bl func_02027ea8
    add r0, r5, #0x100
    mov r1, #0xa
    strh r1, [r0, #0x12]
    mov r1, #0x0
    strh r1, [r0, #0x14]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02014d00:
    add r2, r5, #0x100
    ldrh r1, [r2, #0x14]
    ldr r0, =0x8ca0
    cmp r1, r0
    bls L_02014d40
    add r0, r4, #0x4c
    mov r1, r0, lsl #0x10
    mov r3, #0x3c
    strh r3, [r2, #0x12]
    mov r3, #0x0
    mov r0, r5
    mov r1, r1, asr #0x10
    strh r3, [r2, #0x14]
    bl func_0203e2b8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02014d40:
    ldrh r0, [r2, #0xa]
    cmp r0, #0x12c
    ldmlsfd sp!, {r4, r5, r6, lr}
    bxls lr
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    mov r1, #0x64
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
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    mov r1, r4, lsl #0x10
    mov r0, r5
    mov r1, r1, asr #0x10
    bl func_0202f970
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on

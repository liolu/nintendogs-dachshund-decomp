/* compiler: 2.0/sp1p5  */
/* func_0204b348 from projets/nintendogs-chihuahua-friends/src/auto/func_0204b348.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02025b58();
extern void func_020267c8();
extern void func_0202f8a4();
extern void func_02035294();
extern void func_02035e20();
extern void func_020360a0();
extern void func_02036fbc();
extern void func_02037c9c();
extern void func_02038edc();
extern void func_0203e280();
extern void func_0204b7a8();
// clang-format off
asm void func_0204b348(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    bl func_020360a0
    add r1, r5, #0x100
    ldrsh r1, [r1, #0x50]
    mov r4, r0
    cmp r1, #0x17
    beq L_0204b3c8
    ldr r0, =0x1e2
    cmp r1, r0
    bne L_0204b474
    mov r0, r5
    mov r1, #0x1e
    bl func_02035294
    cmp r0, #0x0
    beq L_0204b474
    mov r0, r5
    mov r1, #0x0
    mov r2, #0x17
    bl func_0203e280
    add r1, r5, #0xac
    mov r0, #0x5
    swpb r0, r0, [r1]
    mov r0, r5
    add r2, r5, #0xb1
    mov r1, #0x7
    swpb r1, r1, [r2]
    bl func_020267c8
    mov r0, r5
    bl func_02025b58
    b L_0204b474
L_0204b3c8:
    add r0, r5, #0x378
    add r3, r5, #0x3d8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldrsb r0, [r5, #0xb1]
    cmp r0, #0x7
    bne L_0204b420
    ldr r1, [r5, #0x18c]
    ldr r0, [r5, #0x1a4]
    ldr r2, [r5, #0x2a0]
    sub r0, r1, r0, lsl #0x1
    add r0, r2, r0
    str r0, [r5, #0x26c]
    ldr r0, [r5, #0x2a4]
    str r0, [r5, #0x270]
    ldr r1, [r5, #0x194]
    ldr r0, [r5, #0x1ac]
    ldr r2, [r5, #0x2a8]
    sub r0, r1, r0, lsl #0x1
    add r0, r2, r0
    str r0, [r5, #0x274]
    b L_0204b458
L_0204b420:
    ldr r1, [r5, #0x18c]
    ldr r0, [r5, #0x1a4]
    ldr r2, [r5, #0x2a0]
    add r0, r1, r0, lsl #0x1
    sub r0, r2, r0
    str r0, [r5, #0x26c]
    ldr r0, [r5, #0x2a4]
    str r0, [r5, #0x270]
    ldr r1, [r5, #0x194]
    ldr r0, [r5, #0x1ac]
    ldr r2, [r5, #0x2a8]
    add r0, r1, r0, lsl #0x1
    sub r0, r2, r0
    str r0, [r5, #0x274]
L_0204b458:
    mov r0, r5
    bl func_02038edc
    mov r0, r5
    mov r1, #0x300
    bl func_02036fbc
    mov r0, r5
    bl func_02037c9c
L_0204b474:
    mov r0, r5
    mov r1, r4
    mov r2, #0x0
    bl func_0204b7a8
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    add r0, r5, #0x100
    ldrh r0, [r0, #0xa]
    cmp r0, #0x96
    addls sp, sp, #0x4
    ldmlsfd sp!, {r4, r5, lr}
    bxls lr
    mov r0, r5
    bl func_02035e20
    mov r0, r5
    bl func_0202f8a4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on

/* compiler: 2.0/sp1p5  */
/* func_0202c05c from projets/nintendogs-miniature-dachshund-friends/src/auto/func_0202c05c.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
extern void func_02105dbc();
extern void func_021060cc();
extern void func_02106344();
extern char data_0214b484[];
// clang-format off
asm void func_0202c05c(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r7, r0
    add r0, r7, #0x100
    ldrh r0, [r0, #0x20]
    mov r6, r1
    cmp r0, #0x0
    addne sp, sp, #0x4
    movne r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    ldrsh r0, [r7, #0xf0]
    cmp r0, #0xb
    bgt L_0202c0d0
    cmp r0, #0x0
    addge pc, pc, r0, lsl #0x2
    b L_0202c1d0
L_0202c0a0:
    b L_0202c1d0
    b L_0202c1d0
    b L_0202c1d0
    b L_0202c1d0
    b L_0202c0e8
    b L_0202c0e8
    b L_0202c0e8
    b L_0202c0e8
    b L_0202c0e8
    b L_0202c1d0
    b L_0202c0e8
    b L_0202c0e8
L_0202c0d0:
    cmp r0, #0x6f
    bne L_0202c1d0
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0202c0e8:
    ldrsb r4, [r7, #0x88]
    mov r5, #0x1
    bl func_021060cc
    cmp r4, r0
    beq L_0202c110
    ldr r0, =data_0214b484
    ldr r0, [r0, #0x0]
    ldrsb r0, [r0, #0xc]
    cmp r4, r0
    movne r5, #0x0
L_0202c110:
    cmp r5, #0x0
    beq L_0202c1c0
    cmp r6, #0x8
    addls pc, pc, r6, lsl #0x2
    b L_0202c148
L_0202c124:
    b L_0202c148
    b L_0202c158
    b L_0202c168
    b L_0202c148
    b L_0202c178
    b L_0202c178
    b L_0202c178
    b L_0202c178
    b L_0202c178
L_0202c148:
    mov r1, r4
    mov r0, #0x5
    bl func_02105dbc
    b L_0202c184
L_0202c158:
    mov r1, r4
    mov r0, #0x7
    bl func_02105dbc
    b L_0202c184
L_0202c168:
    mov r1, r4
    mov r0, #0x9
    bl func_02105dbc
    b L_0202c184
L_0202c178:
    mov r1, r4
    mov r0, #0xb
    bl func_02105dbc
L_0202c184:
    ldr r0, =data_0214b484
    ldrsb r1, [r7, #0x88]
    ldr r0, [r0, #0x0]
    ldrsb r0, [r0, #0xc]
    cmp r1, r0
    bne L_0202c1b0
    bl func_02106344
    add r1, r0, #0x88
    mov r0, #0x1
    str r0, [r1, #0x6c]
    b L_0202c1c0
L_0202c1b0:
    bl func_02106344
    add r1, r0, #0x88
    mov r0, #0x0
    str r0, [r1, #0x6c]
L_0202c1c0:
    add sp, sp, #0x4
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0202c1d0:
    ldrsh r0, [r7, #0xf0]
    mov r1, #0x0
    cmp r0, #0xc
    ble L_0202c1e8
    cmp r0, #0x6f
    movlt r1, #0x1
L_0202c1e8:
    cmp r1, #0x0
    addne sp, sp, #0x4
    movne r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    add r2, r7, #0xbe
    mov r0, #0x0
    swpb r1, r0, [r2]
    add r1, r7, #0x100
    strh r0, [r1, #0x20]
    mov r1, #0x6f
    strh r1, [r7, #0xf0]
    add r2, r7, #0xc4
    swpb r1, r0, [r2]
    add r2, r7, #0xc5
    swpb r1, r0, [r2]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on

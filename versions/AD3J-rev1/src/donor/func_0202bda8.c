/* compiler: 2.0/sp1p5  */
/* func_0202bda8 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_0202bda8.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
extern void func_02105dbc();
extern void func_021060cc();
extern void func_02106344();
extern char data_0214b484[];
// clang-format off
asm void func_0202bda8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    add r0, r8, #0x100
    ldrh r0, [r0, #0x20]
    mov r7, r1
    mov r6, r2
    cmp r0, #0x0
    movne r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    ldrsh r0, [r8, #0xf0]
    cmp r0, #0xb
    bgt L_0202be18
    cmp r0, #0x0
    addge pc, pc, r0, lsl #0x2
    b L_0202bf80
L_0202bde8:
    b L_0202bf80
    b L_0202bf80
    b L_0202bf80
    b L_0202bf80
    b L_0202be2c
    b L_0202be2c
    b L_0202be2c
    b L_0202be2c
    b L_0202be2c
    b L_0202bf80
    b L_0202be2c
    b L_0202be2c
L_0202be18:
    cmp r0, #0x6f
    bne L_0202bf80
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0202be2c:
    ldrsb r4, [r8, #0x88]
    mov r5, #0x1
    bl func_021060cc
    cmp r4, r0
    beq L_0202be54
    ldr r0, =data_0214b484
    ldr r0, [r0, #0x0]
    ldrsb r0, [r0, #0xc]
    cmp r4, r0
    movne r5, #0x0
L_0202be54:
    cmp r5, #0x0
    beq L_0202bf04
    cmp r7, #0x8
    addls pc, pc, r7, lsl #0x2
    b L_0202be8c
L_0202be68:
    b L_0202be8c
    b L_0202be9c
    b L_0202beac
    b L_0202be8c
    b L_0202bebc
    b L_0202bebc
    b L_0202bebc
    b L_0202bebc
    b L_0202bebc
L_0202be8c:
    mov r1, r4
    mov r0, #0x5
    bl func_02105dbc
    b L_0202bec8
L_0202be9c:
    mov r1, r4
    mov r0, #0x7
    bl func_02105dbc
    b L_0202bec8
L_0202beac:
    mov r1, r4
    mov r0, #0x9
    bl func_02105dbc
    b L_0202bec8
L_0202bebc:
    mov r1, r4
    mov r0, #0xb
    bl func_02105dbc
L_0202bec8:
    ldr r0, =data_0214b484
    ldrsb r1, [r8, #0x88]
    ldr r0, [r0, #0x0]
    ldrsb r0, [r0, #0xc]
    cmp r1, r0
    bne L_0202bef4
    bl func_02106344
    add r1, r0, #0x88
    mov r0, #0x1
    str r0, [r1, #0x6c]
    b L_0202bf04
L_0202bef4:
    bl func_02106344
    add r1, r0, #0x88
    mov r0, #0x0
    str r0, [r1, #0x6c]
L_0202bf04:
    cmp r6, #0x0
    beq L_0202bf74
    cmp r7, #0x8
    addls pc, pc, r7, lsl #0x2
    b L_0202bf68
L_0202bf18:
    b L_0202bf68
    b L_0202bf68
    b L_0202bf68
    b L_0202bf68
    b L_0202bf68
    b L_0202bf48
    b L_0202bf3c
    b L_0202bf60
    b L_0202bf54
L_0202bf3c:
    ldr r0, =0x243
    strh r0, [r8, #0xe8]
    b L_0202bf68
L_0202bf48:
    mov r0, #0x244
    strh r0, [r8, #0xe8]
    b L_0202bf68
L_0202bf54:
    ldr r0, =0x247
    strh r0, [r8, #0xe8]
    b L_0202bf68
L_0202bf60:
    mov r0, #0x248
    strh r0, [r8, #0xe8]
L_0202bf68:
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0202bf74:
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0202bf80:
    ldrsh r0, [r8, #0xf0]
    mov r1, #0x0
    cmp r0, #0xc
    ble L_0202bf98
    cmp r0, #0x6f
    movlt r1, #0x1
L_0202bf98:
    cmp r1, #0x0
    beq L_0202c01c
    cmp r6, #0x0
    beq L_0202c010
    cmp r7, #0x8
    addls pc, pc, r7, lsl #0x2
    b L_0202c004
L_0202bfb4:
    b L_0202c004
    b L_0202c004
    b L_0202c004
    b L_0202c004
    b L_0202c004
    b L_0202bfe4
    b L_0202bfd8
    b L_0202bffc
    b L_0202bff0
L_0202bfd8:
    ldr r0, =0x243
    strh r0, [r8, #0xe8]
    b L_0202c004
L_0202bfe4:
    mov r0, #0x244
    strh r0, [r8, #0xe8]
    b L_0202c004
L_0202bff0:
    ldr r0, =0x247
    strh r0, [r8, #0xe8]
    b L_0202c004
L_0202bffc:
    mov r0, #0x248
    strh r0, [r8, #0xe8]
L_0202c004:
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0202c010:
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0202c01c:
    add r2, r8, #0xbe
    mov r0, #0x0
    swpb r1, r0, [r2]
    add r1, r8, #0x100
    strh r0, [r1, #0x20]
    mov r1, #0x6f
    strh r1, [r8, #0xf0]
    add r2, r8, #0xc4
    swpb r1, r0, [r2]
    add r2, r8, #0xc5
    swpb r1, r0, [r2]
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on

/* compiler: 2.0/sp1p5  */
/* func_020e1550 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020e1550.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
extern void func_020848ec();
extern void func_02084a14();
extern void func_ov003_02157e78();
extern char data_02154c9c[];
extern char data_02154cac[];
// clang-format off
asm void func_020e1550(void) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr r2, =data_02154c9c
    mov r6, r0
    ldr r0, [r2, #0x0]
    mov r5, r1
    cmp r0, #0x0
    ldrne r4, [r0, #0x0]
    ldr r0, =data_02154cac
    moveq r4, #0x0
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x2c]
    cmp r1, #0x0
    beq L_020e159c
    mov r0, r4
    bl func_020848ec
    ldr r0, =data_02154cac
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x2c]
L_020e159c:
    ldr r0, =data_02154cac
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x30]
    cmp r1, #0x0
    beq L_020e15c8
    mov r0, r4
    bl func_020848ec
    ldr r0, =data_02154cac
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x30]
L_020e15c8:
    ldr r0, =data_02154cac
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x34]
    cmp r1, #0x0
    beq L_020e15f4
    mov r0, r4
    bl func_020848ec
    ldr r0, =data_02154cac
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x34]
L_020e15f4:
    ldr r0, =data_02154cac
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x38]
    cmp r1, #0x0
    beq L_020e1620
    mov r0, r4
    bl func_020848ec
    ldr r0, =data_02154cac
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x38]
L_020e1620:
    ldr r0, =data_02154cac
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x3c]
    cmp r1, #0x0
    beq L_020e164c
    mov r0, r4
    bl func_020848ec
    ldr r0, =data_02154cac
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x3c]
L_020e164c:
    mov r0, r4
    mov r2, r6
    mov r1, #0x3d
    bl func_02084a14
    ldr r4, =data_02154cac
    ldr r1, [r4, #0x0]
    str r0, [r1, #0x2c]
    ldr r0, [r4, #0x0]
    ldr r1, [r0, #0x2c]
    cmp r1, #0x0
    beq L_020e16d0
    mov r0, r5, lsl #0x10
    mov r3, r0, asr #0x10
    str r3, [r1, #0x54]
    ldr r0, [r4, #0x0]
    ldr r1, =0xffff
    ldr r0, [r0, #0x2c]
    ldr r5, =0x19a
    strh r1, [r0, #0x58]
    ldr ip, [r4, #0x0]
    ldmia r6, {r0, r1, r2}
    add r6, ip, #0x1c
    stmia r6, {r0, r1, r2}
    str r5, [ip, #0x20]
    ldr r0, [r4, #0x0]
    mov r1, #0x28
    strh r3, [r0, #0x28]
    ldr r0, [r4, #0x0]
    mov r2, #0x0
    strh r1, [r0, #0x40]
    ldr r0, [r4, #0x0]
    add r1, r0, #0x42
    swpb r0, r2, [r1]
L_020e16d0:
    ldr r0, =data_02154cac
    mov r1, #0x1e
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x44]
    bl func_ov003_02157e78
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on

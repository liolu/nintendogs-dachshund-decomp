/* compiler: 2.0/sp1p5  */
/* func_020faf6c from projets/nintendogs-dachshund/src/auto/func_020faf6c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern void func_02003844();
extern void func_020c4990();
extern void func_020c4eac();
extern void func_020d7180();
extern void func_020d73c8();
extern void func_020d7768();
extern char data_0212db08[];
extern char data_0212db0a[];
extern char data_0212db0c[];
extern char data_02153704[];
extern char data_027c0454[];
extern char func_020d708c[];
// clang-format off
asm void func_020d6f7c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r4, r1
    mov r1, #0x34
    bl func_02003844
    mov r1, r4
    mov r6, r0
    mov r5, #0x0
    bl func_020c4990
    ldr r0, =data_02153704
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_020fafa8
    ldrh r0, [r0, #0x6]
    cmp r0, #0x18
    moveq r5, #0x1
L_020fafa8:
    ldr r0, [r6, #0x24]
    cmp r0, #0x0
    bne L_020fafc4
    ldr r1, =data_027c0454
    mov r0, #0x4
    swpb r0, r0, [r1]
    bl func_020d7768
L_020fafc4:
    ldr r0, [r6, #0x24]
    cmp r0, #0x0
    moveq r4, #0x0
    beq L_020fafec
    cmp r0, #0x1
    moveq r4, #0x1
    beq L_020fafec
    cmp r0, #0x2
    moveq r4, #0x2
    movne r4, #0x0
L_020fafec:
    mov r0, r5
    mov r1, r4
    bl func_020d73c8
    mov r2, #0x12
    mov r1, #0x6
    mul ip, r5, r2
    ldr r5, =data_0212db08
    ldr r3, =data_0212db0a
    ldr r2, =data_0212db0c
    mul lr, r4, r1
    strh r0, [r6, #0x28]
    add r0, r5, ip
    ldrsh r4, [lr, r0]
    add r1, r3, ip
    add r0, r2, ip
    strh r4, [r6, #0x2a]
    ldrsh r1, [lr, r1]
    strh r1, [r6, #0x2c]
    ldrsh r0, [lr, r0]
    strh r0, [r6, #0x2e]
    ldr r0, [r6, #0x24]
    cmp r0, #0x0
    bne L_020fb04c
    bl func_020d7180
L_020fb04c:
    ldr r1, =func_020d708c
    mov r0, r6
    bl func_020c4eac
    mov r0, r6
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on

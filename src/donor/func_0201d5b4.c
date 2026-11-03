/* compiler: 2.0/sp1p5  */
/* func_0201d5b4 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_0201d5b4.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
extern void func_0200c3ec();
extern void func_02025b58();
extern void func_02026a54();
extern void func_020da1c0();
extern char data_02124ad8[];
// clang-format off
asm void func_0201d5b4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x13
    strh r2, [r1, #0x50]
    bl func_02026a54
    mov r0, r4
    bl func_02025b58
    mov r0, #0xc
    mov r1, #0x0
    bl func_0200c3ec
    movs ip, r0
    beq L_0201d634
    add r0, ip, #0x8
    add r3, r4, #0x2a0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldrh r1, [ip, #0x4]
    ldr r2, =data_02124ad8
    mov r0, #0x0
    mov r1, r1, asr #0x4
    mov r1, r1, lsl #0x2
    ldrsh r1, [r2, r1]
    str r1, [r4, #0x1a4]
    str r0, [r4, #0x1a8]
    ldrh r0, [ip, #0x4]
    mov r0, r0, asr #0x4
    mov r0, r0, lsl #0x1
    add r0, r0, #0x1
    mov r0, r0, lsl #0x1
    ldrsh r0, [r2, r0]
    str r0, [r4, #0x1ac]
L_0201d634:
    ldrh r0, [r4, #0x20]
    bic r0, r0, #0x1
    strh r0, [r4, #0x20]
    ldrsb r0, [r4, #0x88]
    bl func_020da1c0
    ldrb r0, [r4, #0xcc]
    add r1, r4, #0xcc
    orr r0, r0, #0x7
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

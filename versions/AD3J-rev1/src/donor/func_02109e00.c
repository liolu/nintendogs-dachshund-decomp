/* compiler: 2.0/sp1p5  */
/* func_020a9a88 from projets/nintendogs-dachshund/src/auto/func_020a9a88.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern void func_02068380();
// clang-format off
asm void func_02109e00(void) {
    stmfd sp!, {r4, lr}
    movs r4, r0
    beq L_020a9aac
    mov r1, #0x0
    str r1, [r4, #0x30]
    str r1, [r4, #0x34]
    add r0, r4, #0x3c
    str r1, [r4, #0x38]
    bl func_02068380
L_020a9aac:
    ldr r1, [r4, #0x18c]
    cmp r1, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldrh r0, [r1, #0x20]
    orr r0, r0, #0x1
    strh r0, [r1, #0x20]
    ldr r1, [r4, #0x18c]
    ldrb r0, [r1, #0x1]
    add r1, r1, #0x1
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

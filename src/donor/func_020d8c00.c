/* compiler: 2.0/sp1p5  */
/* func_020fcbf0 from projets/nintendogs-dachshund/src/auto/func_020fcbf0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
// clang-format off
asm void func_020d8c00(void) {
    ldrsh r1, [r0, #0x90]
    cmp r1, #0x3
    addls pc, pc, r1, lsl #0x2
    bx lr
L_020fcc00:
    bx lr
    bx lr
    b L_020fcc10
    bx lr
L_020fcc10:
    ldr r1, [r0, #0x214]
    mvn r0, #0x0
    str r0, [r1, #0x4]
    add r1, r1, #0x9
    mov r0, #0x14
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on

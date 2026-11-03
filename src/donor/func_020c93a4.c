/* compiler: 2.0/sp1p5  */
/* func_020ceb58 from projets/nintendogs-dachshund/src/auto/func_020ceb58.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern char data_02154c48[];
// clang-format off
asm void func_020c93a4(void) {
    ldr r1, =data_02154c48
    ldr r1, [r1, #0x0]
    add r1, r1, #0x1000
    ldr r3, [r1, #0x41c]
    add r2, r3, #0x60
    ldrsb r1, [r2, #0x25]
    cmp r1, r0
    bxeq lr
    add r1, r2, #0x25
    swpb r0, r0, [r1]
    add r0, r3, #0x600
    ldrh r1, [r0, #0xae]
    orr r1, r1, #0x1
    strh r1, [r0, #0xae]
    bx lr
}
// clang-format on

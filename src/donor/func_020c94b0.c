/* compiler: 2.0/sp1p5  */
/* func_020cec60 from projets/nintendogs-dachshund/src/auto/func_020cec60.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern char data_02154c48[];
// clang-format off
asm void func_020c94b0(void) {
    ldr r0, =data_02154c48
    mov r2, #0x0
    ldr r0, [r0, #0x0]
    add r0, r0, #0x1000
    ldr r3, [r0, #0x41c]
    add r1, r3, #0x88
    swpb r0, r2, [r1]
    add r0, r3, #0x600
    ldrh r1, [r0, #0xae]
    orr r1, r1, #0x1
    strh r1, [r0, #0xae]
    bx lr
}
// clang-format on

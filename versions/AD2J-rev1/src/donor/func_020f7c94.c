/* compiler: 2.0/sp1p5  */
/* func_02097508 from projets/nintendogs-dachshund/src/auto/func_02097508.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern char data_021473f4[];
extern char data_02155488[];
// clang-format off
asm void func_020f7c94(void) {
    ldr r2, =data_021473f4
    mov r0, #0x1
    ldr r1, =data_02155488
    mov r3, #0x1f
    swpb r0, r0, [r2]
    swpb r0, r3, [r1]
    bx lr
}
// clang-format on

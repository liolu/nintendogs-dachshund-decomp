/* compiler: 2.0/sp1p5  */
/* func_020968e8 from projets/nintendogs-dachshund/src/auto/func_020968e8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern char data_02155070[];
extern char data_02155088[];
extern char data_0215508c[];
extern char data_021550d4[];
extern char data_021550e4[];
// clang-format off
asm void func_020f707c(void) {
    ldr r2, =data_021550e4
    ldr r1, =data_02155070
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldr ip, [r2, #0x0]
    ldr r2, =data_0215508c
    ldr r1, =data_02155088
    mov r3, #0x0
    ldr r0, =data_021550d4
    str ip, [r2, #0x0]
    strh r3, [r1, #0x0]
    str r3, [r0, #0x0]
    bx lr
}
// clang-format on

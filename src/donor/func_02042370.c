/* compiler: 2.0/sp1p5  */
/* func_02042370 from projets/nintendogs-chihuahua-friends/src/auto/func_02042370.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern char data_0214b484[];
// clang-format off
asm void func_02042370(void) {
    ldr r2, =data_0214b484
    ldr r3, [r2, #0x0]
    ldrsb r1, [r3, #0xe]
    cmp r0, r1
    bxne lr
    add r1, r3, #0xe
    mvn r0, #0x0
    swpb r0, r0, [r1]
    mov r1, #0x0
    ldr r0, [r2, #0x0]
    str r1, [r0, #0x40]
    bx lr
}
// clang-format on

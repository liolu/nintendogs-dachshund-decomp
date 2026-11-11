/* compiler: 2.0/sp1p5  */
/* func_02044594 from projets/nintendogs-chihuahua-friends/src/auto/func_02044594.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern char data_0214b484[];
// clang-format off
asm void func_02044594(void) {
    ldr r1, =data_0214b484
    ldr r2, [r1, #0x0]
    ldrsb r1, [r2, #0xc]
    cmp r0, r1
    bxne lr
    add r1, r2, #0xd
    mvn r0, #0x0
    swpb r0, r0, [r1]
    add r1, r2, #0xc
    ldrsb r0, [r2, #0xd]
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on

/* compiler: 2.0/sp1p5  */
/* func_02021fe4 from projets/nintendogs-chihuahua-friends/src/auto/func_02021fe4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern char data_0214b484[];
// clang-format off
asm void func_02021fe4(void) {
    ldr r0, =data_0214b484
    mov r2, #0x0
    ldr r0, [r0, #0x0]
    add r1, r0, #0x5
    swpb r0, r2, [r1]
    bx lr
}
// clang-format on

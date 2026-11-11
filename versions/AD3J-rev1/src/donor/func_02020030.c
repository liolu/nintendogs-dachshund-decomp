/* compiler: 2.0/sp1p5  */
/* func_02020030 from projets/nintendogs-chihuahua-friends/src/auto/func_02020030.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02023610();
extern void func_020254f0();
extern void func_02026bcc();
extern void func_02034c88();
// clang-format off
asm void func_02020030(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x11a
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    bl func_02034c88
    add r1, r4, #0x100
    strh r0, [r1, #0x56]
    mov r0, r4
    add r2, r4, #0xb0
    mov r1, #0x7
    swpb r1, r1, [r2]
    bl func_02026bcc
    mov r0, r4
    bl func_020254f0
    mov r0, r4
    mov r1, #0x33
    mov r2, #0x1
    bl func_02023610
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

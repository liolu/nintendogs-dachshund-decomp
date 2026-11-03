/* compiler: 2.0/sp1p5  */
/* func_0201fa9c from projets/nintendogs-chihuahua-friends/src/auto/func_0201fa9c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02023610();
extern void func_020254f0();
extern void func_02026bcc();
// clang-format off
asm void func_0201fa9c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x193
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    add r2, r4, #0xb0
    mov r1, #0x2
    swpb r1, r1, [r2]
    bl func_02026bcc
    mov r0, r4
    bl func_020254f0
    mov r0, r4
    mov r1, #0x2f
    mov r2, #0x1
    bl func_02023610
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

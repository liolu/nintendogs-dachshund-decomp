/* compiler: 2.0/sp1p5  */
/* func_0201e23c from projets/nintendogs-chihuahua-friends/src/auto/func_0201e23c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02025c04();
extern void func_020266a0();
// clang-format off
asm void func_0201e23c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x16d
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    add r2, r4, #0xb0
    mov r1, #0x4
    swpb r1, r1, [r2]
    bl func_020266a0
    mov r0, r4
    bl func_02025c04
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

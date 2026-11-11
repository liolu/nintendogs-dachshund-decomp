/* compiler: 2.0/sp1p5  */
/* func_0205827c from projets/nintendogs-chihuahua-friends/src/auto/func_0205827c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02025b58();
extern void func_02025ddc();
// clang-format off
asm void func_02059a10(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x166
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0x2
    swpb r1, r1, [r2]
    bl func_02025ddc
    mov r0, r4
    bl func_02025b58
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

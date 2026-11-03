/* compiler: 2.0/sp1p5  */
/* func_0201e34c from projets/nintendogs-chihuahua-friends/src/auto/func_0201e34c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02025c04();
extern void func_02025ddc();
// clang-format off
asm void func_0201e34c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x167
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_02025ddc
    mov r0, r4
    bl func_02025c04
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

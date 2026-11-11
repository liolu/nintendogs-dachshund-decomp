/* func_ov004_0216160c from projets/nintendogs-chihuahua-friends/src/auto/func_ov004_0216160c.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
extern void func_0202554c();
extern void func_0202649c();
// clang-format off
asm void func_ov004_0216160c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x1b3
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_0202649c
    mov r0, r4
    bl func_0202554c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

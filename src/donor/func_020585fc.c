/* compiler: 2.0/sp1p5  */
/* func_020585fc from projets/nintendogs-chihuahua-friends/src/auto/func_020585fc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02025648();
extern void func_02026b54();
// clang-format off
asm void func_020585fc(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x102
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0xa
    swpb r1, r1, [r2]
    add r2, r4, #0xb0
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026b54
    mov r0, r4
    bl func_02025648
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

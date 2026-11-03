/* func_020200d4 from projets/nintendogs-chihuahua-friends/src/auto/func_020200d4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_020254f0();
extern void func_02026bcc();
// clang-format off
asm void func_020200d4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x15b
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_02026bcc
    mov r0, r4
    bl func_020254f0
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

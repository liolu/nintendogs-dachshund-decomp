/* func_ov002_021630f4 from projets/nintendogs-chihuahua-friends/src/auto/func_ov002_021630f4.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
extern void func_020254f0();
extern void func_02026b54();
extern void func_02020788();
// clang-format off
asm void func_ov002_021630f4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x15d
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_02026b54
    mov r0, r4
    bl func_020254f0
    mov r0, r4
    bl func_02020788
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

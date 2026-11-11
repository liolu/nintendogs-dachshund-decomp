/* func_ov002_0216b0b0 from projets/nintendogs-chihuahua-friends/src/auto/func_ov002_0216b0b0.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
extern void func_02025b58();
extern void func_02026ab0();
// clang-format off
asm void func_ov002_0216b0b0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x14f
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0xa
    swpb r1, r1, [r2]
    bl func_02026ab0
    mov r0, r4
    bl func_02025b58
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

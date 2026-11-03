/* compiler: 2.0/sp1p5  */
/* func_0201e6a8 from projets/nintendogs-chihuahua-friends/src/auto/func_0201e6a8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02025a2c();
extern void func_02026bcc();
extern void func_02034c88();
// clang-format off
asm void func_0201e6a8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x161
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    bl func_02034c88
    add r1, r4, #0x100
    strh r0, [r1, #0x56]
    add r1, r4, #0xac
    mov r0, #0x5
    swpb r0, r0, [r1]
    mov r0, r4
    add r2, r4, #0xb0
    mov r1, #0x2
    swpb r1, r1, [r2]
    bl func_02026bcc
    mov r0, r4
    bl func_02025a2c
    mov r0, #0x1
    str r0, [r4, #0x488]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

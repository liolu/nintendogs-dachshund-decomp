/* compiler: 2.0/sp1p5  */
/* func_020055c8 from projets/nintendogs-chihuahua-friends/src/auto/func_020055c8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02003844();
extern void func_0200562c();
// clang-format off
asm void func_020055c8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r1
    mov r1, #0xe0
    mov r6, r0
    bl func_02003844
    mov r4, r0
    mov r1, r5
    bl func_0200562c
    ldrh r0, [r4, #0xa]
    cmp r0, #0x1
    bne L_02005620
    mov r0, r6
    mov r1, #0x8
    bl func_02003844
    mov r1, #0x5000
    strh r1, [r0, #0x0]
    add r2, r0, #0x2
    mov r3, #0x1
    swpb r1, r3, [r2]
    add r2, r0, #0x3
    swpb r1, r3, [r2]
    str r0, [r4, #0x74]
L_02005620:
    mov r0, r4
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on

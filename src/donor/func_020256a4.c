/* compiler: 2.0/sp1p5  */
/* func_020256a4 from projets/nintendogs-chihuahua-friends/src/auto/func_020256a4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_020256a4(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r2, [r0, #0x9e4]
    ldr r1, =0xe6a
    ldr r3, [r2, #0x8]
    mov r2, #0x0
    umull lr, ip, r3, r1
    mla ip, r3, r2, ip
    mov r3, r3, asr #0x1f
    mov r2, #0x800
    adds r2, lr, r2
    mla ip, r3, r1, ip
    adc r1, ip, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [r0, #0x938]
    add r1, r0, #0xbc
    mov r0, #0x5
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on

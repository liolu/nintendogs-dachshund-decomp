/* compiler: 2.0/sp1p5  */
/* func_02009a80 from projets/nintendogs-chihuahua-friends/src/auto/func_02009a80.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_02009a80(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r6, r0
    mov r7, #0x0
    mov r5, r7
    mvn r4, #0x0
    mov ip, #0x1
    ldr r10, =0x849
    ldr r1, =0x842
    ldr r2, =0x857
L_02009aa4:
    add r8, r0, r7, lsl #0x2
    add lr, r0, r7
    add r3, r0, r7, lsl #0x1
    str r5, [r8, #0x914]
    add r3, r3, #0x800
    strh r4, [r3, #0x34]
    add r9, lr, #0x850
    swpb r8, r4, [r9]
    add r9, lr, r10
    swpb r8, r4, [r9]
    add r9, lr, r1
    swpb r8, r4, [r9]
    add r9, lr, r2
    swpb r8, ip, [r9]
    add r7, r7, #0x1
    strh r5, [r3, #0x5e]
    str r5, [r6, #0x86c]
    str r5, [r6, #0x870]
    str r5, [r6, #0x874]
    str r5, [r6, #0x8c0]
    mov r3, r7, lsl #0x10
    str r5, [r6, #0x8c4]
    mov r7, r3, asr #0x10
    str r5, [r6, #0x8c8]
    cmp r7, #0x7
    add r6, r6, #0xc
    blt L_02009aa4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on

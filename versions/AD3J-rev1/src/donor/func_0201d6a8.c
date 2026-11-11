/* compiler: 2.0/sp1p5  */
/* func_0201d6a8 from projets/nintendogs-chihuahua-friends/src/auto/func_0201d6a8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02025b58();
extern void func_020266a0();
extern void func_02029204();
extern char data_0214b484[];
// clang-format off
asm void func_0201d6a8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x4
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x11
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0x5
    swpb r1, r1, [r2]
    add r2, r4, #0xb1
    mov r1, #0x9
    swpb r1, r1, [r2]
    bl func_020266a0
    mov r0, r4
    bl func_02025b58
    ldr r7, =data_0214b484
    ldr ip, =0x10dcd
    ldr r2, [r7, #0x0]
    ldr lr, =0xfff
    ldr r0, [r2, #0x0]
    mov r1, #0x0
    mul r3, r0, ip
    add r0, r3, #0x1
    and r3, r0, lr
    mov r3, r3, lsl #0x10
    mov r3, r3, lsr #0x10
    mov r3, r3, lsl #0x10
    mov r3, r3, asr #0x10
    mov r5, #0x14000
    umull r9, r8, r3, r5
    mov r6, #0x800
    str r0, [r2, #0x0]
    adds r2, r9, r6
    mla r8, r3, r1, r8
    mov r0, r3, asr #0x1f
    mla r8, r0, r5, r8
    adc r0, r8, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    sub r0, r2, #0xa000
    str r0, [r4, #0x26c]
    ldr r3, [r7, #0x0]
    mov r0, r4
    ldr r2, [r3, #0x0]
    mul r7, r2, ip
    add r2, r7, #0x1
    and r7, r2, lr
    mov ip, r7, lsl #0x10
    mov r7, ip, lsr #0x10
    mov ip, r7, lsl #0x10
    mov r7, ip, asr #0x10
    umull lr, ip, r7, r5
    str r2, [r3, #0x0]
    adds r2, lr, r6
    mla ip, r7, r1, ip
    mov r1, r7, asr #0x1f
    mla ip, r1, r5, ip
    adc r1, ip, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    sub r1, r2, #0xa000
    str r1, [r4, #0x274]
    bl func_02029204
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on

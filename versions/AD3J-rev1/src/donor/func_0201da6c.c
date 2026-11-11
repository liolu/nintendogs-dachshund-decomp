/* compiler: 2.0/sp1p5  */
/* func_0201da6c from projets/nintendogs-chihuahua-friends/src/auto/func_0201da6c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_01ff8930();
extern void func_02022da8();
extern void func_02023610();
extern void func_02025b58();
extern void func_02026b78();
extern void func_020280f8();
extern void func_0202bd84();
// clang-format off
asm void func_0201da6c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    ldr r2, =0x177
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    add r2, r4, #0xb0
    mov r1, #0x4
    swpb r1, r1, [r2]
    bl func_02026b78
    mov r0, r4
    bl func_02025b58
    mov r0, r4
    bl func_020280f8
    bl func_01ff8930
    mvn r1, #0xbf
    mvn r2, #0x0
    umull r5, lr, r0, r1
    mov r3, #0x800
    mla lr, r0, r2, lr
    mov ip, r0, asr #0x1f
    mla lr, ip, r1, lr
    adds r3, r5, r3
    adc r0, lr, #0x0
    mov r1, r3, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    mov r0, r4
    str r1, [r4, #0x25c]
    bl func_0202bd84
    mov r0, r4
    mov r1, #0x26
    mov r2, #0x2
    bl func_02023610
    ldrb r0, [r4, #0xc5]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldrsh r1, [r4, #0xf2]
    ldrb r2, [r4, #0xc7]
    mov r0, r4
    bl func_02022da8
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r1, [r4, #0x18c]
    ldr r0, =0x668
    mov r1, r1, asr #0x3
    rsb r1, r1, #0x0
    str r1, [r4, #0x260]
    str r0, [r4, #0x264]
    ldr r0, [r4, #0x194]
    mov r0, r0, asr #0x3
    rsb r0, r0, #0x0
    str r0, [r4, #0x268]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on

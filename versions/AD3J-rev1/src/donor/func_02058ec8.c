/* compiler: 2.0/sp1p5  */
/* func_02058ec8 from projets/nintendogs-chihuahua-friends/src/auto/func_02058ec8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02025648();
extern void func_02026420();
extern char data_0214b484[];
// clang-format off
asm void func_02058ec8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0xef
    strh r2, [r1, #0x50]
    add r2, r4, #0xb0
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026420
    mov r0, r4
    bl func_02025648
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1f
    mov r0, r0, lsl #0x10
    str r1, [r2, #0x0]
    mov r0, r0, lsr #0x10
    str r0, [r4, #0x488]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

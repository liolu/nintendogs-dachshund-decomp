/* compiler: 2.0/sp1p5  */
/* func_020bf9a8 from projets/nintendogs-dachshund/src/auto/func_020bf9a8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern void func_02065748();
extern char data_02156120[];
extern char data_02156180[];
// clang-format off
asm void func_0211f2f0(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    ldr r1, =data_02156120
    ldr r2, =data_02156180
    strh r0, [r1, #0x4]
    str r2, [r1, #0x0]
    bl func_02065748
    ldr r6, =data_02156120
    mov r7, #0xff
    add r2, r6, #0x8
    add r3, r6, #0x9
    add ip, r6, #0xa
    add lr, r6, #0xb
    add r4, r6, #0xc
    add r5, r6, #0xd
    swpb r1, r7, [r2]
    swpb r1, r7, [r3]
    swpb r1, r7, [ip]
    swpb r1, r7, [lr]
    swpb r1, r7, [r4]
    swpb r1, r7, [r5]
    strh r0, [r6, #0x6]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on

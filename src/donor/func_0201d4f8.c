/* compiler: 2.0/sp1p5  */
/* func_0201d4f8 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_0201d4f8.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
extern void func_0202554c();
extern void func_02026a54();
extern void func_02092c68();
extern char data_0214b480[];
// clang-format off
asm void func_0201d4f8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x13
    strh r2, [r1, #0x50]
    mov r3, #0x1
    strh r3, [r1, #0x54]
    add r2, r4, #0xac
    mov r1, #0x5
    swpb r1, r1, [r2]
    add r2, r4, #0xb1
    swpb r1, r3, [r2]
    bl func_02026a54
    mov r0, r4
    bl func_0202554c
    ldr r1, [r4, #0x188]
    ldr r0, =data_0214b480
    orr r1, r1, #0x1
    str r1, [r4, #0x188]
    ldrsb r1, [r4, #0x88]
    ldr r0, [r0, #0x0]
    bl func_02092c68
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

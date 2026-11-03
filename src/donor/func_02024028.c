/* compiler: 2.0/sp1p5  */
/* func_02024028 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_02024028.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
extern void func_020cae0c();
// clang-format off
asm void func_02024028(void) {
    stmfd sp!, {r4, lr}
    add r2, r0, #0x8b
    mov r0, #0x1
    swpb r0, r0, [r2]
    mov r4, r1
    mov r2, #0x0
    strh r2, [r4, #0x2]
    strh r2, [r4, #0x0]
    mov r3, r2
L_0202404c:
    add r1, r4, r2
    add r0, r2, #0x1
    add r1, r1, #0x28
    and r2, r0, #0xff
    cmp r2, #0x14
    swpb r0, r3, [r1]
    blo L_0202404c
    mov r2, #0x0
L_0202406c:
    add r0, r3, #0x1
    add r1, r4, r3, lsl #0x1
    and r3, r0, #0xff
    strh r2, [r1, #0x12]
    cmp r3, #0xb
    blo L_0202406c
    add r0, r4, #0x8
    bl func_020cae0c
    mov r0, #0x0
    strh r0, [r4, #0x4]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

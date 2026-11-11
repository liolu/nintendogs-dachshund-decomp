/* compiler: 2.0/sp1p5  */
/* func_020393d0 from projets/nintendogs-chihuahua-friends/src/auto/func_020393d0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_020394d8();
extern char data_021384d8[];
// clang-format off
asm void func_020393d0(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0xc
    add r3, r0, #0xb0
    mov r1, #0x2
    swpb r2, r1, [r3]
    mov r2, #0x4
    str r2, [sp, #0x0]
    ldrsb ip, [r0, #0xa6]
    ldr r3, =data_021384d8
    mov r2, #0x3
    mov ip, ip, lsl #0x1
    ldrh ip, [r3, ip]
    mov r3, #0x8
    str ip, [sp, #0x4]
    bl func_020394d8
    add sp, sp, #0xc
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on

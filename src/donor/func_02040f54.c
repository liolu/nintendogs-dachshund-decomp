/* compiler: 2.0/sp1p5  */
/* func_02040f54 from projets/nintendogs-chihuahua-friends/src/auto/func_02040f54.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_02040f54(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    add r2, r0, #0x8b
    mov lr, #0x1
    swpb r1, lr, [r2]
    ldr ip, =0x2710
    ldr r1, [r0, #0x9e4]
    mov r3, #0x0
    strh ip, [r1, #0x18]
    swpb r1, lr, [r2]
    ldr r1, [r0, #0x9e4]
    strh r3, [r1, #0x1c]
    swpb r1, lr, [r2]
    ldr r1, [r0, #0x9e4]
    strh ip, [r1, #0x1a]
    swpb r1, lr, [r2]
    ldr r1, [r0, #0x9e4]
    strh r3, [r1, #0x22]
    swpb r1, lr, [r2]
    ldr r0, [r0, #0x9e4]
    strh r3, [r0, #0x24]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on

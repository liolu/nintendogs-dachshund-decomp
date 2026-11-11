/* compiler: 2.0/sp1p5  */
/* func_020422e4 from projets/nintendogs-chihuahua-friends/src/auto/func_020422e4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern char data_0214b484[];
// clang-format off
asm void func_020422e4(void) {
    ldr r1, =data_0214b484
    mvn r0, #0x0
    ldr r2, [r1, #0x0]
    ldrsb r1, [r2, #0xe]
    cmp r1, r0
    bxeq lr
    cmp r1, #0x0
    blt L_0204230c
    cmp r1, #0x3
    blt L_02042314
L_0204230c:
    mov r2, #0x0
    b L_0204231c
L_02042314:
    add r0, r2, r1, lsl #0x2
    ldr r2, [r0, #0x50]
L_0204231c:
    cmp r2, #0x0
    bxeq lr
    add r1, r2, #0xbe
    mov ip, #0x0
    swpb r0, ip, [r1]
    add r0, r2, #0x100
    strh ip, [r0, #0x20]
    mov r0, #0x59
    strh r0, [r2, #0xf0]
    add r1, r2, #0xc4
    mov r0, #0x3
    swpb r0, r0, [r1]
    ldr r2, =data_0214b484
    mvn r3, #0x0
    ldr r0, [r2, #0x0]
    add r1, r0, #0xe
    swpb r0, r3, [r1]
    ldr r0, [r2, #0x0]
    str ip, [r0, #0x40]
    bx lr
}
// clang-format on

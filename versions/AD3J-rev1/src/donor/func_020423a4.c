/* compiler: 2.0/sp1p5  */
/* func_020423a4 from projets/nintendogs-chihuahua-friends/src/auto/func_020423a4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern char data_0214b484[];
// clang-format off
asm void func_020423a4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r1, =data_0214b484
    mvn r0, #0x0
    ldr r1, [r1, #0x0]
    mov r3, #0x0
    ldrsb r2, [r1, #0xe]
    cmp r2, r0
    beq L_020423d4
    ldr r0, [r1, #0x40]
    cmp r0, #0x1
    moveq r3, #0x1
L_020423d4:
    cmp r3, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    cmp r2, #0x0
    blt L_020423f4
    cmp r2, #0x3
    blt L_020423fc
L_020423f4:
    mov r1, #0x0
    b L_02042404
L_020423fc:
    add r0, r1, r2, lsl #0x2
    ldr r1, [r0, #0x50]
L_02042404:
    cmp r1, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    add r3, r1, #0x8b
    mov r5, #0x1
    swpb r0, r5, [r3]
    ldr r4, =0x1388
    ldr r2, [r1, #0x9e4]
    mov r0, #0x0
    strh r4, [r2, #0x18]
    swpb r2, r5, [r3]
    add ip, r1, #0xbe
    ldr r2, [r1, #0x9e4]
    add lr, r1, #0x100
    strh r0, [r2, #0x1a]
    swpb r2, r5, [r3]
    mov r4, #0x59
    ldr r2, [r1, #0x9e4]
    add r3, r1, #0xc4
    strh r0, [r2, #0x22]
    swpb r2, r0, [ip]
    mov r2, #0x2
    strh r0, [lr, #0x20]
    strh r4, [r1, #0xf0]
    swpb r1, r2, [r3]
    ldr r1, =data_0214b484
    ldr r1, [r1, #0x0]
    str r0, [r1, #0x40]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on

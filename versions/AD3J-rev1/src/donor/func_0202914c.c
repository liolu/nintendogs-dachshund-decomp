/* compiler: 2.0/sp1p5  */
/* func_0202914c from projets/nintendogs-chihuahua-friends/src/auto/func_0202914c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02029234();
// clang-format off
asm void func_0202914c(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    movs r4, r3
    mov r7, r0
    mov r6, r1
    mov r5, r2
    addmi sp, sp, #0x4
    ldmmifd sp!, {r4, r5, r6, r7, lr}
    bxmi lr
    bl func_02029234
    cmp r0, #0x0
    rsbeq r0, r6, #0x0
    moveq r0, r0, lsl #0x18
    moveq r6, r0, asr #0x18
    ldrsh r0, [r7, #0xf0]
    cmp r0, #0x0
    ble L_020291b8
    cmp r0, #0x6f
    bge L_020291b8
    cmp r6, #0x0
    addle sp, sp, #0x4
    ldmlefd sp!, {r4, r5, r6, r7, lr}
    bxle lr
    cmp r6, r0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
L_020291b8:
    add r2, r7, #0xbe
    mov lr, #0x0
    swpb r0, lr, [r2]
    add ip, r7, #0x100
    strh lr, [ip, #0x20]
    mov r0, #0x6f
    strh r0, [r7, #0xf0]
    add r3, r7, #0xc4
    swpb r0, lr, [r3]
    add r1, r7, #0xc5
    swpb r0, lr, [r1]
    mov r0, #0x1
    swpb r0, r0, [r2]
    strh r6, [r7, #0xf0]
    swpb r0, r5, [r3]
    strh r4, [ip, #0x20]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on

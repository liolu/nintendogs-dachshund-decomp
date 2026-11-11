/* compiler: 2.0/sp1p5  */
/* func_020afda8 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020afda8.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
extern void func_020ab128();
extern void func_020ae8d8();
extern void func_020aec94();
extern void func_020aeda8();
extern char data_02153740[];
// clang-format off
asm void func_020afda8(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r2, =data_02153740
    ldr ip, [r2, #0x0]
    add r1, ip, #0xc4
    ldr r0, [r1, #0x240]
    add lr, r1, #0x254
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    ldrb r3, [lr, #0xc]
    ldr r0, =0xdd4
    add r1, ip, #0xf000
    ldr ip, [lr, #0x10]
    add r1, r1, r0
    swpb r0, r3, [r1]
    ldr r0, [r2, #0x0]
    add r0, r0, #0xf000
    str ip, [r0, #0xdd8]
    ldr r0, [lr, #0x8]
    cmp r0, #0x0
    beq L_020afe20
    cmp r0, #0x1
    beq L_020afe44
    cmp r0, #0x2
    beq L_020afe6c
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_020afe20:
    mov r0, #0x1b
    bl func_020ae8d8
    ldr r0, =data_02153740
    mov r1, #0xa
    ldr r0, [r0, #0x0]
    add sp, sp, #0x4
    str r1, [r0, #0x98c]
    ldmfd sp!, {lr}
    bx lr
L_020afe44:
    mov r0, #0x1f
    bl func_020ae8d8
    ldr r0, =data_02153740
    mov r1, #0xf
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x98c]
    bl func_020ab128
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_020afe6c:
    mov r0, #0x25
    bl func_020ae8d8
    ldr r0, =data_02153740
    mov r1, #0x14
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x98c]
    bl func_020aeda8
    cmp r0, #0x4
    bhs L_020afea4
    mov r0, #0x2
    bl func_020aec94
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_020afea4:
    mov r0, #0x3
    bl func_020aec94
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on

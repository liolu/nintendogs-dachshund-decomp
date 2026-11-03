/* compiler: 2.0/sp1p5  */
/* func_0208f1e8 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_0208f1e8.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
extern void func_020038a4();
extern void func_02078794();
extern void func_020c3bc8();
extern void func_020c3dcc();
extern void func_020c4ea0();
extern void func_020c4eec();
extern void func_020c5198();
extern void func_020c51c0();
extern void func_020c5310();
extern void func_020c53b0();
extern void func_020c5464();
extern void func_020d6f54();
extern char data_0213bacc[];
extern char data_02153704[];
extern char func_0208f828[];
// clang-format off
asm void func_0208f1e8(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x14
    ldr r2, =data_02153704
    mov r7, r0
    ldr r2, [r2, #0x0]
    mov r6, r1
    ldr r2, [r2, #0x18]
    cmp r2, #0x0
    beq L_0208f370
    mov r1, #0x90
    bl func_020c5464
    mov r5, r0
    add r0, sp, #0x0
    mov r1, r7
    mov r2, #0x4
    bl func_020038a4
    mov r0, #0x1
    str r0, [r5, #0x88]
    ldr r1, [r5, #0x1c]
    add r0, sp, #0x0
    ldr r1, [r1, #0x8]
    bl func_02078794
    str r0, [r5, #0x8c]
    ldr r2, [r5, #0x8c]
    ldr r1, [r5, #0x1c]
    ldr r0, =data_02153704
    str r2, [r1, #0x3c]
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x20]
    cmp r0, #0x0
    beq L_0208f2a0
    mov r0, r5
    mov r1, r7
    mov r2, #0x1
    bl func_020c53b0
    ldr r1, =data_02153704
    mov r0, r5
    ldr r1, [r1, #0x0]
    ldr r1, [r1, #0x20]
    bl func_020c51c0
    ldr r2, [r5, #0x74]
    mov r0, #0x1
    add r1, r2, #0x14
    swpb r0, r0, [r1]
    mov r0, #0x0
    str r0, [r2, #0x1c]
L_0208f2a0:
    ldr r0, =data_02153704
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x24]
    cmp r0, #0x0
    beq L_0208f2fc
    mov r0, r5
    mov r1, r7
    mov r2, #0x1
    bl func_020c5310
    ldr r0, =data_02153704
    ldr r4, [r5, #0x80]
    ldr r1, [r0, #0x0]
    mov r0, r4
    ldr r1, [r1, #0x24]
    bl func_020c3dcc
    mov r0, #0x1
    swpb r0, r0, [r4]
    bl func_020d6f54
    cmp r0, #0x3
    moveq r0, #0x1000
    streq r0, [r4, #0xc]
    mov r0, #0x0
    str r0, [r4, #0x8]
L_0208f2fc:
    ldr r1, =func_0208f828
    mov r0, r5
    bl func_020c4ea0
    ldr r3, =data_02153704
    ldr r2, =data_0213bacc
    ldr r1, [r3, #0x0]
    mov r0, r6
    ldr r4, [r1, #0x8]
    mov r1, r5
    str r4, [r5, #0x24]
    str r4, [r5, #0x28]
    str r4, [r5, #0x2c]
    ldr r2, [r2, #0x0]
    rsb r2, r2, #0x0
    str r2, [r5, #0x34]
    ldr r2, [r3, #0x0]
    ldr r3, [r5, #0x38]
    ldr r2, [r2, #0x10]
    add r2, r3, r2
    str r2, [r5, #0x38]
    bl func_020c4eec
    mov r0, #0x3
    bl func_020c3bc8
    mov r1, r0
    mov r0, r5
    bl func_020c5198
    ldr r0, =data_02153704
    ldr r0, [r0, #0x0]
    str r5, [r0, #0x0]
L_0208f370:
    ldr r0, =data_02153704
    ldr r0, [r0, #0x0]
    ldr r2, [r0, #0x1c]
    cmp r2, #0x0
    addeq sp, sp, #0x14
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    mov r0, r7
    mov r1, #0x88
    bl func_020c5464
    mov r1, r0
    mov r0, r6
    bl func_020c4eec
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on

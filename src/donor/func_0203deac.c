/* compiler: 2.0/sp1p5  */
/* func_0203deac from projets/nintendogs-miniature-dachshund-friends/src/auto/func_0203deac.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
extern void func_01ff8058();
extern void func_01ff810c();
extern void func_01ffee18();
extern void func_020271b0();
extern void func_02069668();
extern void func_020c1970();
extern void func_020c3ff4();
extern char data_021383e4[];
extern char data_021385c0[];
extern char data_0213933c[];
extern char data_02139348[];
extern char data_0214b484[];
// clang-format off
asm void func_0203deac(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x18
    mov r6, r0
    ldrsh r1, [r6, #0x88]
    cmp r1, #0x0
    blt L_0203decc
    cmp r1, #0x3
    blt L_0203ded4
L_0203decc:
    mov r4, #0x0
    b L_0203dee4
L_0203ded4:
    ldr r0, =data_0214b484
    ldr r0, [r0, #0x0]
    add r0, r0, r1, lsl #0x2
    ldr r4, [r0, #0x50]
L_0203dee4:
    cmp r4, #0x0
    beq L_0203e04c
    ldrsh r5, [r6, #0x8a]
    ldrsb r0, [r4, #0xb6]
    strh r0, [r6, #0x8a]
    ldrsh r0, [r6, #0x8a]
    cmp r0, #0x0
    beq L_0203e02c
    ldrh r2, [r6, #0x20]
    ldr r1, =data_0213933c
    mov r0, #0x64
    bic r2, r2, #0x1
    strh r2, [r6, #0x20]
    ldr r2, [r4, #0x9e4]
    add r3, r6, #0x24
    ldrh r2, [r2, #0x0]
    mla r0, r2, r0, r1
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    add r1, r6, #0x3c
    mov r2, #0x11
    bl func_020271b0
    add r0, r6, #0x3c
    mov r2, r0
    add r1, r4, #0x1e0
    bl func_01ff810c
    ldrsh r2, [r6, #0x88]
    add r3, r6, #0x8c
    mov r0, #0x30
    add r1, r6, #0x3c
    smlabb r0, r2, r0, r3
    mov r2, r1
    bl func_01ff810c
    ldr r1, [r4, #0x9e4]
    mov r0, #0x64
    ldrh r2, [r1, #0x0]
    ldr r1, =data_02139348
    add r3, sp, #0xc
    mla r0, r2, r0, r1
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    add r1, r6, #0x3c
    add r2, r6, #0x30
    bl func_01ff8058
    mov r1, #0x0
    str r1, [r6, #0x60]
    str r1, [r6, #0x64]
    add r0, r4, #0x940
    str r1, [r6, #0x68]
    add r3, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r0, r6, #0x30
    mov r1, r3
    mov r2, r0
    bl func_02069668
    ldrsh r1, [r6, #0x8a]
    cmp r1, r5
    beq L_0203e068
    ldr r0, =data_021385c0
    ldr r4, [r6, #0x74]
    ldr r0, [r0, r1, lsl #0x2]
    bl func_020c1970
    mov r1, r0
    mov r0, r4
    bl func_020c3ff4
    mov r3, #0x0
    str r3, [r4, #0x20]
    ldrsh r2, [r6, #0x8a]
    ldr r0, =data_021383e4
    add r1, r4, #0x14
    mov r2, r2, lsl #0x1
    ldrsh r0, [r0, r2]
    mov r2, #0x5
    mov r0, r0, lsl #0xc
    str r0, [r4, #0x1c]
    swpb r0, r3, [r1]
    strh r3, [r4, #0x4]
    strh r2, [r4, #0x6]
    b L_0203e068
L_0203e02c:
    mvn r0, #0x0
    strh r0, [r6, #0x88]
    mov r0, #0x0
    strh r0, [r6, #0x8a]
    ldrh r0, [r6, #0x20]
    orr r0, r0, #0x1
    strh r0, [r6, #0x20]
    b L_0203e068
L_0203e04c:
    mvn r0, #0x0
    strh r0, [r6, #0x88]
    mov r0, #0x0
    strh r0, [r6, #0x8a]
    ldrh r0, [r6, #0x20]
    orr r0, r0, #0x1
    strh r0, [r6, #0x20]
L_0203e068:
    mov r0, r6
    bl func_01ffee18
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on

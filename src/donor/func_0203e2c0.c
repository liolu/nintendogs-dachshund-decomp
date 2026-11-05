/* compiler: 2.0/sp1p5  */
/* func_0203e2c0 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_0203e2c0.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
extern void func_020c24c4();
extern void func_020da20c();
extern void func_020da4b4();
extern void func_020ea724();
extern void func_020f55e8();
extern char data_0214b484[];
// clang-format off
asm void func_0203e2c0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x4
    mov r9, r0
    ldr r4, =data_0214b484
    ldrsb r0, [r9, #0x88]
    ldr r1, [r4, #0x0]
    mov r8, #0x0
    add r0, r1, r0, lsl #0x2
    ldr r7, [r0, #0x44]
    mov r5, r8
L_0203e2e8:
    add r6, r9, r8
    ldrsb r0, [r6, #0xcf]
    cmp r0, #0x0
    beq L_0203e30c
    mov r0, r7
    mov r1, r8
    bl func_020c24c4
    add r1, r6, #0xcf
    swpb r0, r5, [r1]
L_0203e30c:
    ldrsb r0, [r6, #0xd7]
    cmp r0, #0x1
    bne L_0203e334
    ldr r0, [r4, #0x0]
    ldrsb r2, [r9, #0x88]
    add r1, r0, #0x11
    swpb r0, r2, [r1]
    ldr r0, [r4, #0x0]
    add r1, r0, #0x12
    swpb r0, r8, [r1]
L_0203e334:
    add r0, r8, #0x1
    mov r0, r0, lsl #0x18
    mov r8, r0, asr #0x18
    cmp r8, #0x4
    blt L_0203e2e8
    bl func_020da4b4
    cmp r0, #0x0
    beq L_0203e35c
    ldrsb r0, [r9, #0x88]
    bl func_020da20c
L_0203e35c:
    ldrsb r0, [r9, #0x88]
    mov r1, #0x0
    bl func_020f55e8
    ldr r0, =0x958
    add r0, r9, r0
    bl func_020ea724
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on

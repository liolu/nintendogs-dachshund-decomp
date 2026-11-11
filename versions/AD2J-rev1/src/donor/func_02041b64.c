/* compiler: 2.0/sp1p5  */
/* func_02041b64 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_02041b64.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
extern void func_0203e388();
extern void func_0203e530();
extern void func_020c9f64();
extern void func_020ca0cc();
extern void func_020cabfc();
extern char data_0214b484[];
// clang-format off
asm void func_02041b64(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    movs r10, r0
    bmi L_02041b7c
    cmp r10, #0x3
    blt L_02041b84
L_02041b7c:
    mov r8, #0x0
    b L_02041b94
L_02041b84:
    ldr r0, =data_0214b484
    ldr r0, [r0, #0x0]
    add r0, r0, r10, lsl #0x2
    ldr r8, [r0, #0x50]
L_02041b94:
    ldr r0, =data_0214b484
    ldr r0, [r0, #0x0]
    add r0, r0, r10
    ldrsb r0, [r0, #0x19]
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxne lr
    cmp r8, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r8
    bl func_0203e530
    mov r0, r8
    bl func_0203e388
    ldrb r0, [r8, #0x8b]
    cmp r0, #0x0
    beq L_02041c08
    ldr r1, =data_0214b484
    ldr r0, =0x85c
    ldr r2, [r1, #0x0]
    mov r1, r10
    add r2, r2, #0x1a0
    mla r0, r10, r0, r2
    bl func_020cabfc
    add r1, r8, #0x8b
    mov r0, #0x0
    swpb r0, r0, [r1]
L_02041c08:
    ldr r0, =0x18b0
    mov r1, #0x500
    mul r5, r10, r0
    mov r9, #0x0
    mul r11, r10, r1
    mov r7, r9
    mov r6, r9
    str r9, [sp, #0x0]
L_02041c28:
    add r4, r8, r9
    ldrb r0, [r4, #0x8c]
    cmp r0, #0x0
    beq L_02041c8c
    ldr r0, =data_0214b484
    mov r1, r10
    ldr r2, [r0, #0x0]
    ldr r0, =0x1ab4
    add r0, r2, r0
    add r0, r0, r5
    add r0, r0, r7
    mov r2, r9
    bl func_020ca0cc
    ldr r0, =data_0214b484
    mov r1, r10
    ldr r2, [r0, #0x0]
    ldr r0, =0x64c4
    add r0, r2, r0
    add r0, r0, r11
    add r0, r0, r6
    mov r2, r9
    bl func_020c9f64
    ldr r0, [sp, #0x0]
    add r1, r4, #0x8c
    swpb r0, r0, [r1]
L_02041c8c:
    add r0, r9, #0x1
    mov r0, r0, lsl #0x10
    mov r9, r0, asr #0x10
    cmp r9, #0x14
    add r7, r7, #0x13c
    add r6, r6, #0x40
    blt L_02041c28
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

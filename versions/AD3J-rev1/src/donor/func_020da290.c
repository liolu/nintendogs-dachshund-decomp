/* compiler: 2.0/sp1p5  */
/* func_020fe2a0 from projets/nintendogs-dachshund/src/auto/func_020fe2a0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern void func_01ffda04();
extern void func_020280e0();
extern void func_020d95ac();
extern char data_0212db78[];
extern char data_02154ca4[];
// clang-format off
asm void func_020da290(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r4, r0
    mov r5, r1
    bl func_01ffda04
    cmp r0, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    add r2, sp, #0x2
    swpb r1, r4, [r2]
    strh r5, [sp, #0x0]
    bl func_020280e0
    ldr r2, =data_0212db78
    mov r1, #0x94
    ldr r3, [r2, r0, lsl #0x2]
    add r2, sp, #0x3
    str r1, [sp, #0x4]
    swpb r1, r3, [r2]
    add r0, sp, #0x0
    bl func_020d95ac
    cmp r0, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r0, =data_02154ca4
    mov r1, r4, lsl #0x1
    ldr r2, [r0, #0x0]
    mov r0, #0x1
    strh r0, [r2, r1]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on

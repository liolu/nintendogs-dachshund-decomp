/* compiler: 2.0/sp1p5  */
/* func_02096dd0 from projets/nintendogs-dachshund/src/auto/func_02096dd0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern void func_020f7d38();
extern char data_02155070[];
extern char data_0215507c[];
extern char data_0215508c[];
extern char data_021550a4[];
extern char data_021550ac[];
extern char data_021550b0[];
extern char data_021550e4[];
// clang-format off
asm void func_020f7564(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r0, =data_021550e4
    ldr ip, =data_0215508c
    ldr r5, [r0, #0x0]
    ldr r3, =data_021550ac
    mov r4, #0x1
    ldr r2, =data_021550b0
    mov lr, #0x0
    ldr r0, =data_0215507c
    ldr r1, =data_02155070
    str r5, [ip, #0x0]
    str r4, [r3, #0x0]
    str lr, [r2, #0x0]
    strh lr, [r0, #0x0]
    swpb r0, lr, [r1]
    bl func_020f7d38
    ldr r1, =data_021550e4
    ldr r0, =data_021550a4
    ldr r1, [r1, #0x0]
    str r1, [r0, #0x0]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on

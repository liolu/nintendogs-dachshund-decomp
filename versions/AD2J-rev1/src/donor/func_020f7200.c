/* compiler: 2.0/sp1p5  */
/* func_02096a6c from projets/nintendogs-dachshund/src/auto/func_02096a6c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern void func_020f7cdc();
extern char data_021473cc[];
extern char data_02155070[];
extern char data_02155088[];
extern char data_0215508c[];
extern char data_021550ac[];
extern char data_021550bc[];
extern char data_021550c0[];
extern char data_021550d4[];
extern char data_021550e4[];
// clang-format off
asm void func_020f7200(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r0, =data_021550c0
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02096ae0
    ldr r0, =data_021550bc
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02096ab0
    bl func_020f7cdc
    ldr r1, =data_021550ac
    mov r2, #0x0
    ldr r0, =data_021550bc
    str r2, [r1, #0x0]
    str r2, [r0, #0x0]
    b L_02096ae0
L_02096ab0:
    ldr r2, =data_021550e4
    ldr r1, =data_02155070
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldr ip, [r2, #0x0]
    ldr r2, =data_0215508c
    ldr r1, =data_02155088
    mov r3, #0x0
    ldr r0, =data_021550d4
    str ip, [r2, #0x0]
    strh r3, [r1, #0x0]
    str r3, [r0, #0x0]
L_02096ae0:
    ldr r0, =data_021473cc
    mvn r1, #0x6
    str r1, [r0, #0x0]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on

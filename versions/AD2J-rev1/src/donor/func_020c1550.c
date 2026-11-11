/* compiler: 2.0/sp1p5  */
/* func_020c6a7c from projets/nintendogs-dachshund/src/auto/func_020c6a7c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern void func_020037ec();
extern void func_02006b04();
extern void func_0205e950();
extern void func_0207e718();
extern void func_0207e76c();
extern void func_0207e79c();
extern void func_0208b5e8();
extern void func_0208b6fc();
extern void func_0208b744();
extern void func_0208ba94();
extern char data_0212cc18[];
extern char data_021413dc[];
extern char data_021413e0[];
extern char data_021413e4[];
extern char data_021413f8[];
extern char data_02141404[];
extern char data_02141414[];
// clang-format off
asm void func_020c1550(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x94
    mov r4, #0xc
    mul r5, r1, r4
    mov r7, r0
    mov r4, r2
    ldr r0, =data_0212cc18
    mov r6, r3
    ldr r3, [r0, r5]
    ldr r2, =data_021413e0
    add r0, sp, #0x4
    mov r1, #0x6
    ldr r5, =data_021413dc
    bl func_0205e950
    ldrb r1, [sp, #0x8]
    add r2, sp, #0x8
    add r0, sp, #0xa
    add r1, r1, r4
    swpb r1, r1, [r2]
    ldr r2, =data_021413e4
    add r3, sp, #0x4
    mov r1, #0x40
    bl func_0205e950
    mov r4, #0x0
    str r4, [r6, #0x0]
    str r4, [r6, #0x4]
    add r0, sp, #0x4c
    str r4, [r6, #0x8]
    bl func_0208ba94
    add r0, sp, #0x4c
    add r1, sp, #0xa
    bl func_0208b744
    cmp r0, #0x0
    beq L_020c6b6c
    ldr r2, [sp, #0x70]
    ldr r1, [sp, #0x6c]
    mov r0, r7
    sub r8, r2, r1
    add r1, r8, #0xf
    bic r1, r1, #0xf
    add r1, r1, #0x60
    mov r2, #0x10
    bl func_020037ec
    movs r7, r0
    beq L_020c6b64
    add r9, r7, #0x60
    add r0, sp, #0x4c
    mov r1, r9
    mov r2, r8
    bl func_0208b5e8
    cmp r8, r0
    bne L_020c6b64
    mov r0, r7
    mov r1, r5
    mov r2, r9
    bl func_0207e79c
    cmp r0, #0x0
    movne r4, r7
L_020c6b64:
    add r0, sp, #0x4c
    bl func_0208b6fc
L_020c6b6c:
    ldr r2, =data_021413f8
    add r7, sp, #0x4
    add r0, sp, #0xa
    mov r3, r5
    mov r1, #0x40
    str r7, [sp, #0x0]
    bl func_0205e950
    add r0, sp, #0xa
    bl func_0207e718
    str r0, [r6, #0x0]
    mov r1, r7
    str r1, [sp, #0x0]
    ldr r2, =data_02141404
    add r0, sp, #0xa
    mov r3, r5
    mov r1, #0x40
    bl func_0205e950
    add r0, sp, #0xa
    bl func_0207e718
    str r0, [r6, #0x4]
    mov r1, r7
    str r1, [sp, #0x0]
    ldr r2, =data_02141414
    mov r3, r5
    add r0, sp, #0xa
    mov r1, #0x40
    bl func_0205e950
    add r0, sp, #0xa
    bl func_0207e718
    bl func_02006b04
    str r0, [r6, #0x8]
    mov r0, r4
    bl func_0207e76c
    add sp, sp, #0x94
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on

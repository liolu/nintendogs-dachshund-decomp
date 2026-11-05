/* compiler: 2.0/sp1p5  */
/* func_020c722c from projets/nintendogs-dachshund/src/auto/func_020c722c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern void func_0205e950();
extern char data_0212cc18[];
extern char data_021414fc[];
extern char data_02141500[];
// clang-format off
asm void func_020c1d00(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    mov r4, #0xc
    mul ip, r2, r4
    mov r5, r0
    mov r4, r1
    ldr r0, =data_0212cc18
    mov r6, r3
    ldr r3, [r0, ip]
    ldr r2, =data_021414fc
    add r0, sp, #0x0
    mov r1, #0x10
    bl func_0205e950
    ldrb r0, [sp, #0x4]
    add r1, sp, #0x4
    ldr r2, =data_02141500
    add r0, r0, r6
    swpb r0, r0, [r1]
    add r3, sp, #0x0
    mov r0, r5
    mov r1, r4
    bl func_0205e950
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on

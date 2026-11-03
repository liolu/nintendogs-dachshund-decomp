/* compiler: 2.0/sp1p5  */
/* func_0205c5d8 from projets/children-of-mana/src/auto/func_0205c5d8.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
extern void func_02080ce8();
extern void func_02080cf8();
extern void r2();
extern char data_02153594[];
extern char data_02153598[];
extern char data_021535a0[];
// clang-format off
asm void func_02080e28(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r0, =data_02153594
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov sp, r0
    bl func_02080ce8
    ldr r1, =data_02153598
    ldr r0, =data_02153594
    ldr r1, [r1, #0x0]
    ldr r2, [r0, #0x0]
    ldr r0, =data_021535a0
    blx r2
    bl func_02080cf8
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on

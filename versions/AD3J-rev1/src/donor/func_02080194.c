/* compiler: 2.0/sp1p5  */
/* func_0203f368 from projets/battle-of-giants-dinosaurs/src/auto/func_0203f368.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void r1();
extern char func_02067a24[];
// clang-format off
asm void func_02080194(void) {
    stmfd sp!, {r0, lr}
    add r0, r0, #0x48
    ldr r1, =func_02067a24
    blx r1
    ldmfd sp!, {r0, lr}
    mrs r1, cpsr
    bic r1, r1, #0x1f
    orr r1, r1, #0xd3
    msr cpsr_c, r1
    ldr r1, [r0], #0x4
    msr spsr_fsxc, r1
    ldr sp, [r0, #0x40]
    ldr lr, [r0, #0x3c]
    ldmia r0, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, ip, sp, lr}^
    mov r0, r0
    subs pc, lr, #0x4
}
// clang-format on

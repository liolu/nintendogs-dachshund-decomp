/* compiler: 2.0/sp1p5  */
/* func_0200d4c0 from projets/nintendogs-chihuahua-friends/src/auto/func_0200d4c0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_0200d9c0();
extern void func_02026520();
extern void func_02026b54();
extern void func_020280ec();
extern void func_02034c88();
extern void func_020351a0();
extern void func_02036fbc();
extern void func_02038edc();
extern void func_0203e280();
// clang-format off
asm void func_0200d4c0(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    bl func_02038edc
    mov r0, r4
    mov r1, #0x300
    bl func_02036fbc
    mov r5, r0
    mov r0, r4
    bl func_020280ec
    mov r1, #0x9
    mul r1, r0, r1
    cmp r5, r1
    bge L_0200d520
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x90
    bl func_0203e280
    mov r0, r4
    bl func_02026520
    add r1, r4, #0xac
    mov r0, #0x2
    swpb r0, r0, [r1]
    b L_0200d570
L_0200d520:
    ldr r2, =0x111
    mov r0, r4
    mov r1, #0x0
    bl func_0203e280
    mov r0, r4
    bl func_02034c88
    mov r2, r0
    mov r0, r4
    mov r1, #0x3
    bl func_0203e280
    mov r0, r4
    bl func_02026b54
    add r2, r4, #0xac
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov r0, r4
    bl func_020351a0
    cmp r0, #0x0
    movne r0, #0x1
    strne r0, [r4, #0x488]
L_0200d570:
    ldr r2, [r4, #0x488]
    mov r0, r4
    mov r1, #0x0
    bl func_0200d9c0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on

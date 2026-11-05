/* compiler: 2.0/sp1p5  */
/* func_02059110 from projets/children-of-mana/src/auto/func_02059110.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
extern void func_0206db60();
extern void func_0206e004();
extern s32 data_0213b3c4;
// clang-format off
asm void func_0206cdec(void) {
    stmfd sp!, {r4, lr}
    ldr r3, =data_0213b3c4
    mov r4, r0
    ldr r0, [r3]
    mvn ip, #0x0
    mov lr, r1
    mov r3, r2
    cmp r0, ip
    mov ip, #0x6600000
    beq L_02017188
    cmp r3, #0x30
    bls L_02017188
    mov r1, r4
    add r2, ip, lr
    bl func_0206db60
    ldmfd sp!, {r4, lr}
    bx lr
L_02017188:
    mov r0, r4
    mov r2, r3
    add r1, ip, lr
    bl func_0206e004
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

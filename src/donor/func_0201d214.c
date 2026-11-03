/* compiler: 2.0/sp1p5  */
/* func_0201d214 from projets/nintendogs-chihuahua-friends/src/auto/func_0201d214.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02035594();
extern void func_02039358();
extern void func_02039394();
extern void func_020393d0();
extern void func_0203941c();
extern void func_0203945c();
extern void func_0203949c();
// clang-format off
asm void func_0201d214(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrsb r1, [r4, #0xa4]
    cmp r1, #0x5
    addls pc, pc, r1, lsl #0x2
    b L_0201d39c
L_0201d22c:
    b L_0201d398
    b L_0201d38c
    b L_0201d380
    b L_0201d294
    b L_0201d288
    b L_0201d244
L_0201d244:
    bl func_02039358
    mov r0, r4
    bl func_02035594
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    add r1, r4, #0xb0
    mov r0, #0x6
    swpb r0, r0, [r1]
    add r1, r4, #0xad
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r4, #0xac
    ldrsb r0, [r4, #0xad]
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0201d288:
    bl func_02039394
    ldmfd sp!, {r4, lr}
    bx lr
L_0201d294:
    bl func_020393d0
    ldrsb r0, [r4, #0xac]
    cmp r0, #0x14
    addls pc, pc, r0, lsl #0x2
    b L_0201d39c
L_0201d2a8:
    b L_0201d39c
    b L_0201d39c
    b L_0201d39c
    b L_0201d39c
    b L_0201d2fc
    b L_0201d2fc
    b L_0201d2fc
    b L_0201d2fc
    b L_0201d2fc
    b L_0201d2fc
    b L_0201d2fc
    b L_0201d2fc
    b L_0201d2fc
    b L_0201d2fc
    b L_0201d39c
    b L_0201d39c
    b L_0201d39c
    b L_0201d39c
    b L_0201d39c
    b L_0201d39c
    b L_0201d2fc
L_0201d2fc:
    add r0, r4, #0x100
    ldrsh r0, [r0, #0x52]
    cmp r0, #0xa
    bgt L_0201d33c
    cmp r0, #0x7
    blt L_0201d32c
    cmp r0, #0x7
    beq L_0201d360
    cmp r0, #0xa
    beq L_0201d360
    ldmfd sp!, {r4, lr}
    bx lr
L_0201d32c:
    cmp r0, #0x1
    beq L_0201d360
    ldmfd sp!, {r4, lr}
    bx lr
L_0201d33c:
    cmp r0, #0x32
    bgt L_0201d354
    cmp r0, #0x32
    beq L_0201d360
    ldmfd sp!, {r4, lr}
    bx lr
L_0201d354:
    cmp r0, #0x33
    ldmnefd sp!, {r4, lr}
    bxne lr
L_0201d360:
    add r1, r4, #0xad
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r4, #0xac
    ldrsb r0, [r4, #0xad]
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0201d380:
    bl func_0203941c
    ldmfd sp!, {r4, lr}
    bx lr
L_0201d38c:
    bl func_0203945c
    ldmfd sp!, {r4, lr}
    bx lr
L_0201d398:
    bl func_0203949c
L_0201d39c:
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

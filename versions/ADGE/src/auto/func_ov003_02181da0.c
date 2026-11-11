#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02024fe0();
extern void func_02028120();
extern void func_0202dabc();
extern void func_0202f2dc();
extern void func_0202f3cc();
extern void func_0202f4b8();
extern void func_0202f5a8();
extern void func_0202f694();
extern void func_0203535c();
extern void func_0203e5e8();
extern void func_02114564();
extern void func_ov003_02189ca8();
extern char data_0214da80[];
// clang-format off
asm void func_ov003_02181da0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x4
    mov r5, r1
    mov r6, r0
    mov r1, r3
    mov r4, r2
    bl func_02024fe0
    mov r0, r6
    bl func_02028120
    mov r7, r0
    mov r0, r6
    bl func_02028120
    smull r7, r2, r0, r7
    mov r3, #0x800
    adds r7, r7, r3
    ldr r0, =data_0214da80
    adc r2, r2, #0x0
    mov r8, r7, lsr #0xc
    orr r8, r8, r2, lsl #0x14
    ldr r2, =0x1004
    mov ip, #0x0
    umull lr, r9, r8, r2
    mla r9, r8, ip, r9
    mov r7, r8, asr #0x1f
    mla r9, r7, r2, r9
    adds r2, lr, r3
    ldr r0, [r0, #0x0]
    adc r3, r9, #0x0
    mov r2, r2, lsr #0xc
    add r1, r6, #0x378
    orr r2, r2, r3, lsl #0x14
    bl func_02114564
    cmp r0, #0x0
    bne L_02181f00
    mov r0, r6
    bl func_02028120
    mov r7, r0
    mov r0, r6
    bl func_02028120
    smull r2, r1, r0, r7
    mov r3, #0x800
    adds r2, r2, r3
    adc r0, r1, #0x0
    mov r8, r2, lsr #0xc
    orr r8, r8, r0, lsl #0x14
    ldr r2, =0x14d2
    ldr r0, =data_0214da80
    mov ip, #0x0
    umull lr, r9, r8, r2
    mla r9, r8, ip, r9
    mov r7, r8, asr #0x1f
    mla r9, r7, r2, r9
    adds r2, lr, r3
    ldr r0, [r0, #0x0]
    adc r3, r9, #0x0
    mov r2, r2, lsr #0xc
    add r1, r6, #0x384
    orr r2, r2, r3, lsl #0x14
    bl func_02114564
    cmp r0, #0x0
    bne L_02181f00
    mov r0, r6
    bl func_02028120
    mov r7, r0
    mov r0, r6
    bl func_02028120
    smull r2, r1, r0, r7
    mov r3, #0x800
    adds r2, r2, r3
    adc r0, r1, #0x0
    mov r7, r2, lsr #0xc
    orr r7, r7, r0, lsl #0x14
    ldr r2, =0x14d2
    ldr r0, =data_0214da80
    mov ip, #0x0
    umull r9, r8, r7, r2
    mla r8, r7, ip, r8
    mov lr, r7, asr #0x1f
    mla r8, lr, r2, r8
    adds r2, r9, r3
    ldr r0, [r0, #0x0]
    adc r3, r8, #0x0
    mov r2, r2, lsr #0xc
    add r1, r6, #0x348
    orr r2, r2, r3, lsl #0x14
    bl func_02114564
    cmp r0, #0x0
    beq L_02181f18
L_02181f00:
    add r0, r6, #0x100
    mov r1, #0x0
    strh r1, [r0, #0x1c]
    mov r1, #0x1
    strh r1, [r0, #0x1e]
    b L_02181f2c
L_02181f18:
    add r0, r6, #0x100
    mov r1, #0x1
    strh r1, [r0, #0x1c]
    mov r1, #0x0
    strh r1, [r0, #0x1e]
L_02181f2c:
    add r0, r6, #0x100
    ldrh r0, [r0, #0x1c]
    cmp r0, #0x0
    addeq r1, r6, #0xb9
    moveq r0, #0x1
    swpeqb r0, r0, [r1]
    addne r1, r6, #0xb9
    movne r0, #0x0
    swpneb r0, r0, [r1]
    mov r0, r6
    bl func_0202dabc
    mov r1, r0
    mov r0, r6
    bl func_ov003_02189ca8
    cmp r5, #0x5
    addls pc, pc, r5, lsl #0x2
    b L_02181fc0
L_02181f70:
    b L_02181fc0
    b L_02181f88
    b L_02181f94
    b L_02181fa0
    b L_02181fac
    b L_02181fb8
L_02181f88:
    mov r0, r6
    bl func_0202f694
    b L_02181fc0
L_02181f94:
    mov r0, r6
    bl func_0202f5a8
    b L_02181fc0
L_02181fa0:
    mov r0, r6
    bl func_0202f4b8
    b L_02181fc0
L_02181fac:
    mov r0, r6
    bl func_0202f3cc
    b L_02181fc0
L_02181fb8:
    mov r0, r6
    bl func_0202f2dc
L_02181fc0:
    mov r0, r6
    bl func_0203535c
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bxeq lr
    mov r0, r6
    mov r1, r4
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on

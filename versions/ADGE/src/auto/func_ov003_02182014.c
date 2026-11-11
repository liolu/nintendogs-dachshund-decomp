#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025d60();
extern void func_02028120();
extern void func_020298c0();
extern void func_0202dabc();
extern void func_02037130();
extern void func_02039128();
extern void func_0203e5ac();
extern void func_0203e5e8();
extern void func_02114564();
extern void func_ov003_02189ca8();
extern char data_0214da80[];
extern char data_0215a064[];
// clang-format off
asm void func_ov003_02182014(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    bl func_02028120
    mov r5, r0
    mov r0, r4
    bl func_02028120
    smull r2, r1, r0, r5
    mov r0, #0x800
    adds r2, r2, r0
    adc r1, r1, #0x0
    mov r5, r2, lsr #0xc
    orr r5, r5, r1, lsl #0x14
    ldr r1, =0x1004
    ldr r3, =data_0214da80
    umull r2, ip, r5, r1
    adds lr, r2, r0
    mov r2, #0x0
    mla ip, r5, r2, ip
    mov r2, r5, asr #0x1f
    mla ip, r2, r1, ip
    ldr r0, [r3, #0x0]
    adc r3, ip, #0x0
    mov r2, lr, lsr #0xc
    add r1, r4, #0x378
    orr r2, r2, r3, lsl #0x14
    bl func_02114564
    cmp r0, #0x0
    bne L_02182160
    mov r0, r4
    bl func_02028120
    mov r5, r0
    mov r0, r4
    bl func_02028120
    smull r2, r1, r0, r5
    mov r0, #0x800
    adds r2, r2, r0
    adc r1, r1, #0x0
    mov r5, r2, lsr #0xc
    orr r5, r5, r1, lsl #0x14
    ldr r1, =0x14d2
    ldr r3, =data_0214da80
    umull r2, ip, r5, r1
    adds lr, r2, r0
    mov r2, #0x0
    mla ip, r5, r2, ip
    mov r2, r5, asr #0x1f
    mla ip, r2, r1, ip
    ldr r0, [r3, #0x0]
    adc r3, ip, #0x0
    mov r2, lr, lsr #0xc
    add r1, r4, #0x384
    orr r2, r2, r3, lsl #0x14
    bl func_02114564
    cmp r0, #0x0
    bne L_02182160
    mov r0, r4
    bl func_02028120
    mov r5, r0
    mov r0, r4
    bl func_02028120
    smull r2, r1, r0, r5
    mov r0, #0x800
    adds r2, r2, r0
    adc r1, r1, #0x0
    mov ip, r2, lsr #0xc
    orr ip, ip, r1, lsl #0x14
    ldr r1, =0x14d2
    ldr r3, =data_0214da80
    umull r2, lr, ip, r1
    adds r5, r2, r0
    mov r2, #0x0
    mla lr, ip, r2, lr
    mov r2, ip, asr #0x1f
    mla lr, r2, r1, lr
    ldr r0, [r3, #0x0]
    adc r3, lr, #0x0
    mov r2, r5, lsr #0xc
    add r1, r4, #0x348
    orr r2, r2, r3, lsl #0x14
    bl func_02114564
    cmp r0, #0x0
    beq L_02182178
L_02182160:
    add r0, r4, #0x100
    mov r1, #0x0
    strh r1, [r0, #0x1c]
    mov r1, #0x1
    strh r1, [r0, #0x1e]
    b L_0218218c
L_02182178:
    add r0, r4, #0x100
    mov r1, #0x1
    strh r1, [r0, #0x1c]
    mov r1, #0x0
    strh r1, [r0, #0x1e]
L_0218218c:
    add r0, r4, #0x100
    ldrh r0, [r0, #0x1c]
    cmp r0, #0x0
    addeq r1, r4, #0xb9
    moveq r0, #0x1
    swpeqb r0, r0, [r1]
    addne r1, r4, #0xb9
    movne r0, #0x0
    swpneb r0, r0, [r1]
    mov r0, r4
    bl func_0202dabc
    mov r1, r0
    mov r0, r4
    bl func_ov003_02189ca8
    ldr r0, =data_0215a064
    add r3, r4, #0x3b4
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldrsb r0, [r4, #0xa0]
    cmp r0, #0x0
    bne L_0218220c
    mov r0, r4
    bl func_02039128
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    bl func_0203e5ac
    mov r0, r4
    bl func_02025d60
L_0218220c:
    mov r0, r4
    mov r1, #0x300
    bl func_02037130
    mov r1, #0x0
    ldr r2, =0x1ff
    mov r0, r4
    mov r3, r1
    bl func_020298c0
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    ldrsb r0, [r4, #0xa1]
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    mov r0, r4
    mov r1, #0xec
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on

#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202507c();
extern void func_0202517c();
extern void func_02028114();
extern void func_02028120();
extern void func_0202dabc();
extern void func_0202f694();
extern void func_0203535c();
extern void func_0203e5e8();
extern void func_02114564();
extern void func_ov003_02189ca8();
extern char data_0214da80[];
// clang-format off
asm void func_ov003_02181448(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    bl func_02028114
    mvn r1, #0xf8
    mvn r2, #0x0
    umull ip, r5, r0, r1
    mla r5, r0, r2, r5
    mov r0, r0, asr #0x1f
    mla r5, r0, r1, r5
    mov r3, #0x800
    adds r3, ip, r3
    adc r1, r5, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    mov r0, r4
    mov r1, #0x17
    bl func_0202517c
    cmp r0, #0x0
    bne L_021814dc
    mov r0, r4
    bl func_02028114
    mov r1, #0x4a
    mov r3, #0x0
    umull ip, r5, r0, r1
    mla r5, r0, r3, r5
    mov r0, r0, asr #0x1f
    mla r5, r0, r1, r5
    mov r2, #0x800
    adds r2, ip, r2
    mov r3, r2, lsr #0xc
    adc r1, r5, #0x0
    orr r3, r3, r1, lsl #0x14
    mov r0, r4
    mov r1, #0x18
    mov r2, #0x2d
    bl func_0202507c
L_021814dc:
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
    bne L_02181620
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
    bne L_02181620
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
    beq L_02181638
L_02181620:
    add r0, r4, #0x100
    mov r1, #0x0
    strh r1, [r0, #0x1c]
    mov r1, #0x1
    strh r1, [r0, #0x1e]
    b L_0218164c
L_02181638:
    add r0, r4, #0x100
    mov r1, #0x1
    strh r1, [r0, #0x1c]
    mov r1, #0x0
    strh r1, [r0, #0x1e]
L_0218164c:
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
    mov r0, r4
    bl func_0202f694
    mov r0, r4
    bl func_0203535c
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r0, r4
    mov r1, #0xee
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on

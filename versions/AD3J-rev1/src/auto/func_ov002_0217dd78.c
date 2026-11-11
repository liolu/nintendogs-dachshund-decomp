#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025034();
extern void func_02025134();
extern void func_020280ec();
extern void func_020280f8();
extern void func_0202d9b0();
extern void func_0202f588();
extern void func_020351a0();
extern void func_0203e2b8();
extern void func_02092df4();
extern void func_ov002_021879a8();
extern char data_0214b480[];
// clang-format off
asm void func_ov002_0217dd78(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    bl func_020280ec
    mvn r1, #0xf8
    mvn r2, #0x0
    umull ip, r5, r0, r1
    mla r5, r0, r2, r5
    mov r0, r0, asr #0x1f
    mov r3, #0x800
    mla r5, r0, r1, r5
    adds r3, ip, r3
    adc r0, r5, #0x0
    mov r1, r3, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    rsb r2, r1, #0x0
    mov r0, r4
    mov r1, #0x17
    bl func_02025134
    cmp r0, #0x0
    bne L_0217de14
    mov r0, r4
    bl func_020280ec
    mov r1, #0x4a
    mov r3, #0x0
    umull ip, r5, r0, r1
    mla r5, r0, r3, r5
    mov r0, r0, asr #0x1f
    mov r2, #0x800
    mla r5, r0, r1, r5
    adds r2, ip, r2
    mov r1, r2, lsr #0xc
    adc r0, r5, #0x0
    orr r1, r1, r0, lsl #0x14
    rsb r3, r1, #0x0
    mov r0, r4
    mov r1, #0x18
    mov r2, #0x2d
    bl func_02025034
L_0217de14:
    mov r0, r4
    bl func_020280f8
    mov r5, r0
    mov r0, r4
    bl func_020280f8
    smull r2, r1, r0, r5
    mov r0, #0x800
    adds r2, r2, r0
    adc r1, r1, #0x0
    mov r5, r2, lsr #0xc
    orr r5, r5, r1, lsl #0x14
    ldr r1, =0x1004
    ldr r3, =data_0214b480
    umull r2, ip, r5, r1
    adds lr, r2, r0
    mov r2, #0x0
    mla ip, r5, r2, ip
    mov r2, r5, asr #0x1f
    mla ip, r2, r1, ip
    ldr r0, [r3, #0x0]
    adc r3, ip, #0x0
    mov r2, lr, lsr #0xc
    add r1, r4, #0x390
    orr r2, r2, r3, lsl #0x14
    bl func_02092df4
    cmp r0, #0x0
    bne L_0217df58
    mov r0, r4
    bl func_020280f8
    mov r5, r0
    mov r0, r4
    bl func_020280f8
    smull r2, r1, r0, r5
    mov r0, #0x800
    adds r2, r2, r0
    adc r1, r1, #0x0
    mov r5, r2, lsr #0xc
    orr r5, r5, r1, lsl #0x14
    ldr r1, =0x14d2
    ldr r3, =data_0214b480
    umull r2, ip, r5, r1
    adds lr, r2, r0
    mov r2, #0x0
    mla ip, r5, r2, ip
    mov r2, r5, asr #0x1f
    mla ip, r2, r1, ip
    ldr r0, [r3, #0x0]
    adc r3, ip, #0x0
    mov r2, lr, lsr #0xc
    add r1, r4, #0x39c
    orr r2, r2, r3, lsl #0x14
    bl func_02092df4
    cmp r0, #0x0
    bne L_0217df58
    mov r0, r4
    bl func_020280f8
    mov r5, r0
    mov r0, r4
    bl func_020280f8
    smull r2, r1, r0, r5
    mov r0, #0x800
    adds r2, r2, r0
    adc r1, r1, #0x0
    mov ip, r2, lsr #0xc
    orr ip, ip, r1, lsl #0x14
    ldr r1, =0x14d2
    ldr r3, =data_0214b480
    umull r2, lr, ip, r1
    adds r5, r2, r0
    mov r2, #0x0
    mla lr, ip, r2, lr
    mov r2, ip, asr #0x1f
    mla lr, r2, r1, lr
    ldr r0, [r3, #0x0]
    adc r3, lr, #0x0
    mov r2, r5, lsr #0xc
    add r1, r4, #0x360
    orr r2, r2, r3, lsl #0x14
    bl func_02092df4
    cmp r0, #0x0
    beq L_0217df70
L_0217df58:
    add r0, r4, #0x100
    mov r1, #0x0
    strh r1, [r0, #0x2a]
    mov r1, #0x1
    strh r1, [r0, #0x2c]
    b L_0217df84
L_0217df70:
    add r0, r4, #0x100
    mov r1, #0x1
    strh r1, [r0, #0x2a]
    mov r1, #0x0
    strh r1, [r0, #0x2c]
L_0217df84:
    add r0, r4, #0x100
    ldrh r0, [r0, #0x2a]
    cmp r0, #0x0
    addeq r1, r4, #0xa2
    moveq r0, #0x1
    swpeqb r0, r0, [r1]
    addne r1, r4, #0xa2
    movne r0, #0x0
    swpneb r0, r0, [r1]
    mov r0, r4
    bl func_0202d9b0
    mov r1, r0
    mov r0, r4
    bl func_ov002_021879a8
    mov r0, r4
    bl func_0202f588
    mov r0, r4
    bl func_020351a0
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r0, r4
    mov r1, #0xec
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on

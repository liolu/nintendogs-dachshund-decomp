#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201bc88();
extern void func_020280f8();
extern void func_0202d9b0();
extern void func_0202f2c0();
extern void func_020351a0();
extern void func_0203e2b8();
extern void func_02092df4();
extern void func_ov002_021879a8();
extern char data_0214b480[];
// clang-format off
asm void func_ov002_0217e9d0(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r4, r0
    mvn r1, #0x0
    bl func_0201bc88
    mov r0, r4
    bl func_020280f8
    mov r5, r0
    mov r0, r4
    bl func_020280f8
    smull r2, r1, r0, r5
    mov r3, #0x800
    adds r2, r2, r3
    mov lr, r2, lsr #0xc
    adc r1, r1, #0x0
    orr lr, lr, r1, lsl #0x14
    ldr r2, =0x1004
    ldr r0, =data_0214b480
    mov ip, #0x0
    umull r7, r6, lr, r2
    mla r6, lr, ip, r6
    mov r5, lr, asr #0x1f
    mla r6, r5, r2, r6
    adds r2, r7, r3
    ldr r0, [r0, #0x0]
    adc r3, r6, #0x0
    mov r2, r2, lsr #0xc
    add r1, r4, #0x390
    orr r2, r2, r3, lsl #0x14
    bl func_02092df4
    cmp r0, #0x0
    bne L_0217eb28
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
    bne L_0217eb28
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
    beq L_0217eb40
L_0217eb28:
    add r0, r4, #0x100
    mov r1, #0x0
    strh r1, [r0, #0x2a]
    mov r1, #0x1
    strh r1, [r0, #0x2c]
    b L_0217eb54
L_0217eb40:
    add r0, r4, #0x100
    mov r1, #0x1
    strh r1, [r0, #0x2a]
    mov r1, #0x0
    strh r1, [r0, #0x2c]
L_0217eb54:
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
    bl func_0202f2c0
    mov r0, r4
    bl func_020351a0
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    mov r0, r4
    mov r1, #0xf3
    bl func_0203e2b8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on

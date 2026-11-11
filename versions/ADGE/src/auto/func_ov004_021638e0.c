#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02024fe0();
extern void func_02025dc4();
extern void func_02026504();
extern void func_020266e8();
extern void func_0202674c();
extern void func_02026b9c();
extern void func_02028114();
extern void func_02028120();
extern void func_02029248();
extern void func_0202fa18();
extern void func_02036874();
extern void func_02037130();
extern void func_0203910c();
extern void func_02039128();
extern void func_0203e5ac();
extern void func_0203e5e8();
extern void func_021058ac();
extern void func_02106ef0();
extern void func_02106f0c();
extern void func_ov004_0215a354();
extern void func_ov004_0215a38c();
extern void func_ov004_0215a3c4();
extern char data_0214da84[];
// clang-format off
asm void func_ov004_021638e0(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    mov r0, #0x0
    str r0, [r5, #0x484]
    ldr r1, [r5, #0x2a0]
    ldr r0, [r5, #0x484]
    sub r0, r1, r0
    str r0, [r5, #0x2a0]
    ldr r1, [r5, #0x3f0]
    ldr r0, [r5, #0x484]
    sub r0, r1, r0
    str r0, [r5, #0x3f0]
    ldr r1, [r5, #0x3fc]
    ldr r0, [r5, #0x484]
    sub r0, r1, r0
    str r0, [r5, #0x3fc]
    ldr r0, [r5, #0x488]
    add r0, r0, #0x1
    str r0, [r5, #0x488]
    bl func_02106ef0
    cmp r0, #0x0
    beq L_02163944
    ldr r0, [r5, #0x484]
    bl func_021058ac
L_02163944:
    add r0, r5, #0x26c
    add r3, r5, #0x3b4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [r5, #0x464]
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_02163cf4
L_02163964:
    b L_02163978
    b L_02163a14
    b L_02163c18
    b L_02163ca0
    b L_02163ce8
L_02163978:
    mov r0, r5
    bl func_0203910c
    mov r0, r5
    mov r1, #0x314
    bl func_02037130
    mov r4, r0
    mov r0, r5
    add r1, r5, #0x3b4
    bl func_02036874
    cmp r0, #0x3000
    bge L_021639cc
    mov r0, #0x1
    mov r1, #0x0
    str r0, [r5, #0x464]
    mov r0, r5
    mov r2, r1
    str r1, [r5, #0x468]
    bl func_0203e5ac
    mov r0, r5
    bl func_02026b9c
    b L_02163cf4
L_021639cc:
    mov r0, r5
    bl func_02028114
    mov r1, #0x3
    mul r2, r0, r1
    cmp r4, r2
    bge L_02163cf4
    str r1, [r5, #0x464]
    mov r1, #0x0
    mov r0, r5
    str r1, [r5, #0x468]
    add r4, r5, #0x93
    mov r3, #0x5
    mov r2, #0x8e
    swpb r3, r3, [r4]
    bl func_0203e5ac
    mov r0, r5
    bl func_02026504
    b L_02163cf4
L_02163a14:
    mov r0, r5
    bl func_02028120
    ldr r2, =0x300c
    mov r1, #0x0
    umull ip, r4, r0, r2
    mov r3, #0x800
    adds r3, ip, r3
    mla r4, r0, r1, r4
    mov r0, r0, asr #0x1f
    mla r4, r0, r2, r4
    adc r0, r4, #0x0
    mov r2, r3, lsr #0xc
    ldr r3, [r5, #0x3b8]
    orr r2, r2, r0, lsl #0x14
    cmp r3, r2
    ble L_02163a64
    mov r0, r5
    mov r2, #0x85
    bl func_0203e5ac
    b L_02163ac0
L_02163a64:
    mov r0, r5
    bl func_02028120
    ldr r2, =0x2008
    mov r1, #0x0
    umull ip, r4, r0, r2
    mov r3, #0x800
    adds r3, ip, r3
    mla r4, r0, r1, r4
    mov r0, r0, asr #0x1f
    mla r4, r0, r2, r4
    adc r0, r4, #0x0
    mov r2, r3, lsr #0xc
    ldr r3, [r5, #0x3b8]
    orr r2, r2, r0, lsl #0x14
    cmp r3, r2
    ble L_02163ab4
    mov r0, r5
    mov r2, #0x86
    bl func_0203e5ac
    b L_02163ac0
L_02163ab4:
    mov r0, r5
    mov r2, #0x87
    bl func_0203e5ac
L_02163ac0:
    mov r0, r5
    bl func_02028120
    mov r4, r0
    mov r0, r5
    add r1, r5, #0x3b4
    bl func_02036874
    ldr r1, =0x300c
    mov r3, #0x0
    umull lr, ip, r4, r1
    mov r2, #0x800
    adds lr, lr, r2
    mla ip, r4, r3, ip
    mov r2, r4, asr #0x1f
    mla ip, r2, r1, ip
    adc r1, ip, #0x0
    mov r2, lr, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r0, r2
    addlt r1, r5, #0x93
    movlt r0, #0x10
    swpltb r0, r0, [r1]
    addge r1, r5, #0x93
    movge r0, #0x7
    swpgeb r0, r0, [r1]
    ldr r0, [r5, #0x468]
    add r0, r0, #0x1
    str r0, [r5, #0x468]
    ldr r0, [r5, #0x468]
    cmp r0, #0x3c
    ble L_02163cf4
    mov r0, #0x2
    str r0, [r5, #0x464]
    mov r1, #0x0
    ldr r0, =data_0214da84
    str r1, [r5, #0x468]
    ldr r2, [r0, #0x0]
    ldr r0, =0x10dcd
    ldr r1, [r2, #0x0]
    mul r0, r1, r0
    add r1, r0, #0x1
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x1f
    mov r0, r0, lsl #0x10
    str r1, [r2, #0x0]
    movs r0, r0, lsr #0x10
    beq L_02163bb4
    mov r0, r5
    bl func_02028114
    mov r1, #0x120
    mov r3, #0x0
    umull ip, r4, r0, r1
    mov r2, #0x800
    adds r2, ip, r2
    mla r4, r0, r3, r4
    mov r0, r0, asr #0x1f
    mla r4, r0, r1, r4
    adc r0, r4, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r5, #0x46c]
    b L_02163bf0
L_02163bb4:
    mov r0, r5
    bl func_02028114
    mov r1, #0x120
    mov r3, #0x0
    umull ip, r4, r0, r1
    mov r2, #0x800
    adds r2, ip, r2
    mla r4, r0, r3, r4
    mov r0, r0, asr #0x1f
    mla r4, r0, r1, r4
    adc r0, r4, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    rsb r0, r1, #0x0
    str r0, [r5, #0x46c]
L_02163bf0:
    mov r0, r5
    add r4, r5, #0x93
    mov r3, #0x5
    mov r1, #0x0
    mov r2, #0x8e
    swpb r3, r3, [r4]
    bl func_0203e5ac
    mov r0, r5
    bl func_02025dc4
    b L_02163cf4
L_02163c18:
    ldr r1, [r5, #0x46c]
    mov r0, r5
    bl func_02024fe0
    add r0, r5, #0x26c
    add r3, r5, #0x278
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r5
    bl func_02039128
    mov r0, r5
    mov r1, #0x310
    bl func_02037130
    add r0, r5, #0x278
    add r3, r5, #0x26c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [r5, #0x468]
    add r0, r0, #0x1
    str r0, [r5, #0x468]
    ldr r0, [r5, #0x468]
    cmp r0, #0xf
    ble L_02163cf4
    mov r1, #0x0
    str r1, [r5, #0x464]
    mov r0, r5
    str r1, [r5, #0x468]
    add r4, r5, #0x93
    mov r3, #0x5
    mov r2, #0x12
    swpb r3, r3, [r4]
    bl func_0203e5ac
    mov r0, r5
    bl func_0202674c
    b L_02163cf4
L_02163ca0:
    ldr r0, [r5, #0x468]
    add r0, r0, #0x1
    str r0, [r5, #0x468]
    ldr r0, [r5, #0x468]
    cmp r0, #0x1e
    ble L_02163cf4
    mov r1, #0x0
    str r1, [r5, #0x464]
    mov r0, r5
    str r1, [r5, #0x468]
    add r4, r5, #0x93
    mov r3, #0x5
    mov r2, #0x12
    swpb r3, r3, [r4]
    bl func_0203e5ac
    mov r0, r5
    bl func_0202674c
    b L_02163cf4
L_02163ce8:
    mov r0, r5
    mov r1, #0x314
    bl func_02037130
L_02163cf4:
    ldrh r0, [r5, #0xfc]
    cmp r0, #0x96
    bne L_02163d30
    mov r0, #0x4
    str r0, [r5, #0x464]
    mov r1, #0x0
    mov r0, r5
    str r1, [r5, #0x468]
    add r4, r5, #0x93
    mov r3, #0x5
    mov r2, #0x11
    swpb r3, r3, [r4]
    bl func_0203e5ac
    mov r0, r5
    bl func_020266e8
L_02163d30:
    ldrh r0, [r5, #0xfc]
    cmp r0, #0xc8
    bhi L_02163d74
    cmp r0, #0x96
    addls sp, sp, #0x4
    ldmlsfd sp!, {r4, r5, lr}
    bxls lr
    ldrsb r0, [r5, #0xa0]
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    ldrsb r0, [r5, #0xa1]
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
L_02163d74:
    ldrsh r0, [r5, #0xf0]
    cmp r0, #0x4d
    beq L_02163df8
    cmp r0, #0x4e
    beq L_02163d94
    cmp r0, #0x4f
    beq L_02163e64
    b L_02163e7c
L_02163d94:
    ldrb r0, [r5, #0xa5]
    cmp r0, #0x1
    beq L_02163db0
    cmp r0, #0x2
    beq L_02163dc8
    cmp r0, #0x3
    beq L_02163de0
L_02163db0:
    mov r0, r5
    mov r1, #0x480
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02163dc8:
    ldr r1, =0x481
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02163de0:
    ldr r1, =0x482
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02163df8:
    mov r0, r5
    bl func_02029248
    bl func_02106f0c
    cmp r0, #0x0
    beq L_02163e50
    ldrsb r0, [r5, #0xb7]
    cmp r0, #0x1
    beq L_02163e2c
    cmp r0, #0x2
    beq L_02163e34
    cmp r0, #0x3
    beq L_02163e40
    b L_02163e44
L_02163e2c:
    bl func_ov004_0215a38c
    b L_02163e44
L_02163e34:
    mov r0, #0x1
    bl func_ov004_0215a3c4
    b L_02163e44
L_02163e40:
    bl func_ov004_0215a354
L_02163e44:
    add r1, r5, #0xb7
    mov r0, #0x0
    swpb r0, r0, [r1]
L_02163e50:
    mov r0, r5
    bl func_0202fa18
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02163e64:
    ldr r1, =0x489
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02163e7c:
    mov r0, r5
    bl func_0202fa18
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on

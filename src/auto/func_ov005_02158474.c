#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200b1d4();
extern void func_0200b424();
extern void func_0200c3ec();
extern void func_020266a0();
extern void func_02026bcc();
extern void func_02027db0();
extern void func_02027e14();
extern void func_020280ec();
extern void func_02029204();
extern void func_02035fd0();
extern void func_02036a60();
extern void func_02036fbc();
extern void func_02037be8();
extern void func_020382e4();
extern void func_0203e280();
extern void func_02069634();
extern void func_02092df4();
extern void func_020af298();
extern void func_ov005_0215c3f4();
extern void func_ov005_0215cf60();
extern char data_02124ad8[];
extern char data_0214b47c[];
extern char data_0214b480[];
extern char data_0214b484[];
extern char data_02153720[];
// clang-format off
asm void func_ov005_02158474(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x64
    mov r1, #0x0
    str r1, [sp, #0xc]
    ldr r2, [sp, #0xc]
    mov r9, r0
    mov r1, #0x3
    str r2, [sp, #0x10]
    bl func_02027e14
    mov r6, r0
    mov r0, r9
    bl func_02035fd0
    movs r8, r0
    beq L_021584f0
    ldr r1, [r8, #0x2c]
    ldr r0, [r8, #0x30]
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0200c3ec
    str r0, [sp, #0x14]
    cmp r0, #0x0
    beq L_021584f0
    ldr r1, =data_0214b47c
    ldr r2, [r0, #0x20]
    ldr r1, [r1, #0x0]
    mov r0, #0x24
    smulbb r0, r2, r0
    ldr r1, [r1, #0x18]
    adds r7, r1, r0
    movne r0, #0x1
    bne L_021584f4
L_021584f0:
    mov r0, #0x0
L_021584f4:
    cmp r0, #0x0
    beq L_02158e18
    cmp r6, #0x3e8
    movlt r0, #0x1
    strlt r0, [r9, #0x490]
    ldr r0, [r9, #0x490]
    cmp r0, #0x0
    beq L_02158528
    cmp r0, #0x1
    beq L_021588d8
    cmp r0, #0x2
    beq L_02158a68
    b L_02158ba0
L_02158528:
    ldr ip, [r9, #0x488]
    ldrsh r2, [r7, #0x2]
    mov r0, ip, lsl #0x10
    movs r3, r0, asr #0x10
    movmi r3, #0x0
    cmp r3, r2
    subge r0, r2, #0x1
    movge r0, r0, lsl #0x10
    ldr r1, [r8, #0x34]
    movge r3, r0, asr #0x10
    cmp r1, #0x0
    bne L_0215857c
    ldr r0, =data_0214b47c
    ldrsh r10, [r7, #0x0]
    ldr r11, [r0, #0x0]
    mov r0, #0x44
    add r3, r10, r3
    ldr r10, [r11, #0x1c]
    smlabb r0, r3, r0, r10
    str r0, [sp, #0x18]
    b L_021585ac
L_0215857c:
    cmp r1, #0x1
    bne L_021585ac
    ldr r0, =data_0214b47c
    ldrsh r11, [r7, #0x0]
    ldr r0, [r0, #0x0]
    mov r10, #0x44
    add r11, r11, r2
    sub r11, r11, #0x1
    ldr r0, [r0, #0x1c]
    sub r3, r11, r3
    smlabb r0, r3, r10, r0
    str r0, [sp, #0x18]
L_021585ac:
    add r0, ip, #0x1
    mov r0, r0, lsl #0x10
    movs r3, r0, asr #0x10
    movmi r3, #0x0
    cmp r3, r2
    subge r0, r2, #0x1
    movge r0, r0, lsl #0x10
    movge r3, r0, asr #0x10
    cmp r1, #0x0
    bne L_021585f4
    ldr r0, =data_0214b47c
    ldrsh r5, [r7, #0x0]
    ldr r10, [r0, #0x0]
    mov r0, #0x44
    add r3, r5, r3
    ldr r5, [r10, #0x1c]
    smlabb r5, r3, r0, r5
    b L_02158620
L_021585f4:
    cmp r1, #0x1
    bne L_02158620
    ldrsh r10, [r7, #0x0]
    ldr r0, =data_0214b47c
    mov r5, #0x44
    ldr r0, [r0, #0x0]
    add r10, r10, r2
    ldr r0, [r0, #0x1c]
    sub r10, r10, #0x1
    sub r3, r10, r3
    smlabb r5, r3, r5, r0
L_02158620:
    sub r3, r2, #0x1
    mov r0, r3, lsl #0x10
    movs r0, r0, asr #0x10
    movmi r0, #0x0
    cmp r0, r2
    movge r0, r3, lsl #0x10
    movge r0, r0, asr #0x10
    cmp r1, #0x0
    bne L_02158668
    ldr r1, =data_0214b47c
    ldrsh r2, [r7, #0x0]
    ldr r3, [r1, #0x0]
    mov r1, #0x44
    add r0, r2, r0
    ldr r2, [r3, #0x1c]
    smlabb r0, r0, r1, r2
    str r0, [sp, #0x1c]
    b L_02158698
L_02158668:
    cmp r1, #0x1
    bne L_02158698
    ldrsh r10, [r7, #0x0]
    ldr r3, =data_0214b47c
    mov r1, #0x44
    add r2, r10, r2
    sub r2, r2, #0x1
    ldr r3, [r3, #0x0]
    sub r0, r2, r0
    ldr r2, [r3, #0x1c]
    smlabb r0, r0, r1, r2
    str r0, [sp, #0x1c]
L_02158698:
    ldr r0, [sp, #0x1c]
    add r3, r9, #0x3d8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [sp, #0x18]
    add r3, r9, #0x26c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r3, r9, #0x278
    ldmia r5, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r9
    bl func_020280ec
    mov r5, r0
    mov r0, r9
    mov r1, #0x3
    bl func_02027e14
    mov r1, r0
    mov r0, r9
    bl func_020382e4
    mov r2, r0
    mov r0, r9
    mov r1, #0x100
    bl func_02036a60
    mov r1, r5, asr #0x1f
    mov r2, r1, lsl #0xc
    mov r3, r5, lsl #0xc
    mov r1, #0x800
    orr r2, r2, r5, lsr #0x14
    adds r3, r3, r1
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r0, r2
    bge L_02158744
    ldr r0, [r9, #0x488]
    add r0, r0, #0x1
    str r0, [r9, #0x488]
    ldrsh r0, [r7, #0x2]
    ldr r1, [r9, #0x488]
    cmp r1, r0
    movge r0, #0x1
    strge r0, [sp, #0xc]
L_02158744:
    ldr r1, [r9, #0x488]
    cmp r1, #0x3
    blt L_02158ba0
    ldrsh r0, [r7, #0x2]
    sub r0, r0, #0x3
    cmp r1, r0
    bge L_02158ba0
    ldr r0, =data_0214b484
    ldr r3, =data_02153720
    ldr r0, [r0, #0x0]
    add r5, sp, #0x30
    add r0, r0, #0x70
    ldmia r0, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
    ldr r0, [r3, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    beq L_021587e4
    ldr r0, [sp, #0x14]
    mov r2, #0x32000
    ldrh r1, [r0, #0x4]
    mov r0, #0xa000
    mov r1, r1, asr #0x4
    mov r3, r1, lsl #0x1
    str r0, [sp, #0x0]
    add r0, r3, #0x1
    str r2, [sp, #0x4]
    ldr r1, =data_02124ad8
    mov r2, r3, lsl #0x1
    mov r0, r0, lsl #0x1
    ldrsh r3, [r1, r0]
    ldrsh r2, [r1, r2]
    ldr r1, [sp, #0x14]
    mov r0, r5
    add r1, r1, #0x8
    bl func_0200b1d4
    cmp r0, #0x0
    moveq r0, #0x1
    streq r0, [r9, #0x490]
    beq L_02158ba0
L_021587e4:
    ldr r5, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r5, #0x0]
    mov r3, #0x64
    ldr r2, [r0, #0x0]
    mul r10, r2, r1
    add r10, r10, #0x1
    mov r2, r10, lsl #0x10
    str r10, [r0, #0x0]
    mov r0, r2, lsr #0x10
    mul r2, r0, r3
    mov r0, r2, lsr #0x10
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    bne L_02158ba0
    ldr r0, =0x1388
    cmp r6, r0
    bge L_02158864
    ldr r2, [r5, #0x0]
    ldr r5, =0x2710
    ldr r3, [r2, #0x0]
    add r0, r6, #0xfa0
    mul r1, r3, r1
    add r1, r1, #0x1
    mov r3, r1, lsl #0x10
    mov r3, r3, lsr #0x10
    mul r5, r3, r5
    mov r3, r5, lsr #0x10
    mov r3, r3, lsl #0x10
    str r1, [r2, #0x0]
    cmp r0, r3, lsr #0x10
    blt L_021588b4
L_02158864:
    ldr r0, =0x1388
    cmp r6, r0
    blt L_02158ba0
    ldr r0, =data_0214b484
    ldr r2, =0xafc8
    ldr r1, [r0, #0x0]
    ldr r0, =0x10dcd
    ldr r3, [r1, #0x0]
    ldr r5, =0xc350
    mul r0, r3, r0
    add r0, r0, #0x1
    mov r3, r0, lsl #0x10
    mov r3, r3, lsr #0x10
    mul r5, r3, r5
    mov r3, r5, lsr #0x10
    add r5, r6, r2
    mov r2, r3, lsl #0x10
    str r0, [r1, #0x0]
    cmp r5, r2, lsr #0x10
    bge L_02158ba0
L_021588b4:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x8
    bl func_0203e280
    mov r0, r9
    bl func_02026bcc
    mov r0, #0x2
    str r0, [r9, #0x490]
    b L_02158ba0
L_021588d8:
    ldrsh r0, [r9, #0xfc]
    cmp r0, #0x11
    bne L_021588ec
    mov r3, #0x120
    b L_021588f8
L_021588ec:
    mov r0, #0x12
    strh r0, [r9, #0xfc]
    mov r3, #0x140
L_021588f8:
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    beq L_02158924
    ldr r0, =data_0214b484
    add r5, r9, #0x26c
    ldr r0, [r0, #0x0]
    add r0, r0, #0x70
    ldmia r0, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
L_02158924:
    add r0, r9, #0x26c
    add r10, r9, #0x3d8
    ldmia r0, {r0, r1, r2}
    stmia r10, {r0, r1, r2}
    add r5, r9, #0x278
    ldmia r10, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
    mov r1, r3
    mov r0, r9
    bl func_02036fbc
    cmp r6, #0x1f4
    bge L_02158964
    mov r0, r9
    mov r1, #0x0
    bl func_02037be8
    b L_02158970
L_02158964:
    mov r0, r9
    mov r1, #0x1
    bl func_02037be8
L_02158970:
    add r0, r9, #0x100
    ldrh r0, [r0, #0xa]
    cmp r0, #0x64
    bls L_021589d4
    ldr r0, [sp, #0x14]
    mov r2, #0x32000
    ldrh r1, [r0, #0x4]
    mov r0, #0xf000
    mov r1, r1, asr #0x4
    mov r3, r1, lsl #0x1
    str r0, [sp, #0x0]
    add r0, r3, #0x1
    str r2, [sp, #0x4]
    ldr r1, =data_02124ad8
    mov r2, r3, lsl #0x1
    mov r0, r0, lsl #0x1
    ldrsh r3, [r1, r0]
    ldrsh r2, [r1, r2]
    ldr r1, [sp, #0x14]
    add r0, r9, #0x2a0
    add r1, r1, #0x8
    bl func_0200b1d4
    cmp r0, #0x0
    moveq r0, #0x1
    streq r0, [sp, #0x10]
L_021589d4:
    ldr r0, =data_02153720
    ldr r1, [r0, #0x0]
    ldrh r1, [r1, #0x84]
    ands r1, r1, #0x1
    bne L_02158a44
    ldr r1, [r9, #0x48c]
    add r1, r1, #0x1
    str r1, [r9, #0x48c]
    ldr r1, [r9, #0x48c]
    cmp r1, #0x64
    ble L_02158a18
    ldr r0, [r0, #0x0]
    add r3, r9, #0x3d8
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
L_02158a18:
    ldr r0, [r9, #0x48c]
    cmp r0, #0xc8
    ble L_02158ba0
    mov r0, r9
    mov r1, #0x1
    mov r2, #0x6
    bl func_0203e280
    add r1, r9, #0xb0
    mov r0, #0x2
    swpb r0, r0, [r1]
    b L_02158ba0
L_02158a44:
    mov r0, r9
    mov r1, #0x1
    mov r2, #0x0
    bl func_0203e280
    add r1, r9, #0xb0
    mov r2, #0x0
    swpb r0, r2, [r1]
    str r2, [r9, #0x48c]
    b L_02158ba0
L_02158a68:
    ldr r0, =data_02153720
    add r3, r9, #0x3d8
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [r9, #0x48c]
    add r0, r0, #0x1
    str r0, [r9, #0x48c]
    ldr r0, [r9, #0x48c]
    cmp r0, #0xc8
    movgt r0, #0x1
    strgt r0, [r9, #0x490]
    bgt L_02158ba0
    cmp r0, #0x3c
    ble L_02158ba0
    ldr r0, [r9, #0x488]
    ldrsh r1, [r7, #0x2]
    add r0, r0, #0x1
    mov r0, r0, lsl #0x10
    mov r6, r0, asr #0x10
    cmp r6, r1
    bge L_02158ba0
    mov r10, #0x0
    mov r11, #0x24000
L_02158ad0:
    ldrsh r1, [r7, #0x2]
    mov r2, r6
    cmp r6, #0x0
    movlt r2, r10
    cmp r2, r1
    subge r0, r1, #0x1
    movge r0, r0, lsl #0x10
    movge r2, r0, asr #0x10
    ldr r0, [r8, #0x34]
    cmp r0, #0x0
    bne L_02158b1c
    ldr r0, =data_0214b47c
    ldrsh r1, [r7, #0x0]
    ldr r0, [r0, #0x0]
    ldr r3, [r0, #0x1c]
    mov r0, #0x44
    add r1, r1, r2
    smlabb r5, r1, r0, r3
    b L_02158b48
L_02158b1c:
    cmp r0, #0x1
    bne L_02158b48
    ldr r0, =data_0214b47c
    ldrsh r5, [r7, #0x0]
    ldr r0, [r0, #0x0]
    mov r3, #0x44
    add r1, r5, r1
    sub r1, r1, #0x1
    ldr r0, [r0, #0x1c]
    sub r1, r1, r2
    smlabb r5, r1, r3, r0
L_02158b48:
    ldr r0, =data_0214b480
    mov r1, r5
    ldr r0, [r0, #0x0]
    mov r2, r11
    bl func_02092df4
    cmp r0, #0x0
    beq L_02158b88
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x11
    bl func_0203e280
    mov r0, r9
    bl func_020266a0
    mov r0, #0x0
    str r0, [r9, #0x490]
    b L_02158ba0
L_02158b88:
    add r0, r6, #0x1
    mov r0, r0, lsl #0x10
    mov r6, r0, asr #0x10
    ldrsh r0, [r7, #0x2]
    cmp r6, r0
    blt L_02158ad0
L_02158ba0:
    ldr r0, [sp, #0x14]
    ldr r1, [r8, #0x34]
    ldrh r0, [r0, #0x4]
    ldr r5, =data_02124ad8
    cmp r1, #0x0
    mov r0, r0, asr #0x4
    mov r2, r0, lsl #0x1
    add r0, r2, #0x1
    mov r3, r2, lsl #0x1
    mov r2, r0, lsl #0x1
    ldrsh r3, [r5, r3]
    ldrsh r2, [r5, r2]
    mov r0, #0x3
    smulbb r5, r3, r0
    smulbb r10, r2, r0
    beq L_02158c28
    ldr r0, [r9, #0x2b8]
    rsb r1, r10, #0x0
    smull r6, r0, r1, r0
    mov r2, #0x800
    adds r1, r6, r2
    ldr r3, [r9, #0x2c0]
    adc r0, r0, #0x0
    smull r6, r3, r5, r3
    adds r2, r6, r2
    mov r6, r1, lsr #0xc
    adc r1, r3, #0x0
    mov r2, r2, lsr #0xc
    orr r6, r6, r0, lsl #0x14
    orr r2, r2, r1, lsl #0x14
    add r0, r6, r2
    rsb r0, r0, #0x0
    str r0, [sp, #0x8]
    b L_02158c68
L_02158c28:
    ldr r0, [r9, #0x2b8]
    rsb r1, r10, #0x0
    smull r6, r0, r1, r0
    mov r2, #0x800
    adds r1, r6, r2
    ldr r3, [r9, #0x2c0]
    adc r0, r0, #0x0
    smull r6, r3, r5, r3
    adds r2, r6, r2
    mov r6, r1, lsr #0xc
    adc r1, r3, #0x0
    mov r2, r2, lsr #0xc
    orr r6, r6, r0, lsl #0x14
    orr r2, r2, r1, lsl #0x14
    add r0, r6, r2
    str r0, [sp, #0x8]
L_02158c68:
    add r2, sp, #0x3c
    add r0, r9, #0x2a0
    add r1, r9, #0x2b8
    bl func_02069634
    ldrsh r0, [r7, #0x2]
    mov r6, #0x0
    cmp r0, #0x0
    ble L_02158e18
    ldr r0, [sp, #0x8]
    str r6, [sp, #0x24]
    rsb r0, r0, #0x0
    str r0, [sp, #0x20]
    mov r0, #0x3
    str r0, [sp, #0x28]
    mov r0, #0xf
    mov r11, #0x1
    str r0, [sp, #0x2c]
L_02158cac:
    ldr r0, [r9, #0x498]
    cmp r6, r0
    beq L_02158e00
    mov r2, r6
    cmp r6, #0x0
    ldrsh r1, [r7, #0x2]
    ldrlt r2, [sp, #0x24]
    cmp r2, r1
    subge r0, r1, #0x1
    movge r0, r0, lsl #0x10
    movge r2, r0, asr #0x10
    ldr r0, [r8, #0x34]
    cmp r0, #0x0
    bne L_02158d04
    ldr r0, =data_0214b47c
    ldrsh r1, [r7, #0x0]
    ldr r0, [r0, #0x0]
    ldr r3, [r0, #0x1c]
    mov r0, #0x44
    add r1, r1, r2
    smlabb r4, r1, r0, r3
    b L_02158d30
L_02158d04:
    cmp r0, #0x1
    bne L_02158d30
    ldr r0, =data_0214b47c
    ldrsh r4, [r7, #0x0]
    ldr r0, [r0, #0x0]
    mov r3, #0x44
    add r1, r4, r1
    sub r1, r1, #0x1
    ldr r0, [r0, #0x1c]
    sub r1, r1, r2
    smlabb r4, r1, r3, r0
L_02158d30:
    ldr r0, [r4, #0x24]
    cmp r0, #0x0
    beq L_02158e00
    add ip, sp, #0x54
    ldmia r4, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    ldr r0, [sp, #0x5c]
    ldr r1, [sp, #0x54]
    sub lr, r0, r10
    add r0, sp, #0x54
    sub ip, r1, r5
    ldmia r0, {r0, r1, r2}
    str ip, [sp, #0x54]
    add ip, sp, #0x48
    stmia ip, {r0, r1, r2}
    ldr r1, [sp, #0x48]
    ldr r0, [sp, #0x50]
    add r1, r1, r5
    add r0, r0, r10
    str r1, [sp, #0x48]
    str r0, [sp, #0x50]
    add r3, sp, #0x3c
    mov r0, ip
    add r1, sp, #0x54
    add r2, r9, #0x2a0
    str lr, [sp, #0x5c]
    bl func_0200b424
    cmp r0, #0x0
    beq L_02158e00
    mov r1, r11, lsl r6
    ldr r0, [r9, #0x494]
    cmp r0, r1
    bgt L_02158dd0
    ands r0, r0, r1
    bne L_02158dd0
    ands r0, r6, #0x1
    ldrne r0, [sp, #0x20]
    ldreq r0, [sp, #0x8]
    cmp r0, #0x0
    ble L_02158de0
L_02158dd0:
    ldr r2, [r9, #0x494]
    ldrsh r0, [r7, #0x2]
    orr r0, r2, r11, lsl r0
    str r0, [r9, #0x494]
L_02158de0:
    ldr r2, [r9, #0x494]
    mov r0, r9
    orr r1, r2, r1
    str r1, [r9, #0x494]
    ldr r1, [sp, #0x28]
    ldr r2, [sp, #0x2c]
    str r6, [r9, #0x498]
    bl func_02027db0
L_02158e00:
    add r0, r6, #0x1
    mov r0, r0, lsl #0x10
    mov r6, r0, asr #0x10
    ldrsh r0, [r7, #0x2]
    cmp r6, r0
    blt L_02158cac
L_02158e18:
    mov r0, r9
    bl func_02029204
    ldr r0, [sp, #0xc]
    cmp r0, #0x0
    bne L_02158e40
    ldr r0, [sp, #0x10]
    cmp r0, #0x0
    addeq sp, sp, #0x64
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
L_02158e40:
    mov r2, #0x1
    mov r0, r9
    mov r1, r8
    mov r3, r2
    bl func_ov005_0215c3f4
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_02158f3c
L_02158e60:
    b L_02158f3c
    b L_02158e74
    b L_02158ef0
    b L_02158f3c
    b L_02158f18
L_02158e74:
    ldr r1, [r9, #0x494]
    ldr r0, =0x124924
    cmp r1, r0
    bne L_02158ec8
    ldr r0, =data_0214b484
    mov r2, #0x7
    ldr r1, [r0, #0x0]
    strh r2, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x2c]
    add r0, r0, #0x1
    strh r0, [r1, #0x2c]
    ldrsh r0, [r1, #0x2c]
    cmp r0, #0x5
    blt L_02158ebc
    mov r0, #0x3
    bl func_020af298
    b L_02158f3c
L_02158ebc:
    mov r0, #0x2
    bl func_020af298
    b L_02158f3c
L_02158ec8:
    ldr r0, =data_0214b484
    mov r3, #0x8
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    strh r3, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    strh r2, [r1, #0x2c]
    bl func_020af298
    b L_02158f3c
L_02158ef0:
    ldr r0, =data_0214b484
    mov r3, #0x8
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    strh r3, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    strh r2, [r1, #0x2c]
    bl func_020af298
    b L_02158f3c
L_02158f18:
    ldr r0, =data_0214b484
    mov r3, #0x9
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    strh r3, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    strh r2, [r1, #0x2c]
    bl func_020af298
L_02158f3c:
    mov r2, #0x0
    mov r0, r9
    mov r1, r8
    mov r3, r2
    bl func_ov005_0215c3f4
    mov r0, r9
    bl func_ov005_0215cf60
    add sp, sp, #0x64
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

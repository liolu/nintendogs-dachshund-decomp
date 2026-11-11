#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200b270();
extern void func_0200b4c0();
extern void func_0200c488();
extern void func_020266e8();
extern void func_02026c14();
extern void func_02027dd8();
extern void func_02027e3c();
extern void func_02028114();
extern void func_02029248();
extern void func_02036188();
extern void func_02036c18();
extern void func_02037130();
extern void func_02037e08();
extern void func_02038514();
extern void func_0203e5ac();
extern void func_0206823c();
extern void func_020e1f90();
extern void func_02114564();
extern void func_ov006_0215e870();
extern void func_ov006_0215f3e4();
extern char data_02124e68[];
extern char data_0214da7c[];
extern char data_0214da80[];
extern char data_0214da84[];
extern char data_0215a064[];
// clang-format off
asm void func_ov006_0215a8e8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x64
    mov r1, #0x0
    str r1, [sp, #0xc]
    ldr r2, [sp, #0xc]
    mov r9, r0
    mov r1, #0x3
    str r2, [sp, #0x10]
    bl func_02027e3c
    mov r6, r0
    mov r0, r9
    bl func_02036188
    movs r8, r0
    beq L_0215a964
    ldr r1, [r8, #0x2c]
    ldr r0, [r8, #0x30]
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0200c488
    str r0, [sp, #0x14]
    cmp r0, #0x0
    beq L_0215a964
    ldr r1, =data_0214da7c
    ldr r2, [r0, #0x20]
    ldr r1, [r1, #0x0]
    mov r0, #0x24
    smulbb r0, r2, r0
    ldr r1, [r1, #0x18]
    adds r7, r1, r0
    movne r0, #0x1
    bne L_0215a968
L_0215a964:
    mov r0, #0x0
L_0215a968:
    cmp r0, #0x0
    beq L_0215b28c
    cmp r6, #0x3e8
    movlt r0, #0x1
    strlt r0, [r9, #0x46c]
    ldr r0, [r9, #0x46c]
    cmp r0, #0x0
    beq L_0215a99c
    cmp r0, #0x1
    beq L_0215ad4c
    cmp r0, #0x2
    beq L_0215aedc
    b L_0215b014
L_0215a99c:
    ldr ip, [r9, #0x464]
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
    bne L_0215a9f0
    ldr r0, =data_0214da7c
    ldrsh r10, [r7, #0x0]
    ldr r11, [r0, #0x0]
    mov r0, #0x44
    add r3, r10, r3
    ldr r10, [r11, #0x1c]
    smlabb r0, r3, r0, r10
    str r0, [sp, #0x18]
    b L_0215aa20
L_0215a9f0:
    cmp r1, #0x1
    bne L_0215aa20
    ldr r0, =data_0214da7c
    ldrsh r11, [r7, #0x0]
    ldr r0, [r0, #0x0]
    mov r10, #0x44
    add r11, r11, r2
    sub r11, r11, #0x1
    ldr r0, [r0, #0x1c]
    sub r3, r11, r3
    smlabb r0, r3, r10, r0
    str r0, [sp, #0x18]
L_0215aa20:
    add r0, ip, #0x1
    mov r0, r0, lsl #0x10
    movs r3, r0, asr #0x10
    movmi r3, #0x0
    cmp r3, r2
    subge r0, r2, #0x1
    movge r0, r0, lsl #0x10
    movge r3, r0, asr #0x10
    cmp r1, #0x0
    bne L_0215aa68
    ldr r0, =data_0214da7c
    ldrsh r5, [r7, #0x0]
    ldr r10, [r0, #0x0]
    mov r0, #0x44
    add r3, r5, r3
    ldr r5, [r10, #0x1c]
    smlabb r5, r3, r0, r5
    b L_0215aa94
L_0215aa68:
    cmp r1, #0x1
    bne L_0215aa94
    ldrsh r10, [r7, #0x0]
    ldr r0, =data_0214da7c
    mov r5, #0x44
    ldr r0, [r0, #0x0]
    add r10, r10, r2
    ldr r0, [r0, #0x1c]
    sub r10, r10, #0x1
    sub r3, r10, r3
    smlabb r5, r3, r5, r0
L_0215aa94:
    sub r3, r2, #0x1
    mov r0, r3, lsl #0x10
    movs r0, r0, asr #0x10
    movmi r0, #0x0
    cmp r0, r2
    movge r0, r3, lsl #0x10
    movge r0, r0, asr #0x10
    cmp r1, #0x0
    bne L_0215aadc
    ldr r1, =data_0214da7c
    ldrsh r2, [r7, #0x0]
    ldr r3, [r1, #0x0]
    mov r1, #0x44
    add r0, r2, r0
    ldr r2, [r3, #0x1c]
    smlabb r0, r0, r1, r2
    str r0, [sp, #0x1c]
    b L_0215ab0c
L_0215aadc:
    cmp r1, #0x1
    bne L_0215ab0c
    ldrsh r10, [r7, #0x0]
    ldr r3, =data_0214da7c
    mov r1, #0x44
    add r2, r10, r2
    sub r2, r2, #0x1
    ldr r3, [r3, #0x0]
    sub r0, r2, r0
    ldr r2, [r3, #0x1c]
    smlabb r0, r0, r1, r2
    str r0, [sp, #0x1c]
L_0215ab0c:
    ldr r0, [sp, #0x1c]
    add r3, r9, #0x3b4
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
    bl func_02028114
    mov r5, r0
    mov r0, r9
    mov r1, #0x3
    bl func_02027e3c
    mov r1, r0
    mov r0, r9
    bl func_02038514
    mov r2, r0
    mov r0, r9
    mov r1, #0x100
    bl func_02036c18
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
    bge L_0215abb8
    ldr r0, [r9, #0x464]
    add r0, r0, #0x1
    str r0, [r9, #0x464]
    ldrsh r0, [r7, #0x2]
    ldr r1, [r9, #0x464]
    cmp r1, r0
    movge r0, #0x1
    strge r0, [sp, #0xc]
L_0215abb8:
    ldr r1, [r9, #0x464]
    cmp r1, #0x3
    blt L_0215b014
    ldrsh r0, [r7, #0x2]
    sub r0, r0, #0x3
    cmp r1, r0
    bge L_0215b014
    ldr r0, =data_0214da84
    ldr r3, =data_0215a064
    ldr r0, [r0, #0x0]
    add r5, sp, #0x30
    add r0, r0, #0x74
    ldmia r0, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
    ldr r0, [r3, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    beq L_0215ac58
    ldr r0, [sp, #0x14]
    mov r2, #0x32000
    ldrh r1, [r0, #0x4]
    mov r0, #0xa000
    mov r1, r1, asr #0x4
    mov r3, r1, lsl #0x1
    str r0, [sp, #0x0]
    add r0, r3, #0x1
    str r2, [sp, #0x4]
    ldr r1, =data_02124e68
    mov r2, r3, lsl #0x1
    mov r0, r0, lsl #0x1
    ldrsh r3, [r1, r0]
    ldrsh r2, [r1, r2]
    ldr r1, [sp, #0x14]
    mov r0, r5
    add r1, r1, #0x8
    bl func_0200b270
    cmp r0, #0x0
    moveq r0, #0x1
    streq r0, [r9, #0x46c]
    beq L_0215b014
L_0215ac58:
    ldr r5, =data_0214da84
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
    bne L_0215b014
    ldr r0, =0x1388
    cmp r6, r0
    bge L_0215acd8
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
    blt L_0215ad28
L_0215acd8:
    ldr r0, =0x1388
    cmp r6, r0
    blt L_0215b014
    ldr r0, =data_0214da84
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
    bge L_0215b014
L_0215ad28:
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x8
    bl func_0203e5ac
    mov r0, r9
    bl func_02026c14
    mov r0, #0x2
    str r0, [r9, #0x46c]
    b L_0215b014
L_0215ad4c:
    add r0, r9, #0x100
    ldrsh r1, [r0, #0x48]
    cmp r1, #0x11
    bne L_0215ad64
    mov r3, #0x120
    b L_0215ad70
L_0215ad64:
    mov r1, #0x12
    strh r1, [r0, #0x48]
    mov r3, #0x140
L_0215ad70:
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    beq L_0215ad9c
    ldr r0, =data_0214da84
    add r5, r9, #0x26c
    ldr r0, [r0, #0x0]
    add r0, r0, #0x74
    ldmia r0, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
L_0215ad9c:
    add r0, r9, #0x26c
    add r10, r9, #0x3b4
    ldmia r0, {r0, r1, r2}
    stmia r10, {r0, r1, r2}
    add r5, r9, #0x278
    ldmia r10, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
    mov r1, r3
    mov r0, r9
    bl func_02037130
    cmp r6, #0x1f4
    bge L_0215addc
    mov r0, r9
    mov r1, #0x0
    bl func_02037e08
    b L_0215ade8
L_0215addc:
    mov r0, r9
    mov r1, #0x1
    bl func_02037e08
L_0215ade8:
    ldrh r0, [r9, #0xfc]
    cmp r0, #0x64
    bls L_0215ae48
    ldr r0, [sp, #0x14]
    mov r2, #0x32000
    ldrh r1, [r0, #0x4]
    mov r0, #0xf000
    mov r1, r1, asr #0x4
    mov r3, r1, lsl #0x1
    str r0, [sp, #0x0]
    add r0, r3, #0x1
    str r2, [sp, #0x4]
    ldr r1, =data_02124e68
    mov r2, r3, lsl #0x1
    mov r0, r0, lsl #0x1
    ldrsh r3, [r1, r0]
    ldrsh r2, [r1, r2]
    ldr r1, [sp, #0x14]
    add r0, r9, #0x2a0
    add r1, r1, #0x8
    bl func_0200b270
    cmp r0, #0x0
    moveq r0, #0x1
    streq r0, [sp, #0x10]
L_0215ae48:
    ldr r0, =data_0215a064
    ldr r1, [r0, #0x0]
    ldrh r1, [r1, #0x84]
    ands r1, r1, #0x1
    bne L_0215aeb8
    ldr r1, [r9, #0x468]
    add r1, r1, #0x1
    str r1, [r9, #0x468]
    ldr r1, [r9, #0x468]
    cmp r1, #0x64
    ble L_0215ae8c
    ldr r0, [r0, #0x0]
    add r3, r9, #0x3b4
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
L_0215ae8c:
    ldr r0, [r9, #0x468]
    cmp r0, #0xc8
    ble L_0215b014
    mov r0, r9
    mov r1, #0x1
    mov r2, #0x6
    bl func_0203e5ac
    add r1, r9, #0x97
    mov r0, #0x2
    swpb r0, r0, [r1]
    b L_0215b014
L_0215aeb8:
    mov r0, r9
    mov r1, #0x1
    mov r2, #0x0
    bl func_0203e5ac
    add r1, r9, #0x97
    mov r2, #0x0
    swpb r0, r2, [r1]
    str r2, [r9, #0x468]
    b L_0215b014
L_0215aedc:
    ldr r0, =data_0215a064
    add r3, r9, #0x3b4
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [r9, #0x468]
    add r0, r0, #0x1
    str r0, [r9, #0x468]
    ldr r0, [r9, #0x468]
    cmp r0, #0xc8
    movgt r0, #0x1
    strgt r0, [r9, #0x46c]
    bgt L_0215b014
    cmp r0, #0x3c
    ble L_0215b014
    ldr r0, [r9, #0x464]
    ldrsh r1, [r7, #0x2]
    add r0, r0, #0x1
    mov r0, r0, lsl #0x10
    mov r6, r0, asr #0x10
    cmp r6, r1
    bge L_0215b014
    mov r10, #0x0
    mov r11, #0x24000
L_0215af44:
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
    bne L_0215af90
    ldr r0, =data_0214da7c
    ldrsh r1, [r7, #0x0]
    ldr r0, [r0, #0x0]
    ldr r3, [r0, #0x1c]
    mov r0, #0x44
    add r1, r1, r2
    smlabb r5, r1, r0, r3
    b L_0215afbc
L_0215af90:
    cmp r0, #0x1
    bne L_0215afbc
    ldr r0, =data_0214da7c
    ldrsh r5, [r7, #0x0]
    ldr r0, [r0, #0x0]
    mov r3, #0x44
    add r1, r5, r1
    sub r1, r1, #0x1
    ldr r0, [r0, #0x1c]
    sub r1, r1, r2
    smlabb r5, r1, r3, r0
L_0215afbc:
    ldr r0, =data_0214da80
    mov r1, r5
    ldr r0, [r0, #0x0]
    mov r2, r11
    bl func_02114564
    cmp r0, #0x0
    beq L_0215affc
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x11
    bl func_0203e5ac
    mov r0, r9
    bl func_020266e8
    mov r0, #0x0
    str r0, [r9, #0x46c]
    b L_0215b014
L_0215affc:
    add r0, r6, #0x1
    mov r0, r0, lsl #0x10
    mov r6, r0, asr #0x10
    ldrsh r0, [r7, #0x2]
    cmp r6, r0
    blt L_0215af44
L_0215b014:
    ldr r0, [sp, #0x14]
    ldr r1, [r8, #0x34]
    ldrh r0, [r0, #0x4]
    ldr r5, =data_02124e68
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
    beq L_0215b09c
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
    b L_0215b0dc
L_0215b09c:
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
L_0215b0dc:
    add r2, sp, #0x3c
    add r0, r9, #0x2a0
    add r1, r9, #0x2b8
    bl func_0206823c
    ldrsh r0, [r7, #0x2]
    mov r6, #0x0
    cmp r0, #0x0
    ble L_0215b28c
    ldr r0, [sp, #0x8]
    str r6, [sp, #0x24]
    rsb r0, r0, #0x0
    str r0, [sp, #0x20]
    mov r0, #0x3
    str r0, [sp, #0x28]
    mov r0, #0xf
    mov r11, #0x1
    str r0, [sp, #0x2c]
L_0215b120:
    ldr r0, [r9, #0x474]
    cmp r6, r0
    beq L_0215b274
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
    bne L_0215b178
    ldr r0, =data_0214da7c
    ldrsh r1, [r7, #0x0]
    ldr r0, [r0, #0x0]
    ldr r3, [r0, #0x1c]
    mov r0, #0x44
    add r1, r1, r2
    smlabb r4, r1, r0, r3
    b L_0215b1a4
L_0215b178:
    cmp r0, #0x1
    bne L_0215b1a4
    ldr r0, =data_0214da7c
    ldrsh r4, [r7, #0x0]
    ldr r0, [r0, #0x0]
    mov r3, #0x44
    add r1, r4, r1
    sub r1, r1, #0x1
    ldr r0, [r0, #0x1c]
    sub r1, r1, r2
    smlabb r4, r1, r3, r0
L_0215b1a4:
    ldr r0, [r4, #0x24]
    cmp r0, #0x0
    beq L_0215b274
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
    bl func_0200b4c0
    cmp r0, #0x0
    beq L_0215b274
    mov r1, r11, lsl r6
    ldr r0, [r9, #0x470]
    cmp r0, r1
    bgt L_0215b244
    ands r0, r0, r1
    bne L_0215b244
    ands r0, r6, #0x1
    ldrne r0, [sp, #0x20]
    ldreq r0, [sp, #0x8]
    cmp r0, #0x0
    ble L_0215b254
L_0215b244:
    ldr r2, [r9, #0x470]
    ldrsh r0, [r7, #0x2]
    orr r0, r2, r11, lsl r0
    str r0, [r9, #0x470]
L_0215b254:
    ldr r2, [r9, #0x470]
    mov r0, r9
    orr r1, r2, r1
    str r1, [r9, #0x470]
    ldr r1, [sp, #0x28]
    ldr r2, [sp, #0x2c]
    str r6, [r9, #0x474]
    bl func_02027dd8
L_0215b274:
    add r0, r6, #0x1
    mov r0, r0, lsl #0x10
    mov r6, r0, asr #0x10
    ldrsh r0, [r7, #0x2]
    cmp r6, r0
    blt L_0215b120
L_0215b28c:
    mov r0, r9
    bl func_02029248
    ldr r0, [sp, #0xc]
    cmp r0, #0x0
    bne L_0215b2b4
    ldr r0, [sp, #0x10]
    cmp r0, #0x0
    addeq sp, sp, #0x64
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
L_0215b2b4:
    mov r2, #0x1
    mov r0, r9
    mov r1, r8
    mov r3, r2
    bl func_ov006_0215e870
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_0215b3b0
L_0215b2d4:
    b L_0215b3b0
    b L_0215b2e8
    b L_0215b364
    b L_0215b3b0
    b L_0215b38c
L_0215b2e8:
    ldr r1, [r9, #0x470]
    ldr r0, =0x124924
    cmp r1, r0
    bne L_0215b33c
    ldr r0, =data_0214da84
    mov r2, #0x7
    ldr r1, [r0, #0x0]
    strh r2, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x2c]
    add r0, r0, #0x1
    strh r0, [r1, #0x2c]
    ldrsh r0, [r1, #0x2c]
    cmp r0, #0x5
    blt L_0215b330
    mov r0, #0x3
    bl func_020e1f90
    b L_0215b3b0
L_0215b330:
    mov r0, #0x2
    bl func_020e1f90
    b L_0215b3b0
L_0215b33c:
    ldr r0, =data_0214da84
    mov r3, #0x8
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    strh r3, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    strh r2, [r1, #0x2c]
    bl func_020e1f90
    b L_0215b3b0
L_0215b364:
    ldr r0, =data_0214da84
    mov r3, #0x8
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    strh r3, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    strh r2, [r1, #0x2c]
    bl func_020e1f90
    b L_0215b3b0
L_0215b38c:
    ldr r0, =data_0214da84
    mov r3, #0x9
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    strh r3, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    strh r2, [r1, #0x2c]
    bl func_020e1f90
L_0215b3b0:
    mov r2, #0x0
    mov r0, r9
    mov r1, r8
    mov r3, r2
    bl func_ov006_0215e870
    mov r0, r9
    bl func_ov006_0215f3e4
    add sp, sp, #0x64
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

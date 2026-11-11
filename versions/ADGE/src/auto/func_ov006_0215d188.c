#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200b4c0();
extern void func_0200c488();
extern void func_02027dd8();
extern void func_02029248();
extern void func_0203535c();
extern void func_02036188();
extern void func_02037130();
extern void func_0203910c();
extern void func_0206823c();
extern void func_020e1f90();
extern void func_ov006_0215e870();
extern void func_ov006_0215f3e4();
extern void func_ov006_02160264();
extern void func_ov006_021609f4();
extern char data_02124e68[];
extern char data_0214da7c[];
extern char data_0214da84[];
extern char data_0215a044[];
extern char data_0215a064[];
// clang-format off
asm void func_ov006_0215d188(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x8c
    mov r1, #0x0
    mov r9, r0
    str r1, [sp, #0x0]
    bl func_02036188
    str r0, [sp, #0x4]
    cmp r0, #0x0
    beq L_0215d1f0
    ldr r1, [r0, #0x2c]
    ldr r0, [r0, #0x30]
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0200c488
    str r0, [sp, #0x8]
    cmp r0, #0x0
    beq L_0215d1f0
    ldr r1, =data_0214da7c
    ldr r2, [r0, #0x20]
    ldr r1, [r1, #0x0]
    mov r0, #0x24
    smulbb r0, r2, r0
    ldr r1, [r1, #0x18]
    adds r0, r1, r0
    movne r0, #0x1
    bne L_0215d1f4
L_0215d1f0:
    mov r0, #0x0
L_0215d1f4:
    cmp r0, #0x0
    beq L_0215d5d0
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    beq L_0215d294
    ldr r0, =data_0214da84
    add r4, sp, #0x40
    ldr r0, [r0, #0x0]
    mov r3, #0x800
    add r0, r0, #0x74
    ldmia r0, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
    ldr r4, [r9, #0x26c]
    ldr r0, [sp, #0x40]
    sub r1, r0, r4
    mov r0, r1, asr #0x1f
    mov r0, r0, lsl #0x8
    mov r2, r1, lsl #0x8
    adds r2, r2, r3
    orr r0, r0, r1, lsr #0x18
    adc r0, r0, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r4, r1
    str r0, [r9, #0x26c]
    ldr r4, [r9, #0x274]
    ldr r0, [sp, #0x48]
    sub r1, r0, r4
    mov r0, r1, asr #0x1f
    mov r0, r0, lsl #0x8
    mov r2, r1, lsl #0x8
    adds r2, r2, r3
    orr r0, r0, r1, lsr #0x18
    adc r0, r0, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, r4, r1
    str r0, [r9, #0x274]
L_0215d294:
    mov r0, r9
    bl func_0203910c
    mov r0, r9
    mov r1, #0x300
    bl func_02037130
    ldr r3, [sp, #0x4]
    add r2, sp, #0x7c
    ldr r3, [r3, #0x34]
    add r0, r9, #0x2a0
    add r1, r9, #0x2b8
    str r3, [sp, #0xc]
    bl func_0206823c
    ldr r0, [sp, #0x8]
    ldr r2, =data_02124e68
    ldrh r1, [r0, #0x4]
    ldrh r0, [r0, #0x0]
    mov r1, r1, asr #0x4
    mov r3, r1, lsl #0x1
    add r1, r3, #0x1
    cmp r0, #0x2
    mov r0, r1, lsl #0x1
    mov r3, r3, lsl #0x1
    ldrsh r1, [r2, r3]
    ldrsh r0, [r2, r0]
    mov r11, r1, asr #0x1
    mov r7, r0, asr #0x1
    bne L_0215d388
    mvn r0, #0x4
    mov r1, #0x5
    str r0, [sp, #0x3c]
    str r1, [sp, #0x38]
    ldr r0, [sp, #0x4]
    mov r2, #0x2
    ldr r0, [r0, #0x2c]
    str r2, [sp, #0x0]
    mov r0, r0, lsl #0x10
    mov r2, #0x1e
    mov r1, #0x0
    mov r0, r0, asr #0x10
    str r2, [sp, #0x10]
    bl func_ov006_021609f4
    cmp r0, #0x0
    ldrne r1, [r9, #0x464]
    movne r0, #0x1
    subne r1, r1, #0x1
    strne r1, [r9, #0x464]
    strne r0, [r9, #0x470]
    ldr r0, [sp, #0x4]
    mov r1, #0x1
    ldr r0, [r0, #0x2c]
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    bl func_ov006_021609f4
    cmp r0, #0x0
    beq L_0215d3d0
    ldr r1, [r9, #0x464]
    mov r0, #0x1
    sub r1, r1, #0x1
    str r1, [r9, #0x464]
    str r0, [r9, #0x470]
    b L_0215d3d0
L_0215d388:
    mov r0, #0x0
    str r0, [sp, #0x38]
    str r0, [sp, #0x3c]
    ldr r0, [sp, #0x4]
    ldr r1, [r0, #0x2c]
    mov r0, #0x1
    str r0, [sp, #0x0]
    mov r0, r1, lsl #0x10
    mov r1, #0x28
    mov r0, r0, asr #0x10
    str r1, [sp, #0x10]
    bl func_ov006_02160264
    cmp r0, #0x0
    ldrne r1, [r9, #0x464]
    movne r0, #0x1
    subne r1, r1, #0x1
    strne r1, [r9, #0x464]
    strne r0, [r9, #0x470]
L_0215d3d0:
    ldr r0, [sp, #0x4]
    ldrsb r1, [r9, #0x89]
    ldr r0, [r0, #0x20]
    cmp r1, r0
    ble L_0215d3fc
    ldr r0, [sp, #0x4]
    ldr r0, [r0, #0x24]
    cmp r0, #0x0
    ldrge r0, [sp, #0x4]
    ldrge r0, [r0, #0x38]
    strge r0, [sp, #0xc]
L_0215d3fc:
    ldr r0, [sp, #0x0]
    mov r8, #0x0
    cmp r0, #0x0
    ble L_0215d5d0
    mov r0, r7, lsl #0x3
    str r0, [sp, #0x14]
    mov r0, r11, lsl #0x3
    str r0, [sp, #0x18]
    mov r0, r7, asr #0x1f
    str r0, [sp, #0x20]
    mov r0, r11, asr #0x1f
    add r6, sp, #0x64
    add r5, sp, #0x4c
    str r0, [sp, #0x28]
    mov r0, #0x1
    mov r4, r6
    mov r10, r5
    str r8, [sp, #0x30]
    str r0, [sp, #0x2c]
    str r8, [sp, #0x34]
L_0215d44c:
    ldr r0, [sp, #0x8]
    ldr ip, [sp, #0x14]
    add r0, r0, #0x8
    ldmia r0, {r0, r1, r2}
    stmia r6, {r0, r1, r2}
    ldmia r6, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
    add r0, sp, #0x38
    ldr r2, [r0, r8, lsl #0x2]
    ldr r0, [r5, #0x0]
    mul r1, r11, r2
    sub ip, r1, ip
    add r0, r0, ip
    str r0, [r5, #0x0]
    ldr r0, [sp, #0x14]
    mul r2, r7, r2
    ldr ip, [sp, #0x18]
    add r1, r0, r1
    ldr r0, [r5, #0x8]
    add ip, ip, r2
    add r0, r0, ip
    str r0, [r5, #0x8]
    ldr ip, [r6, #0x0]
    ldr r0, [sp, #0x18]
    add r1, ip, r1
    str r1, [r6, #0x0]
    sub r2, r2, r0
    ldr ip, [r6, #0x8]
    add r3, sp, #0x7c
    add r2, ip, r2
    str r2, [r6, #0x8]
    mov r0, r10
    mov r1, r4
    add r2, r9, #0x2a0
    bl func_0200b4c0
    cmp r0, #0x0
    beq L_0215d5a8
    ldr r1, [r9, #0x2b8]
    mov lr, #0x800
    mov ip, r1, asr #0x1f
    umull r3, r2, r11, r1
    mla r2, r11, ip, r2
    ldr ip, [sp, #0x28]
    ldr r0, [r9, #0x2c0]
    mla r2, ip, r1, r2
    adds r3, r3, lr
    adc r1, r2, #0x0
    mov ip, r3, lsr #0xc
    orr ip, ip, r1, lsl #0x14
    umull r3, r2, r7, r0
    mov r1, r0, asr #0x1f
    mla r2, r7, r1, r2
    ldr r1, [sp, #0x20]
    adds r3, r3, lr
    mla r2, r1, r0, r2
    adc r0, r2, #0x0
    mov r1, r3, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r0, ip, r1
    ldr r1, =data_0215a044
    cmp r0, #0x0
    ldr r1, [r1, #0x0]
    ldrgt r0, [sp, #0x2c]
    ldrsh r1, [r1, #0x0]
    ldrle r0, [sp, #0x30]
    cmp r1, #0x0
    beq L_0215d580
    ldr r1, [sp, #0xc]
    cmp r1, #0x0
    bne L_0215d56c
    cmp r0, #0x0
    bne L_0215d580
L_0215d56c:
    ldr r1, [sp, #0xc]
    cmp r1, #0x1
    bne L_0215d58c
    cmp r0, #0x0
    bne L_0215d58c
L_0215d580:
    ldr r0, [r9, #0x464]
    add r0, r0, #0x1
    str r0, [r9, #0x464]
L_0215d58c:
    ldr r1, [sp, #0x34]
    ldr r2, [sp, #0x10]
    mov r0, r9
    bl func_02027dd8
    ldr r0, [r9, #0x468]
    add r0, r0, #0x1
    str r0, [r9, #0x468]
L_0215d5a8:
    add r0, r8, #0x1
    mov r0, r0, lsl #0x10
    mov r8, r0, asr #0x10
    ldr r0, [sp, #0x0]
    add r6, r6, #0xc
    add r5, r5, #0xc
    add r4, r4, #0xc
    add r10, r10, #0xc
    cmp r8, r0
    blt L_0215d44c
L_0215d5d0:
    mov r0, r9
    bl func_02029248
    ldr r1, [r9, #0x468]
    ldr r0, [sp, #0x0]
    cmp r1, r0
    addge r0, r1, #0x1
    strge r0, [r9, #0x468]
    ldr r0, [r9, #0x46c]
    cmp r0, #0x0
    bne L_0215d734
    ldr r0, [sp, #0x0]
    ldr r1, [r9, #0x468]
    add r0, r0, #0x7
    cmp r1, r0
    bgt L_0215d634
    mov r0, r9
    bl func_0203535c
    cmp r0, #0x0
    bne L_0215d634
    ldr r0, [r9, #0x470]
    cmp r0, #0x0
    beq L_0215d734
    ldrh r0, [r9, #0xfc]
    cmp r0, #0x1e
    bls L_0215d734
L_0215d634:
    mov r2, #0x1
    ldr r1, [sp, #0x4]
    mov r0, r9
    mov r3, r2
    str r2, [r9, #0x46c]
    bl func_ov006_0215e870
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_0215d734
L_0215d658:
    b L_0215d734
    b L_0215d66c
    b L_0215d6e8
    b L_0215d734
    b L_0215d710
L_0215d66c:
    ldr r1, [r9, #0x464]
    ldr r0, [sp, #0x0]
    cmp r1, r0
    bne L_0215d6c0
    ldr r0, =data_0214da84
    mov r2, #0x1
    ldr r1, [r0, #0x0]
    strh r2, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x2c]
    add r0, r0, #0x1
    strh r0, [r1, #0x2c]
    ldrsh r0, [r1, #0x2c]
    cmp r0, #0x5
    blt L_0215d6b4
    mov r0, #0x3
    bl func_020e1f90
    b L_0215d734
L_0215d6b4:
    mov r0, #0x2
    bl func_020e1f90
    b L_0215d734
L_0215d6c0:
    ldr r0, =data_0214da84
    mov r3, #0x2
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    strh r3, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    strh r2, [r1, #0x2c]
    bl func_020e1f90
    b L_0215d734
L_0215d6e8:
    ldr r0, =data_0214da84
    mov r3, #0x2
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    strh r3, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    strh r2, [r1, #0x2c]
    bl func_020e1f90
    b L_0215d734
L_0215d710:
    ldr r0, =data_0214da84
    mov r3, #0x9
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    strh r3, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    strh r2, [r1, #0x2c]
    bl func_020e1f90
L_0215d734:
    mov r0, r9
    bl func_0203535c
    cmp r0, #0x0
    addeq sp, sp, #0x8c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r2, #0x0
    ldr r1, [sp, #0x4]
    mov r0, r9
    mov r3, r2
    bl func_ov006_0215e870
    ldrb r1, [r9, #0xb0]
    add r2, r9, #0xb0
    mov r0, r9
    orr r1, r1, #0x4
    swpb r1, r1, [r2]
    bl func_ov006_0215f3e4
    add sp, sp, #0x8c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

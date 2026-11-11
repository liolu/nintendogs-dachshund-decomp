#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200b424();
extern void func_0200c3ec();
extern void func_02027db0();
extern void func_02029204();
extern void func_020351a0();
extern void func_02035fd0();
extern void func_02036fbc();
extern void func_02038edc();
extern void func_02069634();
extern void func_020af298();
extern void func_ov005_0215c3f4();
extern void func_ov005_0215cf60();
extern void func_ov005_0215dde0();
extern void func_ov005_0215e570();
extern char data_02124ae0[];
extern char data_0214b47c[];
extern char data_0214b484[];
extern char data_02153700[];
extern char data_02153720[];
// clang-format off
asm void func_ov005_0215ad0c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x8c
    mov r1, #0x0
    mov r9, r0
    str r1, [sp, #0x0]
    bl func_02035fd0
    str r0, [sp, #0x4]
    cmp r0, #0x0
    beq L_0215ad74
    ldr r1, [r0, #0x2c]
    ldr r0, [r0, #0x30]
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0200c3ec
    str r0, [sp, #0x8]
    cmp r0, #0x0
    beq L_0215ad74
    ldr r1, =data_0214b47c
    ldr r2, [r0, #0x20]
    ldr r1, [r1, #0x0]
    mov r0, #0x24
    smulbb r0, r2, r0
    ldr r1, [r1, #0x18]
    adds r0, r1, r0
    movne r0, #0x1
    bne L_0215ad78
L_0215ad74:
    mov r0, #0x0
L_0215ad78:
    cmp r0, #0x0
    beq L_0215b154
    ldr r0, =data_02153720
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    beq L_0215ae18
    ldr r0, =data_0214b484
    add r4, sp, #0x40
    ldr r0, [r0, #0x0]
    mov r3, #0x800
    add r0, r0, #0x70
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
L_0215ae18:
    mov r0, r9
    bl func_02038edc
    mov r0, r9
    mov r1, #0x300
    bl func_02036fbc
    ldr r3, [sp, #0x4]
    add r2, sp, #0x7c
    ldr r3, [r3, #0x34]
    add r0, r9, #0x2a0
    add r1, r9, #0x2b8
    str r3, [sp, #0xc]
    bl func_02069634
    ldr r0, [sp, #0x8]
    ldr r2, =data_02124ae0
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
    bne L_0215af0c
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
    bl func_ov005_0215e570
    cmp r0, #0x0
    ldrne r1, [r9, #0x488]
    movne r0, #0x1
    subne r1, r1, #0x1
    strne r1, [r9, #0x488]
    strne r0, [r9, #0x494]
    ldr r0, [sp, #0x4]
    mov r1, #0x1
    ldr r0, [r0, #0x2c]
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    bl func_ov005_0215e570
    cmp r0, #0x0
    beq L_0215af54
    ldr r1, [r9, #0x488]
    mov r0, #0x1
    sub r1, r1, #0x1
    str r1, [r9, #0x488]
    str r0, [r9, #0x494]
    b L_0215af54
L_0215af0c:
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
    bl func_ov005_0215dde0
    cmp r0, #0x0
    ldrne r1, [r9, #0x488]
    movne r0, #0x1
    subne r1, r1, #0x1
    strne r1, [r9, #0x488]
    strne r0, [r9, #0x494]
L_0215af54:
    ldr r0, [sp, #0x4]
    ldrsb r1, [r9, #0x89]
    ldr r0, [r0, #0x20]
    cmp r1, r0
    ble L_0215af80
    ldr r0, [sp, #0x4]
    ldr r0, [r0, #0x24]
    cmp r0, #0x0
    ldrge r0, [sp, #0x4]
    ldrge r0, [r0, #0x38]
    strge r0, [sp, #0xc]
L_0215af80:
    ldr r0, [sp, #0x0]
    mov r8, #0x0
    cmp r0, #0x0
    ble L_0215b154
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
L_0215afd0:
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
    bl func_0200b424
    cmp r0, #0x0
    beq L_0215b12c
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
    ldr r1, =data_02153700
    cmp r0, #0x0
    ldr r1, [r1, #0x0]
    ldrgt r0, [sp, #0x2c]
    ldrsh r1, [r1, #0x0]
    ldrle r0, [sp, #0x30]
    cmp r1, #0x0
    beq L_0215b104
    ldr r1, [sp, #0xc]
    cmp r1, #0x0
    bne L_0215b0f0
    cmp r0, #0x0
    bne L_0215b104
L_0215b0f0:
    ldr r1, [sp, #0xc]
    cmp r1, #0x1
    bne L_0215b110
    cmp r0, #0x0
    bne L_0215b110
L_0215b104:
    ldr r0, [r9, #0x488]
    add r0, r0, #0x1
    str r0, [r9, #0x488]
L_0215b110:
    ldr r1, [sp, #0x34]
    ldr r2, [sp, #0x10]
    mov r0, r9
    bl func_02027db0
    ldr r0, [r9, #0x48c]
    add r0, r0, #0x1
    str r0, [r9, #0x48c]
L_0215b12c:
    add r0, r8, #0x1
    mov r0, r0, lsl #0x10
    mov r8, r0, asr #0x10
    ldr r0, [sp, #0x0]
    add r6, r6, #0xc
    add r5, r5, #0xc
    add r4, r4, #0xc
    add r10, r10, #0xc
    cmp r8, r0
    blt L_0215afd0
L_0215b154:
    mov r0, r9
    bl func_02029204
    ldr r1, [r9, #0x48c]
    ldr r0, [sp, #0x0]
    cmp r1, r0
    addge r0, r1, #0x1
    strge r0, [r9, #0x48c]
    ldr r0, [r9, #0x490]
    cmp r0, #0x0
    bne L_0215b2bc
    ldr r0, [sp, #0x0]
    ldr r1, [r9, #0x48c]
    add r0, r0, #0x7
    cmp r1, r0
    bgt L_0215b1bc
    mov r0, r9
    bl func_020351a0
    cmp r0, #0x0
    bne L_0215b1bc
    ldr r0, [r9, #0x494]
    cmp r0, #0x0
    beq L_0215b2bc
    add r0, r9, #0x100
    ldrh r0, [r0, #0xa]
    cmp r0, #0x1e
    bls L_0215b2bc
L_0215b1bc:
    mov r2, #0x1
    ldr r1, [sp, #0x4]
    mov r0, r9
    mov r3, r2
    str r2, [r9, #0x490]
    bl func_ov005_0215c3f4
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_0215b2bc
L_0215b1e0:
    b L_0215b2bc
    b L_0215b1f4
    b L_0215b270
    b L_0215b2bc
    b L_0215b298
L_0215b1f4:
    ldr r1, [r9, #0x488]
    ldr r0, [sp, #0x0]
    cmp r1, r0
    bne L_0215b248
    ldr r0, =data_0214b484
    mov r2, #0x1
    ldr r1, [r0, #0x0]
    strh r2, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    ldrsh r0, [r1, #0x2c]
    add r0, r0, #0x1
    strh r0, [r1, #0x2c]
    ldrsh r0, [r1, #0x2c]
    cmp r0, #0x5
    blt L_0215b23c
    mov r0, #0x3
    bl func_020af298
    b L_0215b2bc
L_0215b23c:
    mov r0, #0x2
    bl func_020af298
    b L_0215b2bc
L_0215b248:
    ldr r0, =data_0214b484
    mov r3, #0x2
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    strh r3, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    strh r2, [r1, #0x2c]
    bl func_020af298
    b L_0215b2bc
L_0215b270:
    ldr r0, =data_0214b484
    mov r3, #0x2
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    strh r3, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    strh r2, [r1, #0x2c]
    bl func_020af298
    b L_0215b2bc
L_0215b298:
    ldr r0, =data_0214b484
    mov r3, #0x9
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    strh r3, [r1, #0x2e]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    strh r2, [r1, #0x2c]
    bl func_020af298
L_0215b2bc:
    mov r0, r9
    bl func_020351a0
    cmp r0, #0x0
    addeq sp, sp, #0x8c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r2, #0x0
    ldr r1, [sp, #0x4]
    mov r0, r9
    mov r3, r2
    bl func_ov005_0215c3f4
    ldrb r1, [r9, #0xc0]
    add r2, r9, #0xc0
    mov r0, r9
    orr r1, r1, #0x4
    swpb r1, r1, [r2]
    bl func_ov005_0215cf60
    add sp, sp, #0x8c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

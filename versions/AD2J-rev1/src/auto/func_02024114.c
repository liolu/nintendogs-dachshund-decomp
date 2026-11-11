#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8930();
extern void func_01ff8958();
extern void func_02009ee4();
extern void func_0200a59c();
extern void func_0200a9c8();
extern void func_0200c3ec();
extern void func_0206902c();
extern void func_02069634();
extern void func_02069668();
extern void func_ov005_0215eea4();
extern char data_0214b47c[];
extern char data_0214b484[];
extern char data_02153704[];
// clang-format off
asm void func_02024114(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xe4
    mov r4, #0x0
    ldr r1, =data_0214b484
    mov r3, r4
    mov r2, r4
L_0202412c:
    cmp r4, #0x0
    blt L_0202413c
    cmp r4, #0x3
    blt L_02024144
L_0202413c:
    mov r0, r3
    b L_02024150
L_02024144:
    ldr r0, [r1, #0x0]
    add r0, r0, r4, lsl #0x2
    ldr r0, [r0, #0x50]
L_02024150:
    cmp r0, #0x0
    strne r2, [r0, #0x940]
    strne r2, [r0, #0x944]
    strne r2, [r0, #0x948]
    strne r2, [r0, #0x93c]
    add r0, r4, #0x1
    mov r0, r0, lsl #0x10
    mov r4, r0, asr #0x10
    cmp r4, #0x3
    blt L_0202412c
    mov r0, #0x0
    str r0, [sp, #0x38]
    mov r0, #0x1000
    str r0, [sp, #0x54]
    ldr r0, [sp, #0x38]
    str r0, [sp, #0x44]
    str r0, [sp, #0x58]
    str r0, [sp, #0x50]
    str r0, [sp, #0x4c]
    str r0, [sp, #0x3c]
    ldr r0, [sp, #0x54]
    rsb r0, r0, #0x0
    str r0, [sp, #0x48]
    mov r0, #0x1
    str r0, [sp, #0x40]
L_020241b4:
    ldr r0, [sp, #0x38]
    cmp r0, #0x0
    blt L_020241c8
    cmp r0, #0x3
    blt L_020241d0
L_020241c8:
    ldr r9, [sp, #0x3c]
    b L_020241e4
L_020241d0:
    ldr r0, =data_0214b484
    ldr r1, [r0, #0x0]
    ldr r0, [sp, #0x38]
    add r0, r1, r0, lsl #0x2
    ldr r9, [r0, #0x50]
L_020241e4:
    cmp r9, #0x0
    beq L_020244cc
    ldr r0, [sp, #0x38]
    add r0, r0, #0x1
    mov r0, r0, lsl #0x10
    mov r7, r0, asr #0x10
    cmp r7, #0x3
    bge L_020244cc
    ldr r1, [sp, #0x40]
    ldr r0, [sp, #0x38]
    mov r0, r1, lsl r0
    str r0, [sp, #0x20]
L_02024214:
    cmp r7, #0x0
    blt L_02024224
    cmp r7, #0x3
    blt L_0202422c
L_02024224:
    ldr r8, [sp, #0x44]
    b L_0202423c
L_0202422c:
    ldr r0, =data_0214b484
    ldr r0, [r0, #0x0]
    add r0, r0, r7, lsl #0x2
    ldr r8, [r0, #0x50]
L_0202423c:
    cmp r8, #0x0
    beq L_020244b8
    ldr r2, [r9, #0x934]
    ldr r0, [r8, #0x934]
    ldr r1, [r8, #0x2d0]
    add r4, r2, r0
    ldr r0, [r9, #0x2d0]
    sub r6, r1, r0
    cmp r6, #0x0
    movgt r0, r6
    rsble r0, r6, #0x0
    cmp r0, r4
    bge L_020244b8
    ldr r1, [r8, #0x2d4]
    ldr r0, [r9, #0x2d4]
    sub r2, r1, r0
    cmp r2, #0x0
    movgt r0, r2
    rsble r0, r2, #0x0
    cmp r0, r4
    bge L_020244b8
    ldr r1, [r8, #0x2d8]
    ldr r0, [r9, #0x2d8]
    sub r5, r1, r0
    cmp r5, #0x0
    movgt r0, r5
    rsble r0, r5, #0x0
    cmp r0, r4
    bge L_020244b8
    mov r0, r6, asr #0x1f
    str r0, [sp, #0x28]
    mov r0, r5, asr #0x1f
    str r0, [sp, #0x30]
    smull r11, r0, r5, r5
    mov r1, #0x800
    adds ip, r11, r1
    adc r11, r0, #0x0
    mov r0, ip, lsr #0xc
    smull r10, r3, r2, r2
    orr r0, r0, r11, lsl #0x14
    smull ip, r11, r6, r6
    adds ip, ip, r1
    adc r11, r11, #0x0
    adds r10, r10, r1
    mov ip, ip, lsr #0xc
    adc r3, r3, #0x0
    mov r10, r10, lsr #0xc
    orr ip, ip, r11, lsl #0x14
    orr r10, r10, r3, lsl #0x14
    add r3, ip, r10
    mov r2, #0x0
    adds r0, r0, r3
    beq L_020244b8
    smull r10, r3, r4, r4
    adds r10, r10, r1
    adc r1, r3, r2
    mov r2, r10, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r0, r2
    bge L_020244b8
    bl func_0206902c
    mov r1, r0
    sub r0, r4, r1
    bl func_01ff8958
    mov r4, r0
    ldrsb r1, [r8, #0xbc]
    ldrsb r0, [r9, #0xbc]
    cmp r0, r1
    bne L_020243ac
    ldr r1, [r9, #0x9e4]
    ldr r0, [r8, #0x9e4]
    ldr r1, [r1, #0x8]
    ldr r0, [r0, #0x8]
    add r0, r1, r0
    bl func_01ff8930
    ldr r2, [r8, #0x9e4]
    mov r1, #0x800
    ldr r3, [r2, #0x8]
    ldr r2, [r9, #0x9e4]
    rsb r3, r3, #0x0
    ldr r2, [r2, #0x8]
    smull r11, r10, r0, r3
    smull r3, r2, r0, r2
    adds r11, r11, r1
    adc r10, r10, #0x0
    adds r0, r3, r1
    mov r1, r11, lsr #0xc
    orr r1, r1, r10, lsl #0x14
    adc r2, r2, #0x0
    mov r0, r0, lsr #0xc
    orr r0, r0, r2, lsl #0x14
    b L_020243d0
L_020243ac:
    cmp r0, r1
    ldrlt r1, [sp, #0x48]
    ldrlt r0, [sp, #0x4c]
    blt L_020243d0
    cmp r0, r1
    ldrgt r1, [sp, #0x50]
    ldrgt r0, [sp, #0x54]
    ldrle r1, [sp, #0x58]
    movle r0, r1
L_020243d0:
    mov r11, r4, asr #0x1f
    umull r10, r3, r6, r4
    mla r3, r6, r11, r3
    ldr r6, [sp, #0x28]
    mov r2, #0x800
    mla r3, r6, r4, r3
    adds r6, r10, r2
    adc r3, r3, #0x0
    mov r10, r6, lsr #0xc
    orr r10, r10, r3, lsl #0x14
    smull r3, r6, r10, r1
    adds r3, r3, r2
    ldr ip, [r9, #0x940]
    adc r6, r6, #0x0
    mov r3, r3, lsr #0xc
    orr r3, r3, r6, lsl #0x14
    add r3, ip, r3
    str r3, [r9, #0x940]
    smull r6, r3, r10, r0
    umull r10, lr, r5, r4
    mla lr, r5, r11, lr
    ldr r5, [sp, #0x30]
    ldr ip, [r9, #0x948]
    mla lr, r5, r4, lr
    adds r4, r10, r2
    adc r5, lr, #0x0
    mov r4, r4, lsr #0xc
    orr r4, r4, r5, lsl #0x14
    smull r10, r5, r4, r1
    smull r1, r0, r4, r0
    adds r10, r10, r2
    adc r4, r5, #0x0
    mov r5, r10, lsr #0xc
    orr r5, r5, r4, lsl #0x14
    add r4, ip, r5
    str r4, [r9, #0x948]
    adds r4, r6, r2
    adc r3, r3, #0x0
    adds r1, r1, r2
    mov r2, r4, lsr #0xc
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    ldr r0, [r8, #0x940]
    orr r2, r2, r3, lsl #0x14
    add r0, r0, r2
    str r0, [r8, #0x940]
    ldr r0, [r8, #0x948]
    add r0, r0, r1
    str r0, [r8, #0x948]
    ldr r1, [r9, #0x93c]
    ldr r0, [sp, #0x40]
    orr r0, r1, r0, lsl r7
    str r0, [r9, #0x93c]
    ldr r1, [r8, #0x93c]
    ldr r0, [sp, #0x20]
    orr r0, r1, r0
    str r0, [r8, #0x93c]
L_020244b8:
    add r0, r7, #0x1
    mov r0, r0, lsl #0x10
    mov r7, r0, asr #0x10
    cmp r7, #0x3
    blt L_02024214
L_020244cc:
    ldr r0, [sp, #0x38]
    add r0, r0, #0x1
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp, #0x38]
    cmp r0, #0x2
    blt L_020241b4
    mov r0, #0x0
    str r0, [sp, #0x34]
    str r0, [sp, #0x88]
    str r0, [sp, #0x94]
    str r0, [sp, #0x90]
    str r0, [sp, #0x5c]
    str r0, [sp, #0x60]
    mov r0, #0x7
    str r0, [sp, #0x6c]
    mov r0, #0x1
    str r0, [sp, #0x84]
    mov r0, #0x3
    str r0, [sp, #0x8c]
    mov r0, #0x8
    str r0, [sp, #0x80]
    ldr r0, [sp, #0x34]
    ldr r10, =data_0214b47c
    str r0, [sp, #0x64]
    str r0, [sp, #0x68]
    mvn r0, #0x0
    str r0, [sp, #0x78]
    ldr r0, [sp, #0x34]
    mov r4, #0x6
    str r0, [sp, #0x7c]
    str r0, [sp, #0xa4]
L_0202454c:
    ldr r0, [sp, #0x34]
    cmp r0, #0x0
    blt L_02024560
    cmp r0, #0x3
    blt L_02024568
L_02024560:
    ldr r6, [sp, #0x5c]
    b L_0202457c
L_02024568:
    ldr r0, =data_0214b484
    ldr r1, [r0, #0x0]
    ldr r0, [sp, #0x34]
    add r0, r1, r0, lsl #0x2
    ldr r6, [r0, #0x50]
L_0202457c:
    cmp r6, #0x0
    beq L_02024c98
    ldrb r0, [r6, #0xc0]
    ands r0, r0, #0x2
    beq L_02024648
    ldr r0, [r10, #0x0]
    ldr r9, [sp, #0x60]
    ldr r0, [r0, #0x20]
    ldrsh r0, [r0, #0x1a]
    cmp r0, #0x0
    ble L_02024648
    ldr r0, =0x93c
    add r8, r6, #0x2a0
    add r5, r6, r0
    add r7, r6, #0x2ac
    add r11, r6, #0x940
L_020245bc:
    mov r0, r4
    mov r1, r9
    bl func_0200c3ec
    cmp r0, #0x0
    beq L_02024628
    ldr r1, [r0, #0x20]
    cmp r1, #0x1
    bne L_02024628
    add r1, r0, #0x8
    str r1, [sp, #0x0]
    ldrh r2, [r0, #0x4]
    mov r1, r7
    mov r3, r11
    str r2, [sp, #0x4]
    ldr r2, [r0, #0x18]
    str r2, [sp, #0x8]
    ldr r2, [r0, #0x14]
    str r2, [sp, #0xc]
    ldr r2, [r0, #0x1c]
    mov r0, r8
    str r2, [sp, #0x10]
    ldr r2, [r6, #0x934]
    bl func_0200a59c
    cmp r0, #0x0
    ldrne r0, [r5, #0x0]
    orrne r0, r0, #0x20000000
    strne r0, [r5, #0x0]
L_02024628:
    add r0, r9, #0x1
    mov r0, r0, lsl #0x10
    mov r9, r0, asr #0x10
    ldr r0, [r10, #0x0]
    ldr r0, [r0, #0x20]
    ldrsh r0, [r0, #0x1a]
    cmp r9, r0
    blt L_020245bc
L_02024648:
    ldrb r0, [r6, #0xc0]
    ands r0, r0, #0x1
    beq L_02024744
    add r0, r6, #0x2a0
    add r3, sp, #0xa8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r9, r6, #0x2ac
    add r3, sp, #0xb4
    ldmia r9, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r7, [sp, #0xac]
    ldr r0, [r6, #0x934]
    ldr r1, [sp, #0xb8]
    add r0, r7, r0
    str r0, [sp, #0xac]
    ldr r0, [r6, #0x934]
    ldr r5, [r10, #0x0]
    add r0, r1, r0
    str r0, [sp, #0xb8]
    ldr r0, [r5, #0x20]
    ldr r8, [sp, #0x64]
    ldrsh r0, [r0, #0x1a]
    cmp r0, #0x0
    ble L_02024744
    ldr r0, =0x93c
    add r7, r6, #0x940
    add r5, r6, r0
L_020246b8:
    mov r0, r4
    mov r1, r8
    bl func_0200c3ec
    cmp r0, #0x0
    beq L_02024724
    ldr r1, [r0, #0x20]
    cmp r1, #0x0
    bne L_02024724
    add r1, r0, #0x8
    str r1, [sp, #0x0]
    ldrh r2, [r0, #0x4]
    add r1, sp, #0xb4
    mov r3, r7
    str r2, [sp, #0x4]
    ldr r2, [r0, #0x18]
    str r2, [sp, #0x8]
    ldr r2, [r0, #0x14]
    str r2, [sp, #0xc]
    ldr r2, [r0, #0x1c]
    add r0, sp, #0xa8
    str r2, [sp, #0x10]
    ldr r2, [r6, #0x934]
    bl func_0200a9c8
    cmp r0, #0x0
    ldrne r0, [r5, #0x0]
    orrne r0, r0, #0x20000000
    strne r0, [r5, #0x0]
L_02024724:
    add r0, r8, #0x1
    mov r0, r0, lsl #0x10
    mov r8, r0, asr #0x10
    ldr r0, [r10, #0x0]
    ldr r0, [r0, #0x20]
    ldrsh r0, [r0, #0x1a]
    cmp r8, r0
    blt L_020246b8
L_02024744:
    ldrb r0, [r6, #0xc0]
    ands r0, r0, #0x4
    beq L_0202492c
    add r0, r6, #0x2a0
    add r3, sp, #0xc0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, [sp, #0xc4]
    ldr r0, [r6, #0x934]
    ldr r7, [r10, #0x0]
    add r0, r1, r0
    str r0, [sp, #0x18]
    str r0, [sp, #0xc4]
    ldr r0, [r7, #0x20]
    ldr r5, [sp, #0x68]
    ldrsh r0, [r0, #0x1e]
    cmp r0, #0x0
    ble L_0202492c
    ldr r0, [sp, #0xc8]
    str r0, [sp, #0x1c]
L_02024794:
    ldr r0, [sp, #0x6c]
    mov r1, r5
    bl func_0200c3ec
    cmp r0, #0x0
    beq L_0202490c
    ldr r3, [r6, #0x934]
    ldr r1, [r0, #0x14]
    ldr r2, [sp, #0xc0]
    add r9, r3, r1
    ldr r1, [r0, #0x8]
    sub r8, r2, r1
    cmp r8, #0x0
    movgt r1, r8
    rsble r1, r8, #0x0
    cmp r1, r9
    bge L_0202490c
    ldr r2, [r0, #0xc]
    ldr r1, [sp, #0x18]
    sub r2, r1, r2
    cmp r2, #0x0
    movgt r1, r2
    rsble r1, r2, #0x0
    cmp r1, r9
    bge L_0202490c
    ldr r1, [r0, #0x10]
    ldr r0, [sp, #0x1c]
    sub r7, r0, r1
    cmp r7, #0x0
    movgt r0, r7
    rsble r0, r7, #0x0
    cmp r0, r9
    bge L_0202490c
    mov r0, r8, asr #0x1f
    str r0, [sp, #0x70]
    mov r0, r7, asr #0x1f
    str r0, [sp, #0x74]
    smull r1, r0, r7, r7
    smull r11, r3, r2, r2
    mov r2, #0x800
    adds r1, r1, r2
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    smull r0, ip, r8, r8
    adds r0, r0, r2
    adc ip, ip, #0x0
    adds r11, r11, r2
    mov r0, r0, lsr #0xc
    adc r3, r3, #0x0
    mov r11, r11, lsr #0xc
    orr r0, r0, ip, lsl #0x14
    orr r11, r11, r3, lsl #0x14
    add r0, r0, r11
    mov lr, #0x0
    adds r0, r1, r0
    beq L_0202490c
    smull r3, r1, r9, r9
    adds r2, r3, r2
    adc r1, r1, lr
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r0, r2
    bge L_0202490c
    bl func_0206902c
    mov r1, r0
    sub r0, r9, r1
    bl func_01ff8958
    mov r2, r0, asr #0x1f
    umull ip, r11, r8, r0
    mla r11, r8, r2, r11
    ldr r3, [sp, #0x70]
    mov r9, #0x800
    adds r8, ip, r9
    mla r11, r3, r0, r11
    ldr r1, [r6, #0x940]
    adc r3, r11, #0x0
    mov r8, r8, lsr #0xc
    orr r8, r8, r3, lsl #0x14
    add r1, r1, r8
    umull r8, r3, r7, r0
    mla r3, r7, r2, r3
    ldr r2, [sp, #0x74]
    str r1, [r6, #0x940]
    mla r3, r2, r0, r3
    adds r2, r8, r9
    ldr r1, [r6, #0x948]
    adc r0, r3, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    add r0, r1, r2
    str r0, [r6, #0x948]
    ldr r0, [r6, #0x93c]
    orr r0, r0, #0x20000000
    str r0, [r6, #0x93c]
L_0202490c:
    add r0, r5, #0x1
    mov r0, r0, lsl #0x10
    mov r5, r0, asr #0x10
    ldr r0, [r10, #0x0]
    ldr r0, [r0, #0x20]
    ldrsh r0, [r0, #0x1e]
    cmp r5, r0
    blt L_02024794
L_0202492c:
    ldrb r0, [r6, #0xc0]
    ands r0, r0, #0x8
    beq L_02024ad4
    add r0, r6, #0x2a0
    add r3, sp, #0xcc
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r8, r6, #0x2ac
    add r3, sp, #0xd8
    ldmia r8, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r7, [sp, #0xd0]
    ldr r0, [r6, #0x934]
    ldr r1, [sp, #0xdc]
    add r0, r7, r0
    str r0, [sp, #0xd0]
    ldr r0, [r6, #0x934]
    ldr r5, [sp, #0x7c]
    add r0, r1, r0
    str r0, [sp, #0xdc]
    ldr r0, [sp, #0x78]
    str r0, [r6, #0x4a8]
    ldr r0, [r10, #0x0]
    ldr r0, [r0, #0x20]
    ldrsh r0, [r0, #0x22]
    cmp r0, #0x0
    ble L_02024ad4
L_02024998:
    ldr r0, [sp, #0x80]
    mov r1, r5
    bl func_0200c3ec
    movs r8, r0
    beq L_02024ab4
    ldr r0, [r8, #0x20]
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    bl func_ov005_0215eea4
    mov r7, r0
    ldrsh r1, [r6, #0xe8]
    ldr r0, =0x4eb
    add r3, r6, #0x940
    cmp r1, r0
    str r7, [sp, #0x0]
    ldr r1, [r8, #0x18]
    ldreq r9, [sp, #0x84]
    str r1, [sp, #0x4]
    ldr r2, [r8, #0x14]
    ldrne r9, [sp, #0x88]
    str r2, [sp, #0x8]
    ldr r2, [r8, #0x1c]
    add r0, sp, #0xcc
    str r2, [sp, #0xc]
    str r9, [sp, #0x10]
    ldr r2, [r6, #0x934]
    add r1, sp, #0xd8
    bl func_02009ee4
    cmp r0, #0x0
    beq L_02024aa8
    cmp r0, #0x1
    beq L_02024a24
    cmp r0, #0x2
    beq L_02024a80
    b L_02024ab4
L_02024a24:
    ldr r0, [r6, #0x93c]
    add r1, r6, #0xb7
    orr r0, r0, #0x20000000
    str r0, [r6, #0x93c]
    ldr r0, [r6, #0x93c]
    orr r0, r0, #0x40000000
    str r0, [r6, #0x93c]
    ldr r0, [r6, #0x93c]
    orr r0, r0, #0x10000000
    str r0, [r6, #0x93c]
    ldr r0, [sp, #0x8c]
    swpb r0, r0, [r1]
    ldr r0, [r8, #0x20]
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [r6, #0x4a8]
    ldr r2, [r7, #0x14]
    ldr r1, [r7, #0x10]
    ldr r0, [r7, #0xc]
    str r0, [r6, #0x3b4]
    str r1, [r6, #0x3b8]
    str r2, [r6, #0x3bc]
    b L_02024ab4
L_02024a80:
    ldr r0, [r6, #0x93c]
    add r1, r6, #0xb7
    orr r0, r0, #0x20000000
    str r0, [r6, #0x93c]
    ldr r0, [r6, #0x93c]
    orr r0, r0, #0x8000000
    str r0, [r6, #0x93c]
    ldr r0, [sp, #0x90]
    swpb r0, r0, [r1]
    b L_02024ab4
L_02024aa8:
    ldr r0, [sp, #0x94]
    add r1, r6, #0xb7
    swpb r0, r0, [r1]
L_02024ab4:
    add r0, r5, #0x1
    mov r0, r0, lsl #0x10
    mov r5, r0, asr #0x10
    ldr r0, [r10, #0x0]
    ldr r0, [r0, #0x20]
    ldrsh r0, [r0, #0x22]
    cmp r5, r0
    blt L_02024998
L_02024ad4:
    ldr r2, [r6, #0x2a0]
    ldr r0, [r6, #0x940]
    ldr r1, [r6, #0x2a4]
    add r5, r2, r0
    ldr r0, [r6, #0x944]
    ldr r2, [r6, #0x2a8]
    add r0, r1, r0
    str r0, [sp, #0x14]
    mov r0, r5, asr #0x1f
    ldr r1, [r6, #0x948]
    str r0, [sp, #0xa0]
    add r0, r2, r1
    str r0, [sp, #0x98]
    mov r0, r0, asr #0x1f
    str r0, [sp, #0x9c]
    ldr r0, =data_02153704
    mov r1, #0x800
    ldr r3, [r0, #0x0]
    ldr r0, [r6, #0x9e4]
    mov r2, #0x0
    ldr r7, [r0, #0x8]
    smull r9, r0, r5, r5
    adds r9, r9, r1
    adc r0, r0, #0x0
    mov ip, r9, lsr #0xc
    orr ip, ip, r0, lsl #0x14
    ldr r0, [sp, #0x98]
    ldr r8, [r3, #0xc]
    smull r11, r9, r0, r0
    adds r0, r11, r1
    adc r9, r9, #0x0
    mov r0, r0, lsr #0xc
    orr r0, r0, r9, lsl #0x14
    ldr r9, =0x14cc
    mov r3, r7, asr #0x1f
    umull r11, r9, r7, r9
    mla r9, r7, r2, r9
    ldr r7, =0x14cc
    ldrb lr, [r6, #0xc0]
    mla r9, r3, r7, r9
    adds r11, r11, r1
    adc r7, r9, #0x0
    ands r3, lr, #0x10
    mov r3, r11, lsr #0xc
    orr r3, r3, r7, lsl #0x14
    add r0, ip, r0
    sub r7, r8, r3
    beq L_02024c30
    smull r8, r3, r7, r7
    adds r8, r8, r1
    adc r1, r3, r2
    mov r2, r8, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r0, r2
    ble L_02024c30
    bl func_0206902c
    mov r1, r0
    sub r0, r7, r1
    bl func_01ff8958
    mov r2, r0, asr #0x1f
    umull r9, r8, r5, r0
    mla r8, r5, r2, r8
    ldr r3, [sp, #0xa0]
    mov r7, #0x800
    adds r5, r9, r7
    mla r8, r3, r0, r8
    adc r3, r8, #0x0
    mov r5, r5, lsr #0xc
    orr r5, r5, r3, lsl #0x14
    ldr r1, [r6, #0x940]
    ldr r3, [sp, #0x98]
    add r1, r1, r5
    umull r8, r5, r3, r0
    mla r5, r3, r2, r5
    ldr r2, [sp, #0x9c]
    str r1, [r6, #0x940]
    mla r5, r2, r0, r5
    adds r2, r8, r7
    ldr r1, [r6, #0x948]
    adc r0, r5, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    add r0, r1, r2
    str r0, [r6, #0x948]
    ldr r0, [r6, #0x93c]
    orr r0, r0, #0x80000000
    str r0, [r6, #0x93c]
L_02024c30:
    ldr r1, [r6, #0x930]
    ldr r0, [sp, #0x14]
    cmp r0, r1
    bgt L_02024c5c
    sub r0, r1, r0
    ldr r1, [r6, #0x944]
    add r0, r1, r0
    str r0, [r6, #0x944]
    ldr r0, [r6, #0x93c]
    orr r0, r0, #0x40000000
    str r0, [r6, #0x93c]
L_02024c5c:
    ldr r0, [r6, #0x93c]
    ands r0, r0, #0x40000000
    beq L_02024c78
    ldr r0, [r6, #0x264]
    cmp r0, #0x0
    ldrlt r0, [sp, #0xa4]
    strlt r0, [r6, #0x264]
L_02024c78:
    add r0, r6, #0x2a0
    add r1, r6, #0x940
    mov r2, r0
    bl func_02069668
    add r0, r6, #0x2a0
    add r1, r6, #0x2ac
    add r2, r6, #0x2b8
    bl func_02069634
L_02024c98:
    ldr r0, [sp, #0x34]
    add r0, r0, #0x1
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp, #0x34]
    cmp r0, #0x3
    blt L_0202454c
    ldr r0, =data_0214b484
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x60]
    add sp, sp, #0xe4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

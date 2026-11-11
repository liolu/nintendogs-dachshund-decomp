#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02022e04();
extern void func_02026d2c();
extern void func_02026de0();
extern void func_02028114();
extern void func_02028490();
extern void func_020285d8();
extern void func_02029248();
extern void func_0202a3a0();
extern void func_0202a5a8();
extern void func_0202c55c();
extern void func_02033dd4();
extern void func_02035424();
extern void func_02035450();
extern void func_02037130();
extern void func_0203820c();
extern void func_020382c4();
extern void func_02039128();
extern void func_0203e5e8();
extern void func_02068480();
extern void func_020a5d38();
extern void func_ov003_02189adc();
extern void func_ov003_0218a6e4();
extern void func_ov003_0218ac1c();
extern char data_02124e68[];
extern char data_0215a064[];
// clang-format off
asm void func_ov003_021794dc(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x10
    mov r9, r0
    mov r4, r1
    mov r5, r2
    mov r10, r3
    bl func_02039128
    mov r0, r9
    add r1, r9, #0x278
    bl func_02028490
    add r1, sp, #0x0
    mov r0, r9
    add r2, r9, #0x3b4
    bl func_020285d8
    mov r0, r9
    mov r1, #0x300
    bl func_02037130
    ldr r1, [sp, #0x0]
    ldr r0, [r9, #0x2a0]
    ldr r2, [sp, #0x8]
    sub r7, r1, r0
    ldr r0, [r9, #0x2a8]
    mov r1, #0x800
    sub r6, r2, r0
    smull r2, r0, r7, r7
    adds r3, r2, r1
    adc r2, r0, #0x0
    mov r0, r3, lsr #0xc
    orr r0, r0, r2, lsl #0x14
    smull r3, r2, r6, r6
    adds r3, r3, r1
    adc r1, r2, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    add r8, r0, r2
    cmp r10, #0x0
    beq L_021796bc
    mov r0, r9
    mov r1, r4
    bl func_02035450
    cmp r0, #0x0
    beq L_021796bc
    mov r0, r9
    mov r1, r5
    bl func_02035424
    cmp r0, #0x0
    beq L_021796bc
    ldrsb r0, [r9, #0x8b]
    cmp r0, #0x4
    beq L_021795ac
    cmp r0, #0x5
    bne L_021795e4
L_021795ac:
    mov r0, r9
    bl func_02028114
    mov r1, #0x60
    mov r3, #0x0
    umull r5, r4, r0, r1
    mov r2, #0x800
    adds r2, r5, r2
    mla r4, r0, r3, r4
    mov r0, r0, asr #0x1f
    mla r4, r0, r1, r4
    adc r0, r4, #0x0
    mov r5, r2, lsr #0xc
    orr r5, r5, r0, lsl #0x14
    b L_02179618
L_021795e4:
    mov r0, r9
    bl func_02028114
    mov r1, #0x11c
    mov r3, #0x0
    umull r5, r4, r0, r1
    mov r2, #0x800
    adds r2, r5, r2
    mla r4, r0, r3, r4
    mov r0, r0, asr #0x1f
    mla r4, r0, r1, r4
    adc r0, r4, #0x0
    mov r5, r2, lsr #0xc
    orr r5, r5, r0, lsl #0x14
L_02179618:
    smull r2, r1, r5, r5
    mov r0, #0x800
    adds r2, r2, r0
    adc r0, r1, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r8, r1
    strlt r7, [r9, #0x260]
    mov r4, r5, asr #0x1f
    strlt r6, [r9, #0x268]
    blt L_021796bc
    mov r0, r7
    mov r1, r6
    bl func_02068480
    mov r0, r0, asr #0x4
    mov r1, r0, lsl #0x1
    ldr r6, =data_02124e68
    mov r0, r1, lsl #0x1
    ldrsh r3, [r6, r0]
    add r2, r1, #0x1
    mov r1, #0x800
    umull r0, r7, r3, r5
    adds r0, r0, r1
    mla r7, r3, r4, r7
    mov r3, r3, asr #0x1f
    mla r7, r3, r5, r7
    adc r3, r7, #0x0
    mov r0, r0, lsr #0xc
    orr r0, r0, r3, lsl #0x14
    str r0, [r9, #0x260]
    mov r0, r2, lsl #0x1
    ldrsh r0, [r6, r0]
    umull r3, r2, r0, r5
    adds r1, r3, r1
    mla r2, r0, r4, r2
    mov r0, r0, asr #0x1f
    mla r2, r0, r5, r2
    adc r0, r2, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r9, #0x268]
L_021796bc:
    add r0, r9, #0x100
    mov r1, #0x1
    strh r1, [r0, #0x1c]
    mov r1, #0x0
    strh r1, [r0, #0x1e]
    ldrsb r0, [r9, #0x8e]
    cmp r0, #0x1
    addeq r1, r9, #0x93
    moveq r0, #0x17
    swpeqb r0, r0, [r1]
    beq L_02179710
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    ldrnesb r0, [sp, #0x38]
    addne r1, r9, #0x93
    swpneb r0, r0, [r1]
    addeq r1, r9, #0x93
    ldreqsb r0, [sp, #0x3c]
    swpeqb r0, r0, [r1]
L_02179710:
    ldrsb r0, [r9, #0x8b]
    mov r4, #0x0
    cmp r0, #0x3
    ldreq r0, [r9, #0x488]
    addeq r0, r0, #0x2
    streq r0, [r9, #0x488]
    ldrne r0, [r9, #0x488]
    addne r0, r0, #0x1
    strne r0, [r9, #0x488]
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_0217975c
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    mov r0, r9
    movne r4, #0x1
    bl func_02029248
L_0217975c:
    cmp r4, #0x0
    beq L_021797e8
    mov r0, r9
    bl func_0203820c
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_021799d4
L_02179778:
    b L_02179788
    b L_021797a0
    b L_021797b8
    b L_021797d0
L_02179788:
    ldr r1, =0x30a
    mov r0, r9
    bl func_0203e5e8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_021797a0:
    mov r0, r9
    mov r1, #0x30c
    bl func_0203e5e8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_021797b8:
    ldr r1, =0x30d
    mov r0, r9
    bl func_0203e5e8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_021797d0:
    ldr r1, =0x30e
    mov r0, r9
    bl func_0203e5e8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_021797e8:
    mov r0, r9
    mov r1, #0x1
    bl func_02022e04
    cmp r0, #0x0
    beq L_02179810
    mov r0, r9
    bl func_ov003_02189adc
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02179810:
    mov r0, r9
    mov r1, #0x1
    bl func_0202c55c
    cmp r0, #0x0
    addne sp, sp, #0x10
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxne lr
    ldr r0, [sp, #0x30]
    cmp r0, #0x0
    beq L_02179868
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_02179868
    mov r0, r9
    mov r1, #0x1
    bl func_0202a3a0
    cmp r0, #0x0
    addne sp, sp, #0x10
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxne lr
L_02179868:
    mov r0, r9
    bl func_02026de0
    cmp r0, #0x0
    bne L_02179888
    mov r0, r9
    bl func_02026d2c
    cmp r0, #0x0
    beq L_02179938
L_02179888:
    mov r0, r9
    bl func_020382c4
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_021798e8
L_0217989c:
    b L_021798ac
    b L_021798bc
    b L_021798cc
    b L_021798dc
L_021798ac:
    ldr r1, =0x30f
    mov r0, r9
    bl func_0203e5e8
    b L_021798e8
L_021798bc:
    ldr r1, =0x311
    mov r0, r9
    bl func_0203e5e8
    b L_021798e8
L_021798cc:
    ldr r1, =0x312
    mov r0, r9
    bl func_0203e5e8
    b L_021798e8
L_021798dc:
    ldr r1, =0x313
    mov r0, r9
    bl func_0203e5e8
L_021798e8:
    ldrsh r0, [r9, #0xf0]
    cmp r0, #0x1
    bne L_02179908
    mov r0, r9
    bl func_02029248
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02179908:
    mov r0, r9
    mov r1, #0x1
    bl func_02022e04
    cmp r0, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
    mov r0, r9
    bl func_02029248
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02179938:
    mov r0, r9
    bl func_0202a5a8
    cmp r0, #0x0
    beq L_02179970
    ldr r1, =0x35a
    mov r2, #0x0
    mov r0, r9
    str r2, [r9, #0x488]
    bl func_0203e5e8
    mov r0, r9
    bl func_02033dd4
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02179970:
    bl func_020a5d38
    cmp r0, #0x0
    bne L_02179994
    ldr r1, =0x35e
    mov r0, r9
    bl func_0203e5e8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02179994:
    cmp r10, #0x0
    bne L_021799b8
    cmp r8, #0x400
    ble L_021799b8
    mov r0, r9
    bl func_ov003_0218a6e4
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_021799b8:
    ldr r0, [sp, #0x34]
    cmp r0, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
    mov r0, r9
    bl func_ov003_0218ac1c
L_021799d4:
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on

#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02009bc0();
extern void func_02009f28();
extern void func_0200c488();
extern void func_0202507c();
extern void func_02025e24();
extern void func_020266e8();
extern void func_0202674c();
extern void func_02026b9c();
extern void func_02027e3c();
extern void func_02028114();
extern void func_020325d0();
extern void func_02035264();
extern void func_0203535c();
extern void func_02036188();
extern void func_02037130();
extern void func_0203910c();
extern void func_0203e5ac();
extern void func_0203e5e8();
extern void func_0206823c();
extern void func_02114564();
extern void func_ov006_0215e148();
extern void func_ov006_0215e870();
extern void func_ov006_0215f3e4();
extern char data_0214da7c[];
extern char data_0214da80[];
extern char data_0214da84[];
extern char data_0215a064[];
// clang-format off
asm void func_ov006_0215dc14(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x10
    mov r9, r0
    mov r8, r1
    mov r10, r2
    mov r7, r3
    bl func_02036188
    movs r6, r0
    beq L_0215dc78
    ldr r1, [r6, #0x2c]
    ldr r0, [r6, #0x30]
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_0200c488
    cmp r0, #0x0
    beq L_0215dc78
    ldr r1, =data_0214da7c
    ldr r2, [r0, #0x20]
    ldr r1, [r1, #0x0]
    mov r0, #0x24
    smulbb r0, r2, r0
    ldr r1, [r1, #0x18]
    adds r5, r1, r0
    movne r0, #0x1
    bne L_0215dc7c
L_0215dc78:
    mov r0, #0x0
L_0215dc7c:
    cmp r0, #0x0
    beq L_0215dd00
    ldrsh r0, [r5, #0x2]
    cmp r7, #0x0
    movlt r7, #0x0
    cmp r7, r0
    subge r1, r0, #0x1
    movge r1, r1, lsl #0x10
    movge r7, r1, asr #0x10
    ldr r1, [r6, #0x34]
    cmp r1, #0x0
    bne L_0215dccc
    ldr r0, =data_0214da7c
    ldrsh r1, [r5, #0x0]
    ldr r2, [r0, #0x0]
    mov r0, #0x44
    ldr r2, [r2, #0x1c]
    add r1, r1, r7
    smlabb r4, r1, r0, r2
    b L_0215dcf8
L_0215dccc:
    cmp r1, #0x1
    bne L_0215dcf8
    ldrsh r3, [r5, #0x0]
    ldr r2, =data_0214da7c
    mov r1, #0x44
    ldr r2, [r2, #0x0]
    add r0, r3, r0
    sub r0, r0, #0x1
    ldr r2, [r2, #0x1c]
    sub r0, r0, r7
    smlabb r4, r0, r1, r2
L_0215dcf8:
    mov r0, #0x1
    b L_0215dd04
L_0215dd00:
    mov r0, #0x0
L_0215dd04:
    cmp r0, #0x0
    beq L_0215e118
    ldr r0, =data_0214da80
    mov r1, r4
    ldr r0, [r0, #0x0]
    mov r2, #0x19000
    bl func_02114564
    ldr r1, [r9, #0x46c]
    mov r5, r0
    cmp r1, #0x3
    addls pc, pc, r1, lsl #0x2
    b L_0215e120
L_0215dd34:
    b L_0215dd44
    b L_0215df70
    b L_0215e028
    b L_0215e0d4
L_0215dd44:
    add r3, r9, #0x26c
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r9
    bl func_0203910c
    mov r0, r9
    mov r1, #0x100
    bl func_02037130
    ldrsb r0, [r9, #0xa1]
    cmp r0, #0x0
    bne L_0215dd78
    mov r0, r9
    bl func_ov006_0215e148
L_0215dd78:
    cmp r5, #0x0
    beq L_0215de24
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x2
    beq L_0215de18
    ldr r1, [r9, #0x468]
    ldr r0, [sp, #0x30]
    add r1, r1, #0xc8
    str r1, [r9, #0x468]
    cmp r0, #0x0
    beq L_0215ddc4
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x11
    bl func_0203e5ac
    mov r0, r9
    bl func_020266e8
L_0215ddc4:
    ldr r0, =data_0214da84
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x3
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r6, r1, #0x1
    mov r1, r6, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r3, r1, r2
    mov r1, r3, lsr #0x10
    mov r1, r1, lsl #0x10
    str r6, [r0, #0x0]
    movs r0, r1, lsr #0x10
    bne L_0215de24
    add r1, r9, #0x93
    swpb r0, r2, [r1]
    add r1, r9, #0x97
    mov r0, #0x0
    swpb r0, r0, [r1]
    b L_0215de24
L_0215de18:
    ldr r0, [r9, #0x468]
    add r0, r0, #0xa
    str r0, [r9, #0x468]
L_0215de24:
    mov r0, r9
    mov r1, r8
    bl func_02027e3c
    ldr r1, [r9, #0x468]
    add r0, r1, r0
    cmp r0, #0x3e8
    ble L_0215de88
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x11
    bl func_0203e5ac
    mov r1, #0x1
    mov r0, r9
    mov r2, r1
    bl func_0203e5ac
    mov r0, r9
    bl func_020266e8
    add r1, r9, #0x93
    mov r0, #0x2
    swpb r0, r0, [r1]
    add sp, sp, #0x10
    mov r0, #0x3
    str r0, [r9, #0x46c]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0215de88:
    mov r0, r9
    bl func_020325d0
    cmp r0, #0x0
    beq L_0215df04
    add r2, sp, #0x0
    mov r0, r4
    add r1, r9, #0x2a0
    bl func_0206823c
    add r0, sp, #0x0
    add r1, r9, #0x1a4
    bl func_02009f28
    cmp r0, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
    ldr r2, =0x167
    mov r0, r9
    mov r1, #0x0
    bl func_0203e5ac
    mov r0, r9
    bl func_02025e24
    add r1, r9, #0x93
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r9, #0x97
    swpb r0, r2, [r1]
    add sp, sp, #0x10
    mov r0, #0x2
    str r0, [r9, #0x46c]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0215df04:
    cmp r5, #0x0
    addne sp, sp, #0x10
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxne lr
    ldr r0, [sp, #0x34]
    cmp r0, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x12
    bl func_0203e5ac
    mov r0, r9
    bl func_0202674c
    mov r0, #0x1
    add sp, sp, #0x10
    str r0, [r9, #0x46c]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0215df70:
    ldr r0, =data_0214da84
    add r3, r9, #0x26c
    ldr r0, [r0, #0x0]
    add r0, r0, #0x74
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r9
    bl func_0203910c
    mov r0, r9
    mov r1, #0x310
    bl func_02037130
    cmp r5, #0x0
    beq L_0215dfd0
    mov r0, r9
    mov r1, #0x0
    mov r2, #0x11
    bl func_0203e5ac
    mov r0, r9
    bl func_020266e8
    mov r0, #0x0
    add sp, sp, #0x10
    str r0, [r9, #0x46c]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0215dfd0:
    mov r0, r4
    add r1, r9, #0x2a0
    bl func_02009bc0
    mov r4, r0
    mov r0, r9
    bl func_02028114
    mov r1, #0xa9
    mul r1, r0, r1
    cmp r4, r1
    addle sp, sp, #0x10
    ldmlefd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxle lr
    mov r0, r9
    mov r1, r6
    mov r2, #0x0
    mov r3, #0x1
    bl func_ov006_0215e870
    mov r0, r9
    bl func_ov006_0215f3e4
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0215e028:
    add r3, r9, #0x26c
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r9
    bl func_0203910c
    mov r0, r9
    mov r1, #0x100
    bl func_02037130
    mov r0, r9
    bl func_02028114
    mov r10, r0
    ldr r3, =0xfffffd8a
    mvn r4, #0x0
    umull r8, r7, r10, r3
    mla r7, r10, r4, r7
    mov r6, r10, asr #0x1f
    mla r7, r6, r3, r7
    mov r5, #0x800
    adds r3, r8, r5
    adc r4, r7, #0x0
    mov r3, r3, lsr #0xc
    mov r0, r9
    mov r1, #0x9
    mov r2, #0x11
    orr r3, r3, r4, lsl #0x14
    bl func_0202507c
    mov r0, r9
    bl func_0203535c
    cmp r0, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
    mov r1, #0x0
    mov r0, r9
    mov r2, r1
    bl func_0203e5ac
    mov r0, r9
    bl func_02026b9c
    mov r0, #0x0
    add sp, sp, #0x10
    str r0, [r9, #0x46c]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0215e0d4:
    mov r0, r9
    bl func_020325d0
    cmp r0, #0x0
    bne L_0215e100
    mov r0, r9
    mov r1, #0x1
    bl func_02035264
    cmp r0, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
L_0215e100:
    mov r0, r9
    mov r1, r10
    bl func_0203e5e8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0215e118:
    mov r0, r9
    bl func_ov006_0215f3e4
L_0215e120:
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on

#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200925c();
extern void func_020093f8();
extern void func_0200962c();
extern void func_020239a4();
extern void func_02028120();
extern void func_02029248();
extern void func_0202df7c();
extern void func_02035264();
extern void func_0203535c();
extern void func_0203e5ac();
extern void func_0203e5e8();
extern void func_0208a2b4();
extern void func_02114564();
extern void func_02114658();
extern void func_02122f74();
extern char data_0214da80[];
extern char data_0214da84[];
// clang-format off
asm void func_ov003_021729a4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x14
    mov r4, r0
    ldr r0, [r4, #0x464]
    mov r9, r1
    mov r8, r2
    mov r7, r3
    cmp r0, #0x0
    beq L_021729d8
    ldrh r0, [r4, #0xfc]
    cmp r0, #0x78
    movhi r5, #0x1
    bhi L_021729dc
L_021729d8:
    mov r5, #0x0
L_021729dc:
    mvn r0, #0x0
    cmp r8, r0
    mov r6, #0x0
    bne L_02172a20
    mov r0, r4
    mov r1, #0x1
    bl func_02035264
    cmp r0, #0x0
    beq L_02172a50
    mov r1, #0x1
    str r1, [r4, #0x464]
    add r8, r4, #0x97
    mov r2, r6
    swpb r3, r2, [r8]
    mov r0, r4
    bl func_0203e5ac
    b L_02172a50
L_02172a20:
    mov r0, r4
    bl func_0203535c
    cmp r0, #0x0
    beq L_02172a50
    mov r1, #0x1
    mov r2, r8
    str r1, [r4, #0x464]
    add r8, r4, #0x97
    mov r1, r6
    swpb r3, r1, [r8]
    mov r0, r4
    bl func_0203e5ac
L_02172a50:
    ldr r0, [r4, #0x468]
    cmp r0, #0x0
    ble L_02172b54
    sub r0, r0, #0x1
    str r0, [r4, #0x468]
    add r1, r4, #0x97
    mov r0, #0x4
    swpb r0, r0, [r1]
    ldr r0, [r4, #0x468]
    cmp r0, #0x54
    beq L_02172a8c
    cmp r0, #0x48
    beq L_02172a8c
    cmp r0, #0x3c
    bne L_02172aa0
L_02172a8c:
    ldr r0, =0x95c
    mvn r1, #0x1
    add r0, r4, r0
    mov r2, #0x0
    bl func_0208a2b4
L_02172aa0:
    ldr r0, [r4, #0x468]
    cmp r0, #0x28
    bne L_02172acc
    mov r0, r4
    mov r1, #0x12
    mov r2, #0x3
    bl func_0200925c
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x14
    bl func_0203e5ac
L_02172acc:
    ldr r0, [r4, #0x468]
    cmp r0, #0x0
    bne L_02172b4c
    ldr r0, =data_0214da84
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x5
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    movs r0, r1, lsr #0x10
    bne L_02172b20
    mov r0, r4
    mov r1, #0x0
    bl func_020239a4
L_02172b20:
    ldrsh r0, [r4, #0xf0]
    cmp r0, #0x8
    bne L_02172b44
    mov r0, r4
    mov r1, r9
    bl func_0203e5e8
    mov r0, r4
    bl func_02029248
    mov r6, #0x1
L_02172b44:
    mov r5, #0x1
    b L_02172d88
L_02172b4c:
    mov r5, #0x0
    b L_02172d88
L_02172b54:
    add r0, r4, #0x490
    add r3, sp, #0x4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_02172d88
    mov r0, r4
    bl func_02028120
    mov r1, #0xcd0
    mov r3, #0x0
    umull ip, r9, r0, r1
    mla r9, r0, r3, r9
    mov r0, r0, asr #0x1f
    mla r9, r0, r1, r9
    ldr r8, =data_0214da80
    mov r2, #0x800
    adds r2, ip, r2
    adc r3, r9, #0x0
    mov r2, r2, lsr #0xc
    ldr r0, [r8, #0x0]
    add r1, sp, #0x4
    orr r2, r2, r3, lsl #0x14
    bl func_02114564
    cmp r0, #0x0
    beq L_02172d88
    mov r0, r4
    mov r1, #0x13
    mov r2, #0x0
    bl func_0200962c
    mov r2, r8
    mov r5, r0
    add r1, sp, #0x4
    ldr r0, [r2, #0x0]
    mov r2, r1
    bl func_02114658
    add r9, sp, #0x4
    mvn r3, #0x0
    add r8, r4, #0x490
    ldmia r9, {r0, r1, r2}
    stmia r8, {r0, r1, r2}
    cmp r5, r3
    beq L_02172c24
    mov r0, #0xc
    smlabb r5, r5, r0, r4
    ldr r3, =0x8a8
    ldmia r9, {r0, r1, r2}
    add r3, r5, r3
    stmia r3, {r0, r1, r2}
    b L_02172cb0
L_02172c24:
    mov r0, r4
    mov r1, #0x4f
    mov r2, #0x0
    bl func_0200925c
    mov r0, r4
    mov r1, #0x49
    mov r2, #0x0
    bl func_0200925c
    mov r0, r4
    mov r1, #0x4a
    mov r2, #0x0
    bl func_0200925c
    mov r0, r4
    mov r1, #0x4b
    mov r2, #0x0
    bl func_0200925c
    mov r0, r4
    mov r1, #0x4c
    mov r2, #0x0
    bl func_0200925c
    mov r0, r4
    mov r1, #0x4d
    mov r2, #0x0
    bl func_0200925c
    mov r0, r4
    mov r1, #0x4e
    mov r2, #0x0
    bl func_0200925c
    mov r0, #0x1
    str r0, [sp, #0x0]
    mov r0, r4
    mov r1, #0x13
    mov r2, #0x0
    mov r3, r9
    bl func_020093f8
L_02172cb0:
    mov r0, r4
    bl func_02028120
    mov r5, r0
    mov r0, r4
    bl func_02028120
    smull r2, r1, r0, r5
    mov r3, #0x800
    adds r2, r2, r3
    adc r0, r1, #0x0
    mov r9, r2, lsr #0xc
    orr r9, r9, r0, lsl #0x14
    ldr r2, =0x19a
    ldr r0, =data_0214da80
    mov r5, #0x0
    umull lr, ip, r9, r2
    mla ip, r9, r5, ip
    mov r8, r9, asr #0x1f
    mla ip, r8, r2, ip
    adds r2, lr, r3
    ldr r0, [r0, #0x0]
    adc r3, ip, #0x0
    mov r2, r2, lsr #0xc
    add r1, r4, #0x2e8
    orr r2, r2, r3, lsl #0x14
    bl func_02114564
    cmp r0, #0x0
    beq L_02172d60
    mov r0, r4
    mov r1, #0x13
    mov r2, r5
    bl func_0200925c
    mov r5, #0x1
    mov r0, r4
    mov r1, #0x12
    mov r2, #0x3
    mov r3, #0x0
    str r5, [sp, #0x0]
    bl func_020093f8
    mov r0, r4
    mov r1, #0x2
    mov r2, #0xd
    bl func_0203e5ac
    mov r0, #0x5a
    str r0, [r4, #0x468]
L_02172d60:
    add r0, sp, #0x4
    add r3, r4, #0x3b4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r1, r4, #0x93
    mov r0, #0x9
    swpb r0, r0, [r1]
    mov r5, #0x0
    add r0, r4, #0x100
    strh r7, [r0, #0x2e]
L_02172d88:
    cmp r5, #0x0
    beq L_02172e20
    mov r0, r4
    mov r1, #0x4f
    mov r2, #0x0
    bl func_0200925c
    mov r0, r4
    mov r1, #0x49
    mov r2, #0x0
    bl func_0200925c
    mov r0, r4
    mov r1, #0x4a
    mov r2, #0x0
    bl func_0200925c
    mov r0, r4
    mov r1, #0x4b
    mov r2, #0x0
    bl func_0200925c
    mov r0, r4
    mov r1, #0x4c
    mov r2, #0x0
    bl func_0200925c
    mov r0, r4
    mov r1, #0x4d
    mov r2, #0x0
    bl func_0200925c
    mov r0, r4
    mov r1, #0x4e
    mov r2, #0x0
    bl func_0200925c
    mov r0, r4
    mov r1, #0x13
    mov r2, #0x0
    bl func_0200925c
    mov r0, r4
    mov r1, #0x12
    mov r2, #0x3
    bl func_0200925c
L_02172e20:
    cmp r5, #0x0
    beq L_02172e48
    cmp r6, #0x0
    bne L_02172e48
    mov r0, r4
    bl func_0202df7c
    cmp r0, #0x0
    beq L_02172e48
    mov r0, #0x1
    bl func_02122f74
L_02172e48:
    mov r0, r5
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on

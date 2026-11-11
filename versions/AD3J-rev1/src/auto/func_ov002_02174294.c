#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_02026420();
extern void func_0202643c();
extern void func_020280f8();
extern void func_02034c88();
extern void func_020351a0();
extern void func_020352c0();
extern void func_02036fbc();
extern void func_02038ef8();
extern void func_02039708();
extern void func_02039764();
extern void func_0203e280();
extern void func_0203e2b8();
extern void func_02044630();
extern void func_02092df4();
extern void func_02092ee8();
extern void func_02092f20();
extern void func_02105dbc();
extern void func_021060cc();
extern void func_ov002_0217582c();
extern char data_0214b480[];
extern char data_0214b484[];
extern char data_02150330[];
extern char data_02153720[];
// clang-format off
asm void func_ov002_02174294(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x30
    mov r5, r0
    mov r4, #0x1
    bl func_02038ef8
    ldr r0, =data_0214b480
    add r1, r5, #0x278
    ldr r0, [r0, #0x0]
    bl func_02092f20
    cmp r0, #0x0
    beq L_02174390
    ldr r1, =data_02150330
    mov r0, r5
    ldr r3, [r1, #0x54]
    ldr r2, [r1, #0x60]
    ldr r1, [r1, #0x6c]
    str r3, [sp, #0x20]
    str r2, [sp, #0x24]
    str r1, [sp, #0x28]
    bl func_020280f8
    ldr r2, =0x19a
    mov ip, #0x0
    umull r7, r6, r0, r2
    mla r6, r0, ip, r6
    mov r0, r0, asr #0x1f
    mov r3, #0x800
    mla r6, r0, r2, r6
    adds r3, r7, r3
    add r1, sp, #0x20
    mov r0, r3, lsr #0xc
    adc r2, r6, #0x0
    orr r0, r0, r2, lsl #0x14
    mov r3, r1
    add r2, r5, #0x300
    bl func_01ff832c
    ldr r0, =data_0214b480
    add r2, sp, #0x20
    ldr r0, [r0, #0x0]
    add r1, r5, #0x3d8
    bl func_02092ee8
    mov r0, r5
    bl func_020280f8
    ldr r2, =0x802
    mov r6, #0x0
    umull r8, r7, r0, r2
    mov r3, #0x800
    mla r7, r0, r6, r7
    mov lr, r0, asr #0x1f
    mla r7, lr, r2, r7
    adds r3, r8, r3
    ldr r1, [r5, #0x3dc]
    adc r0, r7, #0x0
    mov r2, r3, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    add r0, r1, r2
    ldr ip, =data_02153720
    str r0, [r5, #0x3dc]
    ldr r0, [ip, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x2
    strne r6, [r5, #0x474]
    strne r6, [r5, #0x478]
    b L_021743a0
L_02174390:
    add r0, r5, #0x278
    add r3, r5, #0x3d8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
L_021743a0:
    mov r0, r5
    mov r1, #0x300
    bl func_02036fbc
    add r0, r5, #0x100
    ldrsh r2, [r0, #0x50]
    ldr r1, =0x111
    cmp r2, r1
    bne L_02174484
    ldrh r0, [r0, #0xa]
    cmp r0, #0x78
    bls L_021745b0
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_021745b0
    mov r0, r5
    bl func_020280f8
    mov r6, r0
    mov r0, r5
    bl func_020280f8
    smull r2, r1, r0, r6
    mov r0, #0x800
    adds r2, r2, r0
    adc r1, r1, #0x0
    mov r6, r2, lsr #0xc
    orr r6, r6, r1, lsl #0x14
    ldr r3, =0x802
    mov ip, #0x0
    umull r2, lr, r6, r3
    mla lr, r6, ip, lr
    mov r6, r6, asr #0x1f
    adds r2, r2, r0
    mla lr, r6, r3, lr
    ldr r1, =data_0214b480
    mov r2, r2, lsr #0xc
    ldr r0, [r1, #0x0]
    adc r3, lr, #0x0
    add r1, r5, #0x300
    orr r2, r2, r3, lsl #0x14
    bl func_02092df4
    cmp r0, #0x0
    beq L_021745b0
    ldr r2, =0x165
    mov r0, r5
    mov r1, #0x0
    bl func_0203e280
    mov r0, r5
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    mov r0, r5
    bl func_02026420
    add r1, r5, #0xac
    mov r0, #0x8
    swpb r0, r0, [r1]
    b L_021745b0
L_02174484:
    bl func_021060cc
    ldrsb r1, [r5, #0x88]
    cmp r1, r0
    bne L_02174564
    bl func_02044630
    ldrsb r1, [r5, #0x88]
    cmp r1, r0
    bne L_02174564
    mov r0, r5
    mov r1, #0x1b
    bl func_020352c0
    cmp r0, #0x0
    beq L_02174564
    mov r0, r5
    bl func_020280f8
    mov r6, r0
    mov r0, r5
    bl func_020280f8
    smull r2, r1, r0, r6
    mov r0, #0x800
    adds r2, r2, r0
    adc r1, r1, #0x0
    mov lr, r2, lsr #0xc
    orr lr, lr, r1, lsl #0x14
    ldr r3, =0x802
    mov ip, #0x0
    umull r2, r6, lr, r3
    mla r6, lr, ip, r6
    mov ip, lr, asr #0x1f
    adds r2, r2, r0
    mla r6, ip, r3, r6
    ldr r1, =data_0214b480
    mov r2, r2, lsr #0xc
    ldr r0, [r1, #0x0]
    adc r3, r6, #0x0
    add r1, r5, #0x300
    orr r2, r2, r3, lsl #0x14
    bl func_02092df4
    cmp r0, #0x0
    beq L_02174564
    mov r0, r5
    bl func_02039764
    cmp r0, #0x0
    beq L_02174548
    ldrsb r1, [r5, #0x88]
    mov r0, #0x4
    bl func_02105dbc
    mov r0, r5
    bl func_02039708
L_02174548:
    mov r2, #0x0
    mov r0, r5
    mov r1, #0x3a8
    str r2, [r5, #0x4b0]
    bl func_0203e2b8
    mov r4, #0x0
    b L_021745b0
L_02174564:
    mov r0, r5
    bl func_020351a0
    cmp r0, #0x0
    beq L_021745b0
    ldr r2, =0x111
    mov r0, r5
    mov r1, #0x0
    bl func_0203e280
    mov r0, r5
    bl func_02034c88
    mov r2, r0
    mov r0, r5
    mov r1, #0x3
    bl func_0203e280
    mov r0, r5
    bl func_0202643c
    add r1, r5, #0xac
    mov r0, #0x5
    swpb r0, r0, [r1]
L_021745b0:
    add r0, r5, #0x100
    ldrh r0, [r0, #0xa]
    mov r2, #0x0
    cmp r0, #0x64
    bls L_02174600
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r3, #0x3c
    ldr ip, [r0, #0x0]
    mul r1, ip, r1
    add ip, r1, #0x1
    mov r1, ip, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r3, r1, r3
    mov r1, r3, lsr #0x10
    mov r1, r1, lsl #0x10
    str ip, [r0, #0x0]
    movs r0, r1, lsr #0x10
    moveq r2, #0x1
L_02174600:
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r0, #0x1
    str r0, [sp, #0x4]
    str r1, [sp, #0x8]
    str r2, [sp, #0xc]
    mov r0, #0x30
    str r0, [sp, #0x10]
    str r1, [sp, #0x14]
    mov r0, #0x3
    str r0, [sp, #0x18]
    mov r0, r5
    mov r3, r4
    mov r2, #0x1f8
    str r1, [sp, #0x1c]
    bl func_ov002_0217582c
    add sp, sp, #0x30
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on

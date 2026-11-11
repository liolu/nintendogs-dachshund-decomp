#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020091f8();
extern void func_0200938c();
extern void func_020095a0();
extern void func_02023970();
extern void func_020280f8();
extern void func_02029204();
extern void func_0202de70();
extern void func_020350a8();
extern void func_020351a0();
extern void func_0203e280();
extern void func_0203e2b8();
extern void func_02092df4();
extern void func_02092ee8();
extern void func_020a1788();
extern void func_020eabbc();
extern char data_0214b480[];
extern char data_0214b484[];
// clang-format off
asm void func_ov002_02170528(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x14
    mov r4, r0
    ldr r0, [r4, #0x488]
    mov r9, r1
    mov r8, r2
    mov r7, r3
    cmp r0, #0x0
    beq L_02170560
    add r0, r4, #0x100
    ldrh r0, [r0, #0xa]
    cmp r0, #0x78
    movhi r5, #0x1
    bhi L_02170564
L_02170560:
    mov r5, #0x0
L_02170564:
    mvn r0, #0x0
    cmp r8, r0
    mov r6, #0x0
    bne L_021705a8
    mov r0, r4
    mov r1, #0x1
    bl func_020350a8
    cmp r0, #0x0
    beq L_021705d8
    mov r1, #0x1
    str r1, [r4, #0x488]
    add r8, r4, #0xb0
    mov r2, r6
    swpb r3, r2, [r8]
    mov r0, r4
    bl func_0203e280
    b L_021705d8
L_021705a8:
    mov r0, r4
    bl func_020351a0
    cmp r0, #0x0
    beq L_021705d8
    mov r1, #0x1
    mov r2, r8
    str r1, [r4, #0x488]
    add r8, r4, #0xb0
    mov r1, r6
    swpb r3, r1, [r8]
    mov r0, r4
    bl func_0203e280
L_021705d8:
    ldr r0, [r4, #0x48c]
    cmp r0, #0x0
    ble L_021706dc
    sub r0, r0, #0x1
    str r0, [r4, #0x48c]
    add r1, r4, #0xb0
    mov r0, #0x4
    swpb r0, r0, [r1]
    ldr r0, [r4, #0x48c]
    cmp r0, #0x54
    beq L_02170614
    cmp r0, #0x48
    beq L_02170614
    cmp r0, #0x3c
    bne L_02170628
L_02170614:
    ldr r0, =0x958
    mvn r1, #0x1
    add r0, r4, r0
    mov r2, #0x0
    bl func_020eabbc
L_02170628:
    ldr r0, [r4, #0x48c]
    cmp r0, #0x28
    bne L_02170654
    mov r0, r4
    mov r1, #0x12
    mov r2, #0x3
    bl func_020091f8
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x14
    bl func_0203e280
L_02170654:
    ldr r0, [r4, #0x48c]
    cmp r0, #0x0
    bne L_021706d4
    ldr r0, =data_0214b484
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
    bne L_021706a8
    mov r0, r4
    mov r1, #0x0
    bl func_02023970
L_021706a8:
    ldrsh r0, [r4, #0xf0]
    cmp r0, #0x8
    bne L_021706cc
    mov r0, r4
    mov r1, r9
    bl func_0203e2b8
    mov r0, r4
    bl func_02029204
    mov r6, #0x1
L_021706cc:
    mov r5, #0x1
    b L_0217090c
L_021706d4:
    mov r5, #0x0
    b L_0217090c
L_021706dc:
    add r0, r4, #0x3a8
    add r3, sp, #0x4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_0217090c
    mov r0, r4
    bl func_020280f8
    mov r1, #0xcd0
    mov r3, #0x0
    umull ip, r9, r0, r1
    mla r9, r0, r3, r9
    mov r0, r0, asr #0x1f
    mla r9, r0, r1, r9
    ldr r8, =data_0214b480
    mov r2, #0x800
    adds r2, ip, r2
    adc r3, r9, #0x0
    mov r2, r2, lsr #0xc
    ldr r0, [r8, #0x0]
    add r1, sp, #0x4
    orr r2, r2, r3, lsl #0x14
    bl func_02092df4
    cmp r0, #0x0
    beq L_0217090c
    mov r0, r4
    mov r1, #0x13
    mov r2, #0x0
    bl func_020095a0
    mov r2, r8
    mov r5, r0
    add r1, sp, #0x4
    ldr r0, [r2, #0x0]
    mov r2, r1
    bl func_02092ee8
    add r9, sp, #0x4
    mvn r3, #0x0
    add r8, r4, #0x3a8
    ldmia r9, {r0, r1, r2}
    stmia r8, {r0, r1, r2}
    cmp r5, r3
    beq L_021707a8
    mov r0, #0xc
    smlabb r0, r5, r0, r4
    add r3, r0, #0x8c0
    ldmia r9, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    b L_02170834
L_021707a8:
    mov r0, r4
    mov r1, #0x4f
    mov r2, #0x0
    bl func_020091f8
    mov r0, r4
    mov r1, #0x49
    mov r2, #0x0
    bl func_020091f8
    mov r0, r4
    mov r1, #0x4a
    mov r2, #0x0
    bl func_020091f8
    mov r0, r4
    mov r1, #0x4b
    mov r2, #0x0
    bl func_020091f8
    mov r0, r4
    mov r1, #0x4c
    mov r2, #0x0
    bl func_020091f8
    mov r0, r4
    mov r1, #0x4d
    mov r2, #0x0
    bl func_020091f8
    mov r0, r4
    mov r1, #0x4e
    mov r2, #0x0
    bl func_020091f8
    mov r0, #0x1
    str r0, [sp, #0x0]
    mov r0, r4
    mov r1, #0x13
    mov r2, #0x0
    mov r3, r9
    bl func_0200938c
L_02170834:
    mov r0, r4
    bl func_020280f8
    mov r5, r0
    mov r0, r4
    bl func_020280f8
    smull r2, r1, r0, r5
    mov r3, #0x800
    adds r2, r2, r3
    adc r0, r1, #0x0
    mov r9, r2, lsr #0xc
    orr r9, r9, r0, lsl #0x14
    ldr r2, =0x19a
    ldr r0, =data_0214b480
    mov r5, #0x0
    umull lr, ip, r9, r2
    mla ip, r9, r5, ip
    mov r8, r9, asr #0x1f
    mla ip, r8, r2, ip
    adds r2, lr, r3
    ldr r0, [r0, #0x0]
    adc r3, ip, #0x0
    mov r2, r2, lsr #0xc
    add r1, r4, #0x300
    orr r2, r2, r3, lsl #0x14
    bl func_02092df4
    cmp r0, #0x0
    beq L_021708e4
    mov r0, r4
    mov r1, #0x13
    mov r2, r5
    bl func_020091f8
    mov r5, #0x1
    mov r0, r4
    mov r1, #0x12
    mov r2, #0x3
    mov r3, #0x0
    str r5, [sp, #0x0]
    bl func_0200938c
    mov r0, r4
    mov r1, #0x2
    mov r2, #0xd
    bl func_0203e280
    mov r0, #0x5a
    str r0, [r4, #0x48c]
L_021708e4:
    add r0, sp, #0x4
    add r3, r4, #0x3d8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r1, r4, #0xac
    mov r0, #0x9
    swpb r0, r0, [r1]
    mov r5, #0x0
    add r0, r4, #0x100
    strh r7, [r0, #0x8]
L_0217090c:
    cmp r5, #0x0
    beq L_021709a4
    mov r0, r4
    mov r1, #0x4f
    mov r2, #0x0
    bl func_020091f8
    mov r0, r4
    mov r1, #0x49
    mov r2, #0x0
    bl func_020091f8
    mov r0, r4
    mov r1, #0x4a
    mov r2, #0x0
    bl func_020091f8
    mov r0, r4
    mov r1, #0x4b
    mov r2, #0x0
    bl func_020091f8
    mov r0, r4
    mov r1, #0x4c
    mov r2, #0x0
    bl func_020091f8
    mov r0, r4
    mov r1, #0x4d
    mov r2, #0x0
    bl func_020091f8
    mov r0, r4
    mov r1, #0x4e
    mov r2, #0x0
    bl func_020091f8
    mov r0, r4
    mov r1, #0x13
    mov r2, #0x0
    bl func_020091f8
    mov r0, r4
    mov r1, #0x12
    mov r2, #0x3
    bl func_020091f8
L_021709a4:
    cmp r5, #0x0
    beq L_021709cc
    cmp r6, #0x0
    bne L_021709cc
    mov r0, r4
    bl func_0202de70
    cmp r0, #0x0
    beq L_021709cc
    mov r0, #0x1
    bl func_020a1788
L_021709cc:
    mov r0, r5
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on

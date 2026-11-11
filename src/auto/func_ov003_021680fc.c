#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020280ec();
extern void func_020280f8();
extern void func_02034f40();
extern void func_0203ae6c();
extern void func_02069878();
extern char data_02124ae0[];
extern char data_0214b484[];
extern char data_02153704[];
extern char data_ov003_0216bd40[];
// clang-format off
asm void func_ov003_021680fc(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x10
    ldr r1, =data_ov003_0216bd40
    mov r6, r0
    ldrh r5, [r1, #0x0]
    ldrh r4, [r1, #0x2]
    ldrh r3, [r1, #0x4]
    ldrh r2, [r1, #0x6]
    ldrh r1, [r1, #0x8]
    strh r5, [sp, #0x0]
    strh r4, [sp, #0x2]
    strh r3, [sp, #0x4]
    strh r2, [sp, #0x6]
    strh r1, [sp, #0x8]
    ldrsb r4, [r6, #0xa7]
    bl func_0203ae6c
    cmp r0, #0x0
    beq L_02168170
    cmp r4, #0x4
    addls pc, pc, r4, lsl #0x2
    b L_02168170
L_02168150:
    b L_02168164
    b L_02168164
    b L_02168164
    b L_0216816c
    b L_0216816c
L_02168164:
    mov r4, #0x1
    b L_02168170
L_0216816c:
    mov r4, #0x4
L_02168170:
    ldr r1, =data_0214b484
    ldr r0, =0x10dcd
    ldr r5, [r1, #0x0]
    add r1, sp, #0x0
    ldr r3, [r5, #0x0]
    mov r2, r4, lsl #0x1
    mul r0, r3, r0
    add r0, r0, #0x1
    str r0, [r5, #0x0]
    ldrh r1, [r1, r2]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mul r0, r1, r0
    mov r0, r0, lsr #0x10
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    addeq r1, r6, #0xac
    moveq r0, #0x3
    swpeqb r0, r0, [r1]
    ldr r1, =0x10dcd
    ldr r0, =data_0214b484
    ldr r3, =0xfff
    ldr r2, [r0, #0x0]
    mov r0, #0x0
    ldr r5, [r2, #0x0]
    mul r1, r5, r1
    add r1, r1, #0x1
    and r3, r1, r3
    mov r3, r3, lsl #0x10
    mov r3, r3, lsr #0x10
    mov r3, r3, lsl #0x10
    mov r5, r3, asr #0x10
    mov r3, #0x5000
    umull r9, r8, r5, r3
    mla r8, r5, r0, r8
    mov r7, r5, asr #0x1f
    mov r5, #0x800
    adds r5, r9, r5
    mla r8, r7, r3, r8
    adc r3, r8, #0x0
    mov r5, r5, lsr #0xc
    orr r5, r5, r3, lsl #0x14
    str r1, [r2, #0x0]
    add r1, r5, #0x5000
    str r1, [r6, #0x26c]
    add r1, r6, #0x100
    ldrsh r1, [r1, #0x50]
    sub r1, r1, #0x12
    cmp r1, #0x4
    addls pc, pc, r1, lsl #0x2
    b L_02168250
L_0216823c:
    b L_0216828c
    b L_021682c8
    b L_02168310
    b L_02168360
    b L_021683b0
L_02168250:
    mov r0, r6
    bl func_020280ec
    mov r1, #0x130
    mov r3, #0x0
    umull r7, r5, r0, r1
    mov r2, #0x800
    adds r2, r7, r2
    mla r5, r0, r3, r5
    mov r0, r0, asr #0x1f
    mla r5, r0, r1, r5
    adc r0, r5, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r6, #0x4a8]
    b L_021683fc
L_0216828c:
    mov r0, r6
    bl func_020280ec
    mov r1, #0x220
    mov r3, #0x0
    umull r7, r5, r0, r1
    mov r2, #0x800
    adds r2, r7, r2
    mla r5, r0, r3, r5
    mov r0, r0, asr #0x1f
    mla r5, r0, r1, r5
    adc r0, r5, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r6, #0x4a8]
    b L_021683fc
L_021682c8:
    ldr r1, [r6, #0x26c]
    mov r0, r6
    add r1, r1, #0xa000
    str r1, [r6, #0x26c]
    bl func_020280ec
    mov r1, #0x320
    mov r3, #0x0
    umull r7, r5, r0, r1
    mov r2, #0x800
    adds r2, r7, r2
    mla r5, r0, r3, r5
    mov r0, r0, asr #0x1f
    mla r5, r0, r1, r5
    adc r0, r5, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r6, #0x4a8]
    b L_021683fc
L_02168310:
    add r1, r6, #0xac
    swpb r0, r0, [r1]
    mov r0, r6
    ldr r1, [r6, #0x26c]
    add r1, r1, #0x14000
    str r1, [r6, #0x26c]
    bl func_020280ec
    ldr r1, =0x3cf
    mov r3, #0x0
    umull r7, r5, r0, r1
    mov r2, #0x800
    adds r2, r7, r2
    mla r5, r0, r3, r5
    mov r0, r0, asr #0x1f
    mla r5, r0, r1, r5
    adc r0, r5, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r6, #0x4a8]
    b L_021683fc
L_02168360:
    add r1, r6, #0xac
    swpb r0, r0, [r1]
    mov r0, r6
    ldr r1, [r6, #0x26c]
    add r1, r1, #0x14000
    str r1, [r6, #0x26c]
    bl func_020280ec
    ldr r1, =0x579
    mov r3, #0x0
    umull r7, r5, r0, r1
    mov r2, #0x800
    adds r2, r7, r2
    mla r5, r0, r3, r5
    mov r0, r0, asr #0x1f
    mla r5, r0, r1, r5
    adc r0, r5, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r6, #0x4a8]
    b L_021683fc
L_021683b0:
    add r1, r6, #0xac
    swpb r0, r0, [r1]
    mov r0, r6
    ldr r1, [r6, #0x26c]
    add r1, r1, #0x14000
    str r1, [r6, #0x26c]
    bl func_020280ec
    mov r1, #0x880
    mov r3, #0x0
    umull r7, r5, r0, r1
    mov r2, #0x800
    adds r2, r7, r2
    mla r5, r0, r3, r5
    mov r0, r0, asr #0x1f
    mla r5, r0, r1, r5
    adc r0, r5, #0x0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r6, #0x4a8]
L_021683fc:
    cmp r4, #0x4
    addls pc, pc, r4, lsl #0x2
    b L_021687cc
L_02168408:
    b L_0216841c
    b L_021684d8
    b L_02168598
    b L_02168654
    b L_02168710
L_0216841c:
    ldr r7, =data_0214b484
    ldr r3, =0x10dcd
    ldr r1, [r7, #0x0]
    ldr r4, =0xfff
    ldr r0, [r1, #0x0]
    mov r5, #0x0
    mul r2, r0, r3
    add r0, r2, #0x1
    and r2, r0, r4
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    mov r2, r2, lsl #0x10
    mov r8, r2, asr #0x10
    mov r2, #0x7000
    umull r10, r9, r8, r2
    mla r9, r8, r5, r9
    mov r8, r8, asr #0x1f
    mov r5, #0x800
    adds r10, r10, r5
    mla r9, r8, r2, r9
    adc r2, r9, #0x0
    mov r8, r10, lsr #0xc
    orr r8, r8, r2, lsl #0x14
    str r0, [r1, #0x0]
    sub r0, r8, #0x2000
    str r0, [r6, #0x270]
    ldr r1, [r7, #0x0]
    ldr r0, [r1, #0x0]
    mul r2, r0, r3
    add r0, r2, #0x1
    and r2, r0, r4
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    mov r2, r2, lsl #0x10
    mov r3, r2, asr #0x10
    mov r2, r3, asr #0x1f
    mov r2, r2, lsl #0xe
    mov r4, r3, lsl #0xe
    adds r4, r4, r5
    orr r2, r2, r3, lsr #0x12
    adc r2, r2, #0x0
    mov r3, r4, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    str r0, [r1, #0x0]
    sub r0, r3, #0x3000
    str r0, [r6, #0x274]
    b L_021687cc
L_021684d8:
    ldr r7, =data_0214b484
    ldr r4, =0x10dcd
    ldr r2, [r7, #0x0]
    ldr r5, =0xfff
    ldr r1, [r2, #0x0]
    mov r0, #0x0
    mul r3, r1, r4
    add r1, r3, #0x1
    and r3, r1, r5
    mov r3, r3, lsl #0x10
    mov r3, r3, lsr #0x10
    mov r3, r3, lsl #0x10
    mov r8, r3, asr #0x10
    mov r3, #0x7000
    umull ip, r10, r8, r3
    mla r10, r8, r0, r10
    mov r9, r8, asr #0x1f
    mov r8, #0x800
    adds ip, ip, r8
    mla r10, r9, r3, r10
    adc r3, r10, #0x0
    mov r9, ip, lsr #0xc
    orr r9, r9, r3, lsl #0x14
    str r1, [r2, #0x0]
    sub r1, r9, #0x2000
    str r1, [r6, #0x270]
    ldr r2, [r7, #0x0]
    mov r7, #0x6000
    ldr r1, [r2, #0x0]
    mul r3, r1, r4
    add r1, r3, #0x1
    and r3, r1, r5
    mov r3, r3, lsl #0x10
    mov r3, r3, lsr #0x10
    mov r3, r3, lsl #0x10
    mov r3, r3, asr #0x10
    umull r5, r4, r3, r7
    adds r5, r5, r8
    mla r4, r3, r0, r4
    mov r0, r3, asr #0x1f
    mla r4, r0, r7, r4
    adc r0, r4, #0x0
    mov r3, r5, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    str r1, [r2, #0x0]
    sub r0, r3, #0x5000
    str r0, [r6, #0x274]
    b L_021687cc
L_02168598:
    ldr r7, =data_0214b484
    ldr r3, =0x10dcd
    ldr r1, [r7, #0x0]
    ldr r4, =0xfff
    ldr r0, [r1, #0x0]
    mov r5, #0x0
    mul r2, r0, r3
    add r0, r2, #0x1
    and r2, r0, r4
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    mov r2, r2, lsl #0x10
    mov r8, r2, asr #0x10
    mov r2, #0x7000
    umull r10, r9, r8, r2
    mla r9, r8, r5, r9
    mov r8, r8, asr #0x1f
    mov r5, #0x800
    adds r10, r10, r5
    mla r9, r8, r2, r9
    adc r2, r9, #0x0
    mov r8, r10, lsr #0xc
    orr r8, r8, r2, lsl #0x14
    str r0, [r1, #0x0]
    sub r0, r8, #0x2000
    str r0, [r6, #0x270]
    ldr r1, [r7, #0x0]
    ldr r0, [r1, #0x0]
    mul r2, r0, r3
    add r0, r2, #0x1
    and r2, r0, r4
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    mov r2, r2, lsl #0x10
    mov r3, r2, asr #0x10
    mov r2, r3, asr #0x1f
    mov r2, r2, lsl #0xe
    mov r4, r3, lsl #0xe
    adds r4, r4, r5
    orr r2, r2, r3, lsr #0x12
    adc r2, r2, #0x0
    mov r3, r4, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    str r0, [r1, #0x0]
    sub r0, r3, #0x3000
    str r0, [r6, #0x274]
    b L_021687cc
L_02168654:
    ldr r7, =data_0214b484
    ldr r3, =0x10dcd
    ldr r1, [r7, #0x0]
    ldr r4, =0xfff
    ldr r0, [r1, #0x0]
    mov r5, #0x0
    mul r2, r0, r3
    add r0, r2, #0x1
    and r2, r0, r4
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    mov r2, r2, lsl #0x10
    mov r8, r2, asr #0x10
    mov r2, #0x7000
    umull r10, r9, r8, r2
    mla r9, r8, r5, r9
    mov r8, r8, asr #0x1f
    mov r5, #0x800
    adds r10, r10, r5
    mla r9, r8, r2, r9
    adc r2, r9, #0x0
    mov r8, r10, lsr #0xc
    orr r8, r8, r2, lsl #0x14
    str r0, [r1, #0x0]
    sub r0, r8, #0x2000
    str r0, [r6, #0x270]
    ldr r1, [r7, #0x0]
    ldr r0, [r1, #0x0]
    mul r2, r0, r3
    add r0, r2, #0x1
    and r2, r0, r4
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    mov r2, r2, lsl #0x10
    mov r3, r2, asr #0x10
    mov r2, r3, asr #0x1f
    mov r2, r2, lsl #0xe
    mov r4, r3, lsl #0xe
    adds r4, r4, r5
    orr r2, r2, r3, lsr #0x12
    adc r2, r2, #0x0
    mov r3, r4, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    str r0, [r1, #0x0]
    sub r0, r3, #0x3000
    str r0, [r6, #0x274]
    b L_021687cc
L_02168710:
    ldr r7, =data_0214b484
    ldr r4, =0x10dcd
    ldr r2, [r7, #0x0]
    ldr r5, =0xfff
    ldr r1, [r2, #0x0]
    mov r0, #0x0
    mul r3, r1, r4
    add r1, r3, #0x1
    and r3, r1, r5
    mov r3, r3, lsl #0x10
    mov r3, r3, lsr #0x10
    mov r3, r3, lsl #0x10
    mov r8, r3, asr #0x10
    mov r3, #0x7000
    umull ip, r10, r8, r3
    mla r10, r8, r0, r10
    mov r9, r8, asr #0x1f
    mov r8, #0x800
    adds ip, ip, r8
    mla r10, r9, r3, r10
    adc r3, r10, #0x0
    mov r9, ip, lsr #0xc
    orr r9, r9, r3, lsl #0x14
    str r1, [r2, #0x0]
    sub r1, r9, #0x2000
    str r1, [r6, #0x270]
    ldr r2, [r7, #0x0]
    mov r7, #0x6000
    ldr r1, [r2, #0x0]
    mul r3, r1, r4
    add r1, r3, #0x1
    and r3, r1, r5
    mov r3, r3, lsl #0x10
    mov r3, r3, lsr #0x10
    mov r3, r3, lsl #0x10
    mov r3, r3, asr #0x10
    umull r5, r4, r3, r7
    adds r5, r5, r8
    mla r4, r3, r0, r4
    mov r0, r3, asr #0x1f
    mla r4, r0, r7, r4
    adc r0, r4, #0x0
    mov r3, r5, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    str r1, [r2, #0x0]
    sub r0, r3, #0x5000
    str r0, [r6, #0x274]
L_021687cc:
    mov r0, r6
    bl func_020280ec
    ldr r2, [r6, #0x26c]
    mov r1, #0x800
    smull r4, r3, r2, r0
    adds r4, r4, r1
    adc r2, r3, #0x0
    mov r3, r4, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    str r3, [r6, #0x26c]
    ldr r2, [r6, #0x270]
    smull r4, r3, r2, r0
    adds r4, r4, r1
    adc r2, r3, #0x0
    mov r3, r4, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    str r3, [r6, #0x270]
    ldr r2, [r6, #0x274]
    smull r3, r0, r2, r0
    adds r1, r3, r1
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r6, #0x274]
    mov r0, r6
    ldr r5, [r6, #0x274]
    ldr r4, [r6, #0x26c]
    bl func_020280f8
    ldr r7, =0x14cc
    ldr r1, =data_02153704
    mov r9, #0x0
    umull ip, r3, r0, r7
    ldr lr, [r1, #0x0]
    mov r8, #0x800
    smull r2, r1, r4, r4
    smull r10, r4, r5, r5
    ldr r5, [lr, #0xc]
    mla r3, r0, r9, r3
    mov r0, r0, asr #0x1f
    mla r3, r0, r7, r3
    adds r7, ip, r8
    adc r0, r3, #0x0
    mov r3, r7, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    sub r5, r5, r3
    adds r2, r2, r8
    adc r0, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    adds r1, r10, r8
    adc r0, r4, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    add r2, r2, r1
    smull r1, r0, r5, r5
    adds r1, r1, r8
    adc r0, r0, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    cmp r2, r1
    mov r4, r5, asr #0x1f
    ble L_0216893c
    ldr r0, [r6, #0x26c]
    ldr r1, [r6, #0x274]
    bl func_02069878
    mov r0, r0, asr #0x4
    mov r1, r0, lsl #0x1
    mov r0, r1, lsl #0x1
    ldr r7, =data_02124ae0
    add r1, r1, #0x1
    ldrsh r3, [r7, r0]
    mov r0, r8
    mov r1, r1, lsl #0x1
    umull r9, r8, r5, r3
    mov r2, r3, asr #0x1f
    mla r8, r5, r2, r8
    mla r8, r4, r3, r8
    adds r9, r9, r0
    adc r2, r8, #0x0
    mov r3, r9, lsr #0xc
    orr r3, r3, r2, lsl #0x14
    str r3, [r6, #0x26c]
    ldrsh r2, [r7, r1]
    mov r1, r2, asr #0x1f
    umull r7, r3, r5, r2
    mla r3, r5, r1, r3
    adds r1, r7, r0
    mla r3, r4, r2, r3
    adc r0, r3, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r6, #0x274]
L_0216893c:
    mov r0, r6
    bl func_02034f40
    cmp r0, #0x0
    addeq sp, sp, #0x10
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxeq lr
    mov r0, r6
    bl func_020280ec
    ldr r1, [r6, #0x270]
    mov r0, r0, lsl #0x1
    cmp r1, r0
    strlt r0, [r6, #0x270]
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on

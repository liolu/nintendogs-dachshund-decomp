#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020280f8();
extern void func_020350a8();
extern void func_0203e280();
extern void func_02092df4();
extern void func_ov002_02175634();
extern void func_ov002_0217582c();
extern char data_0214b480[];
extern char data_0214b484[];
// clang-format off
asm void func_ov002_02175480(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x24
    mov r6, r0
    mov r5, #0x0
    mov r4, #0x3c
    bl func_ov002_02175634
    ldr r0, =0x4000304
    ldrh r0, [r0, #0x0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    bne L_02175534
    mov r0, r6
    bl func_020280f8
    mov r7, r0
    mov r0, r6
    bl func_020280f8
    smull r2, r1, r0, r7
    mov r3, #0x800
    adds r2, r2, r3
    adc r0, r1, #0x0
    mov r7, r2, lsr #0xc
    orr r7, r7, r0, lsl #0x14
    ldr r2, =0x19a
    ldr r0, =data_0214b480
    mov ip, r5
    umull r9, r8, r7, r2
    mla r8, r7, ip, r8
    mov lr, r7, asr #0x1f
    mla r8, lr, r2, r8
    adds r2, r9, r3
    ldr r0, [r0, #0x0]
    adc r3, r8, #0x0
    mov r2, r2, lsr #0xc
    add r1, r6, #0x300
    orr r2, r2, r3, lsl #0x14
    bl func_02092df4
    cmp r0, #0x0
    beq L_02175534
    mov r0, r6
    mov r1, #0x2
    mov r2, #0x15
    mov r4, #0x12c
    mov r5, #0x1
    bl func_0203e280
    b L_02175568
L_02175534:
    add r0, r6, #0x100
    ldrsh r0, [r0, #0x54]
    cmp r0, #0x15
    bne L_02175568
    mov r0, r6
    mov r1, #0x2
    bl func_020350a8
    cmp r0, #0x0
    beq L_02175568
    mov r0, r6
    mov r1, #0x2
    mov r2, #0x12
    bl func_0203e280
L_02175568:
    add r0, r6, #0x100
    ldrh r0, [r0, #0xa]
    mov r2, #0x0
    cmp r0, #0x28
    bls L_021755b4
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r1, r4, r1
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    movs r0, r1, lsr #0x10
    moveq r2, #0x1
L_021755b4:
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r3, #0x1
    str r3, [sp, #0x4]
    str r5, [sp, #0x8]
    str r2, [sp, #0xc]
    mov r0, #0x30
    str r0, [sp, #0x10]
    str r1, [sp, #0x14]
    mov r0, #0x3
    str r0, [sp, #0x18]
    mov r0, r6
    mov r2, #0x1f8
    str r1, [sp, #0x1c]
    bl func_ov002_0217582c
    add r0, r6, #0x100
    ldrsh r0, [r0, #0x54]
    cmp r0, #0x15
    addeq r1, r6, #0xa2
    moveq r0, #0x1
    swpeqb r0, r0, [r1]
    addne r1, r6, #0xa2
    movne r0, #0x0
    swpneb r0, r0, [r1]
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on

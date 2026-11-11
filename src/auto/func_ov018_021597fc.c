#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003844();
extern void func_ov018_021588f8();
extern void func_ov018_0215cdc0();
// clang-format off
asm void func_ov018_021597fc(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    mov r0, r1
    mov r1, #0xc
    bl func_02003844
    str r0, [r5, #0xac]
    ldr r1, [r5, #0xac]
    cmp r1, #0x0
    movne r0, #0x0
    strne r0, [r1, #0x0]
    strne r0, [r1, #0x4]
    strne r0, [r1, #0x8]
    mov r0, r5
    bl func_ov018_021588f8
    cmp r0, #0x0
    movne r2, #0x40
    strne r2, [r0, #0x24]
    movne r1, #0x800
    strne r1, [r0, #0x28]
    strne r2, [r0, #0x2c]
    mov r0, r5
    bl func_ov018_021588f8
    cmp r0, #0x0
    beq L_0215bcf8
    ldrh r2, [r0, #0x20]
    add r1, r0, #0x1
    bic r2, r2, #0x1
    strh r2, [r0, #0x20]
    ldrb r0, [r0, #0x1]
    bic r0, r0, #0x1
    swpb r0, r0, [r1]
L_0215bcf8:
    mov r1, #0x0
    mov r0, #0x1000
    str r1, [r5, #0x3c]
    str r0, [r5, #0x40]
    str r1, [r5, #0x44]
    str r0, [r5, #0x48]
    str r1, [r5, #0x4c]
    str r1, [r5, #0x50]
    str r1, [r5, #0x54]
    str r1, [r5, #0x58]
    str r0, [r5, #0x5c]
    str r1, [r5, #0x60]
    rsb r0, r0, #0x0
    str r0, [r5, #0x64]
    str r1, [r5, #0x68]
    ldrsh r4, [r5, #0x1c]
    add r0, r4, #0x1
    mov r0, r0, lsl #0x10
    add r0, r4, r0, asr #0x10
    mov r0, r0, lsl #0x10
    movs r6, r0, asr #0x10
    bmi L_0215bd58
    cmp r6, #0x32
    blt L_0215bd60
L_0215bd58:
    mov r1, #0x0
    b L_0215bd6c
L_0215bd60:
    bl func_ov018_0215cdc0
    add r0, r0, r6, lsl #0x2
    ldr r1, [r0, #0x4]
L_0215bd6c:
    cmp r1, #0x0
    beq L_0215bd90
    ldrsh r0, [r5, #0x2c]
    cmp r1, #0x0
    strneh r0, [r1, #0x2c]
    mov r0, #0xa
    strh r0, [r1, #0x28]
    mov r0, #0x1
    strh r0, [r1, #0x1e]
L_0215bd90:
    ldrsh r1, [r5, #0x1c]
    add r0, r4, #0x2
    mov r0, r0, lsl #0x10
    add r0, r1, r0, asr #0x10
    mov r0, r0, lsl #0x10
    movs r6, r0, asr #0x10
    bmi L_0215bdb4
    cmp r6, #0x32
    blt L_0215bdbc
L_0215bdb4:
    mov r1, #0x0
    b L_0215bdc8
L_0215bdbc:
    bl func_ov018_0215cdc0
    add r0, r0, r6, lsl #0x2
    ldr r1, [r0, #0x4]
L_0215bdc8:
    cmp r1, #0x0
    beq L_0215bdec
    ldrsh r0, [r5, #0x2c]
    cmp r1, #0x0
    strneh r0, [r1, #0x2c]
    mov r0, #0xb
    strh r0, [r1, #0x28]
    mov r0, #0x1
    strh r0, [r1, #0x1e]
L_0215bdec:
    ldrsh r1, [r5, #0x1c]
    add r0, r4, #0x3
    mov r0, r0, lsl #0x10
    add r0, r1, r0, asr #0x10
    mov r0, r0, lsl #0x10
    movs r6, r0, asr #0x10
    bmi L_0215be10
    cmp r6, #0x32
    blt L_0215be18
L_0215be10:
    mov r1, #0x0
    b L_0215be24
L_0215be18:
    bl func_ov018_0215cdc0
    add r0, r0, r6, lsl #0x2
    ldr r1, [r0, #0x4]
L_0215be24:
    cmp r1, #0x0
    beq L_0215be48
    ldrsh r0, [r5, #0x2c]
    cmp r1, #0x0
    strneh r0, [r1, #0x2c]
    mov r0, #0xc
    strh r0, [r1, #0x28]
    mov r0, #0x1
    strh r0, [r1, #0x1e]
L_0215be48:
    ldrsh r1, [r5, #0x1c]
    add r0, r4, #0x4
    mov r0, r0, lsl #0x10
    add r0, r1, r0, asr #0x10
    mov r0, r0, lsl #0x10
    movs r4, r0, asr #0x10
    bmi L_0215be6c
    cmp r4, #0x32
    blt L_0215be74
L_0215be6c:
    mov r1, #0x0
    b L_0215be80
L_0215be74:
    bl func_ov018_0215cdc0
    add r0, r0, r4, lsl #0x2
    ldr r1, [r0, #0x4]
L_0215be80:
    cmp r1, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    ldrsh r0, [r5, #0x2c]
    cmp r1, #0x0
    strneh r0, [r1, #0x2c]
    mov r0, #0xd
    strh r0, [r1, #0x28]
    mov r0, #0x1
    strh r0, [r1, #0x1e]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on

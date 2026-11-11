#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff832c();
extern void func_01ff89d0();
extern void func_0200b634();
extern void func_0200b890();
extern void func_020271a8();
extern void func_02027b28();
extern void func_02027ed0();
extern void func_02028120();
extern void func_0203e5ac();
extern void func_0203e5e8();
extern void func_0206823c();
extern void func_ov005_02165308();
extern char data_02150e58[];
extern char data_021555f8[];
extern char data_0215a064[];
// clang-format off
asm void func_ov005_0215ce94(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xb8
    mov r6, r0
    ldrh r0, [r6, #0xfc]
    mov r5, #0x0
    ldr r4, [r6, #0x464]
    cmp r0, #0x3
    movlo r5, #0x1
    blo L_0215d1a0
    ldr r0, =data_0215a064
    ldr r3, [r0, #0x0]
    ldrsh r0, [r3, #0x7a]
    cmp r0, #0x0
    blt L_0215cee0
    ldr r1, =data_021555f8
    ldr r2, [r1, #0x0]
    ldrsh r1, [r2, #0x20]
    cmp r1, r0
    bgt L_0215cee8
L_0215cee0:
    mov r1, #0x0
    b L_0215cef0
L_0215cee8:
    add r1, r2, r0, lsl #0x2
    ldr r1, [r1, #0x4]
L_0215cef0:
    cmp r1, #0x0
    beq L_0215cf08
    ldrsh r1, [r1, #0x96]
    cmp r1, #0x8
    moveq r1, #0x1
    beq L_0215cf0c
L_0215cf08:
    mov r1, #0x0
L_0215cf0c:
    cmp r1, #0x0
    beq L_0215d1a0
    ldrh r1, [r3, #0x84]
    ands r1, r1, #0x1
    beq L_0215d1a0
    cmp r0, #0x0
    blt L_0215cf3c
    ldr r1, =data_021555f8
    ldr r2, [r1, #0x0]
    ldrsh r1, [r2, #0x20]
    cmp r1, r0
    bgt L_0215cf44
L_0215cf3c:
    mov r0, #0x0
    b L_0215cf4c
L_0215cf44:
    add r0, r2, r0, lsl #0x2
    ldr r0, [r0, #0x4]
L_0215cf4c:
    cmp r0, #0x0
    beq L_0215d1a0
    add r1, sp, #0x28
    bl func_ov005_02165308
    cmp r0, #0x0
    beq L_0215d1a0
    add r1, sp, #0x40
    mov r0, r6
    mov r2, #0x2
    bl func_020271a8
    add r1, sp, #0x70
    mov r0, r6
    mov r2, #0x4
    bl func_020271a8
    ldr r1, [sp, #0x64]
    ldr r2, [sp, #0x68]
    str r1, [sp, #0xa0]
    ldr r1, [sp, #0x6c]
    ldr r0, =data_0215a064
    str r1, [sp, #0xa8]
    ldr r1, [sp, #0x98]
    str r2, [sp, #0xa4]
    ldr r2, [sp, #0x94]
    str r1, [sp, #0xb0]
    ldr r1, [sp, #0x9c]
    ldr r3, =data_02150e58
    ldr r0, [r0, #0x0]
    str r2, [sp, #0xac]
    str r1, [sp, #0xb4]
    ldr r0, [r0, #0x1c]
    add r8, sp, #0x4
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r8, {r0, r1, r2}
    ldr r7, [r3, #0x54]
    ldr r2, [r3, #0x60]
    ldr r0, [r3, #0x6c]
    str r2, [sp, #0x14]
    str r0, [sp, #0x18]
    str r7, [sp, #0x10]
    add r2, sp, #0x10
    str r2, [sp, #0x0]
    mov r1, r8
    add r0, sp, #0x34
    add r2, sp, #0x28
    add r3, sp, #0xa0
    bl func_0200b634
    mov r0, r6
    bl func_02028120
    mov r8, r0
    mov r0, r6
    bl func_02028120
    mov r7, r0
    add r0, sp, #0xac
    add r1, sp, #0x28
    add r2, sp, #0x34
    bl func_0200b890
    smull ip, r1, r7, r8
    mov r2, #0x800
    adds ip, ip, r2
    adc r1, r1, #0x0
    mov lr, ip, lsr #0xc
    orr lr, lr, r1, lsl #0x14
    ldr r1, =0x2008
    mov r3, #0x0
    umull r8, r7, lr, r1
    adds r2, r8, r2
    mla r7, lr, r3, r7
    mov ip, lr, asr #0x1f
    mla r7, ip, r1, r7
    adc r1, r7, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    cmp r0, r2
    bge L_0215d1a0
    add r0, sp, #0x34
    add r1, sp, #0xa0
    add r2, sp, #0x1c
    bl func_0206823c
    mov r0, r6
    bl func_02028120
    mov r1, #0x200
    rsb r1, r1, #0x0
    mvn r2, #0x0
    umull lr, ip, r0, r1
    mla ip, r0, r2, ip
    mov r0, r0, asr #0x1f
    mla ip, r0, r1, ip
    mov r3, #0x800
    adds r3, lr, r3
    adc r1, ip, #0x0
    mov r2, r3, lsr #0xc
    ldr r0, [sp, #0x1c]
    orr r2, r2, r1, lsl #0x14
    cmp r0, r2
    add r0, sp, #0x1c
    strgt r2, [sp, #0x1c]
    bl func_01ff89d0
    mov r0, r6
    bl func_02028120
    add r1, sp, #0x1c
    add r2, sp, #0xa0
    mov r0, r0, lsl #0x1
    add r3, r6, #0x3f0
    bl func_01ff832c
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrsh r1, [r0, #0x88]
    cmp r1, #0x1e
    ble L_0215d12c
    mov r1, #0x2
    mov r0, r6
    str r1, [r6, #0x464]
    add r5, r6, #0x93
    mov r1, #0x0
    mov r2, #0x1c4
    swpb r3, r1, [r5]
    bl func_0203e5ac
    mov r5, #0x1
    b L_0215d1a0
L_0215d12c:
    mvn r0, #0x13
    cmp r1, r0
    ble L_0215d168
    mov r0, #0x1
    str r0, [r6, #0x464]
    cmp r4, #0x1
    bgt L_0215d1a0
    ldr r2, =0x1c3
    mov r0, r6
    add r5, r6, #0x93
    mov r1, #0x0
    swpb r3, r1, [r5]
    bl func_0203e5ac
    mov r5, #0x1
    b L_0215d1a0
L_0215d168:
    mov r5, #0x0
    str r5, [r6, #0x464]
    add r1, r6, #0x93
    mov r0, #0x5
    swpb r0, r0, [r1]
    add r3, r6, #0x3b4
    add r0, sp, #0x28
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r6
    mov r1, r5
    mov r2, #0x2d
    bl func_0203e5ac
    mov r5, #0x1
L_0215d1a0:
    ldr r0, =data_0215a064
    ldr r1, [r0, #0x0]
    ldrh r0, [r1, #0x84]
    ands r0, r0, #0x1
    beq L_0215d22c
    ldr r0, [r1, #0x98]
    ldr r1, [r1, #0x94]
    cmp r0, #0x0
    rsble r0, r0, #0x0
    cmp r1, #0x0
    rsble r1, r1, #0x0
    add r0, r1, r0
    cmp r0, #0xa
    ble L_0215d1ec
    mov r0, r6
    mov r1, #0x1
    mov r2, #0x1e
    bl func_02027ed0
    b L_0215d22c
L_0215d1ec:
    add r2, r6, #0x100
    ldrh r0, [r2, #0x28]
    add r0, r0, #0x1
    strh r0, [r2, #0x28]
    ldrh r0, [r2, #0x28]
    cmp r0, #0x3c
    blo L_0215d21c
    mov r3, #0x0
    mov r0, r6
    mvn r1, #0x13
    strh r3, [r2, #0x28]
    bl func_02027b28
L_0215d21c:
    mov r0, r6
    mov r1, #0x1
    mvn r2, #0x9
    bl func_02027ed0
L_0215d22c:
    ldr r0, =data_0215a064
    mov r2, #0x0
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0x84]
    ands r0, r0, #0x1
    addeq r0, r6, #0x100
    ldreqh r1, [r0, #0x1a]
    addeq r1, r1, #0x1
    streqh r1, [r0, #0x1a]
    addne r0, r6, #0x100
    movne r1, #0x0
    strneh r1, [r0, #0x1a]
    add r0, r6, #0x100
    ldr r1, =data_0215a064
    strh r2, [r0, #0x1c]
    ldr r0, [r1, #0x0]
    ldr r1, [r0, #0x98]
    ldr r0, [r0, #0x94]
    cmp r1, #0x0
    rsble r1, r1, #0x0
    cmp r0, #0x0
    rsble r0, r0, #0x0
    add r0, r0, r1
    cmp r0, #0x2
    addgt r0, r6, #0x100
    movgt r1, #0xc
    strgth r1, [r0, #0x1e]
    bgt L_0215d2b0
    add r0, r6, #0x100
    ldrh r1, [r0, #0x1e]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0x1e]
L_0215d2b0:
    cmp r5, #0x0
    addne sp, sp, #0xb8
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    cmp r4, #0x0
    beq L_0215d2e4
    cmp r4, #0x1
    beq L_0215d2fc
    cmp r4, #0x2
    beq L_0215d314
    add sp, sp, #0xb8
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0215d2e4:
    ldr r1, =0x459
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0xb8
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0215d2fc:
    ldr r1, =0x45b
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0xb8
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0215d314:
    ldr r1, =0x458
    mov r0, r6
    bl func_0203e5e8
    add sp, sp, #0xb8
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on

#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffda04();
extern void func_02027f40();
extern void func_02069098();
extern void func_0207d0e0();
extern void func_020ee334();
extern void func_ov003_0215c33c();
extern void func_ov003_0215c688();
extern void func_ov003_0215c7b8();
extern void func_ov003_0215d5f8();
extern char data_02153734[];
extern char data_ov003_0216ba8c[];
extern char data_ov003_0216be20[];
// clang-format off
asm void func_ov003_0215a940(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x30
    ldr r2, =data_ov003_0216be20
    ldr r3, [r2, #0x0]
    add r0, r3, #0x3000
    ldrb r1, [r0, #0x6cc]
    cmp r1, #0x1
    bne L_0215abb0
    mvn r1, #0x0
    str r1, [r0, #0x6c8]
    ldr r0, [r2, #0x0]
    mov r3, #0x1
    add r1, r0, #0x3000
    ldr r0, [r1, #0x6c4]
    ldrb r4, [r0, #0x0]
    ldrsh r0, [r0, #0x2]
    mov r4, r4, lsl #0x3
    sub r0, r4, r0
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [r1, #0x394]
    ldr r0, [r2, #0x0]
    add r1, r0, #0x3000
    ldr r0, [r1, #0x6c4]
    ldrb r4, [r0, #0x1]
    ldrsh r0, [r0, #0x4]
    mov r4, r4, lsl #0x3
    sub r0, r4, r0
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [r1, #0x398]
    ldr r0, [r2, #0x0]
    add r1, r0, #0x10
    swpb r0, r3, [r1]
    ldr r0, [r2, #0x0]
    add r1, r0, #0x11
    swpb r0, r3, [r1]
    ldr r1, [r2, #0x0]
    ldrb r0, [r1, #0x10]
    add r2, r1, #0x16
    add r1, r1, #0x10
    cmp r0, #0x0
    beq L_0215aa04
    cmp r0, #0x1
    beq L_0215aa10
    cmp r0, #0x2
    moveq r0, #0xf0
    streqh r0, [r2, #0x0]
    b L_0215aa18
L_0215aa04:
    mov r0, #0x0
    strh r0, [r2, #0x0]
    b L_0215aa18
L_0215aa10:
    mov r0, #0x78
    strh r0, [r2, #0x0]
L_0215aa18:
    ldrb r0, [r1, #0x1]
    cmp r0, #0x0
    beq L_0215aa3c
    cmp r0, #0x1
    beq L_0215aa48
    cmp r0, #0x2
    moveq r0, #0xc0
    streqh r0, [r2, #0x2]
    b L_0215aa50
L_0215aa3c:
    mov r0, #0x0
    strh r0, [r2, #0x2]
    b L_0215aa50
L_0215aa48:
    mov r0, #0x60
    strh r0, [r2, #0x2]
L_0215aa50:
    ldr r1, =data_ov003_0216be20
    ldr r2, [r1, #0x0]
    add r0, r2, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrsh r0, [r0, #0x2]
    strh r0, [r2, #0x12]
    ldr r2, [r1, #0x0]
    add r0, r2, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrsh r0, [r0, #0x4]
    strh r0, [r2, #0x14]
    ldr r3, [r1, #0x0]
    add r0, r3, #0x3000
    ldr r2, [r0, #0x6c4]
    ldrsh r0, [r3, #0x16]
    ldrsh r1, [r2, #0x2]
    cmp r1, r0
    bne L_0215aab0
    ldrsh r1, [r2, #0x4]
    ldrsh r0, [r3, #0x18]
    cmp r1, r0
    moveq r0, #0x4
    swpeqb r0, r0, [r3]
    beq L_0215aac8
L_0215aab0:
    mov r1, #0x0
    ldr r0, =data_ov003_0216be20
    str r1, [r3, #0x8]
    ldr r1, [r0, #0x0]
    mov r0, #0x3
    swpb r0, r0, [r1]
L_0215aac8:
    ldr r0, =data_02153734
    ldr r0, [r0, #0x0]
    ldrsh r0, [r0, #0x2]
    bl func_01ffda04
    ldr r5, =data_ov003_0216ba8c
    mov r6, r0
    add r4, sp, #0x0
    ldmia r5!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia r5!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia r5, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    mov r0, r6
    mov r1, #0x4
    bl func_02027f40
    ldr r3, =0x1b4e81b5
    mov r2, r0, lsr #0x1f
    smull r0, r1, r3, r0
    mov r1, r1, asr #0x5
    add r1, r2, r1
    ldr r3, =data_ov003_0216be20
    cmp r1, #0x5
    ldr r2, [r3, #0x0]
    ldr r0, =0x10dcd
    add r2, r2, #0x3000
    ldr r6, [r2, #0x6c0]
    movgt r1, #0x5
    mul r0, r6, r0
    add r6, r0, #0x1
    str r6, [r2, #0x6c0]
    add r5, sp, #0x0
    add r4, sp, #0x4
    ldr r0, [r5, r1, lsl #0x3]
    ldr r1, [r4, r1, lsl #0x3]
    mov r2, r6, lsl #0x10
    sub r1, r1, r0
    add r1, r1, #0x1
    mov r1, r1, lsl #0x10
    mov r4, r1, lsr #0x10
    mov r1, r2, lsr #0x10
    mul r2, r4, r1
    ldr r1, [r3, #0x0]
    mov r3, r2, lsr #0x10
    add r1, r1, #0x3000
    ldr r2, [r1, #0x6c4]
    mov r1, r3, lsl #0x10
    add r2, r2, #0x2000
    add r0, r0, r1, lsr #0x10
    add r1, r2, #0x2a4
    swpb r0, r0, [r1]
    bl func_ov003_0215c688
    bl func_ov003_0215c33c
    mov r0, #0x1
    bl func_020ee334
    add sp, sp, #0x30
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0215abb0:
    cmp r1, #0x2
    bne L_0215ad84
    bl func_ov003_0215d5f8
    ldr r0, =data_ov003_0216be20
    mov r2, #0x0
    ldr r3, [r0, #0x0]
    mov r1, #0x1
    add r3, r3, #0x3000
    ldr r4, [r3, #0x6c4]
    ldr r3, [r4, #0x8]
    add r3, r4, r3, lsl #0x1
    ldrb r3, [r3, #0xa]
    swpb r3, r3, [r4]
    ldr r3, [r0, #0x0]
    add r3, r3, #0x3000
    ldr r5, [r3, #0x6c4]
    ldr r3, [r5, #0x8]
    add r4, r5, #0x1
    add r3, r5, r3, lsl #0x1
    ldrb r3, [r3, #0xb]
    swpb r3, r3, [r4]
    ldr r3, [r0, #0x0]
    str r2, [r3, #0x20]
    ldr r4, [r0, #0x0]
    add r3, r4, #0x3000
    ldr r3, [r3, #0x6c4]
    add r4, r4, #0x1a
    ldrb r3, [r3, #0x0]
    swpb r3, r3, [r4]
    ldr r4, [r0, #0x0]
    add r3, r4, #0x3000
    ldr r3, [r3, #0x6c4]
    add r4, r4, #0x1b
    ldrb r3, [r3, #0x1]
    swpb r3, r3, [r4]
    ldr r3, [r0, #0x0]
    add r4, r3, #0x10
    swpb r3, r1, [r4]
    ldr r3, [r0, #0x0]
    add r3, r3, #0x11
    swpb r1, r1, [r3]
    ldr r1, [r0, #0x0]
    ldrb r0, [r1, #0x10]
    add r3, r1, #0x16
    add r1, r1, #0x10
    cmp r0, #0x0
    beq L_0215ac84
    cmp r0, #0x1
    beq L_0215ac8c
    cmp r0, #0x2
    moveq r0, #0xf0
    streqh r0, [r3, #0x0]
    b L_0215ac94
L_0215ac84:
    strh r2, [r3, #0x0]
    b L_0215ac94
L_0215ac8c:
    mov r0, #0x78
    strh r0, [r3, #0x0]
L_0215ac94:
    ldrb r0, [r1, #0x1]
    cmp r0, #0x0
    beq L_0215acb8
    cmp r0, #0x1
    beq L_0215acc4
    cmp r0, #0x2
    moveq r0, #0xc0
    streqh r0, [r3, #0x2]
    b L_0215accc
L_0215acb8:
    mov r0, #0x0
    strh r0, [r3, #0x2]
    b L_0215accc
L_0215acc4:
    mov r0, #0x60
    strh r0, [r3, #0x2]
L_0215accc:
    ldr r1, =data_ov003_0216be20
    ldr r2, [r1, #0x0]
    add r0, r2, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrsh r0, [r0, #0x2]
    strh r0, [r2, #0x12]
    ldr r2, [r1, #0x0]
    add r0, r2, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrsh r0, [r0, #0x4]
    strh r0, [r2, #0x14]
    ldr r3, [r1, #0x0]
    add r0, r3, #0x3000
    ldr r2, [r0, #0x6c4]
    ldrsh r0, [r3, #0x16]
    ldrsh r1, [r2, #0x2]
    cmp r1, r0
    bne L_0215ad2c
    ldrsh r1, [r2, #0x4]
    ldrsh r0, [r3, #0x18]
    cmp r1, r0
    moveq r0, #0x0
    swpeqb r0, r0, [r3]
    beq L_0215ad44
L_0215ad2c:
    mov r1, #0x0
    ldr r0, =data_ov003_0216be20
    str r1, [r3, #0x8]
    ldr r1, [r0, #0x0]
    mov r0, #0x1
    swpb r0, r0, [r1]
L_0215ad44:
    ldr r2, =data_ov003_0216be20
    mvn r3, #0x0
    ldr r1, [r2, #0x0]
    mov r0, #0x19
    add r1, r1, #0x3000
    str r3, [r1, #0x6c8]
    ldr r2, [r2, #0x0]
    mov r1, #0x0
    add r2, r2, #0x3000
    ldr r2, [r2, #0x6c4]
    mov r3, #0x2000
    add r2, r2, #0x264
    bl func_0207d0e0
    add sp, sp, #0x30
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0215ad84:
    add r0, r3, #0x1000
    ldr r0, [r0, #0x2f0]
    cmp r0, #0x0
    bne L_0215ae7c
    bl func_ov003_0215c7b8
    cmp r0, #0x0
    addeq sp, sp, #0x30
    ldmeqfd sp!, {r4, r5, r6, r7, r8, lr}
    bxeq lr
    ldr r0, =data_ov003_0216be20
    ldr r1, [r0, #0x0]
    ldrb r0, [r1, #0x10]
    add r2, r1, #0x16
    add r1, r1, #0x10
    cmp r0, #0x0
    beq L_0215addc
    cmp r0, #0x1
    beq L_0215ade8
    cmp r0, #0x2
    moveq r0, #0xf0
    streqh r0, [r2, #0x0]
    b L_0215adf0
L_0215addc:
    mov r0, #0x0
    strh r0, [r2, #0x0]
    b L_0215adf0
L_0215ade8:
    mov r0, #0x78
    strh r0, [r2, #0x0]
L_0215adf0:
    ldrb r0, [r1, #0x1]
    cmp r0, #0x0
    beq L_0215ae14
    cmp r0, #0x1
    beq L_0215ae20
    cmp r0, #0x2
    moveq r0, #0xc0
    streqh r0, [r2, #0x2]
    b L_0215ae28
L_0215ae14:
    mov r0, #0x0
    strh r0, [r2, #0x2]
    b L_0215ae28
L_0215ae20:
    mov r0, #0x60
    strh r0, [r2, #0x2]
L_0215ae28:
    ldr r1, =data_ov003_0216be20
    mov r3, #0x0
    ldr r4, [r1, #0x0]
    mov r2, #0x1
    add r0, r4, #0x3000
    ldr r0, [r0, #0x6c4]
    add sp, sp, #0x30
    ldrsh r0, [r0, #0x2]
    strh r0, [r4, #0x12]
    ldr r4, [r1, #0x0]
    add r0, r4, #0x3000
    ldr r0, [r0, #0x6c4]
    ldrsh r0, [r0, #0x4]
    strh r0, [r4, #0x14]
    ldr r0, [r1, #0x0]
    str r3, [r0, #0x8]
    ldr r0, [r1, #0x0]
    add r0, r0, #0x1000
    str r2, [r0, #0x2f0]
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0215ae7c:
    ldr r0, [r3, #0x8]
    add r0, r0, #0x1
    str r0, [r3, #0x8]
    ldr r1, [r2, #0x0]
    ldr r0, [r1, #0x8]
    cmp r0, #0x1e
    blt L_0215aec4
    add r0, r1, #0x3000
    ldrsh r1, [r1, #0x16]
    ldr r0, [r0, #0x6c4]
    mov lr, #0x1
    strh r1, [r0, #0x2]
    ldr r1, [r2, #0x0]
    add r0, r1, #0x3000
    ldrsh r1, [r1, #0x18]
    ldr r0, [r0, #0x6c4]
    strh r1, [r0, #0x4]
    b L_0215af5c
L_0215aec4:
    mov r0, r0, lsl #0xc
    mov r1, #0x1e000
    bl func_02069098
    ldr r5, =data_ov003_0216be20
    mov r4, #0x800
    ldr ip, [r5, #0x0]
    mov lr, #0x0
    ldrsh r3, [ip, #0x14]
    ldrsh r6, [ip, #0x18]
    ldrsh r1, [ip, #0x12]
    ldrsh r2, [ip, #0x16]
    sub r6, r6, r3
    mov r7, r6, lsl #0xc
    sub r2, r2, r1
    mov r6, r2, lsl #0xc
    smull r2, r8, r0, r7
    adds r2, r2, r4
    add ip, ip, #0x3000
    smull r7, r6, r0, r6
    adc r0, r8, #0x0
    adds r4, r7, r4
    mov r2, r2, lsr #0xc
    orr r2, r2, r0, lsl #0x14
    add r0, r2, r3, lsl #0xc
    add r2, r0, #0x800
    adc r0, r6, #0x0
    mov r3, r4, lsr #0xc
    orr r3, r3, r0, lsl #0x14
    add r0, r3, r1, lsl #0xc
    add r1, r0, #0x800
    ldr r0, [ip, #0x6c4]
    mov r1, r1, asr #0xc
    strh r1, [r0, #0x2]
    ldr r0, [r5, #0x0]
    mov r1, r2, asr #0xc
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    strh r1, [r0, #0x4]
L_0215af5c:
    cmp lr, #0x0
    ldrne r0, =data_ov003_0216be20
    movne r1, #0x0
    ldrne r0, [r0, #0x0]
    addne r0, r0, #0x1000
    strne r1, [r0, #0x2f0]
    add sp, sp, #0x30
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on

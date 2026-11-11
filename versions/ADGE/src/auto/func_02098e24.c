#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205e15c();
extern void func_02097328();
extern void func_02097550();
extern void func_020975ac();
extern void func_02097624();
extern void func_020978b8();
extern void func_02097b58();
extern void func_02099164();
extern char data_0213d1a8[];
extern char data_0213d1ac[];
extern char data_02154e20[];
extern char data_02154e24[];
extern char data_02154e28[];
extern char data_02154e2c[];
extern char data_02154e30[];
extern char data_02154e34[];
extern char data_02154e40[];
extern char data_02154e44[];
extern char data_02154e48[];
extern char data_02154e4c[];
extern char data_02154e50[];
// clang-format off
asm void func_02098e24(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    ldr r0, =data_02154e48
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_02099034
    bl func_02097328
    ldr r3, =data_0213d1ac
    ldr r1, =data_02154e40
    mov r4, #0x1
    ldr r2, =data_02154e4c
    str r4, [r1, #0x0]
    str r0, [sp, #0x4]
    ldr r3, [r3, #0x0]
    ldr r1, [r2, #0x0]
    ldrsh r0, [r0, #0x0]
    sub r2, r3, r1
    mov r10, #0x0
    cmp r2, r0
    movhi r2, r0
    ldrls r0, =data_02154e48
    movls r1, #0x0
    strls r1, [r0, #0x0]
    bics r0, r2, #0x1
    str r0, [sp, #0x8]
    beq L_02098fdc
    mov r0, #0x2
    ldr r5, =data_02154e24
    ldr r6, =data_02154e50
    ldr r4, =data_02154e28
    add r11, sp, #0x14
    str r10, [sp, #0xc]
    str r0, [sp, #0x10]
L_02098ea8:
    ldr r9, [sp, #0xc]
L_02098eac:
    ldr r0, =data_02154e4c
    ldr r2, [r0, #0x0]
    ldr r0, =data_0213d1ac
    add r8, r2, r10
    ldr r1, [r0, #0x0]
    ldr r0, =0xcccccccd
    umull r0, r7, r1, r0
    mov r7, r7, lsr #0x5
    mov r0, r8
    mov r1, r7
    bl func_0205e15c
    cmp r1, #0x0
    bne L_02098f2c
    mov r0, r8
    mov r1, r7
    bl func_0205e15c
    ldrsh r3, [r5, #0x0]
    mov r2, r0, lsl #0x2
    ldrsh r1, [r6, r2]
    cmp r3, r1
    bne L_02098f14
    add r1, r6, r2
    ldrsb r1, [r1, #0x2]
    ldrsb r2, [r5, #0x2]
    cmp r2, r1
    beq L_02098f2c
L_02098f14:
    mov r3, r0, lsl #0x2
    add r2, r6, r0, lsl #0x2
    ldrh r1, [r5, #0x0]
    ldrh r0, [r5, #0x2]
    strh r1, [r6, r3]
    strh r0, [r2, #0x2]
L_02098f2c:
    ldr r0, [sp, #0x4]
    add r0, r0, r10, lsl #0x1
    ldrsh r1, [r0, #0x6]
    mov r0, #0x96
    add r10, r10, #0x1
    smulbb r2, r1, r0
    ldr r0, =0x51eb851f
    smull r1, r3, r0, r2
    mov r0, r2, lsr #0x1f
    mov r3, r3, asr #0x5
    add r3, r0, r3
    ldr r0, [r4, #0x0]
    ldrsb r1, [r0, #0x0]
    add r2, r3, r1, lsl #0x6
    ldr r1, =0x7ff0
    cmp r2, r1
    movgt r2, r1
    bgt L_02098f80
    ldr r1, =0xffff8010
    cmp r2, r1
    movlt r2, r1
L_02098f80:
    mov r1, r9, lsl #0x1
    strh r2, [r11, r1]
    ldrsh r1, [r11, r1]
    ldr r2, [r4, #0x0]
    add r9, r9, #0x1
    add r2, r2, #0x1
    str r2, [r4, #0x0]
    mov r1, r1, asr #0x8
    swpb r1, r1, [r0]
    cmp r9, #0x2
    blt L_02098eac
    ldr r0, =data_02154e20
    ldr r2, =data_02154e20
    ldr r1, [r0, #0x0]
    mov r0, r11
    add r3, r1, #0x1
    str r3, [r2, #0x0]
    ldr r2, [sp, #0x10]
    mov r3, r5
    bl func_020978b8
    ldr r0, [sp, #0x8]
    cmp r10, r0
    blo L_02098ea8
L_02098fdc:
    ldr r1, =data_02154e4c
    ldr r0, =data_02154e44
    ldr r3, [r1, #0x0]
    ldr r2, [r0, #0x0]
    ldr r0, [sp, #0x8]
    cmp r2, #0x1
    add r3, r3, r0
    str r3, [r1, #0x0]
    bne L_02099008
    bl func_02099164
    b L_02099034
L_02099008:
    ldr r0, =data_0213d1ac
    ldr r0, [r0, #0x0]
    cmp r3, r0
    bne L_02099034
    bl func_02097550
    mov r0, #0x1f40
    bl func_02097624
    bl func_020975ac
    ldr r0, =data_02154e48
    mov r1, #0x0
    str r1, [r0, #0x0]
L_02099034:
    ldr r0, =data_0213d1a8
    ldr r7, [r0, #0x0]
    cmp r7, #0x28
    addhs sp, sp, #0x1c
    ldmhsfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxhs lr
    ldr r0, =data_02154e30
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x1c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r1, =data_0213d1ac
    ldr r2, =data_02154e34
    ldr r3, [r1, #0x0]
    ldr r1, =0xcccccccd
    add r4, r7, #0x1
    umull r1, r6, r3, r1
    mov r6, r6, lsr #0x5
    ldr r5, [r2, #0x0]
    mul r2, r7, r6
    mul r3, r4, r6
    ldr r1, =data_02154e2c
    str r5, [sp, #0x0]
    ldr r1, [r1, #0x0]
    bl func_02097b58
    ldr r0, =data_0213d1ac
    ldr r2, =data_0213d1a8
    ldr r1, =data_02154e34
    ldr r4, [r2, #0x0]
    ldr r3, [r0, #0x0]
    ldr r0, =0xcccccccd
    add r5, r4, #0x1
    umull r0, r4, r3, r0
    ldr r0, [r1, #0x0]
    mov r4, r4, lsr #0x5
    add r0, r0, r4
    str r5, [r2, #0x0]
    str r0, [r1, #0x0]
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

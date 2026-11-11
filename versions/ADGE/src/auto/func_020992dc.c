#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205e15c();
extern void func_02097550();
extern void func_020975ac();
extern void func_02097624();
extern void func_020976e8();
extern void func_020978b8();
extern void func_02097b58();
extern void func_02099544();
extern char data_0213d1a8[];
extern char data_0213d1ac[];
extern char data_02154e20[];
extern char data_02154e24[];
extern char data_02154e28[];
extern char data_02154e3c[];
extern char data_02154e44[];
extern char data_02154e48[];
extern char data_02154e4c[];
extern char data_02154e50[];
// clang-format off
asm void func_020992dc(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r6, r0
    mov r5, r1
    mov r4, r2
    mov r7, r3
    bl func_02097550
    mov r0, #0x1f40
    mul r1, r7, r0
    mov r0, r1, asr #0x7
    add r0, r1, r0, lsr #0x18
    mov r0, r0, asr #0x8
    bl func_02097624
    bl func_020975ac
    ldr r1, =data_0213d1ac
    ldr r0, =0x2040811
    ldr r1, [r1, #0x0]
    cmp r5, #0x0
    mul r1, r4, r1
    umull r0, r4, r1, r0
    sub r0, r1, r4
    add r4, r4, r0, lsr #0x1
    mov r4, r4, lsr #0x6
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r0, r5
    add r9, r6, #0xc
    add r8, r5, #0xc
    bl func_02099544
    ldr r1, =data_02154e3c
    bic r7, r4, #0x1
    ldr r11, [r1, #0x0]
    ldr r4, =data_02154e4c
    ldr r10, =data_02154e48
    mov r0, #0x1
    ldr r2, =data_02154e28
    add ip, r9, r7
    ldr r3, =data_02154e44
    str ip, [r2, #0x0]
    mov r2, #0x0
    str r0, [r10, #0x0]
    str r7, [r4, #0x0]
    str r2, [r3, #0x0]
    cmp r11, #0x0
    bne L_020993b0
    str r0, [r1, #0x0]
    ldr r0, =data_0213d1ac
    str r2, [sp, #0x0]
    ldr r3, [r0, #0x0]
    mov r0, r5
    mov r1, r6
    bl func_02097b58
L_020993b0:
    ldrsh r1, [r8, #0x0]
    ldr r0, =data_02154e24
    strh r1, [r0, #0x0]
    ldrsb r1, [r8, #0x2]
    add r2, r0, #0x2
    swpb r1, r1, [r2]
    ldrsb r1, [r9, #0x0]
    bl func_020976e8
    ldr r0, =data_02154e24
    add r2, r8, #0x2
    ldrsh r1, [r0, #0x0]
    ldr r4, =data_0213d1ac
    ldr r3, =0xcccccccd
    strh r1, [r8, #0x0]
    ldrsb r1, [r0, #0x2]
    mov r0, r7
    add r8, r8, #0x4
    swpb r1, r1, [r2]
    ldr r2, [r4, #0x0]
    umull r1, r4, r2, r3
    mov r4, r4, lsr #0x5
    mov r1, r4
    bl func_0205e15c
    mul r10, r0, r4
    ldr r5, =data_02154e50
    mov r1, r0, lsl #0x2
    add r0, r5, r0, lsl #0x2
    ldrh r1, [r5, r1]
    ldr r4, =data_02154e24
    ldrh r0, [r0, #0x2]
    strh r1, [r4, #0x0]
    cmp r10, r7
    strh r0, [r4, #0x2]
    add r8, r8, r10, lsr #0x1
    bhs L_020994f4
    mov r11, #0x2
L_02099440:
    ldr r0, =data_0213d1ac
    ldr r1, =0xcccccccd
    ldr r2, [r0, #0x0]
    mov r0, r10
    umull r1, r6, r2, r1
    mov r6, r6, lsr #0x5
    mov r1, r6
    bl func_0205e15c
    cmp r1, #0x0
    bne L_020994b4
    mov r0, r10
    mov r1, r6
    bl func_0205e15c
    mov r2, r0, lsl #0x2
    ldrsh r3, [r4, #0x0]
    ldrsh r1, [r5, r2]
    cmp r3, r1
    bne L_0209949c
    add r1, r5, r2
    ldrsb r2, [r4, #0x2]
    ldrsb r1, [r1, #0x2]
    cmp r2, r1
    beq L_020994b4
L_0209949c:
    ldrh r2, [r4, #0x0]
    ldrh r1, [r4, #0x2]
    mov r3, r0, lsl #0x2
    add r0, r5, r0, lsl #0x2
    strh r2, [r5, r3]
    strh r1, [r0, #0x2]
L_020994b4:
    ldrsb r2, [r9, r10]
    add r1, r10, #0x1
    add r0, sp, #0x4
    mov r2, r2, lsl #0x8
    strh r2, [sp, #0x4]
    ldrsb r3, [r9, r1]
    mov r1, r8
    mov r2, r11
    mov r3, r3, lsl #0x8
    strh r3, [sp, #0x6]
    mov r3, r4
    add r10, r10, #0x2
    bl func_020978b8
    cmp r10, r7
    add r8, r8, #0x1
    blo L_02099440
L_020994f4:
    ldr r1, =data_02154e20
    ldr r0, =data_0213d1a8
    mov r2, #0x28
    str r8, [r1, #0x0]
    str r2, [r0, #0x0]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

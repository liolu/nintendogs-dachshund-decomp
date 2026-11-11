#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202285c();
extern void func_02022a80();
extern void func_02067ca0();
extern void func_02081208();
extern void func_0208129c();
extern void func_0208ff8c();
extern void func_020a5fcc();
extern char data_0213845c[];
extern char data_02138468[];
extern char data_02138474[];
extern char data_02138480[];
extern char data_0213848c[];
extern char data_02138498[];
extern char data_02139a44[];
extern char data_02139a54[];
extern char data_0214da84[];
extern char data_0215a02c[];
// clang-format off
asm void func_02022124(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    ldr r5, =data_0214da84
    mov r4, r0
    ldr r0, [r5, #0x0]
    str r1, [sp, #0x0]
    ldrsb r0, [r0, #0xc]
    mov r5, r2
    str r3, [sp, #0x4]
    cmp r0, #0x2
    addeq sp, sp, #0x2c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    bl func_02022a80
    cmp r5, #0x0
    beq L_02022178
    cmp r5, #0x1
    beq L_020221cc
    cmp r5, #0x2
    beq L_02022220
    b L_02022270
L_02022178:
    ldr r0, =data_0215a02c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_02138498
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x6c
    bl func_02081208
    ldr r0, =data_0215a02c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_02138474
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x6d
    bl func_02081208
    b L_02022270
L_020221cc:
    ldr r0, =data_0215a02c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_0213848c
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x6c
    bl func_02081208
    ldr r0, =data_0215a02c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_02138468
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x6d
    bl func_02081208
    b L_02022270
L_02022220:
    ldr r0, =data_0215a02c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_02138480
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x6c
    bl func_02081208
    ldr r0, =data_0215a02c
    ldrsb r3, [r4, #0x88]
    ldr r0, [r0, #0x0]
    ldr r2, =data_0213845c
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldr r2, [r2, r3, lsl #0x2]
    moveq r0, #0x0
    mov r1, #0x6d
    bl func_02081208
L_02022270:
    mov r0, #0x42
    bl func_0208ff8c
    ldr r0, [sp, #0x50]
    cmp r0, #0x0
    addeq sp, sp, #0x2c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r0, =data_02139a44
    ldr r1, =data_02139a54
    ldrb ip, [r0, #0x0]
    ldrh r10, [r1, #0x0]
    add r11, sp, #0xe
    ldrb r7, [r0, #0x1]
    ldrb r6, [r0, #0x2]
    swpb r0, ip, [r11]
    ldrh r9, [r1, #0x2]
    ldrh r8, [r1, #0x4]
    add r3, sp, #0xf
    mov r0, r4
    add r5, sp, #0x10
    swpb r4, r7, [r3]
    swpb r3, r6, [r5]
    add r1, sp, #0x14
    add r2, sp, #0x20
    strh r10, [sp, #0x8]
    strh r9, [sp, #0xa]
    strh r8, [sp, #0xc]
    bl func_0202285c
    mov r8, #0x0
    mov r7, r11
    ldr r4, =data_0214da84
    add r5, sp, #0x8
    add r11, sp, #0x14
    mov r6, r8
L_020222f8:
    ldrb r3, [r7, #0x0]
    ldr r0, =data_0215a02c
    mov r1, #0xc
    mla r2, r3, r1, r11
    ldr r0, [r0, #0x0]
    mov r10, r8, lsl #0x1
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldrsh r1, [r5, r10]
    ldr r9, [r4, #0x0]
    moveq r0, r6
    bl func_0208129c
    add r1, r9, r8, lsl #0x2
    add r1, r1, #0x7000
    str r0, [r1, #0x3e0]
    ldr r0, [r4, #0x0]
    add r0, r0, r8, lsl #0x2
    add r0, r0, #0x7000
    ldr r0, [r0, #0x3e0]
    cmp r0, #0x0
    beq L_020223b0
    bl func_020a5fcc
    mov r9, r0
    bl func_020a5fcc
    mov r1, r0
    ldrsh r0, [r9, #0x6c]
    ldrsh r1, [r1, #0x6e]
    bl func_02067ca0
    mov lr, r0, asr #0x1f
    mov r3, #0x0
    mov r1, #0x1c00
    mov r2, #0x800
    ldr ip, [r4, #0x0]
    umull r10, r9, r0, r1
    mla r9, r0, r3, r9
    mla r9, lr, r1, r9
    adds r1, r10, r2
    adc r0, r9, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    mov r0, r1, lsl #0x10
    mov r1, r0, asr #0x10
    add r0, ip, r8, lsl #0x2
    add r0, r0, #0x7000
    ldr r0, [r0, #0x3e0]
    str r1, [r0, #0x54]
L_020223b0:
    add r0, r8, #0x1
    mov r0, r0, lsl #0x10
    mov r8, r0, asr #0x10
    cmp r8, #0x3
    add r7, r7, #0x1
    blt L_020222f8
    ldr r2, =data_0214da84
    mov r4, #0x2
    ldr r0, [r2, #0x0]
    mov r3, #0xc8
    add r1, r0, #0xc
    swpb r0, r4, [r1]
    ldr r0, [r2, #0x0]
    strh r3, [r0, #0x2a]
    ldr r0, [r2, #0x0]
    add r1, r0, #0xa
    ldr r0, [sp, #0x0]
    swpb r0, r0, [r1]
    ldr r1, [r2, #0x0]
    ldr r0, [sp, #0x4]
    strh r0, [r1, #0x20]
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003844();
extern void func_02068380();
extern void func_020c4eac();
extern void func_020c4f2c();
extern void func_020c5138();
extern void func_020c514c();
extern void func_020c5160();
extern void func_020c519c();
extern void func_020c51a8();
extern void func_020c5468();
extern char data_ov018_0215d220[];
extern char data_ov018_0215d224[];
extern char data_ov018_0215d228[];
extern char data_ov018_0215d22c[];
extern char data_ov018_0215d230[];
extern char func_ov018_021589f8[];
// clang-format off
asm void func_ov018_02158d5c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x34
    str r1, [sp, #0x0]
    mov r1, #0xb0
    mov r10, r0
    bl func_02003844
    movs r9, r0
    beq L_0215b3b4
    ldr r2, =data_ov018_0215d230
    ldr r1, =data_ov018_0215d22c
    ldr r5, [r2, #0x0]
    ldr r4, [r1, #0x0]
    ldr r2, =data_ov018_0215d224
    ldr r1, =data_ov018_0215d228
    ldr r3, [r2, #0x0]
    ldr r2, [r1, #0x0]
    mov r1, #0xff
    str r5, [sp, #0x4]
    str r4, [sp, #0x8]
    str r3, [sp, #0xc]
    str r4, [sp, #0x10]
    str r4, [sp, #0x14]
    str r2, [sp, #0x18]
    str r2, [sp, #0x1c]
    str r2, [sp, #0x20]
    str r4, [sp, #0x24]
    str r4, [sp, #0x28]
    str r4, [sp, #0x2c]
    str r5, [sp, #0x30]
    bl func_020c4f2c
    mov r8, #0x0
    ldr r11, =0x5294
    add r5, sp, #0x4
    mov r7, r8
    mov r4, #0x3
    mov r6, #0x88
L_0215b26c:
    add r0, r9, r8, lsl #0x2
    str r7, [r0, #0x78]
    ldr r2, [r5, r8, lsl #0x2]
    mov r0, r10
    mov r1, r6
    bl func_020c5468
    add r1, r9, r8, lsl #0x2
    str r0, [r1, #0x78]
    ldr r0, [r1, #0x78]
    cmp r0, #0x0
    beq L_0215b2e8
    mov r1, r11
    bl func_020c514c
    add r0, r9, r8, lsl #0x2
    ldr r0, [r0, #0x78]
    ldr r1, =0x7fff
    bl func_020c5160
    add r0, r9, r8, lsl #0x2
    ldr r0, [r0, #0x78]
    mov r1, r4
    bl func_020c5138
    add r2, r9, r8, lsl #0x2
    ldr r1, [r2, #0x78]
    ldrh r0, [r1, #0x20]
    orr r0, r0, #0x1
    strh r0, [r1, #0x20]
    ldr r1, [r2, #0x78]
    ldrb r0, [r1, #0x1]
    add r1, r1, #0x1
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
L_0215b2e8:
    add r0, r8, #0x1
    mov r0, r0, lsl #0x10
    mov r8, r0, asr #0x10
    cmp r8, #0xc
    blt L_0215b26c
    mov r1, #0x0
    ldr r0, =data_ov018_0215d220
    str r1, [r9, #0xa8]
    ldr r2, [r0, #0x0]
    mov r0, r10
    mov r1, #0x88
    bl func_020c5468
    str r0, [r9, #0xa8]
    ldr r0, [r9, #0xa8]
    cmp r0, #0x0
    beq L_0215b354
    mov r1, #0x14
    bl func_020c51a8
    ldr r0, [sp, #0x0]
    add r1, r0, #0x1e
    ldr r0, [r9, #0xa8]
    and r1, r1, #0xff
    bl func_020c519c
    ldr r1, [r9, #0xa8]
    ldrh r0, [r1, #0x20]
    orr r0, r0, #0x1
    strh r0, [r1, #0x20]
L_0215b354:
    ldr r0, [sp, #0x0]
    mov r1, #0x0
    strh r0, [r9, #0x1c]
    strh r1, [r9, #0x1e]
    strh r1, [r9, #0x20]
    strh r1, [r9, #0x22]
    strh r1, [r9, #0x24]
    strh r1, [r9, #0x26]
    mov r0, #0xe
    strh r0, [r9, #0x28]
    mvn r0, #0x0
    strh r0, [r9, #0x2a]
    strh r0, [r9, #0x2c]
    str r1, [r9, #0x3c]
    str r1, [r9, #0x40]
    str r1, [r9, #0x44]
    str r1, [r9, #0x30]
    str r1, [r9, #0x34]
    add r0, r9, #0x48
    str r1, [r9, #0x38]
    bl func_02068380
    ldr r1, =func_ov018_021589f8
    mov r0, r9
    bl func_020c4eac
L_0215b3b4:
    mov r0, r9
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

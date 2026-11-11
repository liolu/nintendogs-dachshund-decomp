#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0208ff8c();
extern void func_020d6240();
extern void func_020e23fc();
extern void func_020e25a0();
extern void func_020e265c();
extern void func_020e7ec4();
extern void func_020e7f9c();
extern void func_020ebbdc();
extern void func_020ebe24();
extern void func_020ec0d8();
extern void func_020ec134();
extern void func_020ec2f4();
extern void func_020ec328();
extern char data_0213177c[];
extern char data_02131784[];
extern char data_0214af2c[];
extern char data_0214af3c[];
extern char data_0214af4c[];
extern char data_0214af64[];
extern char data_0214af78[];
extern char data_0214af8c[];
extern char data_0214afa0[];
extern char data_0214afa4[];
extern char data_02159e70[];
// clang-format off
asm void func_021040c4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    ldr r1, =0x1c90
    mov r10, r0
    mov r0, #0x11
    add r9, r10, r1
    bl func_020e7f9c
    ldr r1, =data_0214af2c
    mov r0, #0x11
    bl func_020e7ec4
    mov r4, r0
    ldr r1, =data_0214af3c
    mov r0, #0x11
    bl func_020e7ec4
    mov r6, r0
    mov r0, #0x11
    ldr r1, =data_0214af4c
    bl func_020e7ec4
    mov r5, r0
    mov r0, #0x11
    ldr r1, =data_0214af64
    bl func_020e7ec4
    mov r1, r4
    mov r4, r0
    mov r0, #0x2
    bl func_020ec2f4
    mov r1, r6
    mov r0, #0x2
    bl func_020ec328
    mov r1, r5
    mov r0, #0x2
    bl func_020ec134
    mov r1, r4
    mov r0, #0x2
    bl func_020ec0d8
    mov r4, #0x1
    ldr r2, =data_02159e70
    ldr r3, =data_0214afa4
    ldr r1, [r2, #0x0]
    mov r0, #0x11
    add r1, r1, #0xc000
    str r4, [r1, #0x838]
    ldr r2, [r2, #0x0]
    ldr r1, =data_0214af78
    add r2, r2, #0xc000
    str r4, [r2, #0x83c]
    str r3, [sp, #0x0]
    ldr r2, =data_0214af8c
    ldr r3, =data_0214afa0
    bl func_020d6240
    mov r0, #0x0
    str r0, [r10, #0x4]
    swpb r0, r0, [r10]
    mov r0, #0x2
    mov r1, #0x4
    bl func_020ebe24
    str r0, [r10, #0x14c]
    mov r6, #0x0
    ldr r4, =data_0213177c
    mov r5, #0x2
L_021041b4:
    mov r0, r6, lsl #0x1
    ldrh r1, [r4, r0]
    mov r0, r5
    bl func_020ebe24
    add r1, r10, r6, lsl #0x2
    add r6, r6, #0x1
    str r0, [r1, #0x13c]
    cmp r6, #0x4
    blt L_021041b4
    ldr r0, =data_02159e70
    mov r7, #0x0
    ldr r0, [r0, #0x0]
    mov r8, r7
    ldr r0, [r0, #0xbc]
    mov r5, r7
    cmp r0, #0x5
    mvneq r0, #0x1
    streq r0, [r9, #0x0]
    mov r6, r7
    mov r4, #0x10
    mov r11, #0x2
L_02104208:
    ldr r0, [r9, #0x0]
    cmp r7, r0
    bne L_02104244
    add r0, r10, r7, lsl #0x3
    str r6, [r0, #0xfc]
    add r1, r10, r7, lsl #0x2
    ldr r2, [r10, #0x14c]
    ldr r1, [r1, #0x13c]
    sub r1, r2, r1
    str r1, [r0, #0x100]
    ldr r1, =data_02131784
    str r6, [r0, #0x11c]
    ldr r1, [r1, r7, lsl #0x2]
    str r1, [r0, #0x120]
    b L_02104260
L_02104244:
    mvn r0, #0xff
    sub r1, r0, r8
    add r0, r10, r7, lsl #0x3
    str r1, [r0, #0xfc]
    str r5, [r0, #0x100]
    str r4, [r0, #0x11c]
    str r5, [r0, #0x120]
L_02104260:
    add r1, r10, r7, lsl #0x3
    ldr r2, [r1, #0xfc]
    ldr r1, [r1, #0x100]
    mov r2, r2, lsl #0x10
    mov r3, r1, lsl #0x10
    ldr r1, =data_0213177c
    mov r0, r7, lsl #0x1
    ldrh r1, [r1, r0]
    mov r0, r11
    mov r2, r2, asr #0x10
    mov r3, r3, asr #0x10
    bl func_020ebbdc
    add r7, r7, #0x1
    cmp r7, #0x4
    add r8, r8, #0x40
    blt L_02104208
    mvn r0, #0x1
    str r0, [r9, #0x0]
    str r0, [r10, #0x8]
    bl func_020e25a0
    bl func_020e265c
    mov r0, #0x0
    bl func_020e23fc
    mov r0, #0x2b
    bl func_0208ff8c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

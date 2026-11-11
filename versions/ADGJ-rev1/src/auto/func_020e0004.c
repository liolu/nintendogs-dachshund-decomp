#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020a3c40();
extern void func_020af728();
extern void func_020af8cc();
extern void func_020af988();
extern void func_020b5024();
extern void func_020b50fc();
extern void func_020b8ce8();
extern void func_020b8f2c();
extern void func_020b91bc();
extern void func_020b9218();
extern void func_020b93d4();
extern void func_020b9408();
extern void func_020f07bc();
extern char data_0212fcac[];
extern char data_0212fcb4[];
extern char data_0214664c[];
extern char data_0214665c[];
extern char data_0214666c[];
extern char data_02146684[];
extern char data_02146698[];
extern char data_021466ac[];
extern char data_021466c0[];
extern char data_021466c4[];
extern char data_02153740[];
// clang-format off
asm void func_020e0004(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    mov r10, r0
    mov r0, #0x11
    add r9, r10, #0x900
    bl func_020b50fc
    ldr r1, =data_0214664c
    mov r0, #0x11
    bl func_020b5024
    mov r4, r0
    ldr r1, =data_0214665c
    mov r0, #0x11
    bl func_020b5024
    mov r6, r0
    mov r0, #0x11
    ldr r1, =data_0214666c
    bl func_020b5024
    mov r5, r0
    mov r0, #0x11
    ldr r1, =data_02146684
    bl func_020b5024
    mov r1, r4
    mov r4, r0
    mov r0, #0x2
    bl func_020b93d4
    mov r1, r6
    mov r0, #0x2
    bl func_020b9408
    mov r1, r5
    mov r0, #0x2
    bl func_020b9218
    mov r1, r4
    mov r0, #0x2
    bl func_020b91bc
    mov r4, #0x1
    ldr r2, =data_02153740
    ldr r3, =data_021466c4
    ldr r1, [r2, #0x0]
    mov r0, #0x11
    add r1, r1, #0xb000
    str r4, [r1, #0x4a8]
    ldr r2, [r2, #0x0]
    ldr r1, =data_02146698
    add r2, r2, #0xb000
    str r4, [r2, #0x4ac]
    str r3, [sp, #0x0]
    ldr r2, =data_021466ac
    ldr r3, =data_021466c0
    bl func_020a3c40
    mov r0, #0x0
    str r0, [r10, #0x4]
    swpb r0, r0, [r10]
    mov r0, #0x2
    mov r1, #0x4
    bl func_020b8f2c
    str r0, [r10, #0x14c]
    mov r6, #0x0
    ldr r4, =data_0212fcac
    mov r5, #0x2
L_020e00f0:
    mov r0, r6, lsl #0x1
    ldrh r1, [r4, r0]
    mov r0, r5
    bl func_020b8f2c
    add r1, r10, r6, lsl #0x2
    add r6, r6, #0x1
    str r0, [r1, #0x13c]
    cmp r6, #0x4
    blt L_020e00f0
    ldr r0, =data_02153740
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
L_020e0144:
    ldr r0, [r9, #0x0]
    cmp r7, r0
    bne L_020e0180
    add r0, r10, r7, lsl #0x3
    str r6, [r0, #0xfc]
    add r1, r10, r7, lsl #0x2
    ldr r2, [r10, #0x14c]
    ldr r1, [r1, #0x13c]
    sub r1, r2, r1
    str r1, [r0, #0x100]
    ldr r1, =data_0212fcb4
    str r6, [r0, #0x11c]
    ldr r1, [r1, r7, lsl #0x2]
    str r1, [r0, #0x120]
    b L_020e019c
L_020e0180:
    mvn r0, #0xff
    sub r1, r0, r8
    add r0, r10, r7, lsl #0x3
    str r1, [r0, #0xfc]
    str r5, [r0, #0x100]
    str r4, [r0, #0x11c]
    str r5, [r0, #0x120]
L_020e019c:
    add r1, r10, r7, lsl #0x3
    ldr r2, [r1, #0xfc]
    ldr r1, [r1, #0x100]
    mov r2, r2, lsl #0x10
    mov r3, r1, lsl #0x10
    ldr r1, =data_0212fcac
    mov r0, r7, lsl #0x1
    ldrh r1, [r1, r0]
    mov r0, r11
    mov r2, r2, asr #0x10
    mov r3, r3, asr #0x10
    bl func_020b8ce8
    add r7, r7, #0x1
    cmp r7, #0x4
    add r8, r8, #0x40
    blt L_020e0144
    mvn r0, #0x1
    str r0, [r9, #0x0]
    str r0, [r10, #0x8]
    bl func_020af8cc
    bl func_020af988
    mov r0, #0x0
    bl func_020af728
    mov r0, #0x2b
    bl func_020f07bc
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

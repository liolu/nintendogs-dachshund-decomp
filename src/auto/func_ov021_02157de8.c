#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020c19ac();
extern void func_020c1a6c();
extern void func_020c1af0();
extern void func_020c1c54();
extern void func_020c3ab4();
extern void func_020c3b4c();
extern void func_020c3cfc();
extern void func_020c3dcc();
extern void func_020c4ce4();
extern void func_020c4da0();
extern void func_020c4ea8();
extern void func_020c4eec();
extern void func_020c4fcc();
extern void func_020c5148();
extern void func_020c51c0();
extern void func_020c533c();
extern void func_020c53b0();
extern void func_020c5464();
extern char data_ov021_021582c0[];
extern char data_ov021_021582c8[];
extern char data_ov021_021582e0[];
extern char data_ov021_021582f8[];
extern char data_ov021_02158310[];
extern char data_ov021_02158328[];
extern char data_ov021_02158340[];
extern char func_ov021_02158118[];
extern char func_ov021_0215815c[];
extern char func_ov021_0215817c[];
extern char func_ov021_02158188[];
// clang-format off
asm void func_ov021_02157de8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r10, r0
    bl func_020c3cfc
    mov r0, r10
    mov r1, #0x0
    bl func_020c4da0
    str r0, [sp, #0x4]
    ldr r1, =data_ov021_021582c8
    mov r0, r10
    bl func_020c1af0
    mov r1, r0
    mov r0, r10
    bl func_020c4da0
    mov r5, r0
    ldr r1, =data_ov021_021582e0
    mov r0, r10
    bl func_020c1af0
    mov r1, r0
    mov r0, r10
    bl func_020c4da0
    mov r4, r0
    ldr r1, =data_ov021_021582f8
    mov r0, r10
    bl func_020c1af0
    mov r1, r0
    mov r0, r10
    bl func_020c4da0
    str r0, [sp, #0x8]
    ldr r1, =data_ov021_02158310
    mov r0, r10
    bl func_020c1af0
    mov r1, r0
    mov r0, r10
    bl func_020c4da0
    str r0, [sp, #0xc]
    mov r0, r10
    bl func_020c19ac
    mov r0, r10
    mov r1, #0x0
    bl func_020c1c54
    ldr r2, =data_ov021_02158340
    mov r1, #0x4
    ldr r2, [r2, #0x0]
    str r0, [r2, #0x8]
    mov r0, r10
    bl func_020c1c54
    ldr r1, =data_ov021_02158340
    ldr r1, [r1, #0x0]
    str r0, [r1, #0xc]
    bl func_020c4ce4
    add r0, sp, #0x10
    bl func_020c3b4c
    ldr r1, =func_ov021_02158188
    mov r0, r10
    str r1, [sp, #0x14]
    add r1, sp, #0x10
    bl func_020c3ab4
    mov r1, #0x0
    str r0, [sp, #0x0]
    bl func_020c4fcc
    mov r9, r0
    mov r2, r4
    mov r0, r10
    mov r1, #0x88
    bl func_020c5464
    mov r1, r0
    mov r0, r9
    bl func_020c4eec
    mov r2, r5
    mov r0, r10
    mov r1, #0x88
    bl func_020c5464
    ldr r1, =func_ov021_0215815c
    mov r5, r0
    bl func_020c4ea8
    mov r0, r5
    mov r1, r10
    mov r2, #0x1
    bl func_020c533c
    ldr r4, [r5, #0x78]
    ldr r1, =data_ov021_02158328
    mov r0, r10
    bl func_020c1a6c
    mov r1, r0
    mov r0, r4
    bl func_020c3dcc
    ldr r0, =data_ov021_021582c0
    mov r2, #0x0
    ldr r3, [r0, #0x0]
    mov r1, r5
    str r3, [r4, #0x8]
    swpb r2, r2, [r4]
    mov r0, r9
    bl func_020c4eec
    ldr r11, =func_ov021_02158118
    mov r8, #0x0
    add r6, sp, #0x8
    mov r7, #0x88
    mov r4, #0x64000
L_0215a3f8:
    and r0, r8, #0x1
    ldr r2, [r6, r0, lsl #0x2]
    mov r0, r10
    mov r1, r7
    bl func_020c5464
    mul r2, r8, r4
    mov r5, r0
    mov r1, r11
    str r2, [r5, #0x38]
    bl func_020c4ea8
    mov r0, r9
    mov r1, r5
    bl func_020c4eec
    add r0, r8, #0x1
    mov r0, r0, lsl #0x10
    mov r8, r0, asr #0x10
    cmp r8, #0x4
    blt L_0215a3f8
    ldr r2, [sp, #0x4]
    mov r0, r10
    mov r1, #0x88
    bl func_020c5464
    ldr r1, =data_ov021_02158340
    mov r4, r0
    ldr r2, [r1, #0x0]
    mov r0, r9
    mov r1, r4
    str r4, [r2, #0x4]
    bl func_020c4eec
    ldr r1, =0x2108
    mov r0, r4
    bl func_020c5148
    mov r0, r4
    mov r1, r10
    mov r2, #0x1
    bl func_020c53b0
    ldr r1, =data_ov021_02158340
    mov r0, r4
    ldr r1, [r1, #0x0]
    ldr r1, [r1, #0xc]
    bl func_020c51c0
    ldr r1, =func_ov021_0215817c
    mov r0, r4
    bl func_020c4ea8
    ldr r0, [sp, #0x0]
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

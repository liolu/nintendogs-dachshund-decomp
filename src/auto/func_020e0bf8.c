#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020a3c40();
extern void func_020a82fc();
extern void func_020a8458();
extern void func_020a8a64();
extern void func_020a8ec4();
extern void func_020af8cc();
extern void func_020b5024();
extern void func_020b50fc();
extern void func_020b8b0c();
extern void func_020b8dbc();
extern void func_020b91bc();
extern void func_020b9218();
extern void func_020b93d4();
extern void func_020b9408();
extern void func_020c6534();
extern void func_020c9820();
extern void func_020f07bc();
extern char data_0212fcc8[];
extern char data_0212fccc[];
extern char data_0212fcd0[];
extern char data_0212fcd4[];
extern char data_0212fce8[];
extern char data_0212fcf4[];
extern char data_0214670c[];
extern char data_02146720[];
extern char data_02146734[];
extern char data_02146750[];
extern char data_02146764[];
extern char data_02146780[];
extern char data_0214679c[];
extern char data_021467b8[];
extern char data_021467d4[];
extern char data_02153740[];
extern char data_02154c3c[];
// clang-format off
asm void func_020e0bf8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r11, r0
    mov r2, #0x0
    str r2, [r11, #0x8]
    str r2, [r11, #0x0]
    ldr r1, [r11, #0x0]
    mov r0, #0x64000
    str r1, [r11, #0x4]
    str r0, [r11, #0xc]
    str r2, [r11, #0x10]
    mov r0, #0x78000
    str r0, [r11, #0x14]
    str r2, [r11, #0x18]
    str r2, [r11, #0x1c]
    str r2, [r11, #0x20]
    mov r0, #0x1b000
    str r0, [r11, #0x24]
    add r1, r11, #0x28
    mvn r2, #0x1
    swpb r0, r2, [r1]
    add r1, r11, #0x2a
    mvn r0, #0x0
    swpb r0, r0, [r1]
    mov r0, #0x12
    str r2, [r11, #0x904]
    bl func_020b50fc
    ldr r1, =data_0214670c
    mov r0, #0x12
    bl func_020b5024
    mov r4, r0
    ldr r1, =data_02146720
    mov r0, #0x12
    bl func_020b5024
    mov r7, r0
    ldr r1, =data_02146734
    mov r0, #0x12
    bl func_020b5024
    mov r6, r0
    ldr r1, =data_02146750
    mov r0, #0x12
    bl func_020b5024
    mov r10, r0
    mov r0, #0x12
    ldr r1, =data_02146764
    bl func_020b5024
    mov r1, r4
    mov r4, r0
    mov r0, #0x2
    bl func_020b93d4
    mov r0, #0x2
    mov r1, r7
    bl func_020b9408
    mov r0, #0x2
    mov r1, r6
    bl func_020b9218
    mov r1, r4
    mov r0, #0x2
    bl func_020b91bc
    bl func_020a8ec4
    mov r8, #0x0
    ldr r5, =data_0212fcc8
    ldr r4, =data_0212fccc
    str r8, [sp, #0x8]
    str r8, [sp, #0xc]
    str r8, [sp, #0x10]
    mov r9, #0xc9
L_020e0d04:
    ldr r0, [sp, #0x8]
    mov r1, r6
    str r0, [sp, #0x0]
    ldrb r3, [r5, #0x0]
    mov r2, r7
    bl func_020a8a64
    ldrb r1, [r5, #0x0]
    ldr r0, [sp, #0xc]
    bl func_020a8458
    ldr r0, =data_02154c3c
    mov r1, r9
    ldr r0, [r0, #0x0]
    mov r2, r8
    ldr r0, [r0, #0x30]
    bl func_020c6534
    str r0, [sp, #0x0]
    ldrb r2, [r5, #0x0]
    ldrb r3, [r4, #0x0]
    ldr r0, [sp, #0x10]
    mov r1, r10
    bl func_020a82fc
    add r8, r8, #0x1
    add r5, r5, #0x1
    add r4, r4, #0x1
    cmp r8, #0x2
    blt L_020e0d04
    ldr r1, =data_02153740
    mov r3, #0x4
    ldr r0, [r1, #0x0]
    mov r2, #0x0
    add r0, r0, #0xb000
    str r3, [r0, #0x4a8]
    ldr r0, [r1, #0x0]
    ldr r4, =data_021467d4
    add r0, r0, #0xb000
    str r2, [r0, #0x4ac]
    ldr r1, =data_02146780
    ldr r2, =data_0214679c
    ldr r3, =data_021467b8
    mov r0, #0x12
    str r4, [sp, #0x0]
    bl func_020a3c40
    ldr r5, =data_0212fcf4
    mov r6, #0x0
    mov r4, #0x2
L_020e0db8:
    ldr r1, [r11, #0x14]
    ldr r0, [r11, #0x18]
    mov r2, r1, lsl #0x4
    mov r3, r0, lsl #0x4
    ldrb r1, [r5, #0x0]
    mov r0, r4
    mov r2, r2, asr #0x10
    mov r3, r3, asr #0x10
    bl func_020b8dbc
    add r6, r6, #0x1
    cmp r6, #0x12
    add r5, r5, #0x1
    blt L_020e0db8
    ldr r6, =data_0212fcd4
    mov r5, #0x0
    mov r4, #0x2
L_020e0df8:
    ldr r1, [r11, #0x20]
    ldr r0, [r11, #0x24]
    mov r2, r1, lsl #0x4
    mov r3, r0, lsl #0x4
    ldrb r1, [r6, #0x0]
    mov r0, r4
    mov r2, r2, asr #0x10
    mov r3, r3, asr #0x10
    bl func_020b8dbc
    add r5, r5, #0x1
    cmp r5, #0x4
    add r6, r6, #0x1
    blt L_020e0df8
    add r0, r11, #0x6c
    bl func_020c9820
    add r6, r11, #0x6c
    add r5, r11, #0xc0
    mov r4, #0x5
L_020e0e40:
    ldmia r6!, {r0, r1, r2, r3}
    stmia r5!, {r0, r1, r2, r3}
    subs r4, r4, #0x1
    bne L_020e0e40
    ldr r1, [r6, #0x0]
    mov r0, #0x0
    str r1, [r5, #0x0]
L_020e0e5c:
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_020e0ec8
L_020e0e68:
    b L_020e0e78
    b L_020e0ea0
    b L_020e0eb8
    b L_020e0e8c
L_020e0e78:
    ldrsb r3, [r11, #0x95]
    add r1, r11, r0
    add r2, r1, #0x68
    swpb r1, r3, [r2]
    b L_020e0ec8
L_020e0e8c:
    ldrsb r3, [r11, #0x94]
    add r1, r11, r0
    add r2, r1, #0x68
    swpb r1, r3, [r2]
    b L_020e0ec8
L_020e0ea0:
    ldrb r3, [r11, #0x90]
    add r1, r11, r0
    add r2, r1, #0x68
    sub r1, r3, #0x1
    swpb r1, r1, [r2]
    b L_020e0ec8
L_020e0eb8:
    ldrsb r3, [r11, #0x92]
    add r1, r11, r0
    add r2, r1, #0x68
    swpb r1, r3, [r2]
L_020e0ec8:
    add r0, r0, #0x1
    cmp r0, #0x4
    blt L_020e0e5c
    bl func_020af8cc
    mov r0, #0x0
    ldr r9, =data_0212fce8
    ldr r8, =data_0212fcd0
    str r0, [sp, #0x4]
    mov r4, r0
    str r0, [sp, #0x14]
    mov r6, #0x2
    mov r5, #0x1
L_020e0ef8:
    ldrb r0, [r8, #0x0]
    ldr r10, [sp, #0x14]
    cmp r0, #0x0
    ble L_020e0f60
    ldr r0, [sp, #0x4]
    add r7, r11, r0
L_020e0f10:
    ldrsb r0, [r7, #0x68]
    cmp r10, r0
    bne L_020e0f38
    ldrsb r1, [r9, r10]
    mov r0, r6
    mov r2, r5
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_020b8b0c
    b L_020e0f50
L_020e0f38:
    ldrsb r1, [r9, r10]
    mov r0, r6
    mov r2, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_020b8b0c
L_020e0f50:
    ldrb r0, [r8, #0x0]
    add r10, r10, #0x1
    cmp r10, r0
    blt L_020e0f10
L_020e0f60:
    ldr r0, [sp, #0x4]
    add r9, r9, #0x3
    add r0, r0, #0x1
    str r0, [sp, #0x4]
    cmp r0, #0x4
    add r8, r8, #0x1
    blt L_020e0ef8
    mov r0, #0x3c
    bl func_020f07bc
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

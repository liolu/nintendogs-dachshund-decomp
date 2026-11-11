#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200f86c();
extern void func_02014b28();
extern void func_02022dd0();
extern void func_02028e80();
extern void func_02029100();
extern void func_0202cd14();
extern void func_02034f40();
extern void func_02039358();
extern void func_02039394();
extern void func_020393d0();
extern void func_0203945c();
extern void func_0203949c();
extern void func_0203e280();
extern void func_ov002_02181db8();
extern void func_ov002_02188180();
extern void func_ov002_02194020();
extern char data_0213931d[];
extern char data_0214b484[];
extern char data_02153720[];
// clang-format off
asm void func_ov002_021799b8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    mov r6, r1
    mov r5, r2
    bl func_02034f40
    ldrsh r1, [r7, #0xf0]
    mov r4, r0
    add r0, r1, #0x3
    cmp r0, #0x7
    addls pc, pc, r0, lsl #0x2
    b L_02179ac4
L_021799e4:
    b L_02179a04
    b L_02179a04
    b L_02179a04
    b L_02179a0c
    b L_02179a5c
    b L_02179a5c
    b L_02179a5c
    b L_02179abc
L_02179a04:
    mov r0, r7
    bl func_02029100
L_02179a0c:
    ldrsb r0, [r7, #0xa4]
    cmp r0, #0x2
    beq L_02179a54
    ldrsb r0, [r7, #0xa6]
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b L_02179a44
L_02179a28:
    b L_02179a4c
    b L_02179a4c
    b L_02179a44
    b L_02179a44
    b L_02179a44
    b L_02179a4c
    b L_02179a4c
L_02179a44:
    mov r8, #0x12c
    b L_02179ac8
L_02179a4c:
    mov r8, #0xc8
    b L_02179ac8
L_02179a54:
    mov r8, #0x32
    b L_02179ac8
L_02179a5c:
    ldrsb r0, [r7, #0xa4]
    cmp r0, #0x2
    beq L_02179ab4
    ldrsb r0, [r7, #0xa6]
    cmp r0, #0x8
    addls pc, pc, r0, lsl #0x2
    b L_02179a9c
L_02179a78:
    b L_02179aa4
    b L_02179a9c
    b L_02179a9c
    b L_02179aa4
    b L_02179aac
    b L_02179a9c
    b L_02179a9c
    b L_02179aac
    b L_02179aac
L_02179a9c:
    mov r8, #0x14
    b L_02179ac8
L_02179aa4:
    mov r8, #0x28
    b L_02179ac8
L_02179aac:
    mov r8, #0x3c
    b L_02179ac8
L_02179ab4:
    mov r8, #0x28
    b L_02179ac8
L_02179abc:
    mov r8, #0x30c
    b L_02179ac8
L_02179ac4:
    mov r8, #0x50
L_02179ac8:
    ldr r0, =data_02153720
    add r3, r7, #0x3d8
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r7
    mov r1, r6
    bl func_02014b28
    mov r0, r7
    bl func_ov002_02181db8
    ldrsb r0, [r7, #0xa4]
    cmp r0, #0x5
    addls pc, pc, r0, lsl #0x2
    b L_02179b78
L_02179b08:
    b L_02179b70
    b L_02179b64
    b L_02179b44
    b L_02179b38
    b L_02179b2c
    b L_02179b20
L_02179b20:
    mov r0, r7
    bl func_02039358
    b L_02179b78
L_02179b2c:
    mov r0, r7
    bl func_02039394
    b L_02179b78
L_02179b38:
    mov r0, r7
    bl func_020393d0
    b L_02179b78
L_02179b44:
    mov r0, r7
    add ip, r7, #0xb0
    mov r3, #0x1
    mov r1, #0x2
    mov r2, #0x10
    swpb r3, r3, [ip]
    bl func_0203e280
    b L_02179b78
L_02179b64:
    mov r0, r7
    bl func_0203945c
    b L_02179b78
L_02179b70:
    mov r0, r7
    bl func_0203949c
L_02179b78:
    cmp r4, #0x0
    beq L_02179b90
    mov r0, r7
    mov r1, #0x2
    mov r2, #0x1
    bl func_0203e280
L_02179b90:
    ldrsh r0, [r7, #0xf0]
    cmp r0, #0x4
    bne L_02179bdc
    ldr r0, [r7, #0x9e4]
    mov r1, #0x64
    ldrh r3, [r0, #0x0]
    ldr r2, =data_0213931d
    mov r0, r7
    mul r1, r3, r1
    ldrsb r2, [r2, r1]
    mov r1, #0x3
    add r2, r2, #0x8
    mov r2, r2, lsl #0x10
    mov r2, r2, asr #0x10
    bl func_0203e280
    mov r0, r7
    mov r1, #0x2
    mov r2, #0x0
    bl func_0203e280
L_02179bdc:
    add r0, r7, #0x100
    ldrh r0, [r0, #0x12]
    cmp r0, #0x0
    beq L_02179c94
    ldrsh r0, [r7, #0xf0]
    cmp r0, #0x1
    beq L_02179c0c
    mov r0, r7
    mov r1, #0x1
    bl func_02022dd0
    cmp r0, #0x0
    beq L_02179c94
L_02179c0c:
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x3
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    movs r0, r1, lsr #0x10
    beq L_02179c5c
    cmp r0, #0x1
    beq L_02179c70
    cmp r0, #0x2
    beq L_02179c84
    b L_02179c94
L_02179c5c:
    mov r0, r7
    mov r1, #0x3e
    mov r2, #0x2
    bl func_02028e80
    b L_02179c94
L_02179c70:
    mov r0, r7
    mov r1, #0x3f
    mov r2, #0x2
    bl func_02028e80
    b L_02179c94
L_02179c84:
    mov r0, r7
    mov r1, #0x40
    mov r2, #0x2
    bl func_02028e80
L_02179c94:
    mov r0, r7
    bl func_0200f86c
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    add r0, r7, #0x100
    ldrh r1, [r0, #0xa]
    cmp r1, r8
    bge L_02179d08
    sub r0, r8, #0x14
    cmp r1, r0
    ldmlefd sp!, {r4, r5, r6, r7, r8, lr}
    bxle lr
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x14
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    movs r0, r1, lsr #0x10
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
L_02179d08:
    mov r1, r6, lsl #0x10
    mov r0, r7
    mov r2, r4
    mov r1, r1, asr #0x10
    mov r3, #0x1
    bl func_0202cd14
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    cmp r4, #0x0
    beq L_02179d4c
    mov r0, r7
    mov r1, r4
    mov r2, r6
    bl func_ov002_02194020
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02179d4c:
    mov r0, r7
    mov r1, r6
    mov r2, r5
    bl func_ov002_02188180
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on

#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02035130();
extern void func_0203e280();
extern char data_0213931d[];
extern char data_0214b484[];
// clang-format off
asm void func_ov002_02187b10(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, r0
    add r4, r5, #0x100
    ldrh ip, [r4, #0x2c]
    mov r4, r1
    mov r8, r2
    mov r7, r3
    cmp ip, #0x3c
    mov r6, #0x0
    bls L_02187cdc
    ldr r1, [r5, #0x9e4]
    mov r2, #0x64
    ldrh r6, [r1, #0x0]
    ldr r3, =data_0213931d
    mov r1, #0x3
    mul r2, r6, r2
    ldrsb r2, [r3, r2]
    add r2, r2, #0x2
    mov r2, r2, lsl #0x10
    mov r2, r2, asr #0x10
    bl func_0203e280
    add r1, r5, #0xb0
    mov r0, #0x4
    swpb r0, r0, [r1]
    add r0, r5, #0x100
    ldrsh r0, [r0, #0x54]
    cmp r0, #0x12
    bgt L_02187bb4
    cmp r0, #0x12
    bge L_02187bd0
    cmp r0, #0x4
    bgt L_02187cd4
    cmp r0, #0x0
    blt L_02187cd4
    cmp r0, #0x0
    beq L_02187c1c
    cmp r0, #0x3
    beq L_02187c1c
    cmp r0, #0x4
    beq L_02187bd0
    b L_02187cd4
L_02187bb4:
    cmp r0, #0x14
    bgt L_02187bc8
    cmp r0, #0x14
    beq L_02187bd0
    b L_02187cd4
L_02187bc8:
    cmp r0, #0x15
    bne L_02187cd4
L_02187bd0:
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    ldr r2, [r0, #0x0]
    mul r1, r2, r1
    add r2, r1, #0x1
    mov r1, r2, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r1, r8, r1
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    str r2, [r0, #0x0]
    movs r0, r1, lsr #0x10
    bne L_02187cd4
    mov r0, r5
    mov r1, #0x2
    mov r2, #0x3
    bl func_0203e280
    b L_02187cd4
L_02187c1c:
    mov r0, r5
    mov r1, #0x2
    mov r2, #0xa
    bl func_02035130
    cmp r0, #0x0
    beq L_02187cd4
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    ldrh r2, [sp, #0x18]
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r1, r7, r1
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str r3, [r0, #0x0]
    adds r0, r2, r1
    beq L_02187c88
    cmp r0, #0x1
    beq L_02187c9c
    cmp r0, #0x2
    beq L_02187cb0
    b L_02187cc4
L_02187c88:
    mov r0, r5
    mov r1, #0x2
    mov r2, #0x15
    bl func_0203e280
    b L_02187cd4
L_02187c9c:
    mov r0, r5
    mov r1, #0x2
    mov r2, #0x12
    bl func_0203e280
    b L_02187cd4
L_02187cb0:
    mov r0, r5
    mov r1, #0x2
    mov r2, #0x14
    bl func_0203e280
    b L_02187cd4
L_02187cc4:
    mov r0, r5
    mov r1, #0x2
    mov r2, #0x4
    bl func_0203e280
L_02187cd4:
    mov r6, #0x1
    b L_02187d00
L_02187cdc:
    cmp ip, #0x14
    bls L_02187d00
    mov r1, #0x2
    mov r2, #0x4
    bl func_0203e280
    add r1, r5, #0xb0
    mov r0, #0x4
    swpb r0, r0, [r1]
    mov r6, #0x1
L_02187d00:
    ldr r1, [r5, #0x9e4]
    mov r0, #0x64
    ldrh r2, [r1, #0x0]
    ldr r1, =data_0213931d
    mul r0, r2, r0
    ldrsb r0, [r1, r0]
    cmp r0, #0x3
    bne L_02187db8
    cmp r4, #0x8
    addls pc, pc, r4, lsl #0x2
    b L_02187dd8
L_02187d2c:
    b L_02187dd8
    b L_02187dd8
    b L_02187dd8
    b L_02187dd8
    b L_02187dd8
    b L_02187d50
    b L_02187d84
    b L_02187d50
    b L_02187d84
L_02187d50:
    ldr r0, [r5, #0x310]
    cmp r0, #0x0
    bge L_02187d70
    mov r0, r5
    mov r1, #0x3
    mov r2, #0x6
    bl func_0203e280
    b L_02187dd8
L_02187d70:
    mov r0, r5
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    b L_02187dd8
L_02187d84:
    ldr r0, [r5, #0x31c]
    cmp r0, #0x0
    bge L_02187da4
    mov r0, r5
    mov r1, #0x3
    mov r2, #0x7
    bl func_0203e280
    b L_02187dd8
L_02187da4:
    mov r0, r5
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
    b L_02187dd8
L_02187db8:
    cmp r4, #0x7
    beq L_02187dc8
    cmp r4, #0x8
    bne L_02187dd8
L_02187dc8:
    mov r0, r5
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e280
L_02187dd8:
    mov r0, r6
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on

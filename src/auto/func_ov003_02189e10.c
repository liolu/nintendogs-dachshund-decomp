#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020352ec();
extern void func_0203e5ac();
extern char data_0213aa2d[];
extern char data_0214da84[];
// clang-format off
asm void func_ov003_02189e10(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, r0
    add r4, r5, #0x100
    ldrh ip, [r4, #0x1e]
    mov r4, r1
    mov r8, r2
    mov r7, r3
    cmp ip, #0x3c
    mov r6, #0x0
    bls L_02189fdc
    ldr r1, [r5, #0x9e8]
    mov r2, #0x64
    ldrh r6, [r1, #0x0]
    ldr r3, =data_0213aa2d
    mov r1, #0x3
    mul r2, r6, r2
    ldrsb r2, [r3, r2]
    add r2, r2, #0x2
    mov r2, r2, lsl #0x10
    mov r2, r2, asr #0x10
    bl func_0203e5ac
    add r1, r5, #0x97
    mov r0, #0x4
    swpb r0, r0, [r1]
    add r0, r5, #0x100
    ldrsh r0, [r0, #0x56]
    cmp r0, #0x12
    bgt L_02189eb4
    cmp r0, #0x12
    bge L_02189ed0
    cmp r0, #0x4
    bgt L_02189fd4
    cmp r0, #0x0
    blt L_02189fd4
    cmp r0, #0x0
    beq L_02189f1c
    cmp r0, #0x3
    beq L_02189f1c
    cmp r0, #0x4
    beq L_02189ed0
    b L_02189fd4
L_02189eb4:
    cmp r0, #0x14
    bgt L_02189ec8
    cmp r0, #0x14
    beq L_02189ed0
    b L_02189fd4
L_02189ec8:
    cmp r0, #0x15
    bne L_02189fd4
L_02189ed0:
    ldr r0, =data_0214da84
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
    bne L_02189fd4
    mov r0, r5
    mov r1, #0x2
    mov r2, #0x3
    bl func_0203e5ac
    b L_02189fd4
L_02189f1c:
    mov r0, r5
    mov r1, #0x2
    mov r2, #0xa
    bl func_020352ec
    cmp r0, #0x0
    beq L_02189fd4
    ldr r0, =data_0214da84
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
    beq L_02189f88
    cmp r0, #0x1
    beq L_02189f9c
    cmp r0, #0x2
    beq L_02189fb0
    b L_02189fc4
L_02189f88:
    mov r0, r5
    mov r1, #0x2
    mov r2, #0x15
    bl func_0203e5ac
    b L_02189fd4
L_02189f9c:
    mov r0, r5
    mov r1, #0x2
    mov r2, #0x12
    bl func_0203e5ac
    b L_02189fd4
L_02189fb0:
    mov r0, r5
    mov r1, #0x2
    mov r2, #0x14
    bl func_0203e5ac
    b L_02189fd4
L_02189fc4:
    mov r0, r5
    mov r1, #0x2
    mov r2, #0x4
    bl func_0203e5ac
L_02189fd4:
    mov r6, #0x1
    b L_0218a000
L_02189fdc:
    cmp ip, #0x14
    bls L_0218a000
    mov r1, #0x2
    mov r2, #0x4
    bl func_0203e5ac
    add r1, r5, #0x97
    mov r0, #0x4
    swpb r0, r0, [r1]
    mov r6, #0x1
L_0218a000:
    ldr r1, [r5, #0x9e8]
    mov r0, #0x64
    ldrh r2, [r1, #0x0]
    ldr r1, =data_0213aa2d
    mul r0, r2, r0
    ldrsb r0, [r1, r0]
    cmp r0, #0x3
    bne L_0218a0b8
    cmp r4, #0x8
    addls pc, pc, r4, lsl #0x2
    b L_0218a0d8
L_0218a02c:
    b L_0218a0d8
    b L_0218a0d8
    b L_0218a0d8
    b L_0218a0d8
    b L_0218a0d8
    b L_0218a050
    b L_0218a084
    b L_0218a050
    b L_0218a084
L_0218a050:
    ldr r0, [r5, #0x2f8]
    cmp r0, #0x0
    bge L_0218a070
    mov r0, r5
    mov r1, #0x3
    mov r2, #0x6
    bl func_0203e5ac
    b L_0218a0d8
L_0218a070:
    mov r0, r5
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
    b L_0218a0d8
L_0218a084:
    ldr r0, [r5, #0x304]
    cmp r0, #0x0
    bge L_0218a0a4
    mov r0, r5
    mov r1, #0x3
    mov r2, #0x7
    bl func_0203e5ac
    b L_0218a0d8
L_0218a0a4:
    mov r0, r5
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
    b L_0218a0d8
L_0218a0b8:
    cmp r4, #0x7
    beq L_0218a0c8
    cmp r4, #0x8
    bne L_0218a0d8
L_0218a0c8:
    mov r0, r5
    mov r1, #0x3
    mov r2, #0x0
    bl func_0203e5ac
L_0218a0d8:
    mov r0, r6
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on

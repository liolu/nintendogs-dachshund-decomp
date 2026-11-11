#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200f8d0();
extern void func_02014b14();
extern void func_02022e04();
extern void func_02028ec4();
extern void func_02029144();
extern void func_0202cde8();
extern void func_020350fc();
extern void func_02039588();
extern void func_020395c4();
extern void func_02039600();
extern void func_0203968c();
extern void func_020396cc();
extern void func_0203e5ac();
extern void func_ov003_0218414c();
extern void func_ov003_0218a480();
extern void func_ov003_021964c0();
extern char data_0213aa2d[];
extern char data_0214da84[];
extern char data_0215a064[];
// clang-format off
asm void func_ov003_0217bda0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    mov r6, r1
    mov r5, r2
    bl func_020350fc
    ldrsh r1, [r7, #0xf0]
    mov r4, r0
    add r0, r1, #0x3
    cmp r0, #0x7
    addls pc, pc, r0, lsl #0x2
    b L_0217beac
L_0217bdcc:
    b L_0217bdec
    b L_0217bdec
    b L_0217bdec
    b L_0217bdf4
    b L_0217be44
    b L_0217be44
    b L_0217be44
    b L_0217bea4
L_0217bdec:
    mov r0, r7
    bl func_02029144
L_0217bdf4:
    ldrsb r0, [r7, #0x8b]
    cmp r0, #0x2
    beq L_0217be3c
    ldrsb r0, [r7, #0x8d]
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b L_0217be2c
L_0217be10:
    b L_0217be34
    b L_0217be34
    b L_0217be2c
    b L_0217be2c
    b L_0217be2c
    b L_0217be34
    b L_0217be34
L_0217be2c:
    mov r8, #0x12c
    b L_0217beb0
L_0217be34:
    mov r8, #0xc8
    b L_0217beb0
L_0217be3c:
    mov r8, #0x32
    b L_0217beb0
L_0217be44:
    ldrsb r0, [r7, #0x8b]
    cmp r0, #0x2
    beq L_0217be9c
    ldrsb r0, [r7, #0x8d]
    cmp r0, #0x8
    addls pc, pc, r0, lsl #0x2
    b L_0217be84
L_0217be60:
    b L_0217be8c
    b L_0217be84
    b L_0217be84
    b L_0217be8c
    b L_0217be94
    b L_0217be84
    b L_0217be84
    b L_0217be94
    b L_0217be94
L_0217be84:
    mov r8, #0x14
    b L_0217beb0
L_0217be8c:
    mov r8, #0x28
    b L_0217beb0
L_0217be94:
    mov r8, #0x3c
    b L_0217beb0
L_0217be9c:
    mov r8, #0x28
    b L_0217beb0
L_0217bea4:
    mov r8, #0x30c
    b L_0217beb0
L_0217beac:
    mov r8, #0x50
L_0217beb0:
    ldr r0, =data_0215a064
    add r3, r7, #0x3b4
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x1c]
    add r0, r0, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r7
    mov r1, r6
    bl func_02014b14
    mov r0, r7
    bl func_ov003_0218414c
    ldrsb r0, [r7, #0x8b]
    cmp r0, #0x5
    addls pc, pc, r0, lsl #0x2
    b L_0217bf60
L_0217bef0:
    b L_0217bf58
    b L_0217bf4c
    b L_0217bf2c
    b L_0217bf20
    b L_0217bf14
    b L_0217bf08
L_0217bf08:
    mov r0, r7
    bl func_02039588
    b L_0217bf60
L_0217bf14:
    mov r0, r7
    bl func_020395c4
    b L_0217bf60
L_0217bf20:
    mov r0, r7
    bl func_02039600
    b L_0217bf60
L_0217bf2c:
    mov r0, r7
    add ip, r7, #0x97
    mov r3, #0x1
    mov r1, #0x2
    mov r2, #0x10
    swpb r3, r3, [ip]
    bl func_0203e5ac
    b L_0217bf60
L_0217bf4c:
    mov r0, r7
    bl func_0203968c
    b L_0217bf60
L_0217bf58:
    mov r0, r7
    bl func_020396cc
L_0217bf60:
    cmp r4, #0x0
    beq L_0217bf78
    mov r0, r7
    mov r1, #0x2
    mov r2, #0x1
    bl func_0203e5ac
L_0217bf78:
    ldrsh r0, [r7, #0xf0]
    cmp r0, #0x4
    bne L_0217bfc4
    ldr r0, [r7, #0x9e8]
    mov r1, #0x64
    ldrh r3, [r0, #0x0]
    ldr r2, =data_0213aa2d
    mov r0, r7
    mul r1, r3, r1
    ldrsb r2, [r2, r1]
    mov r1, #0x3
    add r2, r2, #0x8
    mov r2, r2, lsl #0x10
    mov r2, r2, asr #0x10
    bl func_0203e5ac
    mov r0, r7
    mov r1, #0x2
    mov r2, #0x0
    bl func_0203e5ac
L_0217bfc4:
    add r0, r7, #0x100
    ldrh r0, [r0, #0x4]
    cmp r0, #0x0
    beq L_0217c07c
    ldrsh r0, [r7, #0xf0]
    cmp r0, #0x1
    beq L_0217bff4
    mov r0, r7
    mov r1, #0x1
    bl func_02022e04
    cmp r0, #0x0
    beq L_0217c07c
L_0217bff4:
    ldr r0, =data_0214da84
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
    beq L_0217c044
    cmp r0, #0x1
    beq L_0217c058
    cmp r0, #0x2
    beq L_0217c06c
    b L_0217c07c
L_0217c044:
    mov r0, r7
    mov r1, #0x3e
    mov r2, #0x2
    bl func_02028ec4
    b L_0217c07c
L_0217c058:
    mov r0, r7
    mov r1, #0x3f
    mov r2, #0x2
    bl func_02028ec4
    b L_0217c07c
L_0217c06c:
    mov r0, r7
    mov r1, #0x40
    mov r2, #0x2
    bl func_02028ec4
L_0217c07c:
    mov r0, r7
    bl func_0200f8d0
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    ldrh r1, [r7, #0xfc]
    cmp r1, r8
    bge L_0217c0ec
    sub r0, r8, #0x14
    cmp r1, r0
    ldmlefd sp!, {r4, r5, r6, r7, r8, lr}
    bxle lr
    ldr r0, =data_0214da84
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
L_0217c0ec:
    mov r1, r6, lsl #0x10
    mov r0, r7
    mov r2, r4
    mov r1, r1, asr #0x10
    mov r3, #0x1
    bl func_0202cde8
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    cmp r4, #0x0
    beq L_0217c130
    mov r0, r7
    mov r1, r4
    mov r2, r6
    bl func_ov003_021964c0
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_0217c130:
    mov r0, r7
    mov r1, r6
    mov r2, r5
    bl func_ov003_0218a480
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on

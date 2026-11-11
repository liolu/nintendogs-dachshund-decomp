#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02044980();
extern void func_02067ca0();
extern void func_0208b3dc();
extern void func_0208b5c4();
extern void func_020f67d4();
extern char data_021555f8[];
extern char data_0215a064[];
// clang-format off
asm void func_020f5f64(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x4
    mov r5, r0
    ldrsh r0, [r5, #0x9c]
    ldr r4, [r5, #0x214]
    bl func_02044980
    ldr r0, =data_0215a064
    ldr r0, [r0, #0x0]
    ldrh r0, [r0, #0xc4]
    ands r0, r0, #0x2
    beq L_020f60d0
    ldr r0, [r4, #0x4]
    cmp r0, #0x0
    beq L_020f5fd4
    ldr r1, [r5, #0x24]
    ldr r0, =0x17b4
    sub r1, r1, #0x29
    str r1, [r5, #0x24]
    ldr r1, [r5, #0x24]
    cmp r1, r0
    bge L_020f60b8
    mov r0, #0x0
    str r0, [r4, #0x4]
    ldrb r0, [r4, #0x8]
    add r1, r4, #0x8
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    b L_020f60b8
L_020f5fd4:
    ldr r0, [r5, #0x24]
    ldr r1, =0x1806
    cmp r0, r1
    bge L_020f609c
    bl func_02067ca0
    ldr r1, =data_021555f8
    ldr r2, =0x10dcd
    ldr ip, [r1, #0x0]
    ldr r1, =0x10f6
    ldr r3, [ip, #0x0]
    sub lr, r1, r0
    mul r0, r3, r2
    mov r6, #0xa4
    add r3, r0, #0x1
    ldr r7, =0xfff
    mov r0, #0x0
    umull r2, r1, lr, r6
    and r7, r3, r7
    mov r7, r7, lsl #0x10
    mov r7, r7, lsr #0x10
    mov r7, r7, lsl #0x10
    mov r8, r7, asr #0x10
    mov r7, r8, asr #0x1f
    mov r9, r7, lsl #0xc
    mov r7, #0x800
    adds r2, r2, r7
    str r3, [ip, #0x0]
    mla r1, lr, r0, r1
    mov r0, lr, asr #0x1f
    mla r1, r0, r6, r1
    mov r0, r8, lsl #0xc
    adc r3, r1, #0x0
    adds r1, r0, r7
    orr r9, r9, r8, lsr #0x14
    mov r2, r2, lsr #0xc
    adc r0, r9, #0x0
    mov r1, r1, lsr #0xc
    orr r2, r2, r3, lsl #0x14
    orr r1, r1, r0, lsl #0x14
    ldr r0, [r5, #0x24]
    add r1, r2, r1, asr #0xa
    add r0, r0, r1
    str r0, [r5, #0x24]
    ldr r0, [r5, #0x28]
    add r0, r0, r1
    str r0, [r5, #0x28]
    ldr r0, [r5, #0x2c]
    add r0, r0, r1
    str r0, [r5, #0x2c]
    b L_020f60b8
L_020f609c:
    ldrb r0, [r4, #0x8]
    cmp r0, #0x3
    movls r0, #0x1
    strls r0, [r4, #0x4]
    bls L_020f60b8
    mov r0, r5
    bl func_020f67d4
L_020f60b8:
    add r0, r5, #0x190
    mov r1, #0x7
    bl func_0208b5c4
    mov r0, #0x0
    str r0, [r4, #0xc]
    b L_020f6140
L_020f60d0:
    ldr r0, [r4, #0xc]
    add r0, r0, #0x1
    str r0, [r4, #0xc]
    ldr r0, [r4, #0xc]
    cmp r0, #0xa
    blt L_020f6140
    mov r0, #0xa
    str r0, [r4, #0xc]
    ldrsh r0, [r5, #0x90]
    cmp r0, #0x3
    beq L_020f6128
    ldr r1, [r5, #0x24]
    ldr r0, =0x4ce
    sub r1, r1, #0x29
    str r1, [r5, #0x24]
    ldr r2, [r5, #0x24]
    cmp r2, r0
    strlt r0, [r5, #0x24]
    blt L_020f6128
    add r0, r5, #0x190
    mov r1, #0x8
    bl func_0208b3dc
L_020f6128:
    mov r0, #0x0
    str r0, [r4, #0x4]
    ldrb r0, [r4, #0x8]
    add r1, r4, #0x8
    add r0, r0, #0x1
    swpb r0, r0, [r1]
L_020f6140:
    ldr r0, [r5, #0x24]
    mov r2, #0x0
    str r0, [r5, #0x28]
    ldr r1, [r5, #0x24]
    mov r0, #0xb00
    str r1, [r5, #0x2c]
    ldr r3, [r5, #0x24]
    mov r1, #0x800
    umull r6, r4, r3, r0
    mla r4, r3, r2, r4
    mov r2, r3, asr #0x1f
    adds r1, r6, r1
    mla r4, r2, r0, r4
    adc r0, r4, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    str r1, [r5, #0xac]
    ldr r0, [r5, #0x18c]
    ldr r2, [r5, #0xac]
    add r1, r0, #0x24
    str r2, [r0, #0x24]
    str r2, [r1, #0x4]
    str r2, [r1, #0x8]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on

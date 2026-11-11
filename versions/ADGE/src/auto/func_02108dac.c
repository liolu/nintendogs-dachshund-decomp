#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003a34();
extern void func_02003c00();
extern void func_0208ff8c();
extern void func_020cf170();
extern void func_020d2c64();
extern void func_020d7880();
extern void func_020eb5a4();
extern void func_020eb9fc();
extern void func_020ebcb4();
extern void func_020f0af4();
extern void func_020f0bfc();
extern void func_020f0ca4();
extern char data_02131928[];
extern char data_02131938[];
extern char data_02131940[];
extern char data_0214d624[];
extern char data_02159e64[];
extern char data_02159e70[];
// clang-format off
asm void func_02108dac(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xd4
    mov r4, r0
    ldr r1, [r4, #0x4]
    ldr r0, =0x1ca0
    str r1, [r4, #0x0]
    ldr r1, [r4, #0x0]
    add r5, r4, r0
    cmp r1, #0x4
    addls pc, pc, r1, lsl #0x2
    b L_021090e8
L_02108dd8:
    b L_02108dec
    b L_02108e44
    b L_02108fbc
    b L_0210902c
    b L_02109078
L_02108dec:
    ldr r1, [r4, #0xc]
    ldr r0, =0x6aaa
    mov r2, #0x1
    sub r0, r1, r0
    str r0, [r4, #0xc]
    ldr r0, [r4, #0xc]
    cmp r0, #0x0
    movle r0, #0x0
    strle r0, [r4, #0xc]
    ldr r0, [r4, #0x10]
    movgt r2, #0x0
    add r0, r0, #0xb60
    str r0, [r4, #0x10]
    ldr r0, [r4, #0x10]
    cmp r0, #0x10000
    movge r0, #0x10000
    movlt r2, #0x0
    strge r0, [r4, #0x10]
    cmp r2, #0x0
    movne r0, #0x1
    strne r0, [r4, #0x4]
    b L_021090e8
L_02108e44:
    ldr r0, =data_02159e70
    ldr r0, [r0, #0x0]
    add r0, r0, #0x4000
    ldr r0, [r0, #0x860]
    cmp r0, #0x0
    beq L_021090e8
    ldr r1, =data_0214d624
    mov r0, #0x2
    ldrb r6, [r1, #0x0]
    ldrb r5, [r1, #0x1]
    mov r1, r6
    mov r2, r5
    bl func_020eb5a4
    ldr r1, =data_0214d624
    mov r7, r0
    ldrh r0, [r1, #0x2]
    ands r0, r0, #0x2
    beq L_021090e8
    cmp r7, #0x0
    bne L_02108f04
    mov r0, #0x4
    str r0, [sp, #0x0]
    mov r0, #0x5
    str r0, [sp, #0x4]
    mov r2, #0x0
    str r2, [sp, #0x8]
    str r2, [sp, #0xc]
    str r2, [sp, #0x10]
    mov r0, #0xa
    str r0, [sp, #0x14]
    add r0, r4, #0x34
    mov r1, #0x2
    mov r3, #0x1
    str r2, [sp, #0x18]
    bl func_020f0ca4
    mov r1, r6, lsl #0x10
    mov r2, r5, lsl #0x10
    add r0, r4, #0x34
    mov r1, r1, asr #0x10
    mov r2, r2, asr #0x10
    bl func_020f0bfc
    add r2, r4, #0x70
    mov r0, #0x0
    swpb r1, r0, [r2]
    mov r1, #0x2
    str r1, [r4, #0x4]
    bl func_0208ff8c
    b L_021090e8
L_02108f04:
    cmp r7, #0x1
    bne L_02108f80
    mov r0, #0x4
    str r0, [sp, #0x0]
    mov r0, #0x5
    str r0, [sp, #0x4]
    mov r0, #0x0
    str r0, [sp, #0x8]
    str r0, [sp, #0xc]
    mov r2, #0x1
    str r0, [sp, #0x10]
    mov r7, #0xa
    str r7, [sp, #0x14]
    mov r3, r2
    add r0, r4, #0x34
    mov r1, #0x2
    str r7, [sp, #0x18]
    bl func_020f0ca4
    mov r1, r6, lsl #0x10
    mov r2, r5, lsl #0x10
    add r0, r4, #0x34
    mov r1, r1, asr #0x10
    mov r2, r2, asr #0x10
    bl func_020f0bfc
    add r2, r4, #0x70
    mov r0, #0x1
    swpb r1, r0, [r2]
    mov r1, #0x2
    str r1, [r4, #0x4]
    bl func_0208ff8c
    b L_021090e8
L_02108f80:
    ldr r6, =data_02131938
    mov r8, #0x0
    mov r5, #0x32
L_02108f8c:
    ldrb r0, [r6, #0x0]
    cmp r7, r0
    bne L_02108fa8
    add r1, r8, #0x1
    mov r0, r5
    strh r1, [r4, #0xcc]
    bl func_0208ff8c
L_02108fa8:
    add r8, r8, #0x1
    cmp r8, #0x8
    add r6, r6, #0x1
    blt L_02108f8c
    b L_021090e8
L_02108fbc:
    add r0, r4, #0x34
    bl func_020f0af4
    cmp r0, #0x0
    beq L_021090e8
    add r0, sp, #0x1c
    bl func_020cf170
    ldrh r0, [sp, #0x74]
    cmp r0, #0x9
    blo L_02109010
    ldrh r0, [r4, #0xcc]
    cmp r0, #0x9
    bhs L_02109010
    mov r2, #0x0
    ldr r1, =0x2f79
    mov r3, r2
    mov r0, #0xb
    str r2, [sp, #0x0]
    bl func_020d2c64
    mov r0, #0x3
    str r0, [r4, #0x4]
    b L_021090e8
L_02109010:
    mov r0, #0x14
    bl func_02003c00
    mov r1, #0x4
    mov r0, #0x31
    str r1, [r4, #0x4]
    bl func_0208ff8c
    b L_021090e8
L_0210902c:
    ldr r0, =data_02159e64
    ldr r1, [r0, #0x0]
    ldr r0, [r1, #0xa4]
    cmp r0, #0x0
    beq L_021090e8
    ldrsh r0, [r1, #0x9a]
    cmp r0, #0x1
    bne L_0210905c
    add r0, sp, #0x78
    bl func_020cf170
    ldrh r0, [sp, #0xd0]
    strh r0, [r4, #0xcc]
L_0210905c:
    mov r0, #0x14
    bl func_02003c00
    mov r1, #0x4
    mov r0, #0x31
    str r1, [r4, #0x4]
    bl func_0208ff8c
    b L_021090e8
L_02109078:
    mov r6, #0x1
    bl func_02003a34
    cmp r0, #0x0
    ldr r1, [r4, #0xc]
    ldr r0, =0x6aaa
    moveq r6, #0x0
    add r0, r1, r0
    str r0, [r4, #0xc]
    ldr r0, [r4, #0xc]
    cmp r0, #0x64000
    movge r0, #0x64000
    strge r0, [r4, #0xc]
    ldr r1, [r4, #0x10]
    ldr r0, =0x1111
    movlt r6, #0x0
    sub r0, r1, r0
    str r0, [r4, #0x10]
    ldr r0, [r4, #0x10]
    cmp r0, #0x0
    movle r0, #0x0
    movgt r6, #0x0
    strle r0, [r4, #0x10]
    cmp r6, #0x0
    beq L_021090e8
    mvn r1, #0x0
    mov r0, #0x11
    str r1, [r5, #0x0]
    bl func_020d7880
L_021090e8:
    ldr r8, =data_02131940
    mov r9, #0x0
    mov r5, r9
    mov r7, #0x2
    mov r6, #0x1
L_021090fc:
    ldrb r1, [r8, #0x0]
    mov r0, r7
    mov r2, r6
    bl func_020eb9fc
    ldr r0, [r4, #0xc]
    ldrb r1, [r8, #0x0]
    mov r3, r0, lsl #0x4
    mov r0, r7
    mov r2, r5
    mov r3, r3, asr #0x10
    bl func_020ebcb4
    add r9, r9, #0x1
    cmp r9, #0x14
    add r8, r8, #0x1
    blt L_021090fc
    ldrh r5, [r4, #0xcc]
    cmp r5, #0x1
    blo L_021091bc
    cmp r5, #0x8
    bhi L_021091bc
    mov r0, #0x2
    mov r1, #0x14
    mov r2, #0x1
    bl func_020eb9fc
    sub r5, r5, #0x1
    add r2, r4, r5, lsl #0x2
    ldrsh r0, [r2, #0x16]
    ldr r1, [r4, #0xc]
    ldrsh r2, [r2, #0x14]
    add r0, r0, r1, asr #0xc
    mov r0, r0, lsl #0x10
    mov r3, r0, asr #0x10
    mov r0, #0x2
    mov r1, #0x14
    bl func_020ebcb4
    ldr r0, [r4, #0xc]
    ldr r1, =data_02131928
    mov r0, r0, asr #0xc
    add r0, r0, #0x2
    mov r3, r0, lsl #0x10
    mov r0, #0x2
    ldrb r1, [r1, r5]
    mov r2, r0
    mov r3, r3, asr #0x10
    bl func_020ebcb4
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_021091bc:
    mov r0, #0x2
    mov r1, #0x14
    mov r2, #0x0
    bl func_020eb9fc
    add sp, sp, #0xd4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on

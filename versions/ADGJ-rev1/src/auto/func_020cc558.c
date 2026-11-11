#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02007128();
extern void func_0206dfbc();
extern void func_02081348();
extern void func_0208135c();
extern void func_020813d8();
extern void func_020c99e8();
extern char data_0212d318[];
extern char data_0212d320[];
// clang-format off
asm void func_020cc558(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x7c
    mov r5, r0
    ldr r6, [r5, #0x4]
    ldr r2, [r5, #0x10]
    mov r0, #0x0
    mla r4, r6, r1, r2
    strh r0, [sp, #0x0]
    ldrh r0, [sp, #0x0]
    mov r1, r4
    mov r2, r6
    bl func_0206dfbc
    add r0, r4, r6
    sub r1, r0, #0x8
    ldrh r0, [r1, #0x6]
    orr r0, r0, #0x1
    strh r0, [r1, #0x6]
    ldrh r0, [r5, #0x0]
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b L_020cc8dc
L_020cc5ac:
    b L_020cc5f4
    b L_020cc5c8
    b L_020cc8dc
    b L_020cc8dc
    b L_020cc8bc
    b L_020cc8dc
    b L_020cc8dc
L_020cc5c8:
    mov r0, #0x0
    strh r0, [sp, #0x2]
    ldrh r0, [sp, #0x2]
    ldr r2, =0x85c
    add r1, r4, #0x4
    bl func_0206dfbc
    ldr r0, =0xffff
    add sp, sp, #0x7c
    strh r0, [r4, #0x4]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_020cc5f4:
    add r0, sp, #0xc
    add r1, sp, #0x1c
    add r5, r4, #0x60
    bl func_02007128
    bl func_02081348
    mov r6, r0
    add r0, sp, #0x28
    mov r7, r1
    bl func_0208135c
    mvn r0, #0x0
    and r1, r6, r0
    str r1, [r4, #0x60]
    and r0, r7, r0
    str r0, [r5, #0x4]
    add r0, r5, #0x8
    bl func_020813d8
    ldr r0, [sp, #0x24]
    add r1, r5, #0xe
    swpb r0, r0, [r1]
    add r1, r5, #0xf
    ldr r0, [sp, #0x20]
    add r2, r5, #0x10
    swpb r0, r0, [r1]
    add r1, r5, #0x11
    ldr r0, [sp, #0x1c]
    add r6, r5, #0x12
    swpb r0, r0, [r2]
    add r7, r5, #0x13
    ldr r0, [sp, #0x14]
    ldr r2, =0x7a120
    swpb r0, r0, [r1]
    mov r1, #0x1
    ldr r3, [sp, #0x10]
    mvn r0, #0x0
    swpb r3, r3, [r6]
    ldr r6, [sp, #0xc]
    ldr r8, =0xffff
    swpb r6, r6, [r7]
    mov r3, #0x0
    str r2, [r5, #0x18]
    strh r1, [r5, #0x1c]
    strh r0, [r5, #0x1e]
    strh r8, [r5, #0x20]
    add r6, r5, #0x24
    strh r3, [r5, #0x22]
    mov r2, #0x3
    swpb r2, r2, [r6]
    add r6, r5, #0x25
    swpb r2, r3, [r6]
    add r2, r5, #0x26
    swpb r1, r1, [r2]
    add r2, r5, #0x27
    swpb r1, r3, [r2]
    add r2, r5, #0x28
    swpb r1, r3, [r2]
    add r2, r5, #0x29
    swpb r1, r3, [r2]
    add r2, r5, #0x2b
    swpb r1, r3, [r2]
    add r5, r4, #0xb4
L_020cc6e4:
    add r1, r3, #0x1
    mov r1, r1, lsl #0x10
    add r2, r5, r3
    mov r3, r1, asr #0x10
    cmp r3, #0x4
    swpb r1, r0, [r2]
    blt L_020cc6e4
    add r3, r5, #0x4
    mov r1, #0x0
    mov r0, r1
    mvn r2, #0x0
L_020cc710:
    add r1, r1, #0x1
    strh r2, [r3, #0x0]
    mov r1, r1, lsl #0x10
    strh r0, [r3, #0x2]
    mov r1, r1, asr #0x10
    str r0, [r3, #0x4]
    cmp r1, #0x8
    add r3, r3, #0x8
    blt L_020cc710
    ldr r2, =0xffff
    mov r6, r4
    mov r3, #0x0
L_020cc740:
    mov r1, r3
    mov r5, r6
L_020cc748:
    add r1, r1, #0x1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    strh r2, [r5, #0xf8]
    cmp r1, #0x4
    add r5, r5, #0x1c
    blt L_020cc748
    add r0, r0, #0x1
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    cmp r0, #0x3
    add r6, r6, #0x70
    blt L_020cc740
    add r7, r4, #0x248
    mov r3, #0x0
    mov r5, r3
    mvn r6, #0x0
L_020cc78c:
    strh r6, [r7, #0x0]
    add r1, r7, #0x2
    add r0, r3, #0x1
    mov r3, r0, lsl #0x10
    add r2, r7, #0x3
    swpb r0, r6, [r1]
    mov r3, r3, asr #0x10
    cmp r3, #0xc8
    swpb r0, r5, [r2]
    add r7, r7, #0x4
    blt L_020cc78c
    mov r2, #0x2
    add r0, sp, #0x6
    mov r1, #0x1
    strh r2, [sp, #0x6]
    strh r5, [sp, #0x8]
    bl func_020c99e8
    mov r3, #0x3
    mov r2, #0x1
    add r0, sp, #0x6
    mov r1, #0x2
    strh r3, [sp, #0x6]
    strh r2, [sp, #0x8]
    bl func_020c99e8
    ldr r7, =data_0212d318
    mov r9, #0x0
    add r6, sp, #0x6
    mov r8, #0x3
    mov r5, #0x1
L_020cc800:
    mov r0, r9, lsl #0x1
    ldrh r2, [r7, r0]
    mov r0, r6
    mov r1, r5
    strh r8, [sp, #0x6]
    strh r2, [sp, #0x8]
    bl func_020c99e8
    add r0, r9, #0x1
    mov r0, r0, lsl #0x10
    mov r9, r0, asr #0x10
    cmp r9, #0x3
    blt L_020cc800
    ldr r7, =data_0212d320
    mov r9, #0x0
    add r6, sp, #0x6
    mov r8, #0x4
    mov r5, #0x1
L_020cc844:
    mov r0, r9, lsl #0x1
    ldrh r2, [r7, r0]
    mov r0, r6
    mov r1, r5
    strh r8, [sp, #0x6]
    strh r2, [sp, #0x8]
    bl func_020c99e8
    add r0, r9, #0x1
    mov r0, r0, lsl #0x10
    mov r9, r0, asr #0x10
    cmp r9, #0x5
    blt L_020cc844
    ldr r0, =0x568
    mov r3, #0x0
    add r6, r4, r0
    mov r5, r3
    mvn r4, #0x0
L_020cc888:
    add r1, r6, #0xe
    add r0, r3, #0x1
    mov r3, r0, lsl #0x10
    add r2, r6, #0xf
    swpb r0, r5, [r1]
    mov r3, r3, asr #0x10
    cmp r3, #0x14
    swpb r0, r4, [r2]
    add r6, r6, #0x10
    blt L_020cc888
    add sp, sp, #0x7c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
L_020cc8bc:
    mov r0, #0x0
    strh r0, [sp, #0x4]
    ldrh r0, [sp, #0x4]
    ldr r2, =0x85c
    add r1, r4, #0x4
    bl func_0206dfbc
    ldr r0, =0xffff
    strh r0, [r4, #0x4]
L_020cc8dc:
    add sp, sp, #0x7c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on

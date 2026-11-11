#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02134fc4[];
extern char data_02135464[];
// clang-format off
asm void func_02044158(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r4, #0x0
    ldr r5, [sp, #0x20]
    mov lr, r4
    mov r8, r4
    mov ip, r4
L_02044170:
    add r6, r8, #0x1
    mov r6, r6, lsl #0x10
    mov r7, r8, lsl #0x1
    mov r8, r6, asr #0x10
    strh ip, [r3, r7]
    cmp r8, #0xa
    blt L_02044170
    ldr r7, =data_02135464
    mov r6, #0x1b8
    mla r6, r2, r6, r7
    add r9, r6, r1, lsl #0x1
    ldr r2, =0x10dcd
    mov r1, #0x58
L_020441a4:
    ldr r6, [r0, #0x0]
    mul r8, ip, r1
    mul r7, r6, r2
    add r10, r9, r8
    add r6, r7, #0x1
    ldrh r7, [r10, #0x2c]
    mov r10, r6, lsl #0x10
    mov r10, r10, lsr #0x10
    mul r10, r7, r10
    str r6, [r0, #0x0]
    mov r6, r10, lsr #0x10
    ldrh r8, [r9, r8]
    mov r6, r6, lsl #0x10
    mov r7, ip, lsl #0x1
    add r6, r8, r6, lsr #0x10
    strh r6, [r3, r7]
    ldrsh r6, [r3, r7]
    cmp r6, lr
    movgt lr, r6
    add r6, ip, #0x1
    movgt r4, ip, lsl #0x10
    mov r6, r6, lsl #0x10
    mov ip, r6, asr #0x10
    movgt r4, r4, asr #0x10
    cmp ip, #0x5
    blt L_020441a4
    ldr r1, =data_02134fc4
    ldr r7, =0x10dcd
    mov r6, #0x5
    add r2, r1, r4, lsl #0x4
L_0204421c:
    ldr r1, [r0, #0x0]
    sub ip, r6, #0x5
    mul r8, r1, r7
    add r9, r2, ip, lsl #0x1
    add r1, r8, #0x1
    ldrh r9, [r9, #0x8]
    mov r8, r1, lsl #0x10
    mov r8, r8, lsr #0x10
    mul r8, r9, r8
    mov r9, r8, lsr #0x10
    add r8, r6, #0x1
    str r1, [r0, #0x0]
    mov r1, ip, lsl #0x1
    ldrh r10, [r1, r2]
    mov r1, r9, lsl #0x10
    mov r8, r8, lsl #0x10
    mov r9, r6, lsl #0x1
    add r1, r10, r1, lsr #0x10
    mov r6, r8, asr #0x10
    strh r1, [r3, r9]
    cmp r6, #0x9
    blt L_0204421c
    cmp r4, #0x4
    addls pc, pc, r4, lsl #0x2
    b L_0204431c
L_02044280:
    b L_02044294
    b L_020442b0
    b L_020442c8
    b L_020442e4
    b L_02044300
L_02044294:
    add r1, r5, #0x1
    mov r0, #0x1
    swpb r0, r0, [r1]
    mov r0, #0x0
    swpb r0, r0, [r5]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_020442b0:
    add r1, r5, #0x1
    mov r2, #0x0
    swpb r0, r2, [r1]
    swpb r0, r2, [r5]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_020442c8:
    add r1, r5, #0x1
    mov r0, #0x17
    swpb r0, r0, [r1]
    mov r0, #0x0
    swpb r0, r0, [r5]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_020442e4:
    add r1, r5, #0x1
    mov r0, #0x16
    swpb r0, r0, [r1]
    mov r0, #0x0
    swpb r0, r0, [r5]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_02044300:
    add r1, r5, #0x1
    mov r0, #0x15
    swpb r0, r0, [r1]
    mov r0, #0x0
    swpb r0, r0, [r5]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_0204431c:
    add r1, r5, #0x1
    mov r2, #0x0
    swpb r0, r2, [r1]
    swpb r0, r2, [r5]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on

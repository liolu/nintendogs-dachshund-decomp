#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020419ec();
extern void func_02044158();
extern void func_02044340();
extern void func_02044384();
extern void func_020444b8();
extern void func_0206cbc4();
extern void func_0208a7b8();
extern char data_02130388[];
// clang-format off
asm void func_020d2394(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x8
    mov r3, #0x0
    strh r3, [sp, #0x4]
    mov r6, r0
    mov r4, r2
    mov r5, r1
    ldrh r0, [sp, #0x4]
    ldr r2, =0x85c
    mov r1, r6
    bl func_0206cbc4
    strh r4, [r6, #0x0]
    ldr r0, [r5, #0x0]
    ldr r2, =0x10dcd
    ldr r1, =data_02130388
    mul r3, r0, r2
    add r3, r3, #0x1
    mov r0, #0xc
    mla r1, r4, r0, r1
    str r3, [r5, #0x0]
    mov r0, r3, lsl #0x10
    ldrh r3, [r1, #0x8]
    mov r0, r0, lsr #0x10
    add r1, r6, #0x2
    mul r0, r3, r0
    mov r0, r0, lsr #0x10
    swpb r0, r0, [r1]
    add r1, r6, #0x3
    ldr r0, [r5, #0x0]
    mov r3, #0x100
    mul r2, r0, r2
    add r2, r2, #0x1
    mov r0, r2, lsl #0x10
    str r2, [r5, #0x0]
    mov r0, r0, lsr #0x1f
    swpb r0, r0, [r1]
    add r0, r6, #0x600
    strh r3, [r6, #0x4]
    mov r1, #0x0
    strh r1, [r0, #0x4e]
    mvn r0, #0x0
    strh r0, [r6, #0x6]
    ldrh r3, [r6, #0x0]
    mov r2, r5
    add r0, r6, #0x8
    add r1, r6, #0xc
    bl func_020444b8
    mov r4, #0x0
L_020d2454:
    ldrh r1, [r6, #0x0]
    mov r0, r5
    mov r2, r4
    bl func_02044384
    add r1, r4, #0x1
    add r3, r6, r4
    mov r2, r1, lsl #0x10
    add r1, r3, #0x10
    mov r4, r2, asr #0x10
    cmp r4, #0x4
    swpb r0, r0, [r1]
    blt L_020d2454
    mov r4, #0x0
L_020d2488:
    ldrh r1, [r6, #0x0]
    mov r0, r5
    mov r2, r4
    bl func_02044340
    add r1, r4, #0x1
    add r2, r6, r4, lsl #0x1
    mov r1, r1, lsl #0x10
    mov r4, r1, asr #0x10
    strh r0, [r2, #0x18]
    cmp r4, #0x12
    blt L_020d2488
    add r0, r6, #0x74
    str r0, [sp, #0x0]
    ldrh r1, [r6, #0x0]
    ldrb r2, [r6, #0x3]
    mov r0, r5
    add r3, r6, #0x3c
    bl func_02044158
    mov r0, #0x0
L_020d24d4:
    add r2, r6, r0, lsl #0x1
    add r0, r0, #0x1
    ldrsh r1, [r2, #0x3c]
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    strh r1, [r2, #0x50]
    cmp r0, #0xa
    blt L_020d24d4
    mov r0, r6
    bl func_020419ec
    strh r0, [r6, #0x64]
    ldrh r0, [r6, #0x0]
    mov r1, #0x0
    bl func_0208a7b8
    strh r0, [r6, #0x66]
    mov r1, #0x1
    strh r1, [r6, #0x68]
    mov r0, #0x0
    strh r0, [r6, #0x6a]
    strh r1, [r6, #0x6c]
    ldr r3, [r5, #0x0]
    ldr r1, =0x10dcd
    add r2, r6, #0x6f
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x1f
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str r3, [r5, #0x0]
    add r1, r1, #0x3
    swpb r1, r1, [r2]
    mvn r3, #0x0
    strh r3, [r6, #0x70]
    add r2, r6, #0x72
    swpb r1, r0, [r2]
    mov r1, #0x32
    strh r1, [r6, #0x76]
    add r1, r6, #0x700
    strh r3, [r1, #0xd0]
    strh r0, [r1, #0xd2]
    strh r0, [r1, #0xd4]
    strh r3, [r1, #0xd8]
    strh r0, [r1, #0xda]
    strh r0, [r1, #0xdc]
    strh r3, [r1, #0xe0]
    strh r0, [r1, #0xe2]
    strh r0, [r1, #0xe4]
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on

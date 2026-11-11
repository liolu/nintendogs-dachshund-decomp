#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200718c();
extern void func_0206cbc4();
extern void func_02080d64();
extern void func_02080d78();
extern void func_02080df4();
extern void func_020cf19c();
extern char data_021314d8[];
extern char data_021314e0[];
extern char data_021314e4[];
extern char data_021314f0[];
extern char data_021314f4[];
extern char data_021314fc[];
// clang-format off
asm void func_020d1db0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x78
    mov r5, r0
    ldr r6, [r5, #0x4]
    ldr r2, [r5, #0x10]
    mov r0, #0x0
    mla r4, r6, r1, r2
    strh r0, [sp, #0x0]
    ldrh r0, [sp, #0x0]
    mov r1, r4
    mov r2, r6
    bl func_0206cbc4
    add r0, r4, r6
    sub r1, r0, #0x8
    ldrh r0, [r1, #0x6]
    orr r0, r0, #0x1
    strh r0, [r1, #0x6]
    ldrh r0, [r5, #0x0]
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b L_020d215c
L_020d1e04:
    b L_020d1e4c
    b L_020d1e20
    b L_020d215c
    b L_020d215c
    b L_020d213c
    b L_020d215c
    b L_020d215c
L_020d1e20:
    mov r0, #0x0
    strh r0, [sp, #0x2]
    ldrh r0, [sp, #0x2]
    ldr r2, =0x85c
    add r1, r4, #0x4
    bl func_0206cbc4
    ldr r0, =0xffff
    add sp, sp, #0x78
    strh r0, [r4, #0x4]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_020d1e4c:
    add r0, sp, #0xc
    add r1, sp, #0x1c
    add r6, r4, #0x60
    bl func_0200718c
    bl func_02080d64
    mov r5, r0
    add r0, sp, #0x28
    mov r7, r1
    bl func_02080d78
    mvn r0, #0x0
    and r1, r5, r0
    str r1, [r4, #0x60]
    and r0, r7, r0
    str r0, [r6, #0x4]
    add r0, r6, #0x8
    bl func_02080df4
    ldr r0, [sp, #0x24]
    add r1, r6, #0xe
    swpb r0, r0, [r1]
    add r1, r6, #0xf
    ldr r0, [sp, #0x20]
    add r2, r6, #0x10
    swpb r0, r0, [r1]
    add r3, r6, #0x11
    ldr r0, [sp, #0x1c]
    add r5, r6, #0x12
    swpb r0, r0, [r2]
    add r7, r6, #0x13
    ldr r1, [sp, #0x14]
    ldr r0, =data_021314f0
    swpb r1, r1, [r3]
    ldr r8, =data_021314e4
    ldr r1, [sp, #0x10]
    mvn r2, #0x0
    swpb r1, r1, [r5]
    ldr r5, [sp, #0xc]
    ldr r1, =0xffff
    swpb r5, r5, [r7]
    mov r3, #0x0
    ldr r5, [r0, #0x0]
    add r7, r6, #0x24
    str r5, [r6, #0x18]
    ldrh r5, [r8, #0x0]
    mov r0, #0x3
    add r8, r6, #0x25
    strh r5, [r6, #0x1c]
    strh r2, [r6, #0x1e]
    strh r1, [r6, #0x20]
    strh r3, [r6, #0x22]
    swpb r0, r0, [r7]
    add r9, r6, #0x26
    swpb r0, r3, [r8]
    mov r7, #0x1
    swpb r0, r7, [r9]
    add r1, r6, #0x27
    swpb r0, r3, [r1]
    add r7, r6, #0x28
    swpb r0, r3, [r7]
    add r1, r6, #0x29
    swpb r0, r3, [r1]
    add r6, r6, #0x2b
    swpb r0, r3, [r6]
    add r7, r4, #0xb4
L_020d1f48:
    add r0, r3, #0x1
    mov r0, r0, lsl #0x10
    add r1, r7, r3
    mov r3, r0, asr #0x10
    cmp r3, #0x4
    swpb r0, r2, [r1]
    blt L_020d1f48
    add r3, r7, #0x4
    mov r1, #0x0
    mov r0, r1
    mvn r2, #0x0
L_020d1f74:
    add r1, r1, #0x1
    strh r2, [r3, #0x0]
    mov r1, r1, lsl #0x10
    strh r0, [r3, #0x2]
    mov r1, r1, asr #0x10
    str r0, [r3, #0x4]
    cmp r1, #0x8
    add r3, r3, #0x8
    blt L_020d1f74
    ldr r2, =0xffff
    mov r7, r4
    mov r3, #0x0
L_020d1fa4:
    mov r1, r3
    mov r6, r7
L_020d1fac:
    add r1, r1, #0x1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    strh r2, [r6, #0xf8]
    cmp r1, #0x4
    add r6, r6, #0x1c
    blt L_020d1fac
    add r0, r0, #0x1
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    cmp r0, #0x3
    add r7, r7, #0x70
    blt L_020d1fa4
    add r8, r4, #0x248
    mov r3, #0x0
    mov r6, r3
    mvn r7, #0x0
L_020d1ff0:
    strh r7, [r8, #0x0]
    add r1, r8, #0x2
    add r0, r3, #0x1
    mov r3, r0, lsl #0x10
    add r2, r8, #0x3
    swpb r0, r7, [r1]
    mov r3, r3, asr #0x10
    cmp r3, #0xc8
    swpb r0, r6, [r2]
    add r8, r8, #0x4
    blt L_020d1ff0
    mov r2, #0x2
    add r0, sp, #0x6
    mov r1, #0x1
    strh r2, [sp, #0x6]
    strh r6, [sp, #0x8]
    bl func_020cf19c
    mov r2, #0x3
    add r0, sp, #0x6
    mov r1, #0x2
    strh r2, [sp, #0x6]
    strh r5, [sp, #0x8]
    bl func_020cf19c
    ldr r0, =data_021314e0
    mov r10, #0x0
    ldrsh r9, [r0, #0x0]
    cmp r9, #0x0
    ble L_020d20a0
    ldr r7, =data_021314f4
    add r6, sp, #0x6
    mov r8, #0x3
    mov r5, #0x1
L_020d2070:
    mov r0, r10, lsl #0x1
    ldrh r2, [r7, r0]
    mov r0, r6
    mov r1, r5
    strh r8, [sp, #0x6]
    strh r2, [sp, #0x8]
    bl func_020cf19c
    add r0, r10, #0x1
    mov r0, r0, lsl #0x10
    mov r10, r0, asr #0x10
    cmp r10, r9
    blt L_020d2070
L_020d20a0:
    ldr r0, =data_021314d8
    mov r10, #0x0
    ldrsh r9, [r0, #0x0]
    cmp r9, #0x0
    ble L_020d20f4
    ldr r7, =data_021314fc
    add r6, sp, #0x6
    mov r8, #0x4
    mov r5, #0x1
L_020d20c4:
    mov r0, r10, lsl #0x1
    ldrh r2, [r7, r0]
    mov r0, r6
    mov r1, r5
    strh r8, [sp, #0x6]
    strh r2, [sp, #0x8]
    bl func_020cf19c
    add r0, r10, #0x1
    mov r0, r0, lsl #0x10
    mov r10, r0, asr #0x10
    cmp r10, r9
    blt L_020d20c4
L_020d20f4:
    ldr r0, =0x568
    mov r3, #0x0
    add r6, r4, r0
    mov r5, r3
    mvn r4, #0x0
L_020d2108:
    add r1, r6, #0xe
    add r0, r3, #0x1
    mov r3, r0, lsl #0x10
    add r2, r6, #0xf
    swpb r0, r5, [r1]
    mov r3, r3, asr #0x10
    cmp r3, #0x14
    swpb r0, r4, [r2]
    add r6, r6, #0x10
    blt L_020d2108
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
L_020d213c:
    mov r0, #0x0
    strh r0, [sp, #0x4]
    ldrh r0, [sp, #0x4]
    ldr r2, =0x85c
    add r1, r4, #0x4
    bl func_0206cbc4
    ldr r0, =0xffff
    strh r0, [r4, #0x4]
L_020d215c:
    add sp, sp, #0x78
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on

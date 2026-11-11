#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02027658();
extern void func_020276f8();
extern void func_0202774c();
extern void func_0202daec();
extern void func_020382c4();
extern void func_0203913c();
extern void func_0203e5e8();
extern char data_0214da84[];
// clang-format off
asm void func_02057764(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x28
    mov r5, r0
    mov r4, r1
    mov r6, r2
    bl func_0202774c
    cmp r0, #0x0
    beq L_02057b10
    cmp r0, #0x1
    beq L_02057924
    cmp r0, #0x2
    bne L_02057d2c
    ldr r0, =data_0214da84
    add r1, r6, #0x1
    ldr r0, [r0, #0x0]
    mov r2, r1, lsl #0x10
    ldr r3, [r0, #0x0]
    ldr r1, =0x10dcd
    mov r2, r2, lsr #0x10
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r1, r2, r1
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    movs r0, r1, lsr #0x10
    beq L_020577e4
    cmp r0, #0x1
    beq L_02057824
    b L_020578e0
L_020577e4:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r1, #0x304
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057824:
    cmp r4, #0x0
    beq L_020578d0
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r0, r5
    bl func_020382c4
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_020578d0
L_02057850:
    b L_02057860
    b L_0205787c
    b L_02057898
    b L_020578b4
L_02057860:
    mov r0, r5
    mov r1, #0x274
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0205787c:
    ldr r1, =0x275
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057898:
    ldr r1, =0x276
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020578b4:
    ldr r1, =0x277
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020578d0:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020578e0:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    add r1, sp, #0x0
    mov r0, r4
    bl func_02027658
    mov r0, r4
    bl func_020276f8
    mov r2, r0
    add r1, sp, #0x0
    mov r0, r5
    bl func_0203913c
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057924:
    ldr r0, =data_0214da84
    add r1, r6, #0x2
    ldr r0, [r0, #0x0]
    mov r2, r1, lsl #0x10
    ldr r3, [r0, #0x0]
    ldr r1, =0x10dcd
    mov r2, r2, lsr #0x10
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r1, r2, r1
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    movs r0, r1, lsr #0x10
    beq L_0205797c
    cmp r0, #0x1
    beq L_020579bc
    cmp r0, #0x2
    beq L_02057a10
    b L_02057acc
L_0205797c:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r1, #0x304
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020579bc:
    cmp r4, #0x0
    beq L_02057a00
    mov r0, r5
    bl func_0202daec
    cmp r0, #0x0
    bne L_02057a00
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x305
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057a00:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057a10:
    cmp r4, #0x0
    beq L_02057abc
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r0, r5
    bl func_020382c4
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02057abc
L_02057a3c:
    b L_02057a4c
    b L_02057a68
    b L_02057a84
    b L_02057aa0
L_02057a4c:
    mov r0, r5
    mov r1, #0x274
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057a68:
    ldr r1, =0x275
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057a84:
    ldr r1, =0x276
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057aa0:
    ldr r1, =0x277
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057abc:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057acc:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    add r1, sp, #0xc
    mov r0, r4
    bl func_02027658
    mov r0, r4
    bl func_020276f8
    mov r2, r0
    add r1, sp, #0xc
    mov r0, r5
    bl func_0203913c
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057b10:
    ldr r0, =data_0214da84
    add r1, r6, #0x3
    ldr r0, [r0, #0x0]
    mov r2, r1, lsl #0x10
    ldr r3, [r0, #0x0]
    ldr r1, =0x10dcd
    mov r2, r2, lsr #0x10
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r1, r2, r1
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str r3, [r0, #0x0]
    cmp r1, #0x3
    addls pc, pc, r1, lsl #0x2
    b L_02057ce8
L_02057b5c:
    b L_02057b6c
    b L_02057bac
    b L_02057bec
    b L_02057c2c
L_02057b6c:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r1, #0x304
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057bac:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x306
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057bec:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    ldr r1, =0x307
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057c2c:
    cmp r4, #0x0
    beq L_02057cd8
    mov r0, r4
    bl func_020276f8
    add r1, r5, #0x8a
    swpb r0, r0, [r1]
    mov r0, r5
    bl func_020382c4
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02057cd8
L_02057c58:
    b L_02057c68
    b L_02057c84
    b L_02057ca0
    b L_02057cbc
L_02057c68:
    mov r0, r5
    mov r1, #0x274
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057c84:
    ldr r1, =0x275
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057ca0:
    ldr r1, =0x276
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057cbc:
    ldr r1, =0x277
    mov r0, r5
    bl func_0203e5e8
    add sp, sp, #0x28
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057cd8:
    add sp, sp, #0x28
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057ce8:
    cmp r4, #0x0
    addeq sp, sp, #0x28
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    add r1, sp, #0x18
    mov r0, r4
    bl func_02027658
    mov r0, r4
    bl func_020276f8
    mov r2, r0
    add r1, sp, #0x18
    mov r0, r5
    bl func_0203913c
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02057d2c:
    mov r0, #0x0
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on

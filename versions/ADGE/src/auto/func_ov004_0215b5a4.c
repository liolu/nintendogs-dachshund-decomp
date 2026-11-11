#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020e4bec();
extern char data_0215a044[];
extern char data_ov004_0216dfac[];
extern char data_ov004_0216dfbc[];
extern char data_ov004_0216e3c0[];
// clang-format off
asm void func_ov004_0215b5a4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x2c
    ldr ip, =data_ov004_0216e3c0
    ldr r0, =data_ov004_0216dfac
    ldr ip, [ip, #0x0]
    add lr, sp, #0x8
    ldmia r0, {r0, r1, r2, r3}
    stmia lr, {r0, r1, r2, r3}
    ldrsb r0, [ip, #0x0]
    cmp r0, #0x4
    bne L_0215b6ec
    add r1, ip, #0x3000
    ldr r3, [r1, #0x39c]
    ldr r2, =0x19a
    mov r0, #0x20
    cmp r3, r2
    blt L_0215b648
    cmp r3, #0x1000
    bge L_0215b648
    ldr r3, [r1, #0x6c4]
    ldrb r4, [ip, #0x1c]
    add r1, r3, #0x2000
    ldr r2, [r1, #0x264]
    add r1, r3, r2, lsl #0x1
    cmp r2, #0x0
    ldrb r2, [r1, #0xc]
    ldrgtb r4, [r1, #0xa]
    cmp r2, r4
    bls L_0215b630
    ldr r1, =0x317
    add r2, r3, #0x2000
    add r2, r2, r1
    mov r1, #0x0
    swpb r1, r1, [r2]
    b L_0215b648
L_0215b630:
    cmp r2, r4
    ldrlo r1, =0x317
    addlo r2, r3, #0x2000
    addlo r2, r2, r1
    movlo r1, #0x1
    swplob r1, r1, [r2]
L_0215b648:
    ldr r1, =data_ov004_0216e3c0
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0xc]
    cmp r1, #0x0
    beq L_0215b678
    add r1, r2, #0x3000
    ldr r1, [r1, #0x6c4]
    add r1, r1, #0x2000
    ldrb r1, [r1, #0x317]
    cmp r1, #0x0
    moveq r0, #0x22
    b L_0215b694
L_0215b678:
    add r0, r2, #0x3000
    ldr r0, [r0, #0x6c4]
    add r0, r0, #0x2000
    ldrb r0, [r0, #0x317]
    cmp r0, #0x0
    movne r0, #0x21
    moveq r0, #0x23
L_0215b694:
    ldr r1, =data_ov004_0216e3c0
    mov r4, #0x0
    ldr r1, [r1, #0x0]
    ldr r2, =data_0215a044
    add r1, r1, #0x3000
    ldr r5, [r1, #0x394]
    add r3, sp, #0x8
    add r5, r5, #0x4
    strh r5, [sp, #0xe]
    ldr r5, [r1, #0x398]
    add r5, r5, #0x4
    strh r5, [sp, #0x10]
    str r4, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r2, [r2, #0x0]
    ldr r0, [r1, #0x3d8]
    ldr r1, [r1, #0x3d4]
    ldr r2, [r2, #0x10]
    bl func_020e4bec
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0215b6ec:
    add r0, ip, #0x1000
    ldr r0, [r0, #0x2f4]
    cmp r0, #0x0
    beq L_0215b770
    add r1, ip, #0x3000
    ldr r0, [r1, #0x6c4]
    mov ip, #0x0
    ldrb r3, [r0, #0x0]
    ldrsh r0, [r0, #0x2]
    mov r2, #0xe
    mov r3, r3, lsl #0x3
    sub r0, r3, r0
    add r0, r0, #0x4
    strh r0, [sp, #0xe]
    ldr r3, [r1, #0x6c4]
    ldr r0, =data_0215a044
    ldrb r5, [r3, #0x1]
    ldrsh r4, [r3, #0x4]
    mov r3, lr
    mov r5, r5, lsl #0x3
    sub r4, r5, r4
    add r4, r4, #0x4
    strh r4, [sp, #0x10]
    str ip, [sp, #0x0]
    str r2, [sp, #0x4]
    ldr r2, [r0, #0x0]
    ldr r0, [r1, #0x3d8]
    ldr r1, [r1, #0x3d4]
    ldr r2, [r2, #0x10]
    bl func_020e4bec
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0215b770:
    add r0, ip, #0x3000
    ldr r1, [r0, #0x6c4]
    ldrb r2, [r1, #0x0]
    ldrsh r1, [r1, #0x2]
    mov r2, r2, lsl #0x3
    sub r1, r2, r1
    add r1, r1, #0xe
    strh r1, [sp, #0xe]
    ldr r1, [r0, #0x6c4]
    ldrb r2, [r1, #0x1]
    ldrsh r1, [r1, #0x4]
    mov r2, r2, lsl #0x3
    sub r1, r2, r1
    sub r1, r1, #0x3
    strh r1, [sp, #0x10]
    ldr r0, [r0, #0x6c4]
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    bne L_0215b850
    ldr r0, =data_ov004_0216dfbc
    add lr, sp, #0x18
    ldmia r0, {r0, r1, r2, r3}
    stmia lr, {r0, r1, r2, r3}
    ldr ip, [ip, #0x4]
    ldr r3, =0x88888889
    ldr r2, =0x3c
    umull r0, r1, ip, r3
    mov r1, r1, lsr #0x5
    umull r0, r1, r2, r1
    sub r1, ip, r0
    mov r1, r1, lsl #0x2
    umull r0, r4, r1, r3
    ldrsh r1, [sp, #0x10]
    ldrsh r2, [sp, #0xe]
    mov r4, r4, lsr #0x4
    cmp r4, #0x4
    sub r3, r2, #0x12
    ldr r0, =data_ov004_0216e3c0
    strh r3, [sp, #0x1e]
    ldr r2, [r0, #0x0]
    rsbhs r4, r4, #0x8
    sub r1, r1, #0xc
    add r1, r1, r4
    strh r1, [sp, #0x20]
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r1, #0xd
    str r1, [sp, #0x4]
    ldr r0, =data_0215a044
    add r1, r2, #0x3000
    ldr r2, [r0, #0x0]
    ldr r0, [r1, #0x3d8]
    ldr r1, [r1, #0x3d4]
    ldr r2, [r2, #0x10]
    add r3, sp, #0x18
    bl func_020e4bec
L_0215b850:
    ldr r0, =data_ov004_0216e3c0
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0xc]
    cmp r0, #0x0
    ldr r0, =data_ov004_0216e3c0
    movne r2, #0xb
    ldr r3, [r0, #0x0]
    ldr r0, =data_0215a044
    str r1, [sp, #0x0]
    moveq r2, #0xc
    str r2, [sp, #0x4]
    ldr r2, [r0, #0x0]
    add r1, r3, #0x3000
    ldr r0, [r1, #0x3d8]
    ldr r1, [r1, #0x3d4]
    ldr r2, [r2, #0x10]
    add r3, sp, #0x8
    bl func_020e4bec
    ldr r0, =data_ov004_0216e3c0
    ldr r0, [r0, #0x0]
    ldr r1, [r0, #0x20]
    cmp r1, #0x0
    addeq sp, sp, #0x2c
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    add r1, r0, #0x3000
    ldr r2, [r1, #0x6c4]
    ldrb r3, [r2, #0x0]
    ldrsh r2, [r2, #0x2]
    mov r3, r3, lsl #0x3
    sub r2, r3, r2
    add r2, r2, #0x4
    strh r2, [sp, #0xe]
    ldr r1, [r1, #0x6c4]
    ldrb r2, [r1, #0x1]
    ldrsh r1, [r1, #0x4]
    mov r2, r2, lsl #0x3
    sub r1, r2, r1
    add r1, r1, #0x4
    strh r1, [sp, #0x10]
    ldr r0, [r0, #0xc]
    mov r1, #0x0
    cmp r0, #0x0
    ldr r0, =data_ov004_0216e3c0
    movne r2, #0x9
    ldr r3, [r0, #0x0]
    ldr r0, =data_0215a044
    str r1, [sp, #0x0]
    moveq r2, #0xa
    str r2, [sp, #0x4]
    ldr r2, [r0, #0x0]
    add r1, r3, #0x3000
    ldr r0, [r1, #0x3d8]
    ldr r1, [r1, #0x3d4]
    ldr r2, [r2, #0x10]
    add r3, sp, #0x8
    bl func_020e4bec
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on

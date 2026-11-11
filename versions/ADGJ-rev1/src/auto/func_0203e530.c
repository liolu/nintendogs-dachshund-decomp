#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203e840();
extern char data_02153700[];
extern char data_02153708[];
// clang-format off
asm void func_0203e530(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r1, =data_02153708
    ldr r1, [r1, #0x0]
    ldrh r1, [r1, #0x0]
    cmp r1, #0x10
    addls pc, pc, r1, lsl #0x2
    b L_0203e824
L_0203e550:
    b L_0203e824
    b L_0203e5e8
    b L_0203e824
    b L_0203e594
    b L_0203e5f8
    b L_0203e824
    b L_0203e824
    b L_0203e824
    b L_0203e6f8
    b L_0203e824
    b L_0203e7a4
    b L_0203e7d4
    b L_0203e774
    b L_0203e824
    b L_0203e824
    b L_0203e824
    b L_0203e744
L_0203e594:
    ldr r1, =data_02153700
    ldr r1, [r1, #0x0]
    ldrsh r1, [r1, #0x0]
    cmp r1, #0x0
    bne L_0203e5d8
    add r2, r0, #0x8b
    mov ip, #0x1
    swpb r1, ip, [r2]
    mov r3, #0x0
    ldr r1, [r0, #0x9e4]
    add sp, sp, #0x4
    strh r3, [r1, #0x1a]
    swpb r1, ip, [r2]
    ldr r0, [r0, #0x9e4]
    strh r3, [r0, #0x22]
    ldmfd sp!, {lr}
    bx lr
L_0203e5d8:
    bl func_0203e840
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_0203e5e8:
    bl func_0203e840
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_0203e5f8:
    add r2, r0, #0x8b
    mov lr, #0x1
    swpb r1, lr, [r2]
    ldr ip, =0x1388
    ldr r1, [r0, #0x9e4]
    mov r3, #0x7d0
    strh ip, [r1, #0x18]
    swpb r1, lr, [r2]
    add sp, sp, #0x4
    ldr r1, [r0, #0x9e4]
    strh r3, [r1, #0x1c]
    ldr r1, [r0, #0x9e4]
    ldrsh r1, [r1, #0x1e]
    add r1, r1, #0x64
    mov r1, r1, lsl #0x10
    movs r3, r1, asr #0x10
    swpb r1, lr, [r2]
    movmi r3, #0x0
    ldr r1, =0x2710
    add r2, r0, #0x8b
    cmp r3, r1
    movgt r3, r1
    ldr r1, [r0, #0x9e4]
    ldr lr, =0x2710
    strh r3, [r1, #0x1e]
    ldr r1, [r0, #0x9e4]
    mov r3, #0x1
    ldrsh r1, [r1, #0x20]
    add r1, r1, #0x64
    mov r1, r1, lsl #0x10
    movs ip, r1, asr #0x10
    swpb r1, r3, [r2]
    movmi ip, #0x0
    ldr r1, =0x2710
    add r3, r0, #0x8b
    cmp ip, r1
    movgt ip, r1
    ldr r1, [r0, #0x9e4]
    strh ip, [r1, #0x20]
    mov r1, #0x1
    swpb r2, r1, [r3]
    mov ip, #0x0
    ldr r2, [r0, #0x9e4]
    strh lr, [r2, #0x1a]
    swpb r2, r1, [r3]
    ldr r2, [r0, #0x9e4]
    strh ip, [r2, #0x22]
    swpb r2, r1, [r3]
    ldr r2, [r0, #0x9e4]
    strh ip, [r2, #0x24]
    ldr r2, [r0, #0x9e4]
    ldrsh r2, [r2, #0x26]
    swpb r1, r1, [r3]
    sub r2, r2, #0xc8
    mov r2, r2, lsl #0x10
    movs r2, r2, asr #0x10
    ldr r1, =0x2710
    movmi r2, ip
    cmp r2, r1
    ldr r0, [r0, #0x9e4]
    movgt r2, r1
    strh r2, [r0, #0x26]
    ldmfd sp!, {lr}
    bx lr
L_0203e6f8:
    add r2, r0, #0x8b
    mov lr, #0x1
    swpb r1, lr, [r2]
    ldr ip, =0x2710
    ldr r1, [r0, #0x9e4]
    mov r3, #0x0
    strh ip, [r1, #0x18]
    swpb r1, lr, [r2]
    add sp, sp, #0x4
    ldr r1, [r0, #0x9e4]
    strh r3, [r1, #0x1a]
    swpb r1, lr, [r2]
    ldr r1, [r0, #0x9e4]
    strh r3, [r1, #0x22]
    swpb r1, lr, [r2]
    ldr r0, [r0, #0x9e4]
    strh r3, [r0, #0x24]
    ldmfd sp!, {lr}
    bx lr
L_0203e744:
    add r2, r0, #0x8b
    mov ip, #0x1
    swpb r1, ip, [r2]
    mov r3, #0x0
    ldr r1, [r0, #0x9e4]
    add sp, sp, #0x4
    strh r3, [r1, #0x1a]
    swpb r1, ip, [r2]
    ldr r0, [r0, #0x9e4]
    strh r3, [r0, #0x22]
    ldmfd sp!, {lr}
    bx lr
L_0203e774:
    add r2, r0, #0x8b
    mov ip, #0x1
    swpb r1, ip, [r2]
    mov r3, #0x0
    ldr r1, [r0, #0x9e4]
    add sp, sp, #0x4
    strh r3, [r1, #0x1a]
    swpb r1, ip, [r2]
    ldr r0, [r0, #0x9e4]
    strh r3, [r0, #0x22]
    ldmfd sp!, {lr}
    bx lr
L_0203e7a4:
    add r2, r0, #0x8b
    mov ip, #0x1
    swpb r1, ip, [r2]
    mov r3, #0x0
    ldr r1, [r0, #0x9e4]
    add sp, sp, #0x4
    strh r3, [r1, #0x1a]
    swpb r1, ip, [r2]
    ldr r0, [r0, #0x9e4]
    strh r3, [r0, #0x22]
    ldmfd sp!, {lr}
    bx lr
L_0203e7d4:
    add r2, r0, #0x8b
    mov lr, #0x1
    swpb r1, lr, [r2]
    ldr r3, =0x1388
    ldr r1, [r0, #0x9e4]
    mov ip, #0x7d0
    strh r3, [r1, #0x18]
    swpb r1, lr, [r2]
    mov r3, #0x0
    ldr r1, [r0, #0x9e4]
    strh ip, [r1, #0x1c]
    swpb r1, lr, [r2]
    ldr r1, [r0, #0x9e4]
    strh r3, [r1, #0x1a]
    swpb r1, lr, [r2]
    ldr r1, [r0, #0x9e4]
    strh r3, [r1, #0x22]
    swpb r1, lr, [r2]
    ldr r0, [r0, #0x9e4]
    strh r3, [r0, #0x24]
L_0203e824:
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on

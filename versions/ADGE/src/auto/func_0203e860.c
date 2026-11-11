#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203eb70();
extern char data_0215a044[];
extern char data_0215a04c[];
// clang-format off
asm void func_0203e860(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r1, =data_0215a04c
    ldr r1, [r1, #0x0]
    ldrh r1, [r1, #0x0]
    cmp r1, #0x10
    addls pc, pc, r1, lsl #0x2
    b L_0203eb54
L_0203e880:
    b L_0203eb54
    b L_0203e918
    b L_0203eb54
    b L_0203e8c4
    b L_0203e928
    b L_0203eb54
    b L_0203eb54
    b L_0203eb54
    b L_0203ea28
    b L_0203eb54
    b L_0203ead4
    b L_0203eb04
    b L_0203eaa4
    b L_0203eb54
    b L_0203eb54
    b L_0203eb54
    b L_0203ea74
L_0203e8c4:
    ldr r1, =data_0215a044
    ldr r1, [r1, #0x0]
    ldrsh r1, [r1, #0x0]
    cmp r1, #0x0
    bne L_0203e908
    add r2, r0, #0xd2
    mov ip, #0x1
    swpb r1, ip, [r2]
    mov r3, #0x0
    ldr r1, [r0, #0x9e8]
    add sp, sp, #0x4
    strh r3, [r1, #0x1a]
    swpb r1, ip, [r2]
    ldr r0, [r0, #0x9e8]
    strh r3, [r0, #0x22]
    ldmfd sp!, {lr}
    bx lr
L_0203e908:
    bl func_0203eb70
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_0203e918:
    bl func_0203eb70
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_0203e928:
    add r2, r0, #0xd2
    mov lr, #0x1
    swpb r1, lr, [r2]
    ldr ip, =0x1388
    ldr r1, [r0, #0x9e8]
    mov r3, #0x7d0
    strh ip, [r1, #0x18]
    swpb r1, lr, [r2]
    add sp, sp, #0x4
    ldr r1, [r0, #0x9e8]
    strh r3, [r1, #0x1c]
    ldr r1, [r0, #0x9e8]
    ldrsh r1, [r1, #0x1e]
    add r1, r1, #0x64
    mov r1, r1, lsl #0x10
    movs r3, r1, asr #0x10
    swpb r1, lr, [r2]
    movmi r3, #0x0
    ldr r1, =0x2710
    add r2, r0, #0xd2
    cmp r3, r1
    movgt r3, r1
    ldr r1, [r0, #0x9e8]
    ldr lr, =0x2710
    strh r3, [r1, #0x1e]
    ldr r1, [r0, #0x9e8]
    mov r3, #0x1
    ldrsh r1, [r1, #0x20]
    add r1, r1, #0x64
    mov r1, r1, lsl #0x10
    movs ip, r1, asr #0x10
    swpb r1, r3, [r2]
    movmi ip, #0x0
    ldr r1, =0x2710
    add r3, r0, #0xd2
    cmp ip, r1
    movgt ip, r1
    ldr r1, [r0, #0x9e8]
    strh ip, [r1, #0x20]
    mov r1, #0x1
    swpb r2, r1, [r3]
    mov ip, #0x0
    ldr r2, [r0, #0x9e8]
    strh lr, [r2, #0x1a]
    swpb r2, r1, [r3]
    ldr r2, [r0, #0x9e8]
    strh ip, [r2, #0x22]
    swpb r2, r1, [r3]
    ldr r2, [r0, #0x9e8]
    strh ip, [r2, #0x24]
    ldr r2, [r0, #0x9e8]
    ldrsh r2, [r2, #0x26]
    swpb r1, r1, [r3]
    sub r2, r2, #0xc8
    mov r2, r2, lsl #0x10
    movs r2, r2, asr #0x10
    ldr r1, =0x2710
    movmi r2, ip
    cmp r2, r1
    ldr r0, [r0, #0x9e8]
    movgt r2, r1
    strh r2, [r0, #0x26]
    ldmfd sp!, {lr}
    bx lr
L_0203ea28:
    add r2, r0, #0xd2
    mov lr, #0x1
    swpb r1, lr, [r2]
    ldr ip, =0x2710
    ldr r1, [r0, #0x9e8]
    mov r3, #0x0
    strh ip, [r1, #0x18]
    swpb r1, lr, [r2]
    add sp, sp, #0x4
    ldr r1, [r0, #0x9e8]
    strh r3, [r1, #0x1a]
    swpb r1, lr, [r2]
    ldr r1, [r0, #0x9e8]
    strh r3, [r1, #0x22]
    swpb r1, lr, [r2]
    ldr r0, [r0, #0x9e8]
    strh r3, [r0, #0x24]
    ldmfd sp!, {lr}
    bx lr
L_0203ea74:
    add r2, r0, #0xd2
    mov ip, #0x1
    swpb r1, ip, [r2]
    mov r3, #0x0
    ldr r1, [r0, #0x9e8]
    add sp, sp, #0x4
    strh r3, [r1, #0x1a]
    swpb r1, ip, [r2]
    ldr r0, [r0, #0x9e8]
    strh r3, [r0, #0x22]
    ldmfd sp!, {lr}
    bx lr
L_0203eaa4:
    add r2, r0, #0xd2
    mov ip, #0x1
    swpb r1, ip, [r2]
    mov r3, #0x0
    ldr r1, [r0, #0x9e8]
    add sp, sp, #0x4
    strh r3, [r1, #0x1a]
    swpb r1, ip, [r2]
    ldr r0, [r0, #0x9e8]
    strh r3, [r0, #0x22]
    ldmfd sp!, {lr}
    bx lr
L_0203ead4:
    add r2, r0, #0xd2
    mov ip, #0x1
    swpb r1, ip, [r2]
    mov r3, #0x0
    ldr r1, [r0, #0x9e8]
    add sp, sp, #0x4
    strh r3, [r1, #0x1a]
    swpb r1, ip, [r2]
    ldr r0, [r0, #0x9e8]
    strh r3, [r0, #0x22]
    ldmfd sp!, {lr}
    bx lr
L_0203eb04:
    add r2, r0, #0xd2
    mov lr, #0x1
    swpb r1, lr, [r2]
    ldr r3, =0x1388
    ldr r1, [r0, #0x9e8]
    mov ip, #0x7d0
    strh r3, [r1, #0x18]
    swpb r1, lr, [r2]
    mov r3, #0x0
    ldr r1, [r0, #0x9e8]
    strh ip, [r1, #0x1c]
    swpb r1, lr, [r2]
    ldr r1, [r0, #0x9e8]
    strh r3, [r1, #0x1a]
    swpb r1, lr, [r2]
    ldr r1, [r0, #0x9e8]
    strh r3, [r1, #0x22]
    swpb r1, lr, [r2]
    ldr r0, [r0, #0x9e8]
    strh r3, [r0, #0x24]
L_0203eb54:
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on

#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern char data_ov004_0216df40[];
extern char data_ov004_0216df48[];
extern char data_ov004_0216e3c0[];
// clang-format off
asm void func_ov004_02160d3c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    ldr r2, =data_ov004_0216df40
    ldr r1, =data_ov004_0216df48
    ldr r4, [r2, #0x0]
    mov r9, #0x0
    ldr r3, [r2, #0x4]
    ldr r2, [r1, #0x0]
    ldr r1, [r1, #0x4]
    str r4, [sp, #0x4]
    add r6, sp, #0x4
    add r5, sp, #0xc
    mov r8, r9
    str r3, [sp, #0x8]
    str r2, [sp, #0xc]
    str r1, [sp, #0x10]
    mov r11, r9
    str r9, [sp, #0x0]
    mov r4, #0x1
    mov lr, #0x2
L_02160d8c:
    ldr r1, =data_ov004_0216e3c0
    ldr r2, [r1, #0x0]
    add r7, r2, r8
    ldrb r1, [r7, #0x10]
    cmp r1, #0x0
    beq L_02160db8
    cmp r1, #0x1
    beq L_02160e2c
    cmp r1, #0x2
    beq L_02160e90
    b L_02160eec
L_02160db8:
    add r1, r2, #0x3000
    ldr r2, [r1, #0x6c4]
    ldr r3, [r5, r8, lsl #0x2]
    ldr r1, [r6, r8, lsl #0x2]
    ldrb r2, [r2, r8]
    add r10, r1, r3
    sub r10, r10, #0x3
    cmp r2, r10
    blt L_02160e04
    add r10, r1, r1, asr #0x1
    add r10, r3, r10
    sub r10, r10, #0x3
    cmp r2, r10
    bge L_02160e04
    cmp r0, #0x0
    addne r2, r7, #0x10
    swpneb r1, r4, [r2]
    mov r9, r4
    b L_02160eec
L_02160e04:
    add r1, r1, r1, asr #0x1
    add r1, r3, r1
    sub r1, r1, #0x3
    cmp r2, r1
    blt L_02160eec
    cmp r0, #0x0
    addne r2, r7, #0x10
    swpneb r1, lr, [r2]
    mov r9, r4
    b L_02160eec
L_02160e2c:
    add r1, r2, #0x3000
    ldr r1, [r1, #0x6c4]
    ldr r3, [r6, r8, lsl #0x2]
    ldr ip, [r5, r8, lsl #0x2]
    ldrb r1, [r1, r8]
    mov r2, r3, asr #0x1
    add r10, ip, r3, asr #0x1
    add r10, r10, #0x3
    cmp r1, r10
    bge L_02160e68
    cmp r0, #0x0
    addne r2, r7, #0x10
    swpneb r1, r11, [r2]
    mov r9, r4
    b L_02160eec
L_02160e68:
    add r2, r3, r2
    add r2, ip, r2
    sub r2, r2, #0x3
    cmp r1, r2
    blt L_02160eec
    cmp r0, #0x0
    addne r2, r7, #0x10
    swpneb r1, lr, [r2]
    mov r9, r4
    b L_02160eec
L_02160e90:
    add r1, r2, #0x3000
    ldr r1, [r1, #0x6c4]
    ldr r3, [r5, r8, lsl #0x2]
    ldr r2, [r6, r8, lsl #0x2]
    ldrb r1, [r1, r8]
    add r10, r3, r2, asr #0x1
    add r10, r10, #0x3
    cmp r1, r10
    bge L_02160ecc
    cmp r0, #0x0
    ldrne r1, [sp, #0x0]
    addne r2, r7, #0x10
    swpneb r1, r1, [r2]
    mov r9, r4
    b L_02160eec
L_02160ecc:
    add r2, r2, r3
    add r2, r2, #0x3
    cmp r1, r2
    bge L_02160eec
    cmp r0, #0x0
    addne r2, r7, #0x10
    swpneb r1, r4, [r2]
    mov r9, r4
L_02160eec:
    add r8, r8, #0x1
    cmp r8, #0x2
    blt L_02160d8c
    mov r0, r9
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

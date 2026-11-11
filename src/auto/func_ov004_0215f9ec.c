#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_ov004_0215fb1c();
extern void func_ov004_0215fd54();
extern char data_ov004_0216e3c0[];
// clang-format off
asm void func_ov004_0215f9ec(void) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr r2, =data_ov004_0216e3c0
    mov r5, r0
    ldr r0, [r2, #0x0]
    mov r4, r1
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    ldr r1, [r0, #0x8]
    add r0, r0, r1, lsl #0x1
    cmp r1, #0x1
    ldrb r1, [r0, #0x8]
    ldrb r2, [r0, #0x9]
    ble L_0215fa54
    sub r0, r1, #0x1
    cmp r5, r0
    beq L_0215fa38
    add r0, r1, #0x1
    cmp r5, r0
    bne L_0215fa54
L_0215fa38:
    sub r0, r2, #0x1
    cmp r4, r0
    beq L_0215fa50
    add r0, r2, #0x1
    cmp r4, r0
    bne L_0215fa54
L_0215fa50:
    bl func_ov004_0215fb1c
L_0215fa54:
    mov r0, r5
    mov r1, r4
    bl func_ov004_0215fd54
    ldr r0, =data_ov004_0216e3c0
    ldr r2, =0x3bb
    ldr r6, [r0, #0x0]
    mov lr, #0x30
    add r1, r6, #0x3000
    ldrb r1, [r1, #0x3ba]
    ldr r3, =0x3c1
    ldr ip, =0x3c2
    add r1, r6, r1
    add r1, r1, #0x3000
    add r2, r1, r2
    swpb r1, lr, [r2]
    ldr r2, [r0, #0x0]
    ldr lr, =0x3ba
    add r1, r2, #0x3000
    ldrb r1, [r1, #0x3ba]
    add r1, r2, r1, lsl #0x1
    add r1, r1, #0x3000
    add r2, r1, r3
    swpb r1, r5, [r2]
    ldr r2, [r0, #0x0]
    add r1, r2, #0x3000
    ldrb r1, [r1, #0x3ba]
    add r1, r2, r1, lsl #0x1
    add r1, r1, #0x3000
    add r2, r1, ip
    swpb r1, r4, [r2]
    ldr r1, [r0, #0x0]
    add r1, r1, #0x3000
    ldrb r3, [r1, #0x3ba]
    add r2, r1, lr
    add r1, r3, #0x1
    swpb r1, r1, [r2]
    ldr r0, [r0, #0x0]
    add r0, r0, #0x3000
    ldrb r1, [r0, #0x3ba]
    cmp r1, #0x6
    addhs r1, r0, lr
    movhs r0, #0x0
    swphsb r0, r0, [r1]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on

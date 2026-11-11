#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffda04();
extern void func_020280ac();
extern char data_02153734[];
extern char data_ov003_0216b840[];
extern char data_ov003_0216be20[];
// clang-format off
asm void func_ov003_0215c22c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    ldr r2, =data_02153734
    mov r10, r0
    ldr r0, [r2, #0x0]
    mov r9, r1
    ldrsh r0, [r0, #0x2]
    bl func_01ffda04
    mov r7, #0x0
    mov r8, r0
    mov r0, r7
    ldr r4, =data_ov003_0216be20
    mov r6, r7
    ldr r2, =0x2c5
L_0215e788:
    ldr r1, [r4, #0x0]
    add r1, r1, #0x3000
    ldr r1, [r1, #0x6c4]
    add r1, r1, r0
    add r1, r1, #0x2000
    add r3, r1, r2
    add r0, r0, #0x1
    cmp r0, #0x40
    swpb r1, r6, [r3]
    blt L_0215e788
    ldr r11, =data_ov003_0216be20
    ldr r5, =data_ov003_0216b840
    mov r4, #0x1
L_0215e7bc:
    mov r1, r6, lsl #0x10
    mov r0, r8
    mov r1, r1, asr #0x10
    bl func_020280ac
    ldrb r1, [r0, #0x3]
    ldrb r2, [r5, r1]
    cmp r2, #0x0
    beq L_0215e834
    ldrb r1, [r0, #0x1]
    sub r3, r1, r10
    cmp r3, #0x0
    rsble r3, r3, #0x0
    mov r1, r2, asr #0x1
    cmp r3, r1
    bgt L_0215e834
    ldrb r0, [r0, #0x2]
    sub r0, r0, r9
    cmp r0, #0x0
    rsble r0, r0, #0x0
    cmp r0, r1
    bgt L_0215e834
    ldr r0, [r11, #0x0]
    add r7, r7, #0x1
    add r0, r0, #0x3000
    ldr r0, [r0, #0x6c4]
    add r0, r0, r6
    add r1, r0, #0x2000
    ldr r0, =0x2c5
    add r1, r1, r0
    swpb r0, r4, [r1]
L_0215e834:
    add r6, r6, #0x1
    cmp r6, #0x40
    blt L_0215e7bc
    mov r0, r7
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on

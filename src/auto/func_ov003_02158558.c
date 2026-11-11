#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern char data_ov003_0216b870[];
extern char data_ov003_0216b9d0[];
extern char data_ov003_0216ba4c[];
extern char data_ov003_0216be20[];
// clang-format off
asm void func_ov003_02158558(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x30
    ldr r4, =data_ov003_0216b9d0
    add lr, sp, #0x0
    mov r5, r0
    mov r2, #0x4
L_0215a9f0:
    ldrb r0, [r4], #0x1
    ldrb r1, [r4], #0x1
    subs r2, r2, #0x1
    swpb r0, r0, [lr]
    add lr, lr, #0x1
    swpb r0, r1, [lr]
    add lr, lr, #0x1
    bne L_0215a9f0
    ldr r7, =data_ov003_0216ba4c
    add r6, sp, #0xc
    ldmia r7!, {r0, r1, r2, r3}
    mov ip, r6
    stmia r6!, {r0, r1, r2, r3}
    ldrb r8, [r4, #0x0]
    ldmia r7, {r0, r1, r2, r3}
    stmia r6, {r0, r1, r2, r3}
    ldr r4, =data_ov003_0216be20
    swpb r0, r8, [lr]
    ldr r1, [r4, #0x0]
    ldr r3, =data_ov003_0216b870
    add r0, r1, #0x3000
    ldr r0, [r0, #0x6c4]
    add r2, r0, #0x2000
    add r1, r0, #0x2200
    ldrb lr, [r2, #0x305]
    ldrsb r4, [r1, #0xa2]
    add r0, r0, #0x2300
    add r1, r3, lr, lsl #0x2
    ldrsb r4, [r4, r1]
    add r3, sp, #0x0
    mov r1, #0x3
    ldr r4, [ip, r4, lsl #0x2]
    ldrsb lr, [r0, #0x14]
    mla r0, r4, r1, r3
    ldrsb r0, [r5, r0]
    add r2, r2, #0x314
    add r0, lr, r0
    swpb r0, r0, [r2]
    add sp, sp, #0x30
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on

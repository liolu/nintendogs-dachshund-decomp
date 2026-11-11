#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02037a8c(void) {
    stmfd sp!, {r4, lr}
    ldr r4, [r0, #0x254]
    cmp r4, #0x0
    bne L_02037ad8
    ldr r2, [r0, #0x818]
    mvn r1, #0x110
    rsb r3, r2, #0x0
    cmp r3, r1
    ldrlt r1, =0x111
    sublt r1, r2, r1
    strlt r1, [r0, #0x818]
    blt L_02037b14
    ldr r1, =0x111
    cmp r3, r1
    addgt r1, r2, r1
    strgt r1, [r0, #0x818]
    movle r1, #0x0
    strle r1, [r0, #0x818]
    b L_02037b14
L_02037ad8:
    rsb r3, r4, #0x0
    mov r2, #0x3
    mul ip, r3, r2
    ldr r3, [r0, #0x818]
    sub lr, r1, r3
    cmp lr, ip
    mullt r1, r4, r2
    sublt r1, r3, r1
    strlt r1, [r0, #0x818]
    blt L_02037b14
    mul r2, r4, r2
    cmp lr, r2
    addgt r1, r3, r2
    strgt r1, [r0, #0x818]
    strle r1, [r0, #0x818]
L_02037b14:
    add r1, r0, #0x9c
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

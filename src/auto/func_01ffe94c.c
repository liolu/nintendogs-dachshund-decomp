#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern char data_027c00ac[];
extern char func_01ffe9a4[];
// clang-format off
asm void func_01ffe94c(void) {
    stmfd sp!, {lr}
    mov ip, #0x4000000
    add ip, ip, #0x210
    ldr r1, [ip, #-0x8]
    cmp r1, #0x0
    ldmeqfd sp!, {pc}
    ldmia ip, {r1, r2}
    ands r1, r1, r2
    ldmeqfd sp!, {pc}
    mov r3, #0x80000000
L_01ffdcbc:
    clz r0, r1
    bics r1, r1, r3, lsr r0
    bne L_01ffdcbc
    mov r1, r3, lsr r0
    str r1, [ip, #0x4]
    rsbs r0, r0, #0x1f
    ldr r1, =data_027c00ac
    ldr r0, [r1, r0, lsl #0x2]
    ldr lr, =func_01ffe9a4
    bx r0
}
// clang-format on

#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0207f624(void) {
    ldr r3, =0x27fffb0
    ldr r1, [r3, #0x0]
    clz r2, r1
    cmp r2, #0x20
    movne r0, #0x40
    bne L_0207f658
    add r3, r3, #0x4
    ldr r1, [r3, #0x0]
    clz r2, r1
    cmp r2, #0x20
    ldr r0, =0xfffffffd
    bxeq lr
    mov r0, #0x60
L_0207f658:
    add r0, r0, r2
    mov r1, #0x80000000
    mov r1, r1, lsr r2
    ldr r2, [r3, #0x0]
    bic r2, r2, r1
    str r2, [r3, #0x0]
    bx lr
}
// clang-format on

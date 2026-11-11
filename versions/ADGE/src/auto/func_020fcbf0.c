#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020fcbf0(void) {
    ldrsh r1, [r0, #0x90]
    cmp r1, #0x3
    addls pc, pc, r1, lsl #0x2
    bx lr
L_020fcc00:
    bx lr
    bx lr
    b L_020fcc10
    bx lr
L_020fcc10:
    ldr r1, [r0, #0x214]
    mvn r0, #0x0
    str r0, [r1, #0x4]
    add r1, r1, #0x9
    mov r0, #0x14
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on

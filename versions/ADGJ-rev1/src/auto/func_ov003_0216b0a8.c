#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_ov003_0216b0a8(void) {
    sub sp, sp, #0x10
    mov r1, #0xa000
    rsb r1, r1, #0x0
    mov r3, #0x8000
    mov r2, #0x5000
    str r3, [sp, #0x0]
    str r2, [sp, #0x4]
    str r1, [sp, #0x8]
    mov r1, #0x1
    str r1, [r0, #0xe0]
    add r2, r0, #0xa4
    mov r1, #0x0
    swpb r1, r1, [r2]
    add r3, r0, #0xa8
    add r1, sp, #0x0
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add sp, sp, #0x10
    bx lr
}
// clang-format on

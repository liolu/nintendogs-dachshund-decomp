#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_ov004_0216d678(void) {
    sub sp, sp, #0x10
    mov r1, #0x8000
    rsb r3, r1, #0x0
    mov r2, #0x4800
    mov r1, #0x1000
    str r3, [sp, #0x0]
    str r2, [sp, #0x4]
    str r1, [sp, #0x8]
    mov r1, #0x0
    add r2, r0, #0xa4
    str r1, [r0, #0xe0]
    swpb r1, r1, [r2]
    add r3, r0, #0xa8
    add r1, sp, #0x0
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add sp, sp, #0x10
    bx lr
}
// clang-format on

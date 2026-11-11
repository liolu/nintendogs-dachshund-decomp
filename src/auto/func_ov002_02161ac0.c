#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025808();
extern void func_0202643c();
extern void func_02033d7c();
// clang-format off
asm void func_ov002_02161ac0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x95
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0x13
    swpb r1, r1, [r2]
    bl func_0202643c
    mov r0, r4
    bl func_02025808
    mov r0, r4
    bl func_02033d7c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

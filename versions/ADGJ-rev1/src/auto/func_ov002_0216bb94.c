#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025b58();
extern void func_0202693c();
extern void func_02037d84();
// clang-format off
asm void func_ov002_0216bb94(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_02037d84
    add r1, r4, #0x100
    strh r0, [r1, #0x50]
    add r1, r4, #0xac
    mov r0, #0x5
    swpb r0, r0, [r1]
    add r1, r4, #0xb1
    mov r0, #0x6
    swpb r0, r0, [r1]
    mov r0, r4
    add r2, r4, #0xb0
    mov r1, #0x2
    swpb r1, r1, [r2]
    bl func_0202693c
    mov r0, r4
    bl func_02025b58
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

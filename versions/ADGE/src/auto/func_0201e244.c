#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025c4c();
extern void func_020266e8();
// clang-format off
asm void func_0201e244(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x16d
    add r1, r4, #0x100
    strh r2, [r1, #0x52]
    add r2, r4, #0x97
    mov r1, #0x4
    swpb r1, r1, [r2]
    bl func_020266e8
    mov r0, r4
    bl func_02025c4c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

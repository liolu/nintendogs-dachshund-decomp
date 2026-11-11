#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025b58();
extern void func_02025ddc();
// clang-format off
asm void func_ov002_0216ad28(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x168
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0x2
    swpb r1, r1, [r2]
    bl func_02025ddc
    mov r0, r4
    bl func_02025b58
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02020758();
extern void func_02025a74();
extern void func_02026b9c();
// clang-format off
asm void func_ov003_021652b4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x29
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_02026b9c
    mov r0, r4
    bl func_02025a74
    mov r0, r4
    bl func_02020758
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

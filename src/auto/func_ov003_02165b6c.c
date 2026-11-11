#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025640();
extern void func_02026984();
extern void func_02037fb8();
// clang-format off
asm void func_ov003_02165b6c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_02037fb8
    add r1, r4, #0x100
    strh r0, [r1, #0x52]
    add r1, r4, #0x93
    mov r0, #0x7
    swpb r0, r0, [r1]
    mov r0, r4
    add r2, r4, #0x98
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026984
    mov r0, r4
    bl func_02025640
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

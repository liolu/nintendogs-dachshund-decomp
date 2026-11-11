#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025a74();
extern void func_02026a9c();
// clang-format off
asm void func_ov003_0216d5bc(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x14e
    add r1, r4, #0x100
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r1, #0x8
    swpb r1, r1, [r2]
    add r2, r4, #0x98
    mov r3, #0x1
    swpb r1, r3, [r2]
    add r2, r4, #0xab
    swpb r1, r3, [r2]
    bl func_02026a9c
    mov r0, r4
    bl func_02025a74
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

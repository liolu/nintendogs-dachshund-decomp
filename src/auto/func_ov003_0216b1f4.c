#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025594();
extern void func_020264e4();
extern void func_0202d804();
// clang-format off
asm void func_ov003_0216b1f4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x260
    strh r2, [r1, #0x52]
    add r2, r4, #0x98
    mov r1, #0x9
    swpb r1, r1, [r2]
    add r2, r4, #0x97
    mov r1, #0x4
    swpb r1, r1, [r2]
    bl func_020264e4
    mov r0, r4
    bl func_02025594
    mov r0, r4
    mov r1, #0x0
    bl func_0202d804
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

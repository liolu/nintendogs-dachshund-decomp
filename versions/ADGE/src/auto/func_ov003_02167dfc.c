#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025594();
extern void func_020264c4();
extern void func_0202d804();
// clang-format off
asm void func_ov003_02167dfc(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x70
    strh r2, [r1, #0x52]
    add r2, r4, #0x92
    mov r1, #0x3
    swpb r1, r1, [r2]
    bl func_020264c4
    mov r0, r4
    bl func_02025594
    mov r0, r4
    mov r1, #0x5
    bl func_0202d804
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025594();
extern void func_02026468();
extern void func_0202bdcc();
// clang-format off
asm void func_ov003_02166240(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0xf5
    strh r2, [r1, #0x52]
    add r2, r4, #0x97
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026468
    mov r0, r4
    bl func_02025594
    mov r1, #0x1
    mov r0, r4
    str r1, [r4, #0x484]
    bl func_0202bdcc
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

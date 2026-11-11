#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025a74();
extern void func_02026c14();
// clang-format off
asm void func_0201f584(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x11b
    add r1, r4, #0x100
    strh r2, [r1, #0x52]
    add r2, r4, #0x97
    mov r1, #0x2
    swpb r1, r1, [r2]
    bl func_02026c14
    mov r0, r4
    bl func_02025a74
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

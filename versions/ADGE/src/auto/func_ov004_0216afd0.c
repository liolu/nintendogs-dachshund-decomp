#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025538();
extern void func_02026b78();
// clang-format off
asm void func_ov004_0216afd0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x11e
    add r1, r4, #0x100
    strh r2, [r1, #0x52]
    mov r2, #0x3a
    strh r2, [r1, #0x54]
    add r2, r4, #0x97
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026b78
    mov r0, r4
    bl func_02025538
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

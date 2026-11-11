#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025ba0();
extern void func_02026984();
// clang-format off
asm void func_ov004_0216b5e8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x13f
    add r1, r4, #0x100
    strh r2, [r1, #0x52]
    add r2, r4, #0xab
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026984
    mov r0, r4
    bl func_02025ba0
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

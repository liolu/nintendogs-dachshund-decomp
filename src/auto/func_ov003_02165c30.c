#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025640();
extern void func_02026628();
// clang-format off
asm void func_ov003_02165c30(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x10
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r1, #0x5
    swpb r1, r1, [r2]
    add r2, r4, #0x97
    mov r1, #0x2
    swpb r1, r1, [r2]
    bl func_02026628
    mov r0, r4
    bl func_02025640
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

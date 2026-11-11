#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025850();
extern void func_02026484();
extern void func_02033e78();
// clang-format off
asm void func_ov003_02164058(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x97
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r1, #0x13
    swpb r1, r1, [r2]
    bl func_02026484
    mov r0, r4
    bl func_02025850
    mov r0, r4
    bl func_02033e78
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

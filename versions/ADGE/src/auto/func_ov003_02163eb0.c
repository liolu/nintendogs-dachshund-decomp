#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020257f4();
extern void func_02026484();
extern void func_02033e78();
// clang-format off
asm void func_ov003_02163eb0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x91
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r1, #0x13
    swpb r1, r1, [r2]
    bl func_02026484
    mov r0, r4
    bl func_020257f4
    mov r0, r4
    bl func_02033e78
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

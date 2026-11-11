#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025ba0();
extern void func_020265c8();
extern void func_ov004_0216a5a4();
// clang-format off
asm void func_ov004_0216b6d4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x10
    strh r2, [r1, #0x52]
    mov r2, #0x12
    strh r2, [r1, #0x56]
    add r2, r4, #0x97
    mov r1, #0x2
    swpb r1, r1, [r2]
    bl func_020265c8
    mov r0, r4
    bl func_02025ba0
    mov r0, r4
    bl func_ov004_0216a5a4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

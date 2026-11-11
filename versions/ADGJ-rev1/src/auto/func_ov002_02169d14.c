#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020255f8();
extern void func_02026704();
// clang-format off
asm void func_ov002_02169d14(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x12
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0x2
    swpb r1, r1, [r2]
    bl func_02026704
    mov r0, r4
    bl func_020255f8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

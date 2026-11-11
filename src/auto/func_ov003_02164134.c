#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020255f0();
extern void func_02026b9c();
extern void func_0203801c();
// clang-format off
asm void func_ov003_02164134(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_0203801c
    add r1, r4, #0x100
    strh r0, [r1, #0x52]
    mov r0, r4
    add r2, r4, #0x93
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_02026b9c
    mov r0, r4
    bl func_020255f0
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

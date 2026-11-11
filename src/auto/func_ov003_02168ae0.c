#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025b58();
extern void func_020267a8();
// clang-format off
asm void func_ov003_02168ae0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x16
    strh r2, [r1, #0x50]
    mov r2, #0xb
    strh r2, [r1, #0x52]
    add r2, r4, #0xb0
    mov r1, #0x2
    swpb r1, r1, [r2]
    bl func_020267a8
    mov r0, r4
    bl func_02025b58
    add r1, r4, #0xa1
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

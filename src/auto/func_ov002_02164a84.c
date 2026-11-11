#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202554c();
extern void func_0202649c();
extern void func_0202d6f8();
// clang-format off
asm void func_ov002_02164a84(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r3, #0x1
    strh r3, [r1, #0x50]
    mov r2, #0x13
    strh r2, [r1, #0x52]
    add r2, r4, #0xb0
    swpb r1, r3, [r2]
    bl func_0202649c
    mov r0, r4
    bl func_0202554c
    mov r0, r4
    mov r1, #0x0
    bl func_0202d6f8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202554c();
extern void func_0202649c();
extern void func_0202d6f8();
// clang-format off
asm void func_ov002_02167a78(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x1a
    strh r2, [r1, #0x50]
    add r2, r4, #0xb1
    mov r1, #0x9
    swpb r1, r1, [r2]
    bl func_0202649c
    mov r0, r4
    bl func_0202554c
    mov r0, r4
    mov r1, #0x1
    bl func_0202d6f8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

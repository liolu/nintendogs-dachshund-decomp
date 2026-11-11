#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020208b4();
extern void func_0202554c();
extern void func_0202649c();
extern void func_0202d6f8();
// clang-format off
asm void func_ov002_021677e0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x19
    strh r2, [r1, #0x50]
    bl func_020208b4
    add r1, r4, #0x100
    strh r0, [r1, #0x52]
    mov r0, r4
    add r2, r4, #0xb0
    mov r1, #0x4
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

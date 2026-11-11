#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020255a8();
extern void func_02026b54();
extern void func_02037de8();
// clang-format off
asm void func_ov002_02161ccc(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_02037de8
    add r1, r4, #0x100
    strh r0, [r1, #0x50]
    mov r0, r4
    add r2, r4, #0xac
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_02026b54
    mov r0, r4
    bl func_020255a8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

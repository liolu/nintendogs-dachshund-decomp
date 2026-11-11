#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025808();
extern void func_02025d18();
extern void func_02033d7c();
// clang-format off
asm void func_ov002_02161690(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x91
    strh r2, [r1, #0x50]
    mov r2, #0x4
    strh r2, [r1, #0x54]
    add r2, r4, #0xac
    mov r1, #0x14
    swpb r1, r1, [r2]
    add r2, r4, #0xb0
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_02025d18
    mov r0, r4
    bl func_02025808
    mov r0, r4
    bl func_02033d7c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

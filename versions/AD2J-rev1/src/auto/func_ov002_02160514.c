#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025438();
extern void func_02025d58();
extern void func_02034c88();
// clang-format off
asm void func_ov002_02160514(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x120
    strh r2, [r1, #0x50]
    bl func_02034c88
    add r1, r4, #0x100
    strh r0, [r1, #0x56]
    add r1, r4, #0xac
    mov r0, #0xc
    swpb r0, r0, [r1]
    add r1, r4, #0xb0
    mov r3, #0x1
    swpb r0, r3, [r1]
    add r2, r4, #0xb7
    mov r0, r4
    swpb r1, r3, [r2]
    bl func_02025d58
    mov r0, r4
    bl func_02025438
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

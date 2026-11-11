#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020258c0();
extern void func_02025d9c();
// clang-format off
asm void func_ov002_0216b348(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x147
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_02025d9c
    mov r0, r4
    bl func_020258c0
    add r1, r4, #0xa1
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

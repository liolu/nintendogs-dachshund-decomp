#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020254dc();
extern void func_02026b9c();
// clang-format off
asm void func_02058504(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x11d
    add r1, r4, #0x100
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r1, #0xa
    swpb r1, r1, [r2]
    bl func_02026b9c
    mov r0, r4
    bl func_020254dc
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

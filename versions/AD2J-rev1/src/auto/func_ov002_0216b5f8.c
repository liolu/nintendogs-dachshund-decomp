#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202591c();
extern void func_02026104();
// clang-format off
asm void func_ov002_0216b5f8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x13e
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    add r2, r4, #0xac
    mov r1, #0xa
    swpb r1, r1, [r2]
    bl func_02026104
    mov r0, r4
    bl func_0202591c
    add r1, r4, #0xa1
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025b58();
extern void func_020266a0();
extern void func_0203699c();
// clang-format off
asm void func_ov002_0216bb48(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x11
    strh r2, [r1, #0x50]
    mov r3, #0x1
    strh r3, [r1, #0x54]
    add r2, r4, #0xb1
    swpb r1, r3, [r2]
    bl func_020266a0
    mov r0, r4
    bl func_02025b58
    ldr r1, [r4, #0x188]
    mov r0, r4
    orr r1, r1, #0x1
    str r1, [r4, #0x188]
    bl func_0203699c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

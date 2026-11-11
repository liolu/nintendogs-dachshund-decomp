#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025cbc();
extern void func_02025ddc();
// clang-format off
asm void func_ov002_0215fca0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x168
    strh r2, [r1, #0x50]
    mov r3, #0x1
    strh r3, [r1, #0x54]
    add r2, r4, #0xac
    mov r1, #0xc
    swpb r1, r1, [r2]
    add r2, r4, #0xb0
    swpb r1, r3, [r2]
    bl func_02025ddc
    mov r0, r4
    bl func_02025cbc
    ldr r0, [r4, #0x188]
    orr r0, r0, #0x4
    str r0, [r4, #0x188]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02023610();
extern void func_020254f0();
extern void func_02026bcc();
// clang-format off
asm void func_0201fae4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x5f
    strh r2, [r1, #0x50]
    add r2, r4, #0xb0
    mov r1, #0x2
    swpb r1, r1, [r2]
    bl func_02026bcc
    mov r0, r4
    bl func_020254f0
    mov r0, r4
    mov r1, #0x2e
    mov r2, #0x2
    bl func_02023610
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

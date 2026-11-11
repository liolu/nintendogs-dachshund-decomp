#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020254f0();
extern void func_02026bcc();
// clang-format off
asm void func_ov002_0216a438(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x27
    strh r2, [r1, #0x50]
    mov r2, #0x25
    strh r2, [r1, #0x52]
    add r2, r4, #0xac
    mov r1, #0x9
    swpb r1, r1, [r2]
    bl func_02026bcc
    mov r0, r4
    bl func_020254f0
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

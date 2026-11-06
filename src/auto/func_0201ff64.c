#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020254f0();
extern void func_02026bcc();
extern void func_02034c88();
// clang-format off
asm void func_0201ff64(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x11a
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    bl func_02034c88
    add r1, r4, #0x100
    strh r0, [r1, #0x56]
    mov r0, r4
    add r2, r4, #0xb0
    mov r1, #0x7
    swpb r1, r1, [r2]
    bl func_02026bcc
    mov r0, r4
    bl func_020254f0
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

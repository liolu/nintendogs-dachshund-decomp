#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025b58();
extern void func_02026b30();
// clang-format off
asm void func_ov003_02168c8c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x11e
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    mov r2, #0x3a
    strh r2, [r1, #0x52]
    add r2, r4, #0xb1
    mov r1, #0x9
    swpb r1, r1, [r2]
    bl func_02026b30
    mov r0, r4
    bl func_02025b58
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

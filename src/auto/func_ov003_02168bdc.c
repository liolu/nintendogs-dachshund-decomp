#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025494();
extern void func_02026b30();
// clang-format off
asm void func_ov003_02168bdc(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x20A
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    add r2, r4, #0xAC
    mov r1, #0x5
    swpb r1, r1, [r2]
    add r2, r4, #0xB1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02026b30
    mov r0, r4
    bl func_02025494
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025964();
extern void func_0202614c();
// clang-format off
asm void func_ov003_0216dae0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x13e
    add r1, r4, #0x100
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r1, #0xa
    swpb r1, r1, [r2]
    bl func_0202614c
    mov r0, r4
    bl func_02025964
    add r1, r4, #0xb2
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

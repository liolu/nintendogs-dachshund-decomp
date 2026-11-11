#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025538();
extern void func_02025de4();
// clang-format off
asm void func_ov003_0216d750(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x14a
    add r1, r4, #0x100
    strh r2, [r1, #0x52]
    add r2, r4, #0x93
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_02025de4
    mov r0, r4
    bl func_02025538
    add r1, r4, #0xb2
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

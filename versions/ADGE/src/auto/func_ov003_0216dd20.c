#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025538();
extern void func_02026c14();
// clang-format off
asm void func_ov003_0216dd20(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x187
    add r1, r4, #0x100
    strh r2, [r1, #0x52]
    mov r2, #0x1
    strh r2, [r1, #0x56]
    add r2, r4, #0x93
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_02026c14
    mov r0, r4
    bl func_02025538
    mov r0, #0x1000
    str r0, [r4, #0x464]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

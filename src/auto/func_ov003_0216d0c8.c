#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025538();
extern void func_02025dc4();
extern void func_02034e44();
// clang-format off
asm void func_ov003_0216d0c8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x162
    add r1, r4, #0x100
    strh r2, [r1, #0x52]
    bl func_02034e44
    add r1, r4, #0x100
    strh r0, [r1, #0x58]
    add r1, r4, #0x93
    mov r0, #0x5
    swpb r0, r0, [r1]
    mov r0, r4
    add r2, r4, #0x97
    mov r1, #0x2
    swpb r1, r1, [r2]
    bl func_02025dc4
    mov r0, r4
    bl func_02025538
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

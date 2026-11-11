#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025538();
extern void func_02025d60();
extern void func_02033e78();
// clang-format off
asm void func_ov003_02163694(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x0
    strh r2, [r1, #0x52]
    mov r3, #0x4
    strh r3, [r1, #0x56]
    add r2, r4, #0x93
    swpb r1, r3, [r2]
    add r2, r4, #0x98
    mov r1, #0x6
    swpb r1, r1, [r2]
    add r2, r4, #0x97
    mov r1, #0x5
    swpb r1, r1, [r2]
    bl func_02025d60
    mov r0, r4
    bl func_02025538
    mov r0, r4
    bl func_02033e78
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

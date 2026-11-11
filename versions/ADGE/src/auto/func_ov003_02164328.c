#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025538();
extern void func_02026b9c();
extern void func_02034e44();
// clang-format off
asm void func_ov003_02164328(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x111
    add r1, r4, #0x100
    strh r2, [r1, #0x52]
    bl func_02034e44
    add r1, r4, #0x100
    strh r0, [r1, #0x58]
    add r1, r4, #0x93
    mov r0, #0x5
    swpb r0, r0, [r1]
    add r1, r4, #0x97
    mov r3, #0x1
    swpb r0, r3, [r1]
    add r2, r4, #0x98
    mov r0, r4
    swpb r1, r3, [r2]
    bl func_02026b9c
    mov r0, r4
    bl func_02025538
    add r1, r4, #0xb2
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

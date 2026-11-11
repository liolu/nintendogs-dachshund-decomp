#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025538();
extern void func_02026b9c();
// clang-format off
asm void func_ov003_0216dbb4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x158
    strh r2, [r1, #0x52]
    mov r2, #0x15
    strh r2, [r1, #0x54]
    mov r3, #0x1
    strh r3, [r1, #0x56]
    add r2, r4, #0x93
    mov r1, #0xa
    swpb r1, r1, [r2]
    add r2, r4, #0x98
    swpb r1, r3, [r2]
    add r2, r4, #0x97
    swpb r1, r3, [r2]
    bl func_02026b9c
    mov r0, r4
    bl func_02025538
    ldr r0, [r4, #0x948]
    orr r0, r0, #0x8
    str r0, [r4, #0x948]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

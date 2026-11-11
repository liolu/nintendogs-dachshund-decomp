#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025d04();
extern void func_02025e24();
// clang-format off
asm void func_ov003_021620f0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x169
    add r1, r4, #0x100
    strh r2, [r1, #0x52]
    mov r3, #0x1
    strh r3, [r1, #0x56]
    add r2, r4, #0x93
    mov r1, #0xc
    swpb r1, r1, [r2]
    add r2, r4, #0x97
    swpb r1, r3, [r2]
    bl func_02025e24
    mov r0, r4
    bl func_02025d04
    ldr r0, [r4, #0x948]
    orr r0, r0, #0x4
    str r0, [r4, #0x948]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020254f0();
extern void func_02026b54();
// clang-format off
asm void func_ov002_0216b6d0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x157
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    mov r2, #0x15
    strh r2, [r1, #0x52]
    mov r3, #0x1
    strh r3, [r1, #0x54]
    add r2, r4, #0xac
    mov r1, #0xa
    swpb r1, r1, [r2]
    add r2, r4, #0xb1
    swpb r1, r3, [r2]
    add r2, r4, #0xb0
    swpb r1, r3, [r2]
    bl func_02026b54
    mov r0, r4
    bl func_020254f0
    ldr r0, [r4, #0x188]
    orr r0, r0, #0x8
    str r0, [r4, #0x188]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

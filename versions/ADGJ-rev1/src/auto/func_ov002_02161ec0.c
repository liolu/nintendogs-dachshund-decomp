#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020254f0();
extern void func_02026b54();
extern void func_02034c88();
// clang-format off
asm void func_ov002_02161ec0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r2, =0x111
    add r1, r4, #0x100
    strh r2, [r1, #0x50]
    bl func_02034c88
    add r1, r4, #0x100
    strh r0, [r1, #0x56]
    add r1, r4, #0xac
    mov r0, #0x5
    swpb r0, r0, [r1]
    add r1, r4, #0xb0
    mov r3, #0x1
    swpb r0, r3, [r1]
    add r2, r4, #0xb1
    mov r0, r4
    swpb r1, r3, [r2]
    bl func_02026b54
    mov r0, r4
    bl func_020254f0
    add r1, r4, #0xa1
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on

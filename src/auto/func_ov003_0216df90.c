#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02025ba0();
extern void func_02026a9c();
extern void func_02036b54();
// clang-format off
asm void func_ov003_0216df90(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0x100
    mov r2, #0x13
    strh r2, [r1, #0x52]
    mov r3, #0x1
    strh r3, [r1, #0x56]
    add r2, r4, #0x98
    swpb r1, r3, [r2]
    bl func_02026a9c
    mov r0, r4
    bl func_02025ba0
    ldr r1, [r4, #0x948]
    mov r0, r4
    orr r1, r1, #0x1
    str r1, [r4, #0x948]
    bl func_02036b54
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
